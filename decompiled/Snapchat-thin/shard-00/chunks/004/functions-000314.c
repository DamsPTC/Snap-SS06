/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10069b79c; end: 10069b7bb;  */

void FUN_10069b79c(void)

{
  func_0x000107c61168(&PTR_PTR_112ef70f0);
  return;
}



/* Entry: 10069b7bc; end: 10069b7f3;  */

bool FUN_10069b7bc(long param_1)

{
  bool bVar1;
  long unaff_x19;
  
  func_0x00010069b474();
  if (unaff_x19 == param_1) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x18) == 2;
  }
  return bVar1;
}



/* Entry: 10069b7f4; end: 10069b80b;  */

void FUN_10069b7f4(void)

{
  return;
}



/* Entry: 10069b80c; end: 10069b817;  */

void FUN_10069b80c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010069b814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



/* Entry: 10069b818; end: 10069b837;  */

void FUN_10069b818(void)

{
  func_0x000107c61168(&PTR_PTR_112ef7200);
  return;
}



/* Entry: 10069b838; end: 10069baf7;  */

void FUN_10069b838(void)

{
  return;
}



/* Entry: 10069baf8; end: 10069bd53;  */

void FUN_10069baf8(undefined1 *param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined1 auStack_270 [24];
  undefined1 uStack_258;
  undefined1 auStack_250 [40];
  undefined1 auStack_228 [72];
  undefined1 auStack_1e0 [24];
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a0 [40];
  undefined1 auStack_178 [72];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined1 auStack_110 [32];
  undefined1 uStack_f0;
  undefined1 auStack_e8 [72];
  undefined1 auStack_a0 [96];
  
  if ((*(byte *)(param_2 + 0x61) & 1) == 0) {
LAB_10069bb2c:
    *param_1 = 0;
    param_1[0x60] = 0;
    return;
  }
  lVar2 = *(long *)(param_2 + 0xa8);
  if (100 < *(ulong *)(lVar2 + 0x18)) goto LAB_10069bb2c;
  if (*(int *)(lVar2 + 0x34) == 4) {
    ppuVar3 = *(undefined ***)(lVar2 + 0x28);
  }
  else {
    if (*(int *)(lVar2 + 0x34) == 5) {
      ppuVar3 = *(undefined ***)(lVar2 + 0x28);
LAB_10069bbb8:
      uStack_f0 = 0;
      auStack_110[0] = 0;
      func_0x000107c29e40(&uStack_1c0,ppuVar3 + 2,*(ulong *)(lVar2 + 0x18),param_3);
      uStack_128 = uStack_1b8;
      uStack_130 = uStack_1c0;
      uStack_120 = uStack_1b0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1c0 = 0;
      uStack_118 = 1;
      func_0x000105296ebc(auStack_e8,auStack_110,&uStack_130);
      func_0x000107c33fc0(auStack_a0,1);
      func_0x000107c33ffc();
      func_0x000107c3404c();
      func_0x000104be12f8(auStack_e8);
      func_0x000104be1320(&uStack_130);
      func_0x000104be1340(&uStack_1c0);
      func_0x000104be13e8(auStack_110);
      return;
    }
    if (1 < *(uint *)(lVar2 + 0x24)) {
      if (*(uint *)(lVar2 + 0x24) == 2) {
        ppuVar3 = &PTR_PTR_1132842d0;
        goto LAB_10069bbb8;
      }
      func_0x000107c29e48(&uStack_1c0,&PTR_PTR_1132841f0);
      func_0x000105296ef0(auStack_250,&uStack_1c0);
      auStack_270[0] = 0;
      uStack_258 = 0;
      func_0x000105296ebc(auStack_228,auStack_250,auStack_270);
      func_0x000107c33fc0(auStack_a0,0);
      func_0x000107c33ffc();
      func_0x000107c3404c();
      func_0x000104be12f8(auStack_228);
      func_0x000104be1320(auStack_270);
      puVar1 = auStack_250;
      goto LAB_10069bcb4;
    }
    ppuVar3 = &PTR_PTR_1132841f0;
  }
  func_0x000107c29e48(&uStack_1c0,ppuVar3);
  func_0x000105296ef0(auStack_1a0,&uStack_1c0);
  auStack_1e0[0] = 0;
  uStack_1c8 = 0;
  func_0x000105296ebc(auStack_178,auStack_1a0,auStack_1e0);
  func_0x000107c33fc0(auStack_a0,0);
  func_0x000107c33ffc();
  func_0x000107c3404c();
  func_0x000104be12f8(auStack_178);
  func_0x000104be1320(auStack_1e0);
  puVar1 = auStack_1a0;
LAB_10069bcb4:
  func_0x000104be13e8(puVar1);
  FUN_1002920a0(&uStack_1c0);
  return;
}



/* Entry: 10069bd54; end: 10069bd7b;  */

undefined8 * FUN_10069bd54(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 != *(char *)(param_2 + 0xc)) {
    if (cVar1 != '\0') {
      puVar2 = param_1;
      if (*(char *)(param_1 + 0xc) == '\x01') {
        puVar2 = param_1 + 3;
        func_0x000104be12f8(puVar2);
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      return puVar2;
    }
    func_0x000104be7128();
    *(undefined1 *)(param_1 + 0xc) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    param_1[1] = uVar4;
    *param_1 = uVar3;
    func_0x00010869e654(param_1 + 3,param_2 + 3);
    return param_1;
  }
  return param_1;
}



/* Entry: 10069bd7c; end: 10069bd9f;  */

undefined8 FUN_10069bd7c(undefined8 param_1)

{
  FUN_10069bd54();
  return param_1;
}



/* Entry: 10069bda0; end: 10069bdab;  */

void FUN_10069bda0(void)

{
  return;
}



/* Entry: 10069bdac; end: 10069bdf3;  */

long FUN_10069bdac(ulong param_1)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_10069bda0();
  while( true ) {
    if (unaff_x20 == unaff_x21) {
      return unaff_x20;
    }
    FUN_10062c318();
    FUN_1006760a8();
    if ((param_1 & 1) != 0) break;
    unaff_x20 = unaff_x20 + 0x18;
  }
  return unaff_x20;
}



/* Entry: 10069bdf4; end: 10069be13;  */

void FUN_10069bdf4(void)

{
  FUN_10069bdac();
  return;
}



/* Entry: 10069be14; end: 10069be1b;  */

long FUN_10069be14(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar3;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar4;
  ulong unaff_x23;
  ulong unaff_x24;
  
  lVar2 = param_1 + 0x68;
  uVar4 = *(ulong *)(param_1 + 0x70);
  if ((uVar4 != 0) && (func_0x000107c33d38(), extraout_x8 != 0)) {
    func_0x000107c33cf4();
    func_0x000107c33d0c();
    if ((bool)in_ZR) {
      unaff_x20 = unaff_x20 & unaff_x23;
      uVar1 = 1;
    }
    else {
      uVar1 = unaff_x20 == uVar4;
      if (uVar4 <= unaff_x20) {
        func_0x000107c33d34();
        unaff_x20 = unaff_x24;
      }
    }
    func_0x000107c33d3c();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x000107c33d30();
        if (!(bool)uVar1) break;
        func_0x000107c33cf0();
        if ((int)lVar2 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar4 & unaff_x23) == 0) {
        uVar3 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar3 = extraout_x8_00;
        if (uVar4 <= extraout_x8_00) {
          func_0x000107c33d2c();
          uVar3 = extraout_x8_01;
        }
      }
      uVar1 = 1;
    } while (uVar3 == unaff_x20);
  }
  return 0;
}



/* Entry: 10069be1c; end: 10069be53;  */

void FUN_10069be1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_10069be14();
  if (param_1 != 0) {
    func_0x000107c29d70(param_1 + 0x28,&uStack_18);
  }
  return;
}



/* Entry: 10069be54; end: 10069be77;  */

void FUN_10069be54(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  FUN_10069be1c();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 1) = param_4;
  }
  return;
}



/* Entry: 10069be78; end: 10069bf1b;  */

long FUN_10069be78(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar2;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar3;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 != 0) && (func_0x000107c33d38(), extraout_x8 != 0)) {
    func_0x000107c33cf4();
    func_0x000107c33d0c();
    if ((bool)in_ZR) {
      unaff_x20 = unaff_x20 & unaff_x23;
      uVar1 = 1;
    }
    else {
      uVar1 = unaff_x20 == uVar3;
      if (uVar3 <= unaff_x20) {
        func_0x000107c33d34();
        unaff_x20 = unaff_x24;
      }
    }
    func_0x000107c33d3c();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x000107c33d30();
        if (!(bool)uVar1) break;
        func_0x000107c33cf0();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar3 & unaff_x23) == 0) {
        uVar2 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar2 = extraout_x8_00;
        if (uVar3 <= extraout_x8_00) {
          func_0x000107c33d2c();
          uVar2 = extraout_x8_01;
        }
      }
      uVar1 = 1;
    } while (uVar2 == unaff_x20);
  }
  return 0;
}



/* Entry: 10069bf1c; end: 10069bf23;  */

void FUN_10069bf1c(void)

{
  return;
}



/* Entry: 10069bf24; end: 10069bfbf;  */

uint FUN_10069bf24(long param_1,undefined8 param_2,uint param_3)

{
  undefined1 in_ZR;
  bool bVar1;
  uint uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  uint unaff_w19;
  long unaff_x20;
  
  FUN_1005f6168();
  FUN_10069bfc0(*(undefined8 *)(param_1 + 0x78));
  lVar3 = extraout_x9;
  if (!(bool)in_ZR) {
    lVar3 = extraout_x8;
  }
  FUN_10069b43c(*(undefined8 *)(param_1 + 0x68));
  uVar2 = (uint)param_1;
  func_0x00010069bfd0();
  if (((*(byte *)(lVar3 + 0x10) >> 6 & 1) != 0) &&
     (bVar1 = *(int *)(*(long *)(lVar3 + 0x98) + 0x1c) == 2, bVar1)) {
    func_0x000107c32520(*(undefined8 *)(unaff_x20 + 0x80));
    lVar3 = extraout_x9_00;
    if (!bVar1) {
      lVar3 = extraout_x8_00;
    }
    if (*(int *)(lVar3 + 0x50) == 0) {
      if ((uVar2 & (param_3 ^ 1)) == 0) {
        FUN_100693498();
      }
      else {
        lVar3 = unaff_x20 + 0x50;
        func_0x000107c28f3c(lVar3);
        unaff_w19 = (uint)lVar3;
      }
      return unaff_w19 ^ 1;
    }
  }
  return 0;
}



/* Entry: 10069bfc0; end: 10069bfd7;  */

void FUN_10069bfc0(void)

{
  return;
}



/* Entry: 10069bfd8; end: 10069c247;  */

long * FUN_10069bfd8(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong *param_5
                    ,undefined8 param_6,long *param_7,int param_8,undefined8 param_9,
                    undefined1 param_10)

{
  undefined **ppuVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar8;
  long lVar9;
  uint uVar10;
  undefined8 unaff_x30;
  
  if (((param_2 == 0) || (*(int *)(param_2 + 0x124) == 1)) ||
     ((param_8 != 0 && ((*(byte *)(param_2 + 0x119) & 1) != 0)))) {
LAB_10069c084:
    plVar6 = (long *)0x0;
    goto LAB_10069c088;
  }
  ppuVar1 = &PTR_PTR_113280c30;
  if (*(undefined ***)(param_1 + 0x78) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x78);
  }
  uVar3 = *(uint *)(ppuVar1 + 0x15);
  if ((uVar3 < 0x25 && (1L << ((ulong)uVar3 & 0x3f) & 0x1bebf97e40U) != 0 || uVar3 == 0x80000000) ||
      uVar3 == 0x7fffffff) goto LAB_10069c084;
  uVar3 = (int)param_1 + 0x50;
  func_0x00010069317c();
  plVar6 = (long *)(param_1 + 200);
  FUN_100152bb8(plVar6,&UNK_10f4bdf63);
  if ((int)plVar6 == 0) goto LAB_10069c088;
  uVar4 = param_3;
  FUN_100693498(param_3,param_1 + 0x50);
  ppuVar1 = &PTR_PTR_11326cb58;
  if (*(undefined ***)(param_1 + 0x68) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x68);
  }
  uVar5 = param_3;
  FUN_1006933e4(param_3,ppuVar1);
  plVar6 = (long *)0x0;
  ppuVar1 = &PTR_PTR_113280c30;
  if (*(undefined ***)(param_1 + 0x78) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x78);
  }
  iVar2 = *(int *)((long)ppuVar1 + 0xac);
  uVar10 = (uint)uVar5;
  switch(iVar2) {
  case 0:
    goto code_r0x00010069c190;
  case 1:
    goto LAB_10069c088;
  case 2:
    break;
  case 3:
    func_0x000107c33f84();
    if (((ulong)plVar6 & 1) == 0) {
      if (*param_5 == 0) goto LAB_10069c084;
      uVar7 = param_1 + 0x50;
      func_0x000107c29e50(uVar7,param_3,param_9);
      if ((uVar7 & 1) == 0) {
        if (uVar10 == 0) {
          if ((uint)uVar4 != 0) goto code_r0x00010069c220;
          goto LAB_10069c084;
        }
        uVar7 = param_1;
        func_0x000107c29e0c(param_1,param_2,param_3,param_6,param_7,param_10);
        if ((uVar7 & 1) == 0) {
code_r0x00010069c220:
          plVar6 = (long *)*param_5;
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
          FUN_10069c248(plVar6,param_1,*(undefined8 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE,
                        unaff_x30);
                    /* WARNING: Could not recover jumptable at 0x00010069c244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return plVar6;
        }
      }
    }
    break;
  case 4:
    func_0x000107c33f84();
    if (((ulong)plVar6 & 1) == 0) {
      plVar6 = (long *)0x0;
      plVar8 = (long *)*param_5;
      if ((((plVar8 != (long *)0x0) && ((uVar3 & 0xfffffffb) == 1)) &&
          (((uVar10 | (uint)uVar4) & 1) != 0)) &&
         (((**(code **)(*plVar8 + 0x10))(plVar8,param_1,*(undefined8 *)(param_1 + 0x18)),
          plVar6 = plVar8, ((ulong)plVar8 & 1) == 0 && (((uVar10 ^ 1) & 1) == 0)))) {
        FUN_10069c248(param_7,param_1,unaff_x30);
        if ((*param_7 != 0) && (lVar9 = *(long *)(*param_7 + 0x10), lVar9 != 0)) {
          ppuVar1 = &PTR_PTR_113286e08;
          if (*(undefined ***)(param_1 + 0x80) != (undefined **)0x0) {
            ppuVar1 = *(undefined ***)(param_1 + 0x80);
          }
          return (long *)(ulong)(lVar9 <= (long)ppuVar1[0x24]);
        }
        return (long *)0x0;
      }
      goto LAB_10069c088;
    }
    break;
  default:
    if (iVar2 != -0x80000000 && iVar2 != 0x7fffffff) goto LAB_10069c088;
    goto code_r0x00010069c190;
  }
  plVar6 = (long *)0x1;
LAB_10069c088:
  FUN_10069c248();
  return plVar6;
code_r0x00010069c190:
  plVar6 = (long *)(ulong)((uVar3 & 0xfffffffb) != 1);
  goto LAB_10069c088;
}



/* Entry: 10069c248; end: 10069c27f;  */

void FUN_10069c248(void)

{
  return;
}



/* Entry: 10069c280; end: 10069c2a7;  */

bool FUN_10069c280(long param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x104);
  func_0x00010069c264(uVar1);
  return uVar1 == 0x100000005;
}



/* Entry: 10069c2a8; end: 10069c2df;  */

byte FUN_10069c2a8(long param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = param_1 + 0x18;
  FUN_10069c280();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  if (((*(byte *)(param_1 + 0x29) >> 2 & 1) == 0) ||
     ((*(byte *)(*(long *)(param_1 + 0xd0) + 0x10) & 1) == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(*(long *)(*(long *)(param_1 + 0xd0) + 0x20) + 0x40);
  }
  return bVar2 & 1;
}



/* Entry: 10069c2e0; end: 10069c3b3;  */

void FUN_10069c2e0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  plVar2 = &lStack_40;
  plVar3 = &lStack_40;
  lStack_40 = param_2;
  lStack_38 = param_1;
  func_0x0001006933dc();
  lVar1 = param_1;
  func_0x0001006933dc();
  lVar4 = param_2;
  FUN_100693428(&lStack_40);
  FUN_100693428(&lStack_40);
  func_0x000100693448(param_1,lVar1 + param_2,plVar2,(undefined1 *)((long)plVar3 + lVar4));
  return;
}



/* Entry: 10069c3b4; end: 10069c403;  */

void FUN_10069c3b4(void)

{
  return;
}



/* Entry: 10069c404; end: 10069c4b7;  */

uint FUN_10069c404(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  uint uVar3;
  ulong unaff_x19;
  
  func_0x00010069c3f8();
  FUN_1006760d0(param_2,param_3);
  if ((param_2 & 1) == 0) {
    ppuVar1 = &PTR_PTR_113280c30;
    if (*(undefined ***)(unaff_x19 + 0x28) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(unaff_x19 + 0x28);
    }
    uVar2 = (ulong)*(uint *)(ppuVar1 + 0x15);
    func_0x000100693194();
    if ((int)uVar2 == 2) {
      FUN_10005e42c();
      func_0x000107c28f48();
      if ((uVar2 & 1) == 0) {
        FUN_10005e42c();
        func_0x000107c28f4c();
        if (((uVar2 & 1) == 0) && (uVar2 = unaff_x19, func_0x000107c28f50(), (uVar2 & 1) == 0)) {
          ppuVar1 = &PTR_PTR_113280c30;
          if (*(undefined ***)(unaff_x19 + 0x28) != (undefined **)0x0) {
            ppuVar1 = *(undefined ***)(unaff_x19 + 0x28);
          }
          if (((ulong)ppuVar1[2] & 1) == 0) {
            uVar3 = 1;
            goto LAB_10069c474;
          }
          if (*(uint *)(ppuVar1[0xd] + 0x1c) < 7) {
            uVar3 = 0x62 >> (ulong)(*(uint *)(ppuVar1[0xd] + 0x1c) & 0x1f);
            goto LAB_10069c474;
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_10069c474:
  return uVar3 & 1;
}



/* Entry: 10069c4b8; end: 10069c52f;  */

void FUN_10069c4b8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_40 [32];
  
  if ((((*(byte *)(param_2 + 0x10) >> 2 & 1) != 0) &&
      ((*(byte *)(*(long *)(param_2 + 0x28) + 0x10) >> 4 & 1) != 0)) &&
     (lVar1 = *(long *)(*(long *)(param_2 + 0x28) + 0x88), (*(byte *)(lVar1 + 0x10) & 1) != 0)) {
    func_0x000107c3403c(*(undefined8 *)(lVar1 + 0x18));
    func_0x000107c34078(*(undefined8 *)(lVar1 + 0x20));
    func_0x000107c33fe4();
    func_0x000105293418(param_1,auStack_40);
    func_0x000107c33ff0();
    func_0x000107c33fb8();
    return;
  }
  FUN_100699d24();
  return;
}



/* Entry: 10069c530; end: 10069c557;  */

void FUN_10069c530(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        func_0x000107c27914();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return;
    }
    func_0x000104be7394();
    func_0x000104be80a4();
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010869eda4();
    *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
    return;
  }
  return;
}



/* Entry: 10069c558; end: 10069c57b;  */

undefined8 FUN_10069c558(undefined8 param_1)

{
  FUN_10069c530();
  return param_1;
}



/* Entry: 10069c57c; end: 10069c663;  */

ulong FUN_10069c57c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined1 in_ZR;
  undefined8 uVar3;
  long extraout_x8;
  ulong uVar4;
  undefined **ppuVar5;
  long extraout_x9;
  ulong uVar6;
  
  func_0x00010069316c(*(undefined8 *)(param_1 + 0x28));
  lVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    lVar1 = extraout_x8;
  }
  if (*(int *)(lVar1 + 0xa8) == 0) {
    FUN_10069c664(*(undefined8 *)(param_1 + 0x18));
    uVar3 = param_2;
    FUN_1006933e4();
    if ((int)uVar3 == 0) {
      FUN_100693498(param_2,param_1);
      if ((int)param_2 != 0) {
        ppuVar5 = *(undefined ***)(param_1 + 0x30);
        goto LAB_10069c608;
      }
    }
    else {
      ppuVar5 = *(undefined ***)(param_1 + 0x30);
      ppuVar2 = &PTR_PTR_113286e08;
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar2 = ppuVar5;
      }
      if (*(int *)(ppuVar2 + 4) != 0) {
LAB_10069c608:
        ppuVar2 = &PTR_PTR_113286e08;
        if (ppuVar5 != (undefined **)0x0) {
          ppuVar2 = ppuVar5;
        }
        if (((*(int *)((long)ppuVar2 + 0x144) == 1) && (param_3 != 0)) &&
           (ppuVar2[0x25] != (undefined *)0x0 && 86399999 < (ulong)(param_3 - (long)ppuVar2[0x25])))
        {
          uVar4 = 0;
        }
        else {
          uVar4 = (ulong)(*(int *)((long)ppuVar2 + 0x144) == 1);
        }
        uVar6 = 0x100000000;
        goto LAB_10069c650;
      }
    }
  }
  uVar6 = 0;
  uVar4 = 0;
LAB_10069c650:
  return uVar4 | uVar6;
}



/* Entry: 10069c664; end: 10069c68f;  */

void FUN_10069c664(void)

{
  return;
}



/* Entry: 10069c690; end: 10069c6cb;  */

long FUN_10069c690(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000104beded0();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_10069c6e0();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 10069c6cc; end: 10069c6df;  */

void FUN_10069c6cc(void)

{
  return;
}



/* Entry: 10069c6e0; end: 10069c77f;  */

long FUN_10069c6e0(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  FUN_10069c6cc();
  FUN_100656674();
  func_0x000100656718(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x18,unaff_x19 + 2);
  *puStack_48 = 0;
  puStack_48[1] = 0;
  puStack_48[2] = 0;
  uVar2 = *unaff_x20;
  puStack_48[1] = unaff_x20[1];
  *puStack_48 = uVar2;
  puStack_48[2] = unaff_x20[2];
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  puStack_48 = puStack_48 + 3;
  FUN_10065cfc8();
  FUN_1006567dc();
  lVar1 = unaff_x19[1];
  FUN_100656978(auStack_58);
  return lVar1;
}



/* Entry: 10069c780; end: 10069cc93;  */

undefined1  [16] FUN_10069c780(long param_1)

{
  undefined8 ***pppuVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 ***pppuVar11;
  uint uVar12;
  undefined8 extraout_x8;
  long lVar13;
  long extraout_x8_00;
  undefined8 **ppuVar14;
  long lVar15;
  long extraout_x9;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 **ppuStack_160;
  long lStack_158;
  undefined8 **ppuStack_150;
  undefined8 **ppuStack_148;
  undefined8 **ppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_48;
  
  puVar8 = &uStack_1e0;
  puVar10 = &uStack_1e0;
  lVar15 = param_1;
  FUN_10069b838();
  puVar5 = (undefined4 *)(lVar15 + 0x4f8);
  uStack_48 = extraout_x8;
  func_0x00010069cc58();
  lVar15 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar15 + 0x3fc) & 1) == 0) {
    uVar12 = 1;
    if (*(char *)(lVar15 + 0x7e1) == '\0') {
      uVar12 = 2;
    }
    uVar6 = (ulong)uVar12;
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar15 + 0x20) + 0x40);
    if (lVar13 != 0) {
      FUN_10069d3c0(lVar13,*(long *)(lVar15 + 0x58) + -0x78,lVar15 + 0x68,lVar15 + 200,*puVar5);
      uVar12 = 3;
      if ((int)lVar13 != 2) {
        uVar12 = 1;
      }
      uVar6 = (ulong)uVar12;
      if ((int)lVar13 != 0) goto LAB_10069c80c;
    }
    uVar6 = 0;
  }
LAB_10069c80c:
  *(int *)(param_1 + 0x32c) = (int)uVar6;
  lVar15 = *(long *)(param_1 + 8);
  func_0x00010069d46c();
  uVar7 = uVar6;
  func_0x000107c613d0();
  func_0x000100697b4c(lVar15 + 0x28,500,&UNK_10f75121f,0xc,uVar6,uVar7);
  ppuStack_c8 = (undefined8 **)&UNK_10e58981d;
  ppuStack_c0 = (undefined8 ***)0x7;
  func_0x00010069d490(param_1 + 0x308,&ppuStack_c8);
  uStack_170 = 0xaaaaaaaaaaaaaaaa;
  uStack_188 = 0xaaaaaaaaaaaaaaaa;
  uStack_190 = 0xaaaaaaaaaaaaaaaa;
  uStack_178 = 0xaaaaaaaaaaaaaaaa;
  uStack_180 = 0xaaaaaaaaaaaaaaaa;
  uStack_1a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_198 = 0xaaaaaaaaaaaaaaaa;
  uStack_1a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_1d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_1e0 = 0xaaaaaaaaaaaaaaaa;
  lVar15 = *(long *)(param_1 + 8);
  cVar2 = *(char *)(lVar15 + 0x3d7);
  pppuVar11 = *(undefined8 ****)(lVar15 + 0x3c0);
  if (-1 < (long)cVar2) {
    pppuVar11 = (undefined8 ***)(lVar15 + 0x3c0);
  }
  lVar15 = *(long *)(lVar15 + 0x3c8);
  if (-1 < cVar2) {
    lVar15 = (long)cVar2;
  }
  func_0x0001001869dc(&uStack_1e0,pppuVar11,lVar15);
  if ((char)uStack_1c8 == '\x01') {
    ppuStack_c0 = (undefined8 ***)0xaaaaaaaaaaaaaaaa;
    uStack_b8 = -0x5555555555555556;
    ppuStack_c8 = (undefined8 ***)0xaaaaaaaaaaaaaaaa;
    func_0x000100698b90(&uStack_1e0);
    func_0x000107c60c94(&ppuStack_c8,puVar8);
    ppuStack_140 = (undefined8 **)&UNK_10e58981d;
    lStack_138 = 7;
    ppuStack_150 = ppuStack_c8;
    if (-1 < (long)(char)uStack_b8._7_1_) {
      ppuStack_150 = &ppuStack_c8;
    }
    ppuStack_148 = ppuStack_c0;
    if (-1 < uStack_b8) {
      ppuStack_148 = (undefined8 ***)(long)(char)uStack_b8._7_1_;
    }
    pppuVar11 = &ppuStack_140;
    func_0x00010061bda8(param_1 + 0x308,pppuVar11,&ppuStack_150);
    FUN_10069d54c();
  }
  ppuStack_140 = (undefined8 **)&UNK_10e589837;
  lStack_138 = 10;
  plVar9 = *(long **)(param_1 + 0x4c8);
  if (plVar9 == (long *)0x0) {
    uVar12 = 0;
    ppuStack_c8 = (undefined8 ***)0x0;
    ppuStack_c0 = (undefined8 ***)0x0;
    uStack_b8 = 0;
  }
  else {
    (**(code **)(*plVar9 + 0x18))(&ppuStack_c8);
    uVar12 = (uint)uStack_b8._7_1_;
  }
  cVar2 = (char)uVar12;
  uVar3 = cVar2 == '\0';
  ppuStack_150 = ppuStack_c8;
  if (-1 < cVar2) {
    ppuStack_150 = &ppuStack_c8;
  }
  ppuStack_148 = ppuStack_c0;
  if (-1 < cVar2) {
    ppuStack_148 = (undefined8 ***)(ulong)uVar12;
  }
  FUN_10069d51c();
  FUN_10069d54c();
  ppuStack_c8 = (undefined8 **)&UNK_10e58974c;
  ppuStack_c0 = (undefined8 ***)0xf;
  func_0x00010069d554();
  iVar4 = (int)plVar9;
  if (((ulong)plVar9 & 1) != 0) goto LAB_10069cae0;
  ppuStack_c8 = (undefined8 **)&UNK_10e589817;
  ppuStack_c0 = (undefined8 **)0x5;
  func_0x00010069d554();
  if (iVar4 != 0) {
    ppuStack_c8 = (undefined8 **)&UNK_10e58974c;
    ppuStack_c0 = (undefined8 ***)0xf;
    pppuVar11 = &ppuStack_c8;
    func_0x00010061bda8(param_1 + 0x308,pppuVar11,&PTR_DAT_110cdfb78);
    goto LAB_10069cae0;
  }
  ppuStack_c8 = (undefined8 ***)0x0;
  ppuStack_c0 = (undefined8 ***)0x0;
  uStack_b8 = 0;
  lVar13 = *(long *)(param_1 + 8);
  lVar15 = lVar13;
  func_0x000107c2ea80(lVar13,2);
  if ((int)lVar15 != 0) {
    func_0x000107c376f4();
    func_0x000107c37694();
    func_0x000107c376c8();
    lVar13 = *(long *)(param_1 + 8);
  }
  lVar15 = lVar13;
  func_0x000107c2ea80(lVar13,1);
  if ((int)lVar15 != 0) {
    func_0x000107c376f4();
    func_0x000107c37694();
    func_0x000107c376c8();
    lVar13 = *(long *)(param_1 + 8);
  }
  if ((*(char *)(*(long *)(lVar13 + 0x20) + 0xa8) == '\x01') &&
     (lVar15 = lVar13, func_0x000107c2ea80(lVar13,0), (int)lVar15 != 0)) {
    uVar6 = *(long *)(lVar13 + 0x58) - 0x78;
    func_0x0001001aaad8();
    iVar4 = (int)uVar6;
    if ((uVar6 & 1) == 0) {
      func_0x0001008862d4();
      func_0x000107c2d4c0();
      if (iVar4 == 0) goto LAB_10069ca70;
    }
    func_0x000107c376f4();
    func_0x000107c37694();
    func_0x000107c376c8();
  }
LAB_10069ca70:
  uVar3 = ppuStack_c8 == ppuStack_c0;
  pppuVar11 = (undefined8 ***)ppuStack_c8;
  if (!(bool)uVar3) {
    ppuStack_150 = (undefined8 **)&UNK_10e58974c;
    ppuStack_148 = (undefined8 ***)0xf;
    func_0x000107c2cc8c(&ppuStack_140,((long)ppuStack_c0 - (long)ppuStack_c8) / 0x18,ppuStack_c8,
                        &DAT_10f68f19e,2);
    ppuStack_160 = ppuStack_140;
    if (-1 < (long)uStack_130._7_1_) {
      ppuStack_160 = &ppuStack_140;
    }
    uVar3 = uStack_130._7_1_ == '\0';
    lStack_158 = lStack_138;
    if (-1 < uStack_130) {
      lStack_158 = (long)uStack_130._7_1_;
    }
    pppuVar11 = &ppuStack_150;
    func_0x00010061bda8(param_1 + 0x308,pppuVar11,&ppuStack_160);
    func_0x000107c376c8();
  }
  func_0x00010014c5e8(&ppuStack_c8);
LAB_10069cae0:
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    ppuStack_c0 = (undefined8 ***)0xaaaaaaaaaaaaaaaa;
    uStack_b8 = -0x5555555555555556;
    ppuStack_c8 = (undefined8 ***)0xaaaaaaaaaaaaaaaa;
    (**(code **)(**(long **)(param_1 + 0x4c8) + 0x10))(&ppuStack_c8);
    uVar3 = uStack_b8._7_1_ == 0;
    pppuVar1 = (undefined8 ***)ppuStack_c0;
    if (-1 < uStack_b8) {
      pppuVar1 = (undefined8 ***)(ulong)uStack_b8._7_1_;
    }
    if (pppuVar1 != (undefined8 ***)0x0) {
      ppuStack_140 = (undefined8 **)&UNK_10e58975c;
      lStack_138 = 0xf;
      uVar3 = uStack_b8._7_1_ == 0;
      ppuStack_150 = ppuStack_c8;
      if (-1 < uStack_b8) {
        ppuStack_150 = &ppuStack_c8;
      }
      ppuStack_148 = pppuVar1;
      FUN_10069d51c();
    }
    FUN_10069d54c();
  }
  func_0x00010069bae8();
  if ((extraout_x9 == 0) || (uVar3 = 0, *(char *)(extraout_x8_00 + 0x3fc) != '\x01')) {
    func_0x00010069d5a4(param_1);
  }
  else {
    func_0x000107c2d730(param_1 + 0x560);
    ppuStack_140 = (undefined8 **)((ulong)ppuStack_140 & 0xffffffffffffff00);
    uStack_130 = 0;
    lStack_138 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    ppuStack_c8 = (undefined8 **)CONCAT71(ppuStack_c8._1_7_,1);
    pppuVar11 = &ppuStack_140;
    func_0x000107c2d6ec(&ppuStack_c0);
    uVar3 = (char)ppuStack_c8 == '\x01';
    if ((bool)uVar3) {
      pppuVar11 = &ppuStack_c0;
      uVar3 = *(char *)(param_1 + 0x5c0) == '\x01';
      if ((bool)uVar3) {
        func_0x000107c2d6f4();
      }
      else {
        func_0x000107c2d6ec(param_1 + 0x5c8);
        *(undefined1 *)(param_1 + 0x5c0) = 1;
      }
    }
    else {
      func_0x000100899c5c(param_1 + 0x5c0);
    }
    func_0x000100899c5c(&ppuStack_c8);
    func_0x000107c2d6f0(&ppuStack_140);
    func_0x000107c2ea68(param_1);
  }
  func_0x0001001832d8();
  func_0x0001006a5ae4(uStack_48);
  if (!(bool)uVar3) {
    func_0x000107c60e78();
    ppuVar14 = *pppuVar11;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(pppuVar11 + 1);
    auVar17._0_8_ = puVar10 + 2;
    *puVar10 = ppuVar14;
    auVar17._8_8_ = pppuVar11 + 2;
    return auVar17;
  }
  auVar16._8_8_ = pppuVar11;
  auVar16._0_8_ = puVar10;
  return auVar16;
}



/* Entry: 10069cc94; end: 10069ccef;  */

void FUN_10069cc94(void)

{
  return;
}



/* Entry: 10069ccf0; end: 10069cd63;  */

void FUN_10069ccf0(long param_1)

{
  undefined8 *extraout_x8;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_100699898();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  FUN_10065cf40(extraout_x8,(long)*(int *)(param_1 + 8));
  FUN_10069cd64(*unaff_x20);
  for (; unaff_x20 != (undefined8 *)0x0; unaff_x20 = unaff_x20 + -1) {
    func_0x0001006b78ec(*unaff_x21);
    func_0x000107c33fac();
    func_0x0001006b78f4();
    unaff_x21 = unaff_x21 + 1;
  }
  return;
}



/* Entry: 10069cd64; end: 10069cd7b;  */

void FUN_10069cd64(void)

{
  return;
}



/* Entry: 10069cd7c; end: 10069d38b;  */

void FUN_10069cd7c(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  code *extraout_x8;
  undefined **ppuVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  uint uStack_6f4;
  ulong uStack_6f0;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined1 uStack_6d8;
  undefined7 uStack_6d7;
  undefined1 uStack_6d0;
  undefined8 uStack_6cf;
  undefined1 auStack_4a8 [80];
  undefined1 auStack_458 [16];
  byte bStack_448;
  long lStack_410;
  undefined1 auStack_300 [424];
  char cStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined1 auStack_f0 [32];
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((((*(byte *)(param_2 + 300) | *(byte *)(param_2 + 0x120)) & 1) == 0) ||
     (*(char *)(param_4 + 0x3d0) == '\0')) {
    if (*(char *)(param_4 + 0x3d0) != '\0') goto FUN_10069d38c;
  }
  else {
    if (*(uint *)(param_4 + 0x50) < 0x1c &&
        (1 << (ulong)(*(uint *)(param_4 + 0x50) & 0x1f) & 0xe483e80U) != 0) {
FUN_10069d38c:
      if (*(char *)(param_4 + 0x308) == '\x01') {
        func_0x000104be1500(param_4 + 0xd8);
        *(undefined1 *)(param_4 + 0x308) = 0;
      }
      return;
    }
    if ((*(byte *)(param_2 + 300) == 0) || (4 < *(int *)(param_2 + 0x128) - 2U)) {
      func_0x000107c29f94(&uStack_6e0,*(undefined8 *)(param_1 + 0x70),param_2,
                          *(undefined8 *)(param_2 + 0x118));
      FUN_1006b90c8(auStack_300,&uStack_6e0);
      FUN_1006928f0(&uStack_6e0);
      if (cStack_158 == '\x01') {
        func_0x000107c28ef0(auStack_4a8,*(undefined8 *)(param_1 + 0x70),auStack_300);
        if (((bStack_448 >> 6 & 1) == 0) || (*(char *)(lStack_410 + 0x1c) != '\x01')) {
          lVar10 = *(long *)(param_1 + 0x70);
          uVar4 = *(undefined8 *)(param_1 + 0x80);
          FUN_10069b7f4(uVar4);
          (*extraout_x8)();
          uVar5 = *(undefined8 *)(param_1 + 0x80);
          FUN_100671198(uVar5);
          func_0x000107c29e9c(&uStack_6e0,auStack_4a8,lVar10 + 0x40,1,uVar4,uVar5);
          func_0x000107c3286c();
          func_0x000104be1500(&uStack_6d8);
          lVar10 = 0;
          if (param_3 != 0) {
            lVar10 = param_3 + 0x18;
            FUN_100696274(lVar10,param_1 + 0x18);
          }
          if (*(char *)(param_4 + 0x300) == '\x01') {
            ppuVar7 = &PTR_PTR_113286e08;
            if (*(undefined ***)(param_2 + 0x80) != (undefined **)0x0) {
              ppuVar7 = *(undefined ***)(param_2 + 0x80);
            }
            if (*(int *)(ppuVar7 + 0x2a) == 0xc) {
              ppuVar7 = (undefined **)ppuVar7[0x29];
            }
            else {
              ppuVar7 = &PTR_PTR_113284390;
            }
            if (*(char *)(param_4 + 0x2f8) == '\x01') {
              iVar1 = *(int *)(param_4 + 0x29c);
              lVar9 = (long)iVar1;
              uVar5 = *(undefined8 *)(param_4 + 0x2a0);
              uVar4 = *(undefined8 *)(param_4 + 0x2a8);
              if (*(int *)((long)ppuVar7 + 0x24) == 3) {
                if (iVar1 == *(int *)(ppuVar7[3] + 0x28)) {
                  auStack_f0[0] = 0;
                  uStack_d0 = 0;
                  func_0x000107c29e40(&uStack_150,ppuVar7[3] + 0x10,lVar9,param_1);
                  uStack_108 = uStack_148;
                  uStack_110 = uStack_150;
                  uStack_100 = uStack_140;
                  uStack_140 = 0;
                  uStack_148 = 0;
                  uStack_150 = 0;
                  uStack_f8 = CONCAT71(uStack_f8._1_7_,1);
                  func_0x000105296ebc(&uStack_c8,auStack_f0,&uStack_110);
                  func_0x000105296b4c(&uStack_6e0,1,lVar9,uVar5,uVar4,&uStack_c8);
                  func_0x000107c328a0();
                  func_0x000107c32888();
                  func_0x000107c32878();
                  func_0x000104be1320(&uStack_110);
                  func_0x000104be1340(&uStack_150);
                  func_0x000107c32884();
                }
              }
              else if ((*(int *)((long)ppuVar7 + 0x24) == 2) &&
                      (puVar13 = ppuVar7[3], *(int *)(puVar13 + 0x10) == iVar1)) {
                if (*(char *)(param_4 + 0x2d0) == '\x01') {
                  uStack_6f4 = *(uint *)(param_4 + 0x2c8);
                  uVar12 = (ulong)uStack_6f4;
                  uStack_6f0 = (ulong)*(byte *)(param_4 + 0x2cc) << 0x20;
LAB_10069cfd0:
                  uStack_6f4 = uStack_6f4 & 0xffffff00;
                  uVar11 = (uint)uVar12;
                }
                else {
                  if (*(char *)(param_4 + 0x2f0) == '\x01') {
                    pcVar8 = (char *)(*(long *)(param_4 + 0x2d8) + 0x20);
                    for (uVar12 = 0;
                        (*(long *)(param_4 + 0x2e0) - *(long *)(param_4 + 0x2d8)) / 0x28 != uVar12;
                        uVar12 = uVar12 + 1) {
                      if ((*pcVar8 == '\x01') && (pcVar8[-8] == '\x01')) {
                        uStack_6f4 = (uint)uVar12;
                        uStack_6f0 = 0x100000000;
                        goto LAB_10069cfd0;
                      }
                      pcVar8 = pcVar8 + 0x28;
                    }
                  }
                  uStack_6f0 = 0;
                  uVar11 = 0;
                  uStack_6f4 = 0;
                }
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                FUN_1008298e0(&uStack_80,lVar9);
                puVar3 = *(undefined4 **)(puVar13 + 0x18);
                uStack_110 = uStack_80;
                uStack_108 = uStack_78;
                uStack_100 = uStack_70;
                for (lVar14 = (long)*(int *)(puVar13 + 0x10) << 2; lVar14 != 0; lVar14 = lVar14 + -4
                    ) {
                  uStack_6e0 = *puVar3;
                  uStack_80 = uStack_110;
                  uStack_78 = uStack_108;
                  uStack_70 = uStack_100;
                  FUN_10066048c(&uStack_80,&uStack_6e0);
                  puVar3 = puVar3 + 1;
                  uStack_110 = uStack_80;
                  uStack_108 = uStack_78;
                  uStack_100 = uStack_70;
                }
                uStack_f8 = uStack_6f0 | (uStack_6f4 | uVar11 & 0xff);
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_80 = 0;
                uStack_118 = 0;
                uStack_128 = 0;
                uStack_120 = 0;
                func_0x000105296ef0(auStack_f0,&uStack_110);
                uStack_150 = uStack_150 & 0xffffffffffffff00;
                uStack_138 = 0;
                func_0x000105296ebc(&uStack_c8,auStack_f0,&uStack_150);
                func_0x000105296b4c(&uStack_6e0,0,lVar9,uVar5,uVar4,&uStack_c8);
                func_0x000107c328a0();
                func_0x000107c32888();
                func_0x000107c32878();
                func_0x000104be1320(&uStack_150);
                func_0x000107c32884();
                FUN_1002920a0(&uStack_110);
                FUN_1002920a0(&uStack_128);
                FUN_1002920a0(&uStack_80);
              }
            }
            FUN_1006962a0(&uStack_6e0,param_1,auStack_4a8,lVar10);
            *(ulong *)(param_4 + 0x228) = CONCAT71(uStack_6d7,uStack_6d8);
            *(ulong *)(param_4 + 0x220) = CONCAT44(uStack_6dc,uStack_6e0);
            *(undefined8 *)(param_4 + 0x231) = uStack_6cf;
            *(ulong *)(param_4 + 0x229) = CONCAT17(uStack_6d0,uStack_6d7);
          }
          puVar6 = auStack_4a8;
          FUN_10069bf24(puVar6,param_1,lVar10);
          if ((int)puVar6 != 0) {
            lVar10 = *(long *)(param_1 + 0x80);
            FUN_100671198();
            puVar6 = auStack_458;
            func_0x000107c28f5c();
            if (0 < (long)puVar6 - lVar10) {
              func_0x000107c32890(&uStack_6e0);
              plVar2 = (long *)CONCAT44(uStack_6dc,uStack_6e0);
              if (plVar2 != (long *)0x0) {
                uStack_c8 = *(undefined8 *)(param_2 + 0x18);
                uStack_c0 = 1;
                puVar6 = auStack_458;
                func_0x000107c28f5c(puVar6);
                (**(code **)(*plVar2 + 0x10))(plVar2,param_2,&uStack_c8,puVar6);
              }
              func_0x000100562540(&uStack_6e0);
            }
          }
        }
        else {
          func_0x000107c29e98(&uStack_6e0,6);
          func_0x000107c3286c();
          func_0x000107c32874();
        }
        FUN_10068e154(auStack_4a8);
      }
      else {
        func_0x000107c29e98(&uStack_6e0,4);
        func_0x000107c3286c();
        func_0x000107c32874();
      }
      FUN_1006928bc(auStack_300);
    }
    else {
      func_0x000107c29e94();
      func_0x000107c29e98(&uStack_6e0);
      func_0x000107c3286c();
      func_0x000107c32874();
    }
  }
  return;
}



/* Entry: 10069d38c; end: 10069d3bf;  */

void FUN_10069d38c(long param_1)

{
  if (*(char *)(param_1 + 0x238) == '\x01') {
    func_0x000104be1500(param_1 + 8);
    *(undefined1 *)(param_1 + 0x238) = 0;
  }
  return;
}



/* Entry: 10069d3c0; end: 10069d4cb;  */

long * FUN_10069d3c0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined1 in_ZR;
  
  func_0x000100697e2c();
  if (!(bool)in_ZR) {
    func_0x000107c35f48(0x58,0x1133705a8,&UNK_10f74a942);
  }
  (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,param_4,param_5);
  func_0x000100697f04();
  return param_1;
}



/* Entry: 10069d4cc; end: 10069d50b;  */

/* WARNING: Possible PIC construction at 0x00010069d4f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010069d4fc) */

void FUN_10069d4cc(long param_1)

{
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x38),8);
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10069d50c; end: 10069d51b; -[SCBackgroundTaskWrapper shouldTrackBackgroundTaskRunningDuration] */

bool FUN_10069d50c(long param_1)

{
  return *(long *)(param_1 + 0x40) != 0;
}



/* Entry: 10069d51c; end: 10069d52b;  */

void FUN_10069d51c(void)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long unaff_x19;
  ulong *unaff_x20;
  undefined1 auStack_60 [48];
  
  lVar2 = unaff_x19 + 0x308;
  puVar5 = (ulong *)&stack0x000000a0;
  func_0x00010061be10(lVar2,puVar5,&stack0x00000090);
  uVar3 = *puVar5;
  func_0x00010061bc24(uVar3,puVar5[1]);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0,0x100620c88);
    (*pcVar1)();
  }
  uVar3 = *unaff_x20;
  func_0x00010061bd70(uVar3,unaff_x20[1]);
  if ((uVar3 & 1) != 0) {
    lVar4 = lVar2;
    func_0x00010061be7c();
    if (*(long *)(lVar2 + 8) == lVar4) {
      func_0x00010061bee0();
      func_0x00010061bf28();
      func_0x00010061c2d0(auStack_60);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x100620c94);
  (*pcVar1)();
}



/* Entry: 10069d52c; end: 10069d54b;  */

void FUN_10069d52c(void)

{
  func_0x000107c61168(&PTR_PTR_112ef7690);
  return;
}



/* Entry: 10069d54c; end: 10069e51b;  */

void FUN_10069d54c(void)

{
  long unaff_x29;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x29 + -0xb8);
  return;
}



/* Entry: 10069e51c; end: 10069e54b;  */

long * FUN_10069e51c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10068e154();
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10069e54c; end: 10069e557;  */

undefined1 * FUN_10069e54c(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  
  uVar1 = in_stack_00000070;
  puVar2 = &stack0x00000068;
  if (in_stack_00000070 < in_stack_00000078) {
    func_0x000104be741c();
    puVar2 = (undefined1 *)(uVar1 + 0x5d8);
  }
  else {
    FUN_10069e594(puVar2,&stack0x00000650);
  }
  return puVar2 + -0x5d8;
}



/* Entry: 10069e558; end: 10069e593;  */

long FUN_10069e558(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000104be741c();
    lVar2 = uVar1 + 0x5d8;
  }
  else {
    lVar2 = param_1;
    FUN_10069e594();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x5d8;
}



/* Entry: 10069e594; end: 10069e627;  */

long FUN_10069e594(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010069a04c();
  FUN_10069e628();
  FUN_10069e634();
  func_0x00010069e6e8(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x5d8,unaff_x19 + 2);
  func_0x00010069e734(lStack_48);
  lStack_48 = lStack_48 + 0x5d8;
  FUN_10069e7ec();
  FUN_10069e804();
  lVar1 = unaff_x19[1];
  func_0x00010069e9b0();
  return lVar1;
}



/* Entry: 10069e628; end: 10069e633;  */

void FUN_10069e628(void)

{
  return;
}



/* Entry: 10069e634; end: 10069e6c3;  */

/* WARNING: Possible PIC construction at 0x00010069e6d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010069e6d8) */

ulong FUN_10069e634(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  if (0x2bceb771a02bce < param_2) {
    puVar4 = &stack0xfffffffffffffff0;
    uVar5 = 0x10069e694;
    func_0x000104be6f20();
    puVar2 = &stack0xfffffffffffffff0;
    while (0x2bceb771a02bce < param_2) {
      *(undefined1 **)(puVar2 + -0x10) = puVar4;
      *(undefined8 *)(puVar2 + -8) = uVar5;
      func_0x000104bd35f4();
      *(undefined8 *)(puVar2 + -0x30) = unaff_x20;
      *(ulong *)(puVar2 + -0x28) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x10;
      *(code **)(puVar2 + -0x18) = FUN_10069e6c4;
      puVar4 = puVar2 + -0x20;
      uVar5 = 0x10069e6d8;
      puVar2 = puVar2 + -0x30;
      unaff_x19 = param_2;
    }
    param_2 = param_2 * 0x5d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2);
    return param_2;
  }
  uVar1 = (param_1[2] - *param_1) / 0x5d8;
  uVar3 = uVar1 * 2;
  if (uVar3 < param_2 || uVar3 - param_2 == 0) {
    uVar3 = param_2;
  }
  if (0x15e75bb8d015e6 < uVar1) {
    uVar3 = 0x2bceb771a02bce;
  }
  return uVar3;
}



/* Entry: 10069e6c4; end: 10069e7eb;  */

void FUN_10069e6c4(void)

{
  func_0x00010069e694();
  return;
}



/* Entry: 10069e7ec; end: 10069e803;  */

void FUN_10069e7ec(void)

{
  return;
}



/* Entry: 10069e804; end: 10069e847;  */

void FUN_10069e804(long *param_1,long param_2)

{
  func_0x00010069e7f8();
  FUN_10069e870(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x5d8) * 0x5d8);
  func_0x00010069e960();
  return;
}



/* Entry: 10069e848; end: 10069e86f;  */

void FUN_10069e848(void)

{
  return;
}



/* Entry: 10069e870; end: 10069e8e7;  */

void FUN_10069e870(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  FUN_10069e848();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x5d8) {
    func_0x00010069e734(in_x3,unaff_x22);
    in_x3 = lStack_38 + 0x5d8;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  FUN_10069e8e8();
  FUN_10069e920(auStack_60);
  return;
}



/* Entry: 10069e8e8; end: 10069e917;  */

void FUN_10069e8e8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x5d8) {
    FUN_10069ea28();
  }
  return;
}



/* Entry: 10069e918; end: 10069e91f;  */

void FUN_10069e918(void)

{
  return;
}



/* Entry: 10069e920; end: 10069e94f;  */

long FUN_10069e920(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000104be73cc(param_1);
  }
  return param_1;
}



/* Entry: 10069e950; end: 10069e9bf;  */

void FUN_10069e950(void)

{
  return;
}



/* Entry: 10069e9c0; end: 10069ea1f;  */

long * FUN_10069e9c0(long *param_1)

{
  func_0x00010069e9b8();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10069ea20; end: 10069ea27;  */

undefined1 * FUN_10069ea20(void)

{
  undefined1 *puStack_28;
  
  FUN_1001148fc(&stack0x00000bf8);
  func_0x00010069b0c8(&stack0x00000a28);
  FUN_10069b1b4(&stack0x00000688);
  FUN_100100fec(&stack0x00000670);
  puStack_28 = &stack0x00000650;
  func_0x000100100fd4(&puStack_28);
  return &stack0x00000650;
}



/* Entry: 10069ea28; end: 10069ea63;  */

long FUN_10069ea28(long param_1)

{
  long lStack_28;
  
  FUN_1001148fc(param_1 + 0x5a8);
  func_0x00010069b0c8(param_1 + 0x3d8);
  FUN_10069b1b4(param_1 + 0x38);
  FUN_100100fec(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10069ea64; end: 10069ea83;  */

void FUN_10069ea64(void)

{
  func_0x000107c61168(&PTR_PTR_11296ca30);
  return;
}



/* Entry: 10069ea84; end: 10069eb1b;  */

void FUN_10069ea84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f5cbd8,&UNK_10dbb69a0);
  puVar1 = &UNK_110644970;
  func_0x000107c613fc(&UNK_110644970,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(0x10075bec4,puVar1);
  return;
}



/* Entry: 10069eb1c; end: 10069eb3b;  */

void FUN_10069eb1c(void)

{
  func_0x000107c61168(&PTR_PTR_1129c8640);
  return;
}



/* Entry: 10069eb3c; end: 10069f50f;  */

void FUN_10069eb3c(void)

{
  int extraout_w8;
  
  func_0x0001001b43dc();
  if (extraout_w8 != 0) {
    func_0x000107c36a30();
    func_0x000107c36a4c();
    func_0x000107c36a34();
    func_0x000107c2dfec();
    func_0x000107c36a3c();
  }
  return;
}



/* Entry: 10069f510; end: 10069f52f;  */

void FUN_10069f510(void)

{
  func_0x000107c61168(&PTR_PTR_112ef7560);
  return;
}



/* Entry: 10069f530; end: 10069fbf7;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10069f530(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 param_7,long *param_8,
                  long *param_9,undefined8 *param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long alStack_a0 [5];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uStack_68 = param_3;
  if (param_1 == 1) {
    lStack_70 = -0x5555555555555556;
    func_0x000107c2d920(&lStack_70,param_5,param_7);
    lVar1 = lStack_70;
    lVar2 = *param_9;
    if (lStack_70 == 0) {
      if (lVar2 != 0) {
        func_0x000100131110();
        uVar4 = *param_5;
        FUN_10012dd4c(alStack_a0 + 1,&UNK_10f74d979,&UNK_10f74d990,0xfa);
        alStack_a0[0] = *param_9;
        *param_9 = 0;
        func_0x00010013fa70(uVar4,alStack_a0 + 1,alStack_a0);
        func_0x000100140e00(alStack_a0);
      }
      lVar2 = 0xfffffffe;
    }
    else {
      *param_9 = 0;
      lStack_78 = lVar2;
      func_0x0001001c2158(lStack_70 + 0x60,&lStack_78);
      func_0x000100140e00(&lStack_78);
      lStack_70 = 0;
      lVar2 = *param_8;
      *param_8 = lVar1;
      if (lVar2 != 0) {
        func_0x000107c36314();
      }
      lVar2 = 0;
    }
    func_0x000107c2d91c(&lStack_70);
  }
  else {
    lVar3 = *param_9;
    lVar2 = 0x68;
    func_0x000107c60e20();
    uStack_68 = 0;
    *param_9 = 0;
    uVar4 = *param_10;
    *param_10 = 0;
    lVar1 = lVar2;
    FUN_100165cfc();
    *(undefined4 *)(lVar1 + 0x18) = param_6;
    *(undefined1 *)(lVar1 + 0x1c) = 0;
    *(undefined8 **)(lVar1 + 0x20) = param_5;
    *(int *)(lVar1 + 0x28) = param_1;
    *(undefined4 *)(lVar1 + 0x2c) = param_2;
    alStack_a0[1] = 0;
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    *(long **)(lVar1 + 0x38) = param_8;
    uStack_b0 = 0;
    uStack_a8 = 0;
    *(long *)(lVar1 + 0x40) = lVar3;
    *(undefined8 *)(lVar1 + 0x48) = uVar4;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = param_7;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    func_0x00010069f758(alStack_a0 + 1);
    func_0x000100140e00(&uStack_b0);
    func_0x000100140e00(&uStack_a8);
    if (param_1 == 0) {
      func_0x00010069f78c(lVar2);
    }
    else {
      func_0x000107c2d904();
    }
  }
  func_0x00010069f758(&uStack_68);
  return lVar2;
}



/* Entry: 10069fbf8; end: 10069fbff;  */

void FUN_10069fbf8(void)

{
  FUN_10069fc08(&stack0x000002a8);
  FUN_10069fc4c();
  return;
}



/* Entry: 10069fc00; end: 10069fc07;  */

void FUN_10069fc00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 10069fc08; end: 10069fc17;  */

undefined1 * FUN_10069fc08(void)

{
  return &stack0x00000008;
}



/* Entry: 10069fc18; end: 10069fc3b;  */

void FUN_10069fc18(void)

{
  FUN_10069fc08();
  FUN_10069fc4c();
  return;
}



/* Entry: 10069fc3c; end: 10069fc4b;  */

void FUN_10069fc3c(void)

{
  return;
}



/* Entry: 10069fc4c; end: 10069fc77;  */

void FUN_10069fc4c(void)

{
  long extraout_x8;
  
  FUN_10069fc3c();
  if (extraout_x8 != 0) {
    func_0x000107c28f9c();
    func_0x000107c32528();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10069fc78; end: 10069fc83;  */

void FUN_10069fc78(void)

{
  return;
}



/* Entry: 10069fc84; end: 10069fcdf;  */

void FUN_10069fc84(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = (long)(param_2 + 3);
    param_2 = (long *)*param_2;
    FUN_10068e154(lVar1);
    FUN_10069fce0();
  }
  return;
}



/* Entry: 10069fce0; end: 10069fcf3;  */

void FUN_10069fce0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10069fcf4; end: 10069fd13;  */

void FUN_10069fcf4(void)

{
  func_0x00010069fce8();
  FUN_10069fd14();
  return;
}



/* Entry: 10069fd14; end: 10069fd33;  */

void FUN_10069fd14(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10069fd34; end: 10069fd5f;  */

long * FUN_10069fd34(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10069fd60; end: 10069fd7f;  */

void FUN_10069fd60(void)

{
  func_0x000107c61168(&PTR_PTR_11296caf8);
  return;
}



/* Entry: 10069fd80; end: 10069ff2f;  */

void FUN_10069fd80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ef8628,&UNK_10db27af8);
  puVar1 = &UNK_1105a3ad0;
  func_0x000107c613fc(&UNK_1105a3ad0,0xa8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  FUN_1000823a8(FUN_1006c6b48,puVar1);
  return;
}



/* Entry: 10069ff30; end: 10069ff4f;  */

void FUN_10069ff30(void)

{
  func_0x000107c61168(&PTR_PTR_11288ee18);
  return;
}



/* Entry: 10069ff50; end: 10069ffbb;  */

void FUN_10069ff50(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  FUN_100658238();
  func_0x00010069ff84();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 10069ffbc; end: 10069ffcf;  */

bool FUN_10069ffbc(long *param_1,long *param_2)

{
  long lVar1;
  
  if ((char)param_1[3] != '\x01') {
    return false;
  }
  lVar1 = *param_1;
  if (param_1[1] - lVar1 == param_2[1] - *param_2) {
    func_0x000107c610b0(lVar1,*param_2,param_1[1] - lVar1);
    return (int)lVar1 == 0;
  }
  return false;
}



/* Entry: 10069ffd0; end: 10069fff7;  */

void FUN_10069ffd0(void)

{
  func_0x000100632cd8();
  FUN_100632d18();
  FUN_1006a0014();
  return;
}



/* Entry: 10069fff8; end: 1006a0013;  */

void FUN_10069fff8(long param_1)

{
  FUN_10069ffd0();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1006a0014; end: 1006a005b;  */

void FUN_1006a0014(void)

{
  long in_x3;
  
  func_0x000100632d24();
  if (in_x3 != 0) {
    FUN_1006a005c();
    FUN_1006a0074();
    func_0x0001006a00c4();
    FUN_1006a00e4();
  }
  FUN_100632d78();
  FUN_1006a0d4c();
  return;
}



/* Entry: 1006a005c; end: 1006a0073;  */

void FUN_1006a005c(void)

{
  return;
}



/* Entry: 1006a0074; end: 1006a00b7;  */

void FUN_1006a0074(long param_1,ulong param_2)

{
  long extraout_x8;
  long *unaff_x19;
  
  if (param_2 < 0x2bceb771a02bcf) {
    FUN_1006998e4();
    FUN_10069e6c4();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    FUN_1006a00b8(0x5d8);
    return;
  }
  func_0x000104be6f20();
  unaff_x19[2] = param_1 + param_2 * extraout_x8;
  return;
}



/* Entry: 1006a00b8; end: 1006a00e3;  */

void FUN_1006a00b8(long param_1,long param_2,long param_3)

{
  long unaff_x19;
  
  *(long *)(unaff_x19 + 0x10) = param_2 + param_3 * param_1;
  return;
}



/* Entry: 1006a00e4; end: 1006a010b;  */

void FUN_1006a00e4(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001006a00d8();
  FUN_1006a010c();
  FUN_1006a019c();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1006a010c; end: 1006a013f;  */

long FUN_1006a010c(long param_1)

{
  return param_1 + 0x10;
}



/* Entry: 1006a0140; end: 1006a019b;  */

long FUN_1006a0140(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001006a0118();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x5d8) {
    FUN_1006a01b0();
    FUN_1006a01bc();
    unaff_x20 = uStack_38 + 0x5d8;
    uStack_38 = unaff_x20;
  }
  func_0x0001006a0758();
  FUN_10069e920();
  return unaff_x20;
}



/* Entry: 1006a019c; end: 1006a01af;  */

void FUN_1006a019c(void)

{
  FUN_1006a0140();
  return;
}



/* Entry: 1006a01b0; end: 1006a01bb;  */

void FUN_1006a01b0(void)

{
  return;
}



/* Entry: 1006a01bc; end: 1006a0253;  */

void FUN_1006a01bc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100632ab0();
  FUN_1006a025c();
  FUN_10066f658();
  FUN_10054f8dc();
  FUN_1006a027c(unaff_x19 + 0x38,unaff_x20 + 0x38);
  FUN_1006a0a74(unaff_x19 + 0x3d8,unaff_x20 + 0x3d8);
  *(undefined8 *)(unaff_x19 + 0x5a0) = *(undefined8 *)(unaff_x20 + 0x5a0);
  FUN_10069add4(unaff_x19 + 0x5a8,unaff_x20 + 0x5a8);
  *(undefined8 *)(unaff_x19 + 0x5d0) = *(undefined8 *)(unaff_x20 + 0x5d0);
  return;
}



/* Entry: 1006a0254; end: 1006a025b;  */

undefined8 FUN_1006a0254(undefined8 param_1,undefined8 param_2)

{
  func_0x00010054f8c8();
  FUN_100292164();
  return param_2;
}



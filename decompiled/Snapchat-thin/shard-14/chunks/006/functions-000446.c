/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b58d930; end: 10b58d95b;  */

undefined8 FUN_10b58d930(undefined8 param_1)

{
  func_0x00010b58e73c();
  FUN_10b58d95c(param_1);
  return param_1;
}



/* Entry: 10b58d95c; end: 10b58d993;  */

void FUN_10b58d95c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b58dcfc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b58deec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58d994; end: 10b58d997;  */

undefined8 FUN_10b58d994(undefined8 param_1)

{
  func_0x00010b58e73c();
  FUN_10b58d95c(param_1);
  return param_1;
}



/* Entry: 10b58d998; end: 10b58d9ab;  */

void FUN_10b58d998(void)

{
  FUN_10b58d930();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58d9ac; end: 10b58d9d3;  */

undefined ** FUN_10b58d9ac(void)

{
  return &PTR_DAT_110d0fd28;
}



/* Entry: 10b58d9d4; end: 10b58da07;  */

void FUN_10b58d9d4(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_10b58de64();
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



/* Entry: 10b58da08; end: 10b58db0b;  */

long * FUN_10b58da08(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b58e70c();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x30);
    param_4 = (long *)0x1;
    func_0x00010b58e750();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    param_4 = (long *)0x2;
    func_0x00010b58e750();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58e76c();
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



/* Entry: 10b58db0c; end: 10b58db43;  */

long FUN_10b58db0c(long param_1)

{
  long extraout_x8;
  
  FUN_10b58de00();
  func_0x00010b58e6f4();
  return param_1 + extraout_x8;
}



/* Entry: 10b58db44; end: 10b58db9b;  */

void FUN_10b58db44(ulong *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b58e82c();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b58e4f0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b58db44();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10b58e564();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b58db9c();
      }
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b58e81c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b58db9c; end: 10b58dc9b;  */

void FUN_10b58db9c(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar3;
  
  func_0x00010b58e82c();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  if (*(ulong *)(unaff_x20 + 0x10) != 0) {
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 == 0) goto LAB_10b58dc80;
  iVar2 = *(int *)((long)unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b58de64();
    }
    *(int *)((long)unaff_x21 + 0x24) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[3];
      func_0x00010b58e0a4();
      goto LAB_10b58dc80;
    }
    FUN_10b58e670();
    param_1 = puVar3;
  }
  else {
    if (iVar1 != 1) goto LAB_10b58dc80;
    if (iVar2 == 1) {
      param_1 = (ulong *)unaff_x21[3];
      FUN_10b58e07c();
      goto LAB_10b58dc80;
    }
    FUN_10b58e600();
    param_1 = puVar3;
  }
  unaff_x21[3] = (ulong)param_1;
LAB_10b58dc80:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58e81c();
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



/* Entry: 10b58dc9c; end: 10b58dccf;  */

void FUN_10b58dc9c(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  long unaff_x19;
  ulong *unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b58e83c();
  func_0x00010b58d2a0();
  puVar2 = unaff_x20;
  func_0x00010b58e82c();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  uVar1 = (uint)unaff_x20[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x18);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b58e4f0();
        *(ulong **)(unaff_x21 + 0x18) = puVar2;
      }
      else {
        FUN_10b58db44();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x20);
      if (puVar2 == (ulong *)0x0) {
        FUN_10b58e564();
        *(ulong **)(unaff_x21 + 0x20) = puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_10b58db9c();
      }
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((unaff_x20[1] & 1) == 0) {
    return;
  }
  func_0x00010b58e81c();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b58dcd0; end: 10b58dcfb;  */

undefined1  [16] FUN_10b58dcd0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar6;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  puVar4 = (undefined1 *)(param_2 + 0x18);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0x18); puVar3 != (undefined1 *)(param_1 + 0x28);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x28);
  return auVar7;
}



/* Entry: 10b58dcfc; end: 10b58dd1f;  */

undefined8 FUN_10b58dcfc(undefined8 param_1)

{
  func_0x00010b58e73c();
  return param_1;
}



/* Entry: 10b58dd20; end: 10b58dd23;  */

undefined8 FUN_10b58dd20(undefined8 param_1)

{
  func_0x00010b58e73c();
  return param_1;
}



/* Entry: 10b58dd24; end: 10b58dd37;  */

void FUN_10b58dd24(void)

{
  FUN_10b58dcfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58dd38; end: 10b58dd43;  */

undefined ** FUN_10b58dd38(void)

{
  return &PTR_DAT_110d0fd80;
}



/* Entry: 10b58dd44; end: 10b58ddff;  */

long * FUN_10b58dd44(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b58e70c();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010b58e6dc();
    func_0x00010b58e804();
    func_0x00010b58e744();
  }
  lVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b58e6dc();
    lVar2 = 0x11;
    func_0x000107c280a8(0x11,param_1);
    func_0x00010b58e744();
  }
  lVar3 = lVar2;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b58e6dc();
    lVar3 = 0x19;
    func_0x000107c280a8(0x19,lVar2);
    func_0x00010b58e744();
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b58e6dc();
    func_0x000107c280a8(0x21,lVar3);
    func_0x00010b58e744();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58e76c();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
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
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b58de00; end: 10b58de63;  */

long FUN_10b58de00(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = lVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x30) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b58de64; end: 10b58deeb;  */

void FUN_10b58de64(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b58dec0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b58e1d4();
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 1) goto LAB_10b58dec0;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b58dec0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b58e0e8();
    }
  }
  __ZdlPv();
LAB_10b58dec0:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b58deec; end: 10b58df17;  */

undefined8 FUN_10b58deec(undefined8 param_1)

{
  func_0x00010b58e73c();
  FUN_10b58df18(param_1);
  return param_1;
}



/* Entry: 10b58df18; end: 10b58df2b;  */

void FUN_10b58df18(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b58dec0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b58e1d4();
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 1) goto LAB_10b58dec0;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b58dec0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b58e0e8();
    }
  }
  __ZdlPv();
LAB_10b58dec0:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b58df2c; end: 10b58df3f;  */

void FUN_10b58df2c(void)

{
  FUN_10b58deec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58df40; end: 10b58df53;  */

undefined8 FUN_10b58df40(undefined8 param_1)

{
  func_0x00010b58e73c();
  return param_1;
}



/* Entry: 10b58df54; end: 10b58e07b;  */

long * FUN_10b58df54(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b58e70c();
  uVar1 = *(uint *)(param_1 + 0x24);
  plVar2 = (long *)(ulong)uVar1;
  if (uVar1 == 1) {
    lVar3 = 0x18;
  }
  else {
    if (uVar1 != 2) goto LAB_10b58df94;
    lVar3 = 0x10;
  }
  param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + lVar3);
  func_0x00010b58e750();
  param_4 = plVar2;
LAB_10b58df94:
  plVar2 = param_4;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    plVar2 = unaff_x19;
    func_0x000106af6920();
    param_3 = param_4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return plVar2;
  }
  func_0x00010b58e76c();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)plVar2 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*unaff_x19 - (int)plVar2) + 0x10;
      iVar4 = (int)param_3;
      uVar1 = iVar4 - iVar5;
      param_3 = (long *)(ulong)uVar1;
      if (uVar1 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      plVar2 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar2 + (long)iVar4);
  }
  _memcpy(plVar2,lVar3,(ulong)param_3 & 0xffffffff);
  return (long *)((long)plVar2 + (long)(int)param_3);
}



/* Entry: 10b58e07c; end: 10b58e0b3;  */

void FUN_10b58e07c(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar3;
  
  func_0x00010b58e82c();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  if (*(ulong *)(unaff_x20 + 0x10) != 0) {
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 == 0) goto LAB_10b58dc80;
  iVar2 = *(int *)((long)unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b58de64();
    }
    *(int *)((long)unaff_x21 + 0x24) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[3];
      func_0x00010b58e0a4();
      goto LAB_10b58dc80;
    }
    FUN_10b58e670();
    param_1 = puVar3;
  }
  else {
    if (iVar1 != 1) goto LAB_10b58dc80;
    if (iVar2 == 1) {
      param_1 = (ulong *)unaff_x21[3];
      FUN_10b58e07c();
      goto LAB_10b58dc80;
    }
    FUN_10b58e600();
    param_1 = puVar3;
  }
  unaff_x21[3] = (ulong)param_1;
LAB_10b58dc80:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58e81c();
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



/* Entry: 10b58e0b4; end: 10b58e0e7;  */

void FUN_10b58e0b4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *puVar4;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b58e83c();
  FUN_10b58d9d4();
  puVar3 = unaff_x20;
  func_0x00010b58e82c();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  if (unaff_x20[2] != 0) {
    unaff_x21[2] = unaff_x20[2];
  }
  iVar1 = *(int *)((long)unaff_x20 + 0x24);
  if (iVar1 == 0) goto LAB_10b58dc80;
  iVar2 = *(int *)((long)unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      puVar3 = unaff_x21;
      FUN_10b58de64();
    }
    *(int *)((long)unaff_x21 + 0x24) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      puVar3 = (ulong *)unaff_x21[3];
      func_0x00010b58e0a4();
      goto LAB_10b58dc80;
    }
    FUN_10b58e670();
    puVar3 = puVar4;
  }
  else {
    if (iVar1 != 1) goto LAB_10b58dc80;
    if (iVar2 == 1) {
      puVar3 = (ulong *)unaff_x21[3];
      FUN_10b58e07c();
      goto LAB_10b58dc80;
    }
    FUN_10b58e600();
    puVar3 = puVar4;
  }
  unaff_x21[3] = (ulong)puVar3;
LAB_10b58dc80:
  if ((unaff_x20[1] & 1) != 0) {
    func_0x00010b58e81c();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 10b58e0e8; end: 10b58e10b;  */

undefined8 FUN_10b58e0e8(undefined8 param_1)

{
  func_0x00010b58e73c();
  return param_1;
}



/* Entry: 10b58e10c; end: 10b58e11f;  */

void FUN_10b58e10c(void)

{
  FUN_10b58e0e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58e120; end: 10b58e13f;  */

undefined ** FUN_10b58e120(void)

{
  return &PTR_DAT_110d0fe20;
}



/* Entry: 10b58e140; end: 10b58e19b;  */

long * FUN_10b58e140(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b58e70c();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010b58e6dc();
    func_0x00010b58e804();
    func_0x00010b58e744();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b58e76c();
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



/* Entry: 10b58e19c; end: 10b58e1d3;  */

long FUN_10b58e19c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b58e1d4; end: 10b58e1f7;  */

undefined8 FUN_10b58e1d4(undefined8 param_1)

{
  func_0x00010b58e73c();
  return param_1;
}



/* Entry: 10b58e1f8; end: 10b58e20b;  */

void FUN_10b58e1f8(void)

{
  FUN_10b58e1d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58e20c; end: 10b58e2cf;  */

undefined ** FUN_10b58e20c(void)

{
  return &PTR_DAT_110d0fe78;
}



/* Entry: 10b58e2d0; end: 10b58e2ff;  */

long * FUN_10b58e2d0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b58e300; end: 10b58e327;  */

long * FUN_10b58e300(long *param_1)

{
  FUN_10b58e328(param_1 + 3);
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b58e328; end: 10b58e357;  */

long * FUN_10b58e328(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b58e358; end: 10b58e4ef;  */

void FUN_10b58e358(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x40);
  }
  *puVar1 = &PTR_FUN_110d0fa30;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x34) = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b58e4f0; end: 10b58e563;  */

undefined8 * FUN_10b58e4f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110d0f9e0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_10b58db44();
  return puVar1;
}



/* Entry: 10b58e564; end: 10b58e5ff;  */

undefined8 * FUN_10b58e564(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b58e7c8();
  }
  else {
    func_0x00010b58e7d0();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_DAT_110d0fad0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b58e848();
  }
  *(undefined4 *)(puVar2 + 4) = 0;
  iVar1 = *(int *)(param_2 + 0x24);
  *(int *)((long)puVar2 + 0x24) = iVar1;
  puVar2[2] = *(undefined8 *)(param_2 + 0x10);
  if (iVar1 == 2) {
    FUN_10b58e670(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    if (iVar1 != 1) {
      return puVar2;
    }
    FUN_10b58e600(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = param_1;
  return puVar2;
}



/* Entry: 10b58e600; end: 10b58e66f;  */

undefined8 * FUN_10b58e600(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d0f990;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  FUN_10b58e07c();
  return puVar1;
}



/* Entry: 10b58e670; end: 10b58e6db;  */

undefined8 * FUN_10b58e670(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_DAT_110d0fa80;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  func_0x00010b58e0a4();
  return puVar1;
}



/* Entry: 10b58e6dc; end: 10b58e867;  */

ulong * FUN_10b58e6dc(void)

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



/* Entry: 10b58e868; end: 10b58e943;  */

void FUN_10b58e868(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010b58f5d4();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b58e890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5c0a88)[extraout_x8] * 4 + 0x10b58e894))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b58e944; end: 10b58e9ef;  */

undefined8 * FUN_10b58e944(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 1;
  *puVar2 = param_2;
  *param_1 = &PTR_DAT_110d10128;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar2,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
  switch(uVar1) {
  case 1:
    func_0x00010b58f5c8();
    FUN_10b58f334();
    break;
  case 2:
    func_0x00010b58f5c8();
    FUN_10b58f394();
    break;
  case 3:
    func_0x00010b58f5c8();
    FUN_10b58f3f8();
    break;
  case 4:
    func_0x00010b58f5c8();
    FUN_10b58f45c();
    break;
  default:
    goto LAB_10b58e9e4;
  }
  param_1[2] = puVar2;
LAB_10b58e9e4:
  return param_1;
}



/* Entry: 10b58e9f0; end: 10b58ea1b;  */

undefined8 FUN_10b58e9f0(undefined8 param_1)

{
  func_0x00010b58f540();
  FUN_10b58ea1c(param_1);
  return param_1;
}



/* Entry: 10b58ea1c; end: 10b58ea2f;  */

void FUN_10b58ea1c(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x00010b58f5d4();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b58e890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5c0a88)[extraout_x8] * 4 + 0x10b58e894))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b58ea30; end: 10b58ea43;  */

void FUN_10b58ea30(void)

{
  FUN_10b58e9f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58ea44; end: 10b58ea5f;  */

undefined8 FUN_10b58ea44(undefined8 param_1)

{
  func_0x00010b58f540();
  return param_1;
}



/* Entry: 10b58ea60; end: 10b58eb9f;  */

void FUN_10b58ea60(long param_1)

{
  ulong *puVar1;
  
  FUN_10b58e868();
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



/* Entry: 10b58eba0; end: 10b58ebff;  */

void FUN_10b58eba0(void)

{
  FUN_10b58eeb0();
  func_0x00010b58f4c8();
  return;
}



/* Entry: 10b58ec00; end: 10b58ec03;  */

void FUN_10b58ec00(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    lVar3 = param_1;
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        FUN_10b58e868();
      }
      *(int *)(param_1 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010b58f520();
        func_0x00010b58ed78();
        goto LAB_10b58ed3c;
      }
      func_0x00010b58f598();
      FUN_10b58f334();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010b58f520();
        func_0x00010b58ed98();
        goto LAB_10b58ed3c;
      }
      func_0x00010b58f598();
      FUN_10b58f394();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010b58f520();
        func_0x00010b58eda8();
        goto LAB_10b58ed3c;
      }
      func_0x00010b58f598();
      FUN_10b58f3f8();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b58f520();
        func_0x00010b58edc4();
        goto LAB_10b58ed3c;
      }
      func_0x00010b58f598();
      FUN_10b58f45c();
      break;
    default:
      goto LAB_10b58ed3c;
    }
    *(long *)(param_1 + 0x10) = lVar3;
  }
LAB_10b58ed3c:
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



/* Entry: 10b58ec04; end: 10b58ed77;  */

void FUN_10b58ec04(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    lVar3 = param_1;
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        FUN_10b58e868();
      }
      *(int *)(param_1 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010b58f520();
        func_0x00010b58ed78();
        goto LAB_10b58ed3c;
      }
      func_0x00010b58f598();
      FUN_10b58f334();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010b58f520();
        func_0x00010b58ed98();
        goto LAB_10b58ed3c;
      }
      func_0x00010b58f598();
      FUN_10b58f394();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010b58f520();
        func_0x00010b58eda8();
        goto LAB_10b58ed3c;
      }
      func_0x00010b58f598();
      FUN_10b58f3f8();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b58f520();
        func_0x00010b58edc4();
        goto LAB_10b58ed3c;
      }
      func_0x00010b58f598();
      FUN_10b58f45c();
      break;
    default:
      goto LAB_10b58ed3c;
    }
    *(long *)(param_1 + 0x10) = lVar3;
  }
LAB_10b58ed3c:
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



/* Entry: 10b58ed78; end: 10b58edeb;  */

void FUN_10b58ed78(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
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



/* Entry: 10b58edec; end: 10b58ee0f;  */

undefined8 FUN_10b58edec(undefined8 param_1)

{
  func_0x00010b58f540();
  return param_1;
}



/* Entry: 10b58ee10; end: 10b58ee23;  */

void FUN_10b58ee10(void)

{
  FUN_10b58edec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58ee24; end: 10b58ee43;  */

undefined ** FUN_10b58ee24(void)

{
  return &PTR_DAT_110d101b8;
}



/* Entry: 10b58ee44; end: 10b58eeaf;  */

long * FUN_10b58ee44(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  func_0x00010b58f530();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010b58f4f4();
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar2 = (undefined8 *)0x9;
    func_0x000107c280a8(9,param_1);
    param_4 = puVar2 + 1;
    *puVar2 = uVar4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b58f5b0();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      uVar1 = iVar5 - iVar6;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4,lVar3,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b58eeb0; end: 10b58eee7;  */

long FUN_10b58eeb0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b58eee8; end: 10b58ef0b;  */

undefined8 FUN_10b58eee8(undefined8 param_1)

{
  func_0x00010b58f540();
  return param_1;
}



/* Entry: 10b58ef0c; end: 10b58ef1f;  */

void FUN_10b58ef0c(void)

{
  FUN_10b58eee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58ef20; end: 10b58ef9f;  */

undefined ** FUN_10b58ef20(void)

{
  return &PTR_DAT_110d10210;
}



/* Entry: 10b58efa0; end: 10b58efc3;  */

undefined8 FUN_10b58efa0(undefined8 param_1)

{
  func_0x00010b58f540();
  return param_1;
}



/* Entry: 10b58efc4; end: 10b58efd7;  */

void FUN_10b58efc4(void)

{
  FUN_10b58efa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58efd8; end: 10b58eff7;  */

undefined ** FUN_10b58efd8(void)

{
  return &PTR_DAT_110d10260;
}



/* Entry: 10b58eff8; end: 10b58f05f;  */

long * FUN_10b58eff8(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar3;
  int iVar4;
  
  func_0x00010b58f530();
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x00010b58f4f4();
    func_0x00010b58f570();
    func_0x000107c280b8();
    param_4 = unaff_x21;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b58f5b0();
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



/* Entry: 10b58f060; end: 10b58f0ab;  */

long FUN_10b58f060(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
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



/* Entry: 10b58f0ac; end: 10b58f0cf;  */

undefined8 FUN_10b58f0ac(undefined8 param_1)

{
  func_0x00010b58f540();
  return param_1;
}



/* Entry: 10b58f0d0; end: 10b58f0e3;  */

void FUN_10b58f0d0(void)

{
  FUN_10b58f0ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58f0e4; end: 10b58f103;  */

undefined ** FUN_10b58f0e4(void)

{
  return &PTR_DAT_110d102b0;
}



/* Entry: 10b58f104; end: 10b58f187;  */

long * FUN_10b58f104(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b58f530();
  if ((int)param_1[2] != 0) {
    func_0x00010b58f4f4();
    func_0x00010b58f570();
    func_0x00010b58f58c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b58f4f4();
    param_4 = (long *)0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x00010b58f58c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b58f5b0();
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



/* Entry: 10b58f188; end: 10b58f213;  */

ulong FUN_10b58f188(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  uVar2 = (ulong)uVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x18) = (int)uVar2;
  return uVar2;
}



/* Entry: 10b58f214; end: 10b58f333;  */

void FUN_10b58f214(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b58f558();
  }
  else {
    func_0x00010b58f560();
  }
  *puVar1 = &PTR_DAT_110d0ffe8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b58f334; end: 10b58f393;  */

undefined8 * FUN_10b58f334(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b58f548();
  }
  else {
    func_0x00010b58f580();
  }
  *puVar1 = &PTR_FUN_110d100d8;
  puVar1[1] = param_1;
  func_0x00010b58f5a4();
  FUN_10b58ed78();
  return puVar1;
}



/* Entry: 10b58f394; end: 10b58f3f7;  */

undefined8 * FUN_10b58f394(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b58f558();
  }
  else {
    func_0x00010b58f560();
  }
  *puVar1 = &PTR_DAT_110d10088;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  func_0x00010b58ed98();
  return puVar1;
}



/* Entry: 10b58f3f8; end: 10b58f45b;  */

undefined8 * FUN_10b58f3f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b58f558();
  }
  else {
    func_0x00010b58f560();
  }
  *puVar1 = &PTR_DAT_110d0ffe8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  func_0x00010b58eda8();
  return puVar1;
}



/* Entry: 10b58f45c; end: 10b58f4bb;  */

undefined8 * FUN_10b58f45c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b58f548();
  }
  else {
    func_0x00010b58f580();
  }
  *puVar1 = &PTR_DAT_110d10038;
  puVar1[1] = param_1;
  func_0x00010b58f5a4();
  func_0x00010b58edc4();
  return puVar1;
}



/* Entry: 10b58f4bc; end: 10b58f5e7;  */

void FUN_10b58f4bc(void)

{
  return;
}



/* Entry: 10b58f5e8; end: 10b58f61f;  */

long FUN_10b58f5e8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b590a4c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b58f620; end: 10b58f623;  */

long FUN_10b58f620(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b590a4c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b58f624; end: 10b58f637;  */

void FUN_10b58f624(void)

{
  FUN_10b58f5e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58f638; end: 10b58f643;  */

undefined ** FUN_10b58f638(void)

{
  return &PTR_DAT_110d103c8;
}



/* Entry: 10b58f644; end: 10b58f693;  */

void FUN_10b58f644(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b590a9c(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 10b58f694; end: 10b58f783;  */

long * FUN_10b58f694(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,param_1[3],*(undefined4 *)(param_1[3] + 0x28),param_2,param_3);
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (param_1[4] != 0) {
    func_0x00010b58f99c();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b58f990();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (param_1[5] != 0) {
    func_0x00010b58f99c();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b58f990();
    param_2 = plVar1;
  }
  if (param_1[6] != 0) {
    func_0x00010b58f99c();
    param_2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b58f990();
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



/* Entry: 10b58f784; end: 10b58f813;  */

void FUN_10b58f784(long param_1)

{
  int iVar1;
  int extraout_w8;
  int extraout_w8_00;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_10b58f814();
    iVar1 = iVar1 + 1;
  }
  iVar2 = -9;
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010b58f9a8();
    iVar2 = extraout_w8;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010b58f9a8();
    iVar2 = extraout_w8_00;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x30)) * iVar2 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10b58f814; end: 10b58f83f;  */

long FUN_10b58f814(long param_1)

{
  FUN_10b590b84();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b58f840; end: 10b58f8f7;  */

void FUN_10b58f840(long param_1,long param_2)

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
      func_0x00010b58f94c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b590c18(*(long *)(param_1 + 0x18));
    }
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10b58f8f8; end: 10b58f8ff;  */

void FUN_10b58f8f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x38);
  }
  *puVar1 = &PTR_FUN_110d10388;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 10b58f900; end: 10b58f98f;  */

void FUN_10b58f900(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110d10388;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 10b58f990; end: 10b58f9c7;  */

void FUN_10b58f990(byte *param_1)

{
  ulong unaff_x21;
  
  for (; 0x7f < unaff_x21; unaff_x21 = unaff_x21 >> 7) {
    *param_1 = (byte)unaff_x21 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)unaff_x21;
  return;
}



/* Entry: 10b58f9c8; end: 10b58fa3f;  */

void FUN_10b58f9c8(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  FUN_10b58fa40(param_1);
  if (param_2 != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar2 != uVar1) {
      FUN_10b4cf42c(uVar2,param_2);
      param_2 = uVar2;
    }
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(ulong *)(param_1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 10b58fa40; end: 10b58facb;  */

void FUN_10b58fa40(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b58fa9c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b58fecc();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_10b58fa9c;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b58fa9c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b58fdcc();
    }
  }
  __ZdlPv();
LAB_10b58fa9c:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b58facc; end: 10b58faff;  */

long FUN_10b58facc(long param_1)

{
  func_0x00010b59011c();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b58fa40(param_1);
  }
  return param_1;
}



/* Entry: 10b58fb00; end: 10b58fb03;  */

long FUN_10b58fb00(long param_1)

{
  func_0x00010b59011c();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b58fa40(param_1);
  }
  return param_1;
}



/* Entry: 10b58fb04; end: 10b58fb17;  */

void FUN_10b58fb04(void)

{
  FUN_10b58facc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b58fb18; end: 10b58fb2b;  */

undefined8 FUN_10b58fb18(undefined8 param_1)

{
  func_0x00010b59011c();
  return param_1;
}



/* Entry: 10b58fb2c; end: 10b58fc43;  */

void FUN_10b58fb2c(long param_1)

{
  ulong *puVar1;
  
  FUN_10b58fa40();
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



/* Entry: 10b58fc44; end: 10b58fc73;  */

void FUN_10b58fc44(void)

{
  FUN_10b58fe94();
  func_0x00010b5900e0();
  return;
}



/* Entry: 10b58fc74; end: 10b58fd8b;  */

void FUN_10b58fc74(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) goto LAB_10b58fd50;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_10b58fa40(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 2) {
        ppuVar1 = &PTR_PTR_1133a4438;
      }
      func_0x00010b58fdac(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_10b58fd50;
    }
    FUN_10b590058(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar2 != 1) goto LAB_10b58fd50;
    if (iVar3 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 1) {
        ppuVar1 = &PTR_PTR_1133a4420;
      }
      FUN_10b58fd8c(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_10b58fd50;
    }
    FUN_10b58ffe8(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  *(ulong *)(param_1 + 0x10) = uVar4;
LAB_10b58fd50:
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



/* Entry: 10b58fd8c; end: 10b58fdcb;  */

void FUN_10b58fd8c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
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



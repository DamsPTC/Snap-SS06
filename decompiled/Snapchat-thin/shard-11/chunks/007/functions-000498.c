/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088c30f8; end: 1088c3157;  */

undefined8 * FUN_1088c30f8(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x0001088c38d0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088c393c();
  }
  else {
    param_1 = unaff_x21;
    func_0x0001088c3944();
  }
  *param_1 = &PTR_DAT_110a820a8;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1088c04b0();
  return param_1;
}



/* Entry: 1088c3158; end: 1088c3417;  */

void FUN_1088c3158(long param_1)

{
  ulong extraout_x8;
  
  func_0x0001088c3790();
  if (param_1 == 0) {
    func_0x0001088c372c();
  }
  else {
    func_0x0001088c3620();
  }
  func_0x0001088c37c4();
  func_0x0001088c37dc(&PTR_DAT_110a82238);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088c3640();
  }
  func_0x0001088c3714();
  func_0x0001088c3848();
  return;
}



/* Entry: 1088c3418; end: 1088c347f;  */

undefined8 * FUN_1088c3418(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x0001088c38d0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088c372c();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b4d80e0();
  }
  *param_1 = &PTR_FUN_110a821e8;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  FUN_1088c1f80();
  return param_1;
}



/* Entry: 1088c3480; end: 1088c34cb;  */

void FUN_1088c3480(long param_1)

{
  ulong extraout_x8;
  
  func_0x0001088c3790();
  if (param_1 == 0) {
    func_0x0001088c372c();
  }
  else {
    func_0x0001088c3620();
  }
  func_0x0001088c37c4();
  func_0x0001088c37dc(&PTR_FUN_110a82198);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088c3640();
  }
  func_0x0001088c3714();
  func_0x0001088c3848();
  return;
}



/* Entry: 1088c34cc; end: 1088c352b;  */

undefined8 * FUN_1088c34cc(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x0001088c38d0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088c393c();
  }
  else {
    param_1 = unaff_x21;
    func_0x0001088c3944();
  }
  *param_1 = &PTR_FUN_110a82148;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1088c1ff8();
  return param_1;
}



/* Entry: 1088c352c; end: 1088c35db;  */

void FUN_1088c352c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c3790();
  if (param_1 == 0) {
    __Znwm(0x38);
  }
  else {
    func_0x0001088c3970();
  }
  func_0x0001088c37c4();
  func_0x0001088c37dc(&PTR_FUN_110a82328);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088c3640();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  *(undefined4 *)(unaff_x21 + 0x30) = *(undefined4 *)(unaff_x20 + 0x30);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x19;
    FUN_1088c3418();
  }
  *(undefined8 *)(unaff_x21 + 0x18) = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x19;
    FUN_1088c3480();
  }
  *(undefined8 *)(unaff_x21 + 0x20) = uVar2;
  if (*(int *)(unaff_x21 + 0x30) == 0xb) {
    FUN_1088c34cc();
    *(undefined8 *)(unaff_x21 + 0x28) = unaff_x19;
  }
  return;
}



/* Entry: 1088c35dc; end: 1088c39c7;  */

void FUN_1088c35dc(void)

{
  return;
}



/* Entry: 1088c39c8; end: 1088c3b0b;  */

void FUN_1088c39c8(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  lVar3 = param_3;
  func_0x0001088c69cc();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110a83510;
  if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
    func_0x0001088c6874();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(unaff_x19 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    func_0x0001088c61e8();
  }
  unaff_x19[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    func_0x0001088c6254();
  }
  unaff_x19[4] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    FUN_1088c62c0();
  }
  unaff_x19[5] = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    func_0x0001088c6324();
  }
  unaff_x19[6] = uVar2;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    func_0x0001088c6370();
  }
  unaff_x19[7] = uVar2;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    FUN_1088c63f0();
  }
  unaff_x19[8] = uVar2;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    func_0x0001088c645c();
  }
  unaff_x19[9] = uVar2;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    func_0x0001088c64a8();
  }
  unaff_x19[10] = uVar2;
  if ((uVar1 >> 8 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x0001088c6558();
  }
  unaff_x19[0xb] = unaff_x20;
  return;
}



/* Entry: 1088c3b0c; end: 1088c3b37;  */

undefined8 FUN_1088c3b0c(undefined8 param_1)

{
  func_0x0001088c6938();
  FUN_1088c3b38(param_1);
  return param_1;
}



/* Entry: 1088c3b38; end: 1088c3bdf;  */

void FUN_1088c3b38(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c466c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088c4890();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1088c5228();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_1088c5300();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_1088c56f4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_1088c5844();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_1088c5950();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1088c5acc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_1088c5cc8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c3be0; end: 1088c3be3;  */

undefined8 FUN_1088c3be0(undefined8 param_1)

{
  func_0x0001088c6938();
  FUN_1088c3b38(param_1);
  return param_1;
}



/* Entry: 1088c3be4; end: 1088c3bf7;  */

void FUN_1088c3be4(void)

{
  FUN_1088c3b0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c3bf8; end: 1088c3c03;  */

undefined ** FUN_1088c3bf8(void)

{
  return &PTR_DAT_110a83550;
}



/* Entry: 1088c3c04; end: 1088c3d37;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088c3c04(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3cc8(param_1[3]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001088c3cf8(param_1[4]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1088c3d38(param_1[5]);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x0001088c3d4c(param_1[6]);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x0001088c3d78(param_1[7]);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_1088c3db8(param_1[8]);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x0001088c3dcc(param_1[9]);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x0001088c3df8(param_1[10]);
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    func_0x0001088c3e50(param_1[0xb]);
  }
  func_0x0001088c6b0c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    *(undefined1 *)*param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  return;
}



/* Entry: 1088c3d38; end: 1088c3d4b;  */

void FUN_1088c3d38(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
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



/* Entry: 1088c3d4c; end: 1088c3db7;  */

void FUN_1088c3d4c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088c698c();
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



/* Entry: 1088c3db8; end: 1088c3dcb;  */

void FUN_1088c3db8(long param_1)

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



/* Entry: 1088c3dcc; end: 1088c3e87;  */

void FUN_1088c3dcc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088c698c();
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



/* Entry: 1088c3e88; end: 1088c40df;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1088c3e88(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088c68ac();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x0001088c68bc();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    param_4 = (long *)0x2;
    func_0x0001088c691c();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x18);
    param_4 = (long *)0x3;
    func_0x0001088c691c();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x18);
    param_4 = (long *)0x4;
    func_0x0001088c691c();
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x14);
    param_4 = (long *)0x5;
    func_0x0001088c691c();
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x14);
    param_4 = (long *)0x6;
    func_0x0001088c691c();
  }
  if ((uVar1 >> 6 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x48) + 0x18);
    param_4 = (long *)0x7;
    func_0x0001088c691c();
  }
  if ((uVar1 >> 7 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x14);
    param_4 = (long *)0x8;
    func_0x0001088c691c();
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x14);
    param_4 = (long *)0x9;
    func_0x0001088c691c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088c69c0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
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



/* Entry: 1088c40e0; end: 1088c40e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088c40e0(ulong *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x0001088c68f8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x0001088c6b18();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088c61e8();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x0001088c42b8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088c6254();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088c434c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_1088c62c0();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_1088c4384();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088c6324();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_1088c43a0();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088c6370();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_1088c43e8();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_1088c63f0();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_1088c4460();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088c645c();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_1088c447c();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088c64a8();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_1088c44c4();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x58);
    if (param_1 == (ulong *)0x0) {
      func_0x0001088c6558();
      *(ulong **)(unaff_x21 + 0x58) = puVar2;
      param_1 = puVar2;
    }
    else {
      FUN_1088c45b4();
    }
  }
  func_0x0001088c6a10();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001088c68e8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088c40e4; end: 1088c434b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088c40e4(ulong *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x0001088c68f8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x0001088c6b18();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088c61e8();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x0001088c42b8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088c6254();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088c434c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_1088c62c0();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_1088c4384();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088c6324();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_1088c43a0();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088c6370();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_1088c43e8();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_1088c63f0();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_1088c4460();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088c645c();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_1088c447c();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088c64a8();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_1088c44c4();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x58);
    if (param_1 == (ulong *)0x0) {
      func_0x0001088c6558();
      *(ulong **)(unaff_x21 + 0x58) = puVar2;
      param_1 = puVar2;
    }
    else {
      FUN_1088c45b4();
    }
  }
  func_0x0001088c6a10();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001088c68e8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088c434c; end: 1088c4383;  */

void FUN_1088c434c(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0001088c69cc();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_1088c4a14();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c69b0();
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



/* Entry: 1088c4384; end: 1088c439f;  */

void FUN_1088c4384(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
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



/* Entry: 1088c43a0; end: 1088c43e7;  */

void FUN_1088c43a0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c68c8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c6a54();
    }
    func_0x0001088c6a60();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c69b0();
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



/* Entry: 1088c43e8; end: 1088c445f;  */

void FUN_1088c43e8(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c68f8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x0001088c66e8();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_1088c5648();
      puVar1 = puVar2;
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  func_0x0001088c6b48();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088c68e8();
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



/* Entry: 1088c4460; end: 1088c447b;  */

void FUN_1088c4460(long param_1,long param_2)

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



/* Entry: 1088c447c; end: 1088c44c3;  */

void FUN_1088c447c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c68c8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c6a54();
    }
    func_0x0001088c6a60();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c69b0();
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



/* Entry: 1088c44c4; end: 1088c45b3;  */

void FUN_1088c44c4(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar3;
  
  func_0x0001088c68f8();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x0001088c6b18();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[3];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar3;
        func_0x0001088c677c();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        FUN_1088d07f0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[4];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar3;
        func_0x0001088c67b0();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_1088bcd28();
      }
    }
  }
  func_0x0001088c6a10();
  iVar2 = *(int *)(unaff_x20 + 0x30);
  if (iVar2 != 0) {
    if ((int)unaff_x21[6] == iVar2) {
      if (iVar2 == 1) {
        param_1 = (ulong *)unaff_x21[5];
        func_0x00010b5c4808();
      }
    }
    else {
      if ((int)unaff_x21[6] != 0) {
        param_1 = unaff_x21;
        FUN_1088c5a7c();
      }
      *(int *)(unaff_x21 + 6) = iVar2;
      if (iVar2 == 1) {
        func_0x0001088c67e4();
        unaff_x21[5] = (ulong)puVar3;
        param_1 = puVar3;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001088c68e8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088c45b4; end: 1088c461b;  */

void FUN_1088c45b4(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c68f8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x0001088c67b0();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_1088bcd28();
      puVar1 = puVar2;
    }
  }
  func_0x0001088c6b48();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088c68e8();
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



/* Entry: 1088c461c; end: 1088c466b;  */

void FUN_1088c461c(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c6b30();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_1088c47a8();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 1088c466c; end: 1088c469f;  */

long FUN_1088c466c(long param_1)

{
  func_0x0001088c6938();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1088c461c(param_1);
  }
  return param_1;
}



/* Entry: 1088c46a0; end: 1088c46a3;  */

long FUN_1088c46a0(long param_1)

{
  func_0x0001088c6938();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1088c461c(param_1);
  }
  return param_1;
}



/* Entry: 1088c46a4; end: 1088c46b7;  */

void FUN_1088c46a4(void)

{
  FUN_1088c466c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c46b8; end: 1088c46c7;  */

undefined8 FUN_1088c46b8(undefined8 param_1)

{
  func_0x0001088c6938();
  return param_1;
}



/* Entry: 1088c46c8; end: 1088c4787;  */

long * FUN_1088c46c8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088c68ac();
  if (*(int *)((long)param_1 + 0x1c) == 1) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x18);
    func_0x0001088c68bc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088c69c0();
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



/* Entry: 1088c4788; end: 1088c47a7;  */

void FUN_1088c4788(ulong *param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar2;
  
  func_0x0001088c68f8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x0001088c6b18();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        FUN_1088c4788();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_1088c461c();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_1088c65c4();
        unaff_x21[2] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c68e8();
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



/* Entry: 1088c47a8; end: 1088c47cb;  */

undefined8 FUN_1088c47a8(undefined8 param_1)

{
  func_0x0001088c6938();
  return param_1;
}



/* Entry: 1088c47cc; end: 1088c47df;  */

void FUN_1088c47cc(void)

{
  FUN_1088c47a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c47e0; end: 1088c47ff;  */

undefined ** FUN_1088c47e0(void)

{
  return &PTR_DAT_110a835d0;
}



/* Entry: 1088c4800; end: 1088c485f;  */

long * FUN_1088c4800(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088c68ac();
  if (param_1[2] != 0) {
    func_0x0001088c6970();
    func_0x0001088c6a70();
    func_0x0001088c6acc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088c69c0();
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



/* Entry: 1088c4860; end: 1088c488f;  */

long FUN_1088c4860(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x0001088c6b5c();
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



/* Entry: 1088c4890; end: 1088c48c7;  */

long FUN_1088c4890(long param_1)

{
  func_0x0001088c6938();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1088c48c8; end: 1088c48cb;  */

long FUN_1088c48c8(long param_1)

{
  func_0x0001088c6938();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1088c48cc; end: 1088c48df;  */

void FUN_1088c48cc(void)

{
  FUN_1088c4890();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c48e0; end: 1088c48eb;  */

undefined ** FUN_1088c48e0(void)

{
  return &PTR_DAT_110a83618;
}



/* Entry: 1088c48ec; end: 1088c4a13;  */

long * FUN_1088c48ec(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x0001088c68ac();
  lVar4 = param_1[3];
  puVar1 = (ulong *)(param_1 + 2);
  for (iVar6 = 0; (int)lVar4 != iVar6; iVar6 = iVar6 + 1) {
    uVar5 = *puVar1;
    puVar2 = puVar1;
    if ((uVar5 & 1) != 0) {
      puVar2 = (ulong *)(uVar5 + (long)iVar6 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar2 + 0x14);
    func_0x0001088c68bc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c69c0();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar3 = iVar6 - iVar7;
        param_3 = (ulong)uVar3;
        if (uVar3 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1088c4a14; end: 1088c4a27;  */

void FUN_1088c4a14(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0001088c69cc();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_1088c4a14();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c69b0();
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



/* Entry: 1088c4a28; end: 1088c4aa7;  */

void FUN_1088c4a28(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x28) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c6b30();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088c4a84;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c4fe0();
    }
  }
  else {
    if (*(int *)(param_1 + 0x28) != 1) goto LAB_1088c4a84;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c6b30();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088c4a84;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1088c4e8c();
    }
  }
  __ZdlPv();
LAB_1088c4a84:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 1088c4aa8; end: 1088c4aeb;  */

long FUN_1088c4aa8(long param_1)

{
  func_0x0001088c6938();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a298();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1088c4a28(param_1);
  }
  return param_1;
}



/* Entry: 1088c4aec; end: 1088c4aef;  */

long FUN_1088c4aec(long param_1)

{
  func_0x0001088c6938();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a298();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1088c4a28(param_1);
  }
  return param_1;
}



/* Entry: 1088c4af0; end: 1088c4b03;  */

void FUN_1088c4af0(void)

{
  FUN_1088c4aa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c4b04; end: 1088c4b17;  */

undefined8 FUN_1088c4b04(undefined8 param_1)

{
  func_0x0001088c6938();
  func_0x0001088c6a68();
  return param_1;
}



/* Entry: 1088c4b18; end: 1088c4c6f;  */

void FUN_1088c4b18(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088c6a88();
  if ((extraout_x8 & 1) != 0) {
    FUN_1088bb7b8(unaff_x19[3]);
  }
  FUN_1088c4a28();
  func_0x0001088c6b0c();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1088c4c70; end: 1088c4c8b;  */

long FUN_1088c4c70(long param_1)

{
  long extraout_x8;
  
  FUN_1088bb91c();
  func_0x0001088c6844();
  return param_1 + extraout_x8;
}



/* Entry: 1088c4c8c; end: 1088c4da3;  */

void FUN_1088c4c8c(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar3;
  
  func_0x0001088c68f8();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x0001088c6b18();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      param_1 = puVar3;
      func_0x000107c2a2f0();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_1088bb9c8();
    }
  }
  func_0x0001088c6a10();
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 == 0) goto LAB_1088c4d88;
  iVar2 = (int)unaff_x21[5];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_1088c4a28();
    }
    *(int *)(unaff_x21 + 5) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[4];
      func_0x0001088c4dec();
      goto LAB_1088c4d88;
    }
    func_0x0001088c6674();
    param_1 = puVar3;
  }
  else {
    if (iVar1 != 1) goto LAB_1088c4d88;
    if (iVar2 == 1) {
      param_1 = (ulong *)unaff_x21[4];
      FUN_1088c4da4();
      goto LAB_1088c4d88;
    }
    FUN_1088c6628();
    param_1 = puVar3;
  }
  unaff_x21[4] = (ulong)param_1;
LAB_1088c4d88:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c68e8();
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



/* Entry: 1088c4da4; end: 1088c4e8b;  */

void FUN_1088c4da4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c68c8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c6a54();
    }
    func_0x0001088c6a60();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c69b0();
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



/* Entry: 1088c4e8c; end: 1088c4eb3;  */

undefined8 FUN_1088c4e8c(undefined8 param_1)

{
  func_0x0001088c6938();
  func_0x0001088c6a68();
  return param_1;
}



/* Entry: 1088c4eb4; end: 1088c4ec7;  */

void FUN_1088c4eb4(void)

{
  FUN_1088c4e8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c4ec8; end: 1088c4ed3;  */

undefined ** FUN_1088c4ec8(void)

{
  return &PTR_DAT_110a836a8;
}



/* Entry: 1088c4ed4; end: 1088c4eff;  */

void FUN_1088c4ed4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088c698c();
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



/* Entry: 1088c4f00; end: 1088c4f83;  */

long * FUN_1088c4f00(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x0001088c69f4();
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088c4f4c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar1 == 0) goto LAB_1088c4f4c;
  func_0x0001088c6a08();
  func_0x0001088c6a28();
  param_2 = unaff_x22;
LAB_1088c4f4c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x0001088c69c0();
  if ((long)plVar4 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 1088c4f84; end: 1088c4fdb;  */

void FUN_1088c4f84(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088c6924();
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
    func_0x0001088c69e8();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 1088c4fdc; end: 1088c4fdf;  */

void FUN_1088c4fdc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c68c8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c6a54();
    }
    func_0x0001088c6a60();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c69b0();
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



/* Entry: 1088c4fe0; end: 1088c5017;  */

long FUN_1088c4fe0(long param_1)

{
  func_0x0001088c6938();
  func_0x0001088c6a68();
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 1088c5018; end: 1088c502b;  */

void FUN_1088c5018(void)

{
  FUN_1088c4fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c502c; end: 1088c5037;  */

undefined ** FUN_1088c502c(void)

{
  return &PTR_DAT_110a836f0;
}



/* Entry: 1088c5038; end: 1088c5073;  */

void FUN_1088c5038(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088c698c();
  func_0x000107c3025c(unaff_x19 + 0x18);
  func_0x000107c3025c(unaff_x19 + 0x20);
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



/* Entry: 1088c5074; end: 1088c5187;  */

long * FUN_1088c5074(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  
  plVar1 = param_2;
  plVar5 = param_3;
  func_0x0001088c69f4();
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_1088c50ac;
  }
  else if ((int)plVar1 != 0) {
LAB_1088c50ac:
    func_0x0001088c6a08();
    param_2 = param_3;
    func_0x0001088c6950(param_3,1);
  }
  puVar4 = (undefined8 *)(*(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar4 + 0x17) < '\0') {
    if (puVar4[1] != 0) {
      puVar4 = (undefined8 *)*puVar4;
      goto LAB_1088c50f0;
    }
  }
  else if (*(char *)((long)puVar4 + 0x17) != '\0') {
LAB_1088c50f0:
    func_0x0001088c6a08(puVar4);
    param_2 = param_3;
    func_0x0001088c6950(param_3,2);
  }
  puVar4 = (undefined8 *)(*(ulong *)(unaff_x21 + 0x20) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar4 + 0x17) < '\0') {
    if (puVar4[1] == 0) goto LAB_1088c5150;
    puVar4 = (undefined8 *)*puVar4;
  }
  else if (*(char *)((long)puVar4 + 0x17) == '\0') goto LAB_1088c5150;
  func_0x0001088c6a08(puVar4);
  param_2 = param_3;
  func_0x0001088c6950(param_3,3);
LAB_1088c5150:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x0001088c69c0();
  if ((long)plVar5 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar5) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar3 - iVar6);
      if (iVar3 - iVar6 == 0 || iVar3 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar5);
}



/* Entry: 1088c5188; end: 1088c5223;  */

long FUN_1088c5188(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088c6924();
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
  uVar1 = *(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x0001088c6ab4();
  }
  uVar1 = *(ulong *)(unaff_x19 + 0x20) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x0001088c6ab4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088c69e8();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x28) = (int)param_1;
  return param_1;
}



/* Entry: 1088c5224; end: 1088c5227;  */

void FUN_1088c5224(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c68c8();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c6a54();
    }
    func_0x0001088c6a60();
  }
  uVar1 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c6a54();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  uVar1 = *(ulong *)(unaff_x20 + 0x20) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c6a54();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c69b0();
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



/* Entry: 1088c5228; end: 1088c524b;  */

undefined8 FUN_1088c5228(undefined8 param_1)

{
  func_0x0001088c6938();
  return param_1;
}



/* Entry: 1088c524c; end: 1088c524f;  */

undefined8 FUN_1088c524c(undefined8 param_1)

{
  func_0x0001088c6938();
  return param_1;
}



/* Entry: 1088c5250; end: 1088c5263;  */

void FUN_1088c5250(void)

{
  FUN_1088c5228();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c5264; end: 1088c526f;  */

undefined ** FUN_1088c5264(void)

{
  return &PTR_DAT_110a83738;
}



/* Entry: 1088c5270; end: 1088c52cf;  */

long * FUN_1088c5270(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088c68ac();
  if (param_1[2] != 0) {
    func_0x0001088c6970();
    func_0x0001088c6a70();
    func_0x0001088c6acc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088c69c0();
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



/* Entry: 1088c52d0; end: 1088c52ff;  */

long FUN_1088c52d0(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x0001088c6b5c();
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



/* Entry: 1088c5300; end: 1088c5327;  */

undefined8 FUN_1088c5300(undefined8 param_1)

{
  func_0x0001088c6938();
  func_0x0001088c6a68();
  return param_1;
}



/* Entry: 1088c5328; end: 1088c532b;  */

undefined8 FUN_1088c5328(undefined8 param_1)

{
  func_0x0001088c6938();
  func_0x0001088c6a68();
  return param_1;
}



/* Entry: 1088c532c; end: 1088c533f;  */

void FUN_1088c532c(void)

{
  FUN_1088c5300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c5340; end: 1088c534b;  */

undefined ** FUN_1088c5340(void)

{
  return &PTR_DAT_110a83780;
}



/* Entry: 1088c534c; end: 1088c540f;  */

long * FUN_1088c534c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001088c68ac();
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    param_4 = unaff_x19;
    func_0x000107c280a0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c69c0();
    if ((long)uVar2 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      uVar2 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar2) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)uVar2;
        uVar1 = iVar4 - iVar5;
        uVar2 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,uVar2 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar2);
  }
  return param_4;
}



/* Entry: 1088c5410; end: 1088c5413;  */

void FUN_1088c5410(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c68c8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c6a54();
    }
    func_0x0001088c6a60();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c69b0();
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



/* Entry: 1088c5414; end: 1088c544f;  */

long FUN_1088c5414(long param_1)

{
  func_0x0001088c6938();
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088c5450; end: 1088c5453;  */

long FUN_1088c5450(long param_1)

{
  func_0x0001088c6938();
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088c5454; end: 1088c5467;  */

void FUN_1088c5454(void)

{
  FUN_1088c5414();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c5468; end: 1088c5473;  */

undefined ** FUN_1088c5468(void)

{
  return &PTR_DAT_110a837d0;
}



/* Entry: 1088c5474; end: 1088c54bf;  */

void FUN_1088c5474(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_1088bf358(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 1088c54c0; end: 1088c55ab;  */

long * FUN_1088c54c0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  plVar4 = param_3;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x18);
    param_2 = (long *)0x1;
    func_0x0001088c691c();
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x28);
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x000107c280a8(param_2,uVar2);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    if (puVar6[1] == 0) goto LAB_1088c5574;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_1088c5574;
  func_0x0001088c6a08(puVar6);
  param_2 = param_3;
  func_0x0001088c6950(param_3,3);
LAB_1088c5574:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x0001088c69c0();
  if ((long)plVar4 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar5 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar5 - iVar7);
      if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar5);
  }
  _memcpy(param_2,lVar3,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 1088c55ac; end: 1088c5643;  */

void FUN_1088c55ac(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  cVar1 = *(char *)(uVar2 + 0x17);
  if (cVar1 < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_1088c55e8;
  }
  else if (cVar1 == '\0') goto LAB_1088c55e8;
  func_0x000107c282a0();
LAB_1088c55e8:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000107c2a268(*(undefined8 *)(param_1 + 0x20));
    func_0x0001088c6ab4();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088c69e8();
  }
  func_0x0001088c6b24();
  return;
}



/* Entry: 1088c5644; end: 1088c5647;  */

void FUN_1088c5644(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c68f8();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x0001088c6a54();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x0001088c6a10();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c68e8();
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



/* Entry: 1088c5648; end: 1088c56f3;  */

void FUN_1088c5648(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c68f8();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x0001088c6a54();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x0001088c6a10();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c68e8();
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



/* Entry: 1088c56f4; end: 1088c5727;  */

long FUN_1088c56f4(long param_1)

{
  func_0x0001088c6938();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c5414();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088c5728; end: 1088c572b;  */

long FUN_1088c5728(long param_1)

{
  func_0x0001088c6938();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c5414();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088c572c; end: 1088c573f;  */

void FUN_1088c572c(void)

{
  FUN_1088c56f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c5740; end: 1088c574b;  */

undefined ** FUN_1088c5740(void)

{
  return &PTR_DAT_110a83830;
}



/* Entry: 1088c574c; end: 1088c57df;  */

long * FUN_1088c574c(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001088c68ac();
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0001088c6970();
    param_4 = (long *)(ulong)*(byte *)(unaff_x20 + 0x20);
    uVar2 = 8;
    func_0x000107c280a8(8,param_1);
    func_0x000107c280a8(param_4,uVar2);
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    param_4 = (long *)0x2;
    func_0x0001088c691c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c69c0();
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



/* Entry: 1088c57e0; end: 1088c583f;  */

void FUN_1088c57e0(void)

{
  int iVar1;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088c6a88();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_1088c55ac();
    func_0x0001088c6844();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x20) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088c69e8();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 1088c5840; end: 1088c5843;  */

void FUN_1088c5840(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c68f8();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x0001088c66e8();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_1088c5648();
      puVar1 = puVar2;
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  func_0x0001088c6b48();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088c68e8();
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



/* Entry: 1088c5844; end: 1088c5867;  */

undefined8 FUN_1088c5844(undefined8 param_1)

{
  func_0x0001088c6938();
  return param_1;
}



/* Entry: 1088c5868; end: 1088c586b;  */

undefined8 FUN_1088c5868(undefined8 param_1)

{
  func_0x0001088c6938();
  return param_1;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088c0f30; end: 1088c0f63;  */

long FUN_1088c0f30(long param_1)

{
  func_0x0001088c3734();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c0cd8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088c0f64; end: 1088c0f67;  */

long FUN_1088c0f64(long param_1)

{
  func_0x0001088c3734();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c0cd8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088c0f68; end: 1088c0f7b;  */

void FUN_1088c0f68(void)

{
  FUN_1088c0f30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c0f7c; end: 1088c0f87;  */

undefined ** FUN_1088c0f7c(void)

{
  return &PTR_DAT_110a82a00;
}



/* Entry: 1088c0f88; end: 1088c1067;  */

void FUN_1088c0f88(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088c37e8();
  if ((extraout_x8 & 1) != 0) {
    FUN_1088c0d3c(unaff_x19[3]);
  }
  func_0x0001088c3918();
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



/* Entry: 1088c1068; end: 1088c1083;  */

long FUN_1088c1068(long param_1)

{
  long extraout_x8;
  
  FUN_1088c0e1c();
  FUN_1088c35dc();
  return param_1 + extraout_x8;
}



/* Entry: 1088c1084; end: 1088c1087;  */

void FUN_1088c1084(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c365c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088c390c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088c3900();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x0001088c3254();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_1088c0e9c();
    }
  }
  func_0x0001088c375c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088c366c();
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



/* Entry: 1088c1088; end: 1088c10e7;  */

void FUN_1088c1088(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c365c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088c390c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088c3900();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x0001088c3254();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_1088c0e9c();
    }
  }
  func_0x0001088c375c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088c366c();
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



/* Entry: 1088c10e8; end: 1088c1133;  */

void FUN_1088c10e8(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x0001088c37f4();
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_1088c0f30();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088c1134; end: 1088c1167;  */

long FUN_1088c1134(long param_1)

{
  func_0x0001088c3734();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1088c10e8(param_1);
  }
  return param_1;
}



/* Entry: 1088c1168; end: 1088c117b;  */

void FUN_1088c1168(void)

{
  FUN_1088c1134();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c117c; end: 1088c1187;  */

undefined ** FUN_1088c117c(void)

{
  return &PTR_DAT_110a82a48;
}



/* Entry: 1088c1188; end: 1088c1273;  */

void FUN_1088c1188(long param_1)

{
  ulong *puVar1;
  
  FUN_1088c10e8();
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



/* Entry: 1088c1274; end: 1088c1277;  */

void FUN_1088c1274(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  int extraout_w8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088c362c();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088c3800();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x0001088c39bc();
    if ((bool)in_ZR) {
      if (iVar1 == 2) {
        func_0x0001088c38dc();
        FUN_1088c1088();
      }
    }
    else {
      if (extraout_w8 != 0) {
        param_1 = unaff_x21;
        FUN_1088c10e8();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 2) {
        func_0x0001088c37d0();
        func_0x0001088c32ec();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c366c();
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



/* Entry: 1088c1278; end: 1088c12ab;  */

long FUN_1088c1278(long param_1)

{
  func_0x0001088c3734();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c0cd8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088c12ac; end: 1088c12af;  */

long FUN_1088c12ac(long param_1)

{
  func_0x0001088c3734();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c0cd8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088c12b0; end: 1088c12c3;  */

void FUN_1088c12b0(void)

{
  FUN_1088c1278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c12c4; end: 1088c12cf;  */

undefined ** FUN_1088c12c4(void)

{
  return &PTR_DAT_110a82a90;
}



/* Entry: 1088c12d0; end: 1088c13af;  */

void FUN_1088c12d0(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088c37e8();
  if ((extraout_x8 & 1) != 0) {
    FUN_1088c0d3c(unaff_x19[3]);
  }
  func_0x0001088c3918();
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



/* Entry: 1088c13b0; end: 1088c13b3;  */

void FUN_1088c13b0(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c365c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088c390c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088c3900();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x0001088c3254();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_1088c0e9c();
    }
  }
  func_0x0001088c375c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088c366c();
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



/* Entry: 1088c13b4; end: 1088c1413;  */

void FUN_1088c13b4(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c365c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088c390c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088c3900();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x0001088c3254();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_1088c0e9c();
    }
  }
  func_0x0001088c375c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088c366c();
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



/* Entry: 1088c1414; end: 1088c145f;  */

void FUN_1088c1414(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x0001088c37f4();
  if (extraout_w8 == 1) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_1088c1278();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088c1460; end: 1088c1493;  */

long FUN_1088c1460(long param_1)

{
  func_0x0001088c3734();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1088c1414(param_1);
  }
  return param_1;
}



/* Entry: 1088c1494; end: 1088c14a7;  */

void FUN_1088c1494(void)

{
  FUN_1088c1460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c14a8; end: 1088c14b3;  */

undefined ** FUN_1088c14a8(void)

{
  return &PTR_DAT_110a82ad8;
}



/* Entry: 1088c14b4; end: 1088c1597;  */

void FUN_1088c14b4(long param_1)

{
  ulong *puVar1;
  
  FUN_1088c1414();
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



/* Entry: 1088c1598; end: 1088c159b;  */

void FUN_1088c1598(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  int extraout_w8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088c362c();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088c3800();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x0001088c39bc();
    if ((bool)in_ZR) {
      if (iVar1 == 1) {
        func_0x0001088c38dc();
        FUN_1088c13b4();
      }
    }
    else {
      if (extraout_w8 != 0) {
        param_1 = unaff_x21;
        FUN_1088c1414();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x0001088c37d0();
        func_0x0001088c3350();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c366c();
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



/* Entry: 1088c159c; end: 1088c169b;  */

void FUN_1088c159c(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x00010b5ac7e0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 1088c169c; end: 1088c16df;  */

long FUN_1088c169c(long param_1)

{
  func_0x0001088c3734();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1088c159c(param_1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x0001088c15ec(param_1);
  }
  return param_1;
}



/* Entry: 1088c16e0; end: 1088c16f3;  */

void FUN_1088c16e0(void)

{
  FUN_1088c169c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c16f4; end: 1088c16ff;  */

undefined ** FUN_1088c16f4(void)

{
  return &PTR_DAT_110a82b18;
}



/* Entry: 1088c1700; end: 1088c186b;  */

void FUN_1088c1700(long param_1)

{
  ulong *puVar1;
  
  FUN_1088c159c();
  func_0x0001088c15ec(param_1);
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



/* Entry: 1088c186c; end: 1088c186f;  */

void FUN_1088c186c(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088c362c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088c3800();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x24) == iVar1) {
      if (iVar1 == 3) {
        func_0x0001088c38dc();
        func_0x00010b5aca8c();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x24) != 0) {
        param_1 = unaff_x21;
        func_0x0001088c159c();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
      if (iVar1 == 3) {
        func_0x0001088c37d0();
        FUN_1088c2d84();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 == 0) goto LAB_1088c0184;
  iVar2 = (int)unaff_x21[5];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x0001088c15ec();
    }
    *(int *)(unaff_x21 + 5) = iVar1;
  }
  if (iVar1 == 0xf) {
    if (iVar2 == 0xf) {
      func_0x0001088c38c0();
      func_0x0001088bffbc();
      goto LAB_1088c0184;
    }
    func_0x0001088c2f48();
    param_1 = unaff_x22;
  }
  else if (iVar1 == 0xd) {
    if (iVar2 == 0xd) {
      func_0x0001088c38c0();
      FUN_1088bff38();
      goto LAB_1088c0184;
    }
    func_0x0001088c2ee4();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 0xc) goto LAB_1088c0184;
    if (iVar2 == 0xc) {
      func_0x0001088c38c0();
      FUN_1088bff00();
      goto LAB_1088c0184;
    }
    func_0x0001088c2e7c();
    param_1 = unaff_x22;
  }
  unaff_x21[3] = (ulong)param_1;
LAB_1088c0184:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c366c();
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



/* Entry: 1088c1870; end: 1088c189b;  */

undefined8 FUN_1088c1870(undefined8 param_1)

{
  func_0x0001088c3734();
  FUN_1088c189c(param_1);
  return param_1;
}



/* Entry: 1088c189c; end: 1088c18b7;  */

void FUN_1088c189c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c1a94();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c18b8; end: 1088c18bb;  */

undefined8 FUN_1088c18b8(undefined8 param_1)

{
  func_0x0001088c3734();
  FUN_1088c189c(param_1);
  return param_1;
}



/* Entry: 1088c18bc; end: 1088c18cf;  */

void FUN_1088c18bc(void)

{
  FUN_1088c1870();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c18d0; end: 1088c18db;  */

undefined ** FUN_1088c18d0(void)

{
  return &PTR_DAT_110a82b60;
}



/* Entry: 1088c18dc; end: 1088c19bf;  */

void FUN_1088c18dc(long param_1)

{
  ulong *puVar1;
  
  FUN_1088c1a48();
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



/* Entry: 1088c19c0; end: 1088c19c3;  */

void FUN_1088c19c0(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088c365c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088c390c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088c3900();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x0001088c33b4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_1088c19c4();
    }
  }
  func_0x0001088c375c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088c366c();
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



/* Entry: 1088c19c4; end: 1088c1a47;  */

void FUN_1088c19c4(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  int extraout_w8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088c362c();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088c3800();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x0001088c39bc();
    if ((bool)in_ZR) {
      if (iVar1 == 1) {
        func_0x0001088c38dc();
        func_0x00010b5aca8c();
      }
    }
    else {
      if (extraout_w8 != 0) {
        param_1 = unaff_x21;
        FUN_1088c1a48();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x0001088c37d0();
        FUN_1088c2d84();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c366c();
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



/* Entry: 1088c1a48; end: 1088c1a93;  */

void FUN_1088c1a48(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x0001088c37f4();
  if (extraout_w8 == 1) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        func_0x00010b5ac7e0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088c1a94; end: 1088c1abf;  */

undefined8 FUN_1088c1a94(undefined8 param_1)

{
  func_0x0001088c3734();
  FUN_1088c1ac0(param_1);
  return param_1;
}



/* Entry: 1088c1ac0; end: 1088c1ad3;  */

void FUN_1088c1ac0(long param_1)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x0001088c37f4();
  if (extraout_w8 == 1) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        func_0x00010b5ac7e0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088c1ad4; end: 1088c1ae7;  */

void FUN_1088c1ad4(void)

{
  FUN_1088c1a94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c1ae8; end: 1088c1af3;  */

undefined ** FUN_1088c1ae8(void)

{
  return &PTR_DAT_110a82ba8;
}



/* Entry: 1088c1af4; end: 1088c1b9f;  */

long * FUN_1088c1af4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088c364c();
  if (*(int *)((long)param_1 + 0x1c) == 1) {
    func_0x0001088c3694();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088c3784();
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



/* Entry: 1088c1ba0; end: 1088c1ba3;  */

void FUN_1088c1ba0(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  int extraout_w8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088c362c();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088c3800();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x0001088c39bc();
    if ((bool)in_ZR) {
      if (iVar1 == 1) {
        func_0x0001088c38dc();
        func_0x00010b5aca8c();
      }
    }
    else {
      if (extraout_w8 != 0) {
        param_1 = unaff_x21;
        FUN_1088c1a48();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x0001088c37d0();
        FUN_1088c2d84();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c366c();
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



/* Entry: 1088c1ba4; end: 1088c1bf3;  */

void FUN_1088c1ba4(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  
  if (*(int *)(param_1 + 0x30) == 0xb) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_1088c2140();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 1088c1bf4; end: 1088c1c1f;  */

undefined8 FUN_1088c1bf4(undefined8 param_1)

{
  func_0x0001088c3734();
  FUN_1088c1c20(param_1);
  return param_1;
}



/* Entry: 1088c1c20; end: 1088c1c6f;  */

void FUN_1088c1c20(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c2008();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088c21f8();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x30) == 0xb) {
      uVar1 = *(ulong *)(param_1 + 8);
      if ((uVar1 & 1) != 0) {
        func_0x0001088c3778();
        uVar1 = extraout_x8;
      }
      if (uVar1 == 0) {
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_1088c2140();
        }
        __ZdlPv();
      }
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 1088c1c70; end: 1088c1c73;  */

undefined8 FUN_1088c1c70(undefined8 param_1)

{
  func_0x0001088c3734();
  FUN_1088c1c20(param_1);
  return param_1;
}



/* Entry: 1088c1c74; end: 1088c1c87;  */

void FUN_1088c1c74(void)

{
  FUN_1088c1bf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c1c88; end: 1088c1c97;  */

undefined8 FUN_1088c1c88(undefined8 param_1)

{
  func_0x0001088c3734();
  return param_1;
}



/* Entry: 1088c1c98; end: 1088c1cef;  */

void FUN_1088c1c98(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088c1cf0(param_1[3]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088c1d04(param_1[4]);
    }
  }
  FUN_1088c1ba4(param_1);
  func_0x0001088c3918();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1088c1cf0; end: 1088c1d03;  */

void FUN_1088c1cf0(long param_1)

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



/* Entry: 1088c1d04; end: 1088c1d2f;  */

void FUN_1088c1d04(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088c3720();
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



/* Entry: 1088c1d30; end: 1088c1e83;  */

long * FUN_1088c1d30(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088c364c();
  if (*(int *)(param_1 + 0x30) == 0xb) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x10);
    param_4 = (long *)0xb;
    func_0x0001088c3744();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_4 = (long *)0x12;
    func_0x0001088c3744();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    param_4 = (long *)0x13;
    func_0x0001088c3744();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c3784();
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



/* Entry: 1088c1e84; end: 1088c1e87;  */

void FUN_1088c1e84(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088c362c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088c3800();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[3];
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_1088c3418();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        FUN_1088c1f80();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[4];
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_1088c3480();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_1088c1fb0();
      }
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x30);
  if (iVar2 != 0) {
    if ((int)unaff_x21[6] == iVar2) {
      if (iVar2 == 0xb) {
        param_1 = (ulong *)unaff_x21[5];
        FUN_1088c1ff8();
      }
    }
    else {
      if ((int)unaff_x21[6] != 0) {
        param_1 = unaff_x21;
        FUN_1088c1ba4();
      }
      *(int *)(unaff_x21 + 6) = iVar2;
      if (iVar2 == 0xb) {
        FUN_1088c34cc();
        unaff_x21[5] = (ulong)unaff_x22;
        param_1 = unaff_x22;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001088c366c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088c1e88; end: 1088c1f7f;  */

void FUN_1088c1e88(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088c362c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088c3800();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[3];
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_1088c3418();
        unaff_x21[3] = (ulong)param_1;
      }
      else {
        FUN_1088c1f80();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[4];
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_1088c3480();
        unaff_x21[4] = (ulong)param_1;
      }
      else {
        FUN_1088c1fb0();
      }
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x30);
  if (iVar2 != 0) {
    if ((int)unaff_x21[6] == iVar2) {
      if (iVar2 == 0xb) {
        param_1 = (ulong *)unaff_x21[5];
        FUN_1088c1ff8();
      }
    }
    else {
      if ((int)unaff_x21[6] != 0) {
        param_1 = unaff_x21;
        FUN_1088c1ba4();
      }
      *(int *)(unaff_x21 + 6) = iVar2;
      if (iVar2 == 0xb) {
        FUN_1088c34cc();
        unaff_x21[5] = (ulong)unaff_x22;
        param_1 = unaff_x22;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001088c366c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088c1f80; end: 1088c1faf;  */

void FUN_1088c1f80(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
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



/* Entry: 1088c1fb0; end: 1088c1ff7;  */

void FUN_1088c1fb0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c367c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c38a4();
    }
    func_0x0001088c386c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c374c();
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



/* Entry: 1088c1ff8; end: 1088c2007;  */

void FUN_1088c1ff8(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
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



/* Entry: 1088c2008; end: 1088c202b;  */

undefined8 FUN_1088c2008(undefined8 param_1)

{
  func_0x0001088c3734();
  return param_1;
}



/* Entry: 1088c202c; end: 1088c202f;  */

undefined8 FUN_1088c202c(undefined8 param_1)

{
  func_0x0001088c3734();
  return param_1;
}



/* Entry: 1088c2030; end: 1088c2043;  */

void FUN_1088c2030(void)

{
  FUN_1088c2008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c2044; end: 1088c204f;  */

undefined ** FUN_1088c2044(void)

{
  return &PTR_DAT_110a82c58;
}



/* Entry: 1088c2050; end: 1088c20e3;  */

long * FUN_1088c2050(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001088c364c();
  plVar2 = param_1;
  if ((char)param_1[2] == '\x01') {
    func_0x0001088c379c();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x0001088c3990();
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x0001088c379c();
    param_4 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x0001088c3984();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c3784();
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



/* Entry: 1088c20e4; end: 1088c213f;  */

long FUN_1088c20e4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + lVar1 + 1;
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



/* Entry: 1088c2140; end: 1088c2163;  */

undefined8 FUN_1088c2140(undefined8 param_1)

{
  func_0x0001088c3734();
  return param_1;
}



/* Entry: 1088c2164; end: 1088c2177;  */

void FUN_1088c2164(void)

{
  FUN_1088c2140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c2178; end: 1088c21f7;  */

undefined ** FUN_1088c2178(void)

{
  return &PTR_DAT_110a82cc0;
}



/* Entry: 1088c21f8; end: 1088c221f;  */

undefined8 FUN_1088c21f8(undefined8 param_1)

{
  func_0x0001088c3734();
  func_0x0001088c3874();
  return param_1;
}



/* Entry: 1088c2220; end: 1088c2223;  */

undefined8 FUN_1088c2220(undefined8 param_1)

{
  func_0x0001088c3734();
  func_0x0001088c3874();
  return param_1;
}



/* Entry: 1088c2224; end: 1088c2237;  */

void FUN_1088c2224(void)

{
  FUN_1088c21f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c2238; end: 1088c2243;  */

undefined ** FUN_1088c2238(void)

{
  return &PTR_DAT_110a82d18;
}



/* Entry: 1088c2244; end: 1088c22e3;  */

long * FUN_1088c2244(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x21;
  int iVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  
  plVar5 = param_3;
  func_0x0001088c38d0();
  plVar4 = (long *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)plVar4 + 0x17);
  if (lVar2 < 0) {
    lVar2 = plVar4[1];
    if (lVar2 == 0) goto LAB_1088c22ac;
    plVar1 = (long *)*plVar4;
  }
  else {
    plVar1 = plVar4;
    if (*(char *)((long)plVar4 + 0x17) == '\0') goto LAB_1088c22ac;
  }
  func_0x000107c303d4(plVar1,lVar2,1,&UNK_10f4ea4e7);
  unaff_x19 = param_3;
  func_0x000107c280a0(param_3,2);
  plVar5 = plVar4;
LAB_1088c22ac:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x0001088c3784();
  if ((long)plVar5 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x19 < (long)(int)plVar5) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)unaff_x19) + 0x10;
      iVar3 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar3 - iVar6);
      if (iVar3 - iVar6 == 0 || iVar3 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)unaff_x19 + (long)iVar6;
      unaff_x19 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x19 + (long)iVar3);
  }
  _memcpy(unaff_x19,lVar2,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)plVar5);
}



/* Entry: 1088c22e4; end: 1088c233b;  */

void FUN_1088c22e4(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088c36bc();
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
    func_0x0001088c3898();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 1088c233c; end: 1088c233f;  */

void FUN_1088c233c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c367c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c38a4();
    }
    func_0x0001088c386c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c374c();
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



/* Entry: 1088c2340; end: 1088c238b;  */

void FUN_1088c2340(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x0001088c37f4();
  if (extraout_w8 == 7) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_1088c1bf4();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088c238c; end: 1088c23b7;  */

undefined8 FUN_1088c238c(undefined8 param_1)

{
  func_0x0001088c3734();
  FUN_1088c23b8(param_1);
  return param_1;
}



/* Entry: 1088c23b8; end: 1088c23cb;  */

void FUN_1088c23b8(long param_1)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x0001088c37f4();
  if (extraout_w8 == 7) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088c3778();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_1088c1bf4();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088c23cc; end: 1088c23df;  */

void FUN_1088c23cc(void)

{
  FUN_1088c238c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c23e0; end: 1088c23eb;  */

undefined ** FUN_1088c23e0(void)

{
  return &PTR_DAT_110a82d78;
}



/* Entry: 1088c23ec; end: 1088c24d7;  */

void FUN_1088c23ec(long param_1)

{
  ulong *puVar1;
  
  FUN_1088c2340();
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



/* Entry: 1088c24d8; end: 1088c255b;  */

void FUN_1088c24d8(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  int extraout_w8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088c362c();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088c3800();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x0001088c39bc();
    if ((bool)in_ZR) {
      if (iVar1 == 7) {
        func_0x0001088c38dc();
        FUN_1088c1e88();
      }
    }
    else {
      if (extraout_w8 != 0) {
        param_1 = unaff_x21;
        FUN_1088c2340();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 7) {
        func_0x0001088c37d0();
        FUN_1088c352c();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c366c();
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



/* Entry: 1088c255c; end: 1088c2583;  */

undefined8 FUN_1088c255c(undefined8 param_1)

{
  func_0x0001088c3734();
  func_0x0001088c3874();
  return param_1;
}



/* Entry: 1088c2584; end: 1088c2597;  */

void FUN_1088c2584(void)

{
  FUN_1088c255c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c2598; end: 1088c25a3;  */

undefined ** FUN_1088c2598(void)

{
  return &PTR_DAT_110a82dc8;
}



/* Entry: 1088c25a4; end: 1088c2683;  */

void FUN_1088c25a4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088c3720();
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



/* Entry: 1088c2684; end: 1088c2687;  */

void FUN_1088c2684(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c367c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c38a4();
    }
    func_0x0001088c386c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c374c();
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



/* Entry: 1088c2688; end: 1088c26af;  */

undefined8 FUN_1088c2688(undefined8 param_1)

{
  func_0x0001088c3734();
  func_0x0001088c3874();
  return param_1;
}



/* Entry: 1088c26b0; end: 1088c26c3;  */

void FUN_1088c26b0(void)

{
  FUN_1088c2688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088c26c4; end: 1088c26cf;  */

undefined ** FUN_1088c26c4(void)

{
  return &PTR_DAT_110a82e20;
}



/* Entry: 1088c26d0; end: 1088c27af;  */

void FUN_1088c26d0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088c3720();
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



/* Entry: 1088c27b0; end: 1088c286b;  */

void FUN_1088c27b0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088c367c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088c38a4();
    }
    func_0x0001088c386c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088c374c();
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



/* Entry: 1088c286c; end: 1088c2ccb;  */

void FUN_1088c286c(long param_1)

{
  if (param_1 == 0) {
    func_0x0001088c372c();
  }
  else {
    func_0x0001088c3620();
  }
  func_0x0001088c36a4(&PTR_DAT_110a82008);
  return;
}



/* Entry: 1088c2ccc; end: 1088c2d83;  */

undefined8 * FUN_1088c2ccc(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088c372c();
  }
  else {
    func_0x00010b4d80e0(param_1,0x20);
  }
  puVar3 = puVar2 + 1;
  *puVar3 = param_1;
  *puVar2 = &PTR_FUN_110a82378;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001088c3640();
  }
  *(undefined4 *)(puVar2 + 3) = 0;
  iVar1 = *(int *)(param_2 + 0x1c);
  *(int *)((long)puVar2 + 0x1c) = iVar1;
  if (iVar1 == 0x1f) {
    func_0x0001088c3924();
    func_0x0001088c31a4();
  }
  else if (iVar1 == 0x16) {
    func_0x0001088c3924();
    FUN_1088c30f8();
  }
  else if (iVar1 == 0x1e) {
    func_0x0001088c3924();
    FUN_1088c3158();
  }
  else {
    if (iVar1 != 5) {
      return puVar2;
    }
    func_0x0001088c3924();
    func_0x0001088c3074();
  }
  puVar2[2] = puVar3;
  return puVar2;
}



/* Entry: 1088c2d84; end: 1088c2dc3;  */

undefined8 * FUN_1088c2d84(long param_1)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001088c39a4();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = unaff_x20;
    func_0x00010b4d80e0();
  }
  puVar1[1] = unaff_x20;
  *puVar1 = &PTR_DAT_110d15940;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_108904afc(puVar1 + 3);
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b5acbd8();
  }
  puVar1[6] = unaff_x20;
  puVar1[7] = *(undefined8 *)(unaff_x19 + 0x38);
  return puVar1;
}



/* Entry: 1088c2dc4; end: 1088c30f7;  */

void FUN_1088c2dc4(long param_1)

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
  func_0x0001088c37dc(&PTR_DAT_110a82058);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088c3640();
  }
  func_0x0001088c3714();
  func_0x0001088c3848();
  return;
}



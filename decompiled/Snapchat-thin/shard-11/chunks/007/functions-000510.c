/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088e455c; end: 1088e46bf;  */

void FUN_1088e455c(ulong *param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x21;
  uint unaff_w23;
  
  func_0x0001088e98cc();
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    func_0x0001088e9f48();
  }
  func_0x0001088e9ba0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088e9c20();
    }
    func_0x0001088e9df8();
  }
  func_0x0001088e9e9c();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088e9fb0();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088e9b0c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088e9b0c();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  func_0x0001088e9824();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x0001088e98dc();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088e46c0; end: 1088e4727;  */

void FUN_1088e46c0(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e9dd4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9dc8();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088e9c98();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x0001088e995c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e4728; end: 1088e47d3;  */

void FUN_1088e4728(long param_1,ulong param_2)

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



/* Entry: 1088e47d4; end: 1088e4847;  */

void FUN_1088e47d4(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e9dd4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9dc8();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088e9c98();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  func_0x0001088e995c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e4848; end: 1088e48d7;  */

void FUN_1088e4848(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    func_0x0001088e9f48();
  }
  func_0x0001088e9ba0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088e9c20();
    }
    func_0x0001088e9df8();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9fb0();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088e9b0c();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x0001088e9824();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e48d8; end: 1088e48ef;  */

void FUN_1088e48d8(long param_1,ulong param_2)

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



/* Entry: 1088e48f0; end: 1088e498b;  */

void FUN_1088e48f0(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    func_0x0001088e9f48();
  }
  func_0x0001088e9ba0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088e9c20();
    }
    func_0x0001088e9df8();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9fb0();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088e9b0c();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x21 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  func_0x0001088e9824();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e498c; end: 1088e4997;  */

void FUN_1088e498c(long param_1,ulong param_2)

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



/* Entry: 1088e4998; end: 1088e4a27;  */

void FUN_1088e4998(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e9a30();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e9c20();
    }
    func_0x0001088e9e7c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9bf0();
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



/* Entry: 1088e4a28; end: 1088e4a47;  */

void FUN_1088e4a28(long param_1,long param_2)

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



/* Entry: 1088e4a48; end: 1088e4a9b;  */

void FUN_1088e4a48(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e9a30();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e9c20();
    }
    func_0x0001088e9e7c();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9bf0();
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



/* Entry: 1088e4a9c; end: 1088e4b0f;  */

void FUN_1088e4a9c(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e9dd4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9dc8();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088e9c98();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x0001088e995c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e4b10; end: 1088e4b43;  */

long FUN_1088e4b10(long param_1)

{
  func_0x0001088e9a50();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e4b44; end: 1088e4b57;  */

void FUN_1088e4b44(void)

{
  FUN_1088e4b10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e4b58; end: 1088e4b63;  */

undefined ** FUN_1088e4b58(void)

{
  return &PTR_DAT_110a89ce8;
}



/* Entry: 1088e4b64; end: 1088e4b97;  */

void FUN_1088e4b64(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088e9c00();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9c60();
  }
  func_0x0001088e9cfc();
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



/* Entry: 1088e4b98; end: 1088e4c33;  */

long * FUN_1088e4b98(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e98a8();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9794();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9914();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9b50();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9e5c();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9a9c();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
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



/* Entry: 1088e4c34; end: 1088e4caf;  */

void FUN_1088e4c34(int param_1)

{
  ulong extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x0001088e9c00();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088e9c58();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0001088e9878(0xfffffff7);
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    func_0x0001088e9878();
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x0001088e99d0();
    func_0x0001088e9cac();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088e4cb0; end: 1088e4cb3;  */

void FUN_1088e4cb0(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e9dd4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9dc8();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088e9c98();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x0001088e995c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e4cb4; end: 1088e4ce7;  */

long FUN_1088e4cb4(long param_1)

{
  func_0x0001088e9a50();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e4ce8; end: 1088e4ceb;  */

long FUN_1088e4ce8(long param_1)

{
  func_0x0001088e9a50();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e4cec; end: 1088e4cff;  */

void FUN_1088e4cec(void)

{
  FUN_1088e4cb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e4d00; end: 1088e4d0b;  */

undefined ** FUN_1088e4d00(void)

{
  return &PTR_DAT_110a89d38;
}



/* Entry: 1088e4d0c; end: 1088e4d3f;  */

void FUN_1088e4d0c(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088e9c00();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9c60();
  }
  func_0x0001088e9cfc();
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



/* Entry: 1088e4d40; end: 1088e4ddb;  */

long * FUN_1088e4d40(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e98a8();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9794();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9914();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9b50();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9e5c();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9a9c();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
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



/* Entry: 1088e4ddc; end: 1088e4e57;  */

void FUN_1088e4ddc(int param_1)

{
  ulong extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x0001088e9c00();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088e9c58();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0001088e9878(0xfffffff7);
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    func_0x0001088e9878();
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x0001088e99d0();
    func_0x0001088e9cac();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088e4e58; end: 1088e4ed7;  */

void FUN_1088e4e58(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e9dd4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9dc8();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088e9c98();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x0001088e995c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e4ed8; end: 1088e4f2f;  */

long FUN_1088e4ed8(long param_1)

{
  func_0x0001088e9a50();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1088e4f30; end: 1088e4f43;  */

void FUN_1088e4f30(void)

{
  FUN_1088e4ed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e4f44; end: 1088e4f4f;  */

undefined ** FUN_1088e4f44(void)

{
  return &PTR_DAT_110a89d90;
}



/* Entry: 1088e4f50; end: 1088e4fa7;  */

void FUN_1088e4f50(ulong *param_1)

{
  undefined1 uVar1;
  ulong extraout_x8;
  uint unaff_w20;
  
  uVar1 = (int)param_1[4] == 1;
  if (0 < (int)param_1[4]) {
    func_0x0001053936e4(param_1 + 3);
  }
  func_0x0001088e9fa4();
  if (!(bool)uVar1) {
    if ((unaff_w20 & 1) != 0) {
      func_0x0001088e9ef8();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0001088e9e54();
    }
  }
  func_0x0001088e9ea8();
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



/* Entry: 1088e4fa8; end: 1088e50cf;  */

long * FUN_1088e4fa8(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e98bc();
  lVar2 = param_1[4];
  for (iVar3 = 0; (int)lVar2 != iVar3; iVar3 = iVar3 + 1) {
    func_0x0001088e9e30();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x0001088e99a8();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x18);
    param_4 = (long *)0x2;
    func_0x0001088e9a58();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    param_4 = (long *)0x3;
    func_0x0001088e9a58();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9a9c();
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



/* Entry: 1088e50d0; end: 1088e50e3;  */

void FUN_1088e50d0(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  uint unaff_w23;
  
  func_0x0001088e98cc();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088e9de0();
  }
  func_0x0001088e9ec0();
  func_0x0001088e9e9c();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088e9b0c();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088e9f54();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088e9b0c();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  func_0x0001088e9824();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088e98dc();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088e50e4; end: 1088e512b;  */

long FUN_1088e50e4(long param_1)

{
  func_0x0001088e9a50();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  func_0x0001088e9d8c();
  return param_1;
}



/* Entry: 1088e512c; end: 1088e513f;  */

void FUN_1088e512c(void)

{
  FUN_1088e50e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e5140; end: 1088e514b;  */

undefined ** FUN_1088e5140(void)

{
  return &PTR_DAT_110a89de8;
}



/* Entry: 1088e514c; end: 1088e519b;  */

void FUN_1088e514c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x0001088e9d44();
  func_0x0001088e9fa4();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x0001088e9ef8();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0001088e9e54();
    }
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
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



/* Entry: 1088e519c; end: 1088e52b3;  */

long * FUN_1088e519c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e98bc();
  if ((int)param_1[8] != 0) {
    func_0x0001088e9818();
    func_0x0001088e9d10();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9b04();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x18);
    param_1 = (long *)0x3;
    func_0x0001088e9a58();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    func_0x0001088e9818();
    param_4 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x0001088e9d38();
  }
  iVar4 = *(int *)(unaff_x20 + 0x20);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x0001088e9bb8(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = (long *)0x5;
    func_0x0001088e9a58();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    param_4 = (long *)0x6;
    func_0x0001088e9a58();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9a9c();
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



/* Entry: 1088e52b4; end: 1088e536f;  */

void FUN_1088e52b4(void)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  uint unaff_w21;
  long unaff_x22;
  
  func_0x0001088e97d8();
  while (unaff_x22 != 0) {
    func_0x0001088e9e28();
    func_0x0001088e9f8c();
  }
  func_0x0001088e9f98();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      func_0x0001088e9ef0();
      func_0x0001088e9b2c();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      func_0x0001088e9e4c();
      func_0x0001088e9b2c();
    }
  }
  if (*(int *)(unaff_x19 + 0x40) != 0) {
    func_0x0001088e9970(0xfffffff7);
  }
  if (*(int *)(unaff_x19 + 0x44) != 0) {
    func_0x0001088e99d0();
  }
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    uVar2 = uVar1 & 0xfffffffffffffffe;
    uVar1 = (ulong)*(char *)(uVar2 + 0x1f);
    if ((long)uVar1 < 0) {
      uVar1 = *(ulong *)(uVar2 + 0x10);
    }
  }
  func_0x0001088e9d18(uVar1);
  return;
}



/* Entry: 1088e5370; end: 1088e5373;  */

void FUN_1088e5370(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  
  func_0x0001088e98cc();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088e9de0();
  }
  func_0x0001088e9cb8();
  func_0x0001088e9e9c();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088e9b0c();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088e9f54();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088e9b0c();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x21 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  func_0x0001088e9824();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088e98dc();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088e5374; end: 1088e53b3;  */

long FUN_1088e5374(long param_1)

{
  func_0x0001088e9a50();
  func_0x0001088e9d84();
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e53b4; end: 1088e53c7;  */

void FUN_1088e53b4(void)

{
  FUN_1088e5374();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e53c8; end: 1088e53d3;  */

undefined ** FUN_1088e53c8(void)

{
  return &PTR_DAT_110a89e30;
}



/* Entry: 1088e53d4; end: 1088e5417;  */

void FUN_1088e53d4(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x0001088e9b70();
  func_0x000107c3025c(unaff_x19 + 4);
  if ((unaff_x19[2] & 1) != 0) {
    FUN_1088bf358(unaff_x19[5]);
  }
  func_0x0001088e9ea8();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 1088e5418; end: 1088e54f3;  */

long * FUN_1088e5418(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long unaff_x22;
  int iVar3;
  
  func_0x0001088e9a14();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x28);
    func_0x0001088e9894();
    unaff_x20 = param_1;
  }
  func_0x0001088e9c68(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_1088e5464;
  }
  else if ((int)param_2 != 0) {
LAB_1088e5464:
    param_4 = (long *)&UNK_10f4ebdbb;
    func_0x0001088e9b90();
    param_2 = 2;
    param_1 = unaff_x19;
    func_0x0001088e9984();
    unaff_x20 = param_1;
  }
  func_0x0001088e9c68(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_1088e54c0;
  }
  else if ((int)param_2 == 0) goto LAB_1088e54c0;
  param_4 = (long *)&UNK_10f4ebdef;
  func_0x0001088e9b90();
  func_0x0001088e9984();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_1088e54c0:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088e9a9c();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088e9d5c();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1088e54f4; end: 1088e557f;  */

void FUN_1088e54f4(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x0001088e9abc();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  func_0x0001088e9c38(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088e9b2c();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x000107c2a268(*(undefined8 *)(unaff_x19 + 0x28));
    func_0x0001088e9b2c();
  }
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar2 & 0xfffffffffffffffe;
    uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar2 < 0) {
      uVar2 = *(ulong *)(uVar3 + 0x10);
    }
  }
  func_0x0001088e9d18(uVar2);
  return;
}



/* Entry: 1088e5580; end: 1088e5583;  */

void FUN_1088e5580(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    func_0x0001088e9f48();
  }
  func_0x0001088e9ba0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088e9c20();
    }
    func_0x0001088e9df8();
  }
  func_0x0001088e9c2c(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088e9c20();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x28);
    if (param_1 == (ulong *)0x0) {
      func_0x0001088e9b0c();
      *(ulong **)(unaff_x21 + 0x28) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x0001088e9824();
  if ((extraout_x8_01 & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e5584; end: 1088e55b7;  */

long FUN_1088e5584(long param_1)

{
  func_0x0001088e9a50();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e55b8; end: 1088e55cb;  */

void FUN_1088e55b8(void)

{
  FUN_1088e5584();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e55cc; end: 1088e55d7;  */

undefined ** FUN_1088e55cc(void)

{
  return &PTR_DAT_110a89e80;
}



/* Entry: 1088e55d8; end: 1088e560b;  */

void FUN_1088e55d8(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088e9c00();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9c60();
  }
  func_0x0001088e9e8c();
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



/* Entry: 1088e560c; end: 1088e5677;  */

long * FUN_1088e560c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e98a8();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9794();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9914();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9a9c();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
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



/* Entry: 1088e5678; end: 1088e56d3;  */

void FUN_1088e5678(int param_1)

{
  ulong extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x0001088e9c00();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088e9c58();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0001088e993c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088e56d4; end: 1088e56d7;  */

void FUN_1088e56d4(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e9dd4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9dc8();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088e9c98();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x0001088e995c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e56d8; end: 1088e5717;  */

long FUN_1088e56d8(long param_1)

{
  func_0x0001088e9a50();
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  func_0x0001088e9d8c();
  return param_1;
}



/* Entry: 1088e5718; end: 1088e572b;  */

void FUN_1088e5718(void)

{
  FUN_1088e56d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e572c; end: 1088e5737;  */

undefined ** FUN_1088e572c(void)

{
  return &PTR_DAT_110a89ed0;
}



/* Entry: 1088e5738; end: 1088e5777;  */

void FUN_1088e5738(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x0001088e9d44();
  func_0x000107c3025c(unaff_x19 + 6);
  if ((unaff_x19[2] & 1) != 0) {
    func_0x0001088e9e54();
  }
  func_0x0001088e9ea8();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 1088e5778; end: 1088e584b;  */

long * FUN_1088e5778(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  func_0x0001088e9a14();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x38);
    func_0x0001088e9894();
    unaff_x20 = param_1;
  }
  iVar2 = *(int *)(unaff_x21 + 0x20);
  for (puVar3 = (undefined8 *)0x0; iVar2 != (int)puVar3;
      puVar3 = (undefined8 *)(ulong)((int)puVar3 + 1)) {
    func_0x0001088e9bb8(*(undefined8 *)(unaff_x21 + 0x18));
    param_1 = (long *)0x2;
    func_0x0001088e9990();
    unaff_x20 = param_1;
  }
  func_0x0001088e9c68(*(undefined8 *)(unaff_x21 + 0x30));
  if (param_2 < 0) {
    if (puVar3[1] == 0) goto LAB_1088e5818;
    puVar3 = (undefined8 *)*puVar3;
  }
  else if ((int)param_2 == 0) goto LAB_1088e5818;
  param_4 = (long *)&UNK_10f4ebe23;
  func_0x0001088e9b90(puVar3);
  func_0x0001088e9984();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_1088e5818:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088e9a9c();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088e9d5c();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar4);
      if (iVar2 - iVar4 == 0 || iVar2 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 1088e584c; end: 1088e58c7;  */

void FUN_1088e584c(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x22;
  
  func_0x0001088e97d8();
  while (unaff_x22 != 0) {
    func_0x0001088e9e28();
    func_0x0001088e9f8c();
  }
  func_0x0001088e9c38(*(undefined8 *)(unaff_x19 + 0x30));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088e9b2c();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001088e9e4c();
    func_0x0001088e9b2c();
  }
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar2 & 0xfffffffffffffffe;
    uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar2 < 0) {
      uVar2 = *(ulong *)(uVar3 + 0x10);
    }
  }
  func_0x0001088e9d18(uVar2);
  return;
}



/* Entry: 1088e58c8; end: 1088e58cb;  */

void FUN_1088e58c8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088e9de0();
  }
  func_0x0001088e9cb8();
  func_0x0001088e9c2c(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088e9c20();
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9f54();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088e9b0c();
      *(ulong **)(unaff_x21 + 0x38) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x0001088e9824();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e58cc; end: 1088e5913;  */

long FUN_1088e58cc(long param_1)

{
  func_0x0001088e9a50();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1088e5914; end: 1088e5927;  */

void FUN_1088e5914(void)

{
  FUN_1088e58cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e5928; end: 1088e5933;  */

undefined ** FUN_1088e5928(void)

{
  return &PTR_DAT_110a89f28;
}



/* Entry: 1088e5934; end: 1088e5987;  */

void FUN_1088e5934(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x0001088e9ef8();
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x38) = 0;
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



/* Entry: 1088e5988; end: 1088e5ac3;  */

long * FUN_1088e5988(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e98a8();
  if ((extraout_x8 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x30);
    param_3 = (ulong)*(uint *)(param_2 + 3);
    func_0x0001088e99a8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x0001088e9818();
    param_2 = param_1;
    func_0x0001088e9b04();
    func_0x0001088e9d2c();
    param_4 = param_1;
  }
  iVar4 = *(int *)(unaff_x20 + 0x20);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x0001088e9e30();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x1c);
    param_4 = (long *)0x3;
    func_0x0001088e9a58();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9a9c();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
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



/* Entry: 1088e5ac4; end: 1088e5ad7;  */

void FUN_1088e5ac4(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088e9de0();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  FUN_1088e5ac4();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x30);
    if (puVar1 == (ulong *)0x0) {
      func_0x0001088e9b0c();
      *(ulong **)(unaff_x21 + 0x30) = puVar1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  func_0x0001088e9824();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e5ad8; end: 1088e5afb;  */

undefined8 FUN_1088e5ad8(undefined8 param_1)

{
  func_0x0001088e9a50();
  return param_1;
}



/* Entry: 1088e5afc; end: 1088e5aff;  */

undefined8 FUN_1088e5afc(undefined8 param_1)

{
  func_0x0001088e9a50();
  return param_1;
}



/* Entry: 1088e5b00; end: 1088e5b13;  */

void FUN_1088e5b00(void)

{
  FUN_1088e5ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e5b14; end: 1088e5b37;  */

undefined ** FUN_1088e5b14(void)

{
  return &PTR_DAT_110a89f80;
}



/* Entry: 1088e5b38; end: 1088e5bbf;  */

long * FUN_1088e5b38(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e98bc();
  if ((int)param_1[3] != 0) {
    func_0x0001088e9818();
    func_0x0001088e9d10();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9b04();
    func_0x0001088e9d2c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9a9c();
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



/* Entry: 1088e5bc0; end: 1088e5c4f;  */

ulong FUN_1088e5bc0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  return uVar1;
}



/* Entry: 1088e5c50; end: 1088e5c93;  */

long FUN_1088e5c50(long param_1)

{
  func_0x0001088e9a50();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2b4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e5c94; end: 1088e5ca7;  */

void FUN_1088e5c94(void)

{
  FUN_1088e5c50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e5ca8; end: 1088e5cb3;  */

undefined ** FUN_1088e5ca8(void)

{
  return &PTR_DAT_110a89fc8;
}



/* Entry: 1088e5cb4; end: 1088e5d0b;  */

void FUN_1088e5cb4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088e9c60();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088bc2e4(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 1088e5d0c; end: 1088e5e53;  */

long * FUN_1088e5d0c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e98bc();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0001088e9794();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    param_1 = (long *)0x2;
    func_0x0001088e9a58();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9e6c();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x2c) == '\x01') {
    func_0x0001088e9818();
    param_4 = (long *)0x28;
    func_0x000107c280a8(0x28,param_1);
    func_0x0001088e9d38();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9a9c();
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



/* Entry: 1088e5e54; end: 1088e5e6f;  */

long FUN_1088e5e54(long param_1)

{
  long extraout_x8;
  
  func_0x0001088bc38c();
  func_0x0001088e99fc();
  return param_1 + extraout_x8;
}



/* Entry: 1088e5e70; end: 1088e5e73;  */

void FUN_1088e5e70(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar1;
  uint unaff_w23;
  
  func_0x0001088e98cc();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e9de0();
  }
  func_0x0001088e9e9c();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088e9b0c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088e9fb0();
      if (param_1 == (ulong *)0x0) {
        func_0x000107c2a2f4();
        *(ulong **)(unaff_x21 + 0x20) = puVar1;
        param_1 = puVar1;
      }
      else {
        FUN_1088bc418();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(char *)(unaff_x20 + 0x2c) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x2c) = 1;
  }
  func_0x0001088e9824();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088e98dc();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088e5e74; end: 1088e5ea7;  */

long FUN_1088e5e74(long param_1)

{
  func_0x0001088e9a50();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e5ea8; end: 1088e5ebb;  */

void FUN_1088e5ea8(void)

{
  FUN_1088e5e74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e5ebc; end: 1088e5ec7;  */

undefined ** FUN_1088e5ebc(void)

{
  return &PTR_DAT_110a8a030;
}



/* Entry: 1088e5ec8; end: 1088e5f03;  */

void FUN_1088e5ec8(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088e9c00();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9c60();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 1088e5f04; end: 1088e5f87;  */

long * FUN_1088e5f04(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e98a8();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9794();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9914();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9b50();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9a9c();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
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



/* Entry: 1088e5f88; end: 1088e5ff7;  */

void FUN_1088e5f88(int param_1)

{
  ulong extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x0001088e9c00();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088e9c58();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0001088e9878(0xfffffff7);
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    func_0x0001088e99d0();
    func_0x0001088e9cac();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088e5ff8; end: 1088e5ffb;  */

void FUN_1088e5ff8(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e9dd4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9dc8();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088e9c98();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  func_0x0001088e995c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e5ffc; end: 1088e602f;  */

long FUN_1088e5ffc(long param_1)

{
  func_0x0001088e9a50();
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c296d8(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088e6030; end: 1088e6043;  */

void FUN_1088e6030(void)

{
  FUN_1088e5ffc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e6044; end: 1088e604f;  */

undefined ** FUN_1088e6044(void)

{
  return &PTR_DAT_110a8a090;
}



/* Entry: 1088e6050; end: 1088e608b;  */

void FUN_1088e6050(long param_1)

{
  ulong *puVar1;
  
  FUN_1086ebb04(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x28);
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



/* Entry: 1088e608c; end: 1088e6147;  */

long * FUN_1088e608c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0001088e9a14();
  func_0x0001088e9c68(param_1[5]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088e60e0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088e60e0;
  param_4 = (long *)&UNK_10f4ebe64;
  func_0x0001088e9b90();
  func_0x0001088e9eb4();
  func_0x0001088e9984();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088e60e0:
  iVar3 = *(int *)(unaff_x21 + 0x18);
  for (iVar2 = 0; iVar3 != iVar2; iVar2 = iVar2 + 1) {
    func_0x0001088e9bb8(*(undefined8 *)(unaff_x21 + 0x10));
    param_1 = (long *)0x2;
    func_0x0001088e9990();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0001088e9a9c();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x0001088e9d5c();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar2 = (int)param_3;
        param_3 = (ulong)(uint)(iVar2 - iVar3);
        if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar3);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar2);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 1088e6148; end: 1088e61d3;  */

ulong FUN_1088e6148(long param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)*(int *)(param_1 + 0x18);
  lVar2 = param_1;
  while ((uVar4 & 0x1fffffffffffffff) != 0) {
    func_0x0001088e9e28();
    func_0x0001088e9f8c();
  }
  func_0x0001088e9c38(*(undefined8 *)(param_1 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088e9b2c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar4 = lVar2 + uVar4;
  }
  *(int *)(param_1 + 0x30) = (int)uVar4;
  return uVar4;
}



/* Entry: 1088e61d4; end: 1088e61d7;  */

void FUN_1088e61d4(long param_1,long param_2)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e9c44();
  puVar1 = (ulong *)(param_1 + 0x10);
  param_2 = param_2 + 0x10;
  func_0x000107c296d4();
  func_0x0001088e9c2c(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e9c20();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9bf0();
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



/* Entry: 1088e61d8; end: 1088e620b;  */

long FUN_1088e61d8(long param_1)

{
  func_0x0001088e9a50();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e620c; end: 1088e621f;  */

void FUN_1088e620c(void)

{
  FUN_1088e61d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e6220; end: 1088e622b;  */

undefined ** FUN_1088e6220(void)

{
  return &PTR_DAT_110a8a0e0;
}



/* Entry: 1088e622c; end: 1088e625f;  */

void FUN_1088e622c(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088e9c00();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9c60();
  }
  func_0x0001088e9e8c();
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



/* Entry: 1088e6260; end: 1088e62cb;  */

long * FUN_1088e6260(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e98a8();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9794();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9914();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9a9c();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
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



/* Entry: 1088e62cc; end: 1088e6327;  */

void FUN_1088e62cc(int param_1)

{
  ulong extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x0001088e9c00();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088e9c58();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0001088e993c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



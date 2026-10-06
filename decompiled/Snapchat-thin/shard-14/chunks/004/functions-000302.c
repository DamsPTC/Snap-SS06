/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b24e228; end: 10b24e3e7;  */

void FUN_10b24e228(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
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



/* Entry: 10b24e3e8; end: 10b24e49f;  */

void FUN_10b24e3e8(void)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b2507c0();
  func_0x00010b2509c8(&PTR_FUN_110ccad08);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b2507b4();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  lVar2 = unaff_x19 + 0x18;
  FUN_10b2503a8();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010b2508dc();
  }
  *(long *)(unaff_x19 + 0x30) = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010b2508dc();
  }
  *(long *)(unaff_x19 + 0x38) = lVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010b2508dc();
  }
  *(long *)(unaff_x19 + 0x40) = lVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010b2508dc();
  }
  *(long *)(unaff_x19 + 0x48) = lVar2;
  *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x50);
  return;
}



/* Entry: 10b24e4a0; end: 10b24e4cb;  */

undefined8 FUN_10b24e4a0(undefined8 param_1)

{
  func_0x00010b2508d4();
  FUN_10b24e4cc(param_1);
  return param_1;
}



/* Entry: 10b24e4cc; end: 10b24e52b;  */

long * FUN_10b24e4cc(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b24e52c; end: 10b24e52f;  */

undefined8 FUN_10b24e52c(undefined8 param_1)

{
  func_0x00010b2508d4();
  FUN_10b24e4cc(param_1);
  return param_1;
}



/* Entry: 10b24e530; end: 10b24e543;  */

void FUN_10b24e530(void)

{
  FUN_10b24e4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b24e544; end: 10b24e54f;  */

undefined ** FUN_10b24e544(void)

{
  return &PTR_DAT_110ccae28;
}



/* Entry: 10b24e550; end: 10b24e5d7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b24e550(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  FUN_10b1f0bf8(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x48));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b24e5d8; end: 10b24e80b;  */

long * FUN_10b24e5d8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  int iVar8;
  
  func_0x00010b250928();
  lVar5 = param_1[4];
  puVar1 = (ulong *)(param_1 + 3);
  for (iVar7 = 0; (int)lVar5 != iVar7; iVar7 = iVar7 + 1) {
    uVar6 = *puVar1;
    puVar2 = puVar1;
    if ((uVar6 & 1) != 0) {
      puVar2 = (ulong *)(uVar6 + (long)iVar7 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar2 + 0x4c);
    param_1 = (long *)0x1;
    func_0x00010b2507d4();
    param_4 = param_1;
  }
  uVar3 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_1 = (long *)0x2;
    func_0x00010b2507d4();
    param_4 = param_1;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x14);
    param_1 = (long *)0x3;
    func_0x00010b2507d4();
    param_4 = param_1;
  }
  plVar4 = param_1;
  if (*(char *)(unaff_x20 + 0x50) == '\x01') {
    func_0x00010b250708();
    plVar4 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x00010b250744();
    param_4 = plVar4;
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    func_0x00010b250708();
    func_0x00010b2509ac();
    func_0x00010b250744();
    param_4 = plVar4;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x14);
    param_4 = (long *)0x6;
    func_0x00010b2507d4();
  }
  if ((uVar3 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x48) + 0x14);
    param_4 = (long *)0x7;
    func_0x00010b2507d4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b250974();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)param_3;
        uVar3 = iVar7 - iVar8;
        param_3 = (ulong)uVar3;
        if (uVar3 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar5,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b24e80c; end: 10b24e80f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b24e80c(void)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b250868();
  FUN_10b24e928(unaff_x21 + 0x18);
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x30);
      if (lVar2 == 0) {
        func_0x00010b2508e4();
        *(long *)(unaff_x21 + 0x30) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x38);
      if (lVar2 == 0) {
        func_0x00010b2508e4();
        *(long *)(unaff_x21 + 0x38) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x40);
      if (lVar2 == 0) {
        func_0x00010b2508e4();
        *(long *)(unaff_x21 + 0x40) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x48);
      if (lVar2 == 0) {
        func_0x00010b2508e4();
        *(long *)(unaff_x21 + 0x48) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x50) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x50) = 1;
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  func_0x00010b250890();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b250878();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b24e810; end: 10b24e927;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b24e810(void)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b250868();
  FUN_10b24e928(unaff_x21 + 0x18);
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x30);
      if (lVar2 == 0) {
        func_0x00010b2508e4();
        *(long *)(unaff_x21 + 0x30) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x38);
      if (lVar2 == 0) {
        func_0x00010b2508e4();
        *(long *)(unaff_x21 + 0x38) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x40);
      if (lVar2 == 0) {
        func_0x00010b2508e4();
        *(long *)(unaff_x21 + 0x40) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x48);
      if (lVar2 == 0) {
        func_0x00010b2508e4();
        *(long *)(unaff_x21 + 0x48) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x50) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x50) = 1;
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  func_0x00010b250890();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b250878();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b24e928; end: 10b24e937;  */

void FUN_10b24e928(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b24e938; end: 10b24e9ef;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b24e938(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b250838();
  FUN_10b24e550();
  func_0x00010b2509bc();
  func_0x00010b250868();
  FUN_10b24e928(unaff_x21 + 0x18);
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x30);
      if (lVar2 == 0) {
        func_0x00010b2508e4();
        *(long *)(unaff_x21 + 0x30) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x38);
      if (lVar2 == 0) {
        func_0x00010b2508e4();
        *(long *)(unaff_x21 + 0x38) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x40);
      if (lVar2 == 0) {
        func_0x00010b2508e4();
        *(long *)(unaff_x21 + 0x40) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x48);
      if (lVar2 == 0) {
        func_0x00010b2508e4();
        *(long *)(unaff_x21 + 0x48) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x50) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x50) = 1;
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  func_0x00010b250890();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b250878();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b24e9f0; end: 10b24ea2f;  */

void FUN_10b24e9f0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined **)(param_1 + 0x30) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x38) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x40) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x48) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x50) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return;
}



/* Entry: 10b24ea30; end: 10b24ea5b;  */

undefined8 FUN_10b24ea30(undefined8 param_1)

{
  func_0x00010b2508d4();
  FUN_10b24ea5c(param_1);
  return param_1;
}



/* Entry: 10b24ea5c; end: 10b24eacb;  */

long FUN_10b24ea5c(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  
  func_0x00010b2509a0();
  func_0x000107c30258(unaff_x19 + 0x38);
  func_0x000107c30258(unaff_x19 + 0x40);
  func_0x000107c30258(unaff_x19 + 0x48);
  func_0x000107c30258(unaff_x19 + 0x50);
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    func_0x00010bcebe30();
  }
  __ZdlPv();
  func_0x00010006804c(unaff_x19 + 0x18);
  if (in_NG == in_OV) {
    func_0x0001002a998c(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 10b24eacc; end: 10b24eacf;  */

undefined8 FUN_10b24eacc(undefined8 param_1)

{
  func_0x00010b2508d4();
  FUN_10b24ea5c(param_1);
  return param_1;
}



/* Entry: 10b24ead0; end: 10b24eae3;  */

void FUN_10b24ead0(void)

{
  FUN_10b24ea30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b24eae4; end: 10b24eaef;  */

undefined ** FUN_10b24eae4(void)

{
  return &PTR_DAT_110ccae70;
}



/* Entry: 10b24eaf0; end: 10b24eb9b;  */

void FUN_10b24eaf0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  func_0x000107c3025c(param_1 + 0x40);
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bcebce4(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bcebedc(*(undefined8 *)(param_1 + 0x68));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b24eb9c; end: 10b24ef53;  */

uint * FUN_10b24eb9c(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  uint *puVar7;
  ulong uVar8;
  long extraout_x8;
  long lVar9;
  int iVar10;
  undefined8 *unaff_x22;
  ulong *puVar11;
  int iVar12;
  
  puVar3 = param_1;
  puVar7 = param_3;
  if (param_1[0x1c] != 0) {
    func_0x00010b250884();
    func_0x000107c282e4();
    param_2 = puVar3;
  }
  if (param_1[0x1d] != 0) {
    func_0x00010b250884();
    func_0x00010598f43c();
    param_2 = puVar3;
  }
  if (*(long *)(param_1 + 0x1e) != 0) {
    func_0x00010b250884();
    func_0x00010599ccb0();
    param_2 = puVar3;
  }
  if (param_1[0x20] != 0) {
    func_0x00010b250884();
    func_0x0001088bdd44();
    param_2 = puVar3;
  }
  if (param_1[0x21] != 0) {
    func_0x00010b250884();
    func_0x0001088b96ec();
    param_2 = puVar3;
  }
  puVar2 = puVar3;
  if (param_1[0x22] != 0) {
    func_0x00010b2506fc();
    puVar2 = (uint *)0x30;
    func_0x000107c280a8(0x30,puVar3);
    func_0x00010b250714();
    param_2 = puVar2;
  }
  puVar3 = puVar2;
  if (param_1[0x23] != 0) {
    func_0x00010b2506fc();
    uVar1 = param_1[0x23];
    unaff_x22 = (undefined8 *)(ulong)uVar1;
    puVar3 = (uint *)0x3d;
    func_0x000107c280a8(0x3d,puVar2);
    param_2 = puVar3 + 1;
    *puVar3 = uVar1;
  }
  puVar2 = (uint *)(ulong)param_1[0x24];
  if (param_1[0x24] != 0) {
    func_0x00010b250884();
    func_0x000108b32050();
    param_2 = puVar3;
  }
  puVar4 = puVar3;
  if (param_1[0x25] != 0) {
    func_0x00010b2506fc();
    uVar1 = param_1[0x25];
    unaff_x22 = (undefined8 *)(ulong)uVar1;
    puVar4 = (uint *)0x4d;
    func_0x000107c280a8();
    param_2 = puVar4 + 1;
    *puVar4 = uVar1;
    puVar2 = puVar3;
  }
  func_0x00010b25085c(*(undefined8 *)(param_1 + 0xc));
  if ((long)puVar2 < 0) {
    if (unaff_x22[1] != 0) {
      puVar5 = (undefined8 *)*unaff_x22;
      goto LAB_10b24ecc4;
    }
  }
  else {
    puVar5 = unaff_x22;
    if ((int)puVar2 != 0) {
LAB_10b24ecc4:
      func_0x00010b25081c(puVar5);
      puVar4 = param_3;
      func_0x00010b25072c(param_3,10);
      param_2 = puVar4;
    }
  }
  puVar3 = (uint *)(ulong)param_1[0x28];
  if (param_1[0x28] != 0) {
    func_0x00010b250884();
    func_0x0001089f5418();
    param_2 = puVar4;
  }
  puVar2 = puVar4;
  if (*(long *)(param_1 + 0x26) != 0) {
    func_0x00010b2506fc();
    puVar2 = (uint *)0x60;
    func_0x000107c280a8();
    func_0x00010b25077c();
    puVar3 = puVar4;
    param_2 = puVar2;
  }
  func_0x00010b25085c(*(undefined8 *)(param_1 + 0xe));
  if ((long)puVar3 < 0) {
    if (unaff_x22[1] != 0) {
      unaff_x22 = (undefined8 *)*unaff_x22;
      goto LAB_10b24ed3c;
    }
  }
  else if ((int)puVar3 != 0) {
LAB_10b24ed3c:
    func_0x00010b25081c(unaff_x22);
    puVar2 = param_3;
    func_0x00010b25072c(param_3,0xd);
    param_2 = puVar2;
  }
  puVar3 = (uint *)(ulong)param_1[0x29];
  if (param_1[0x29] != 0) {
    func_0x00010b250884();
    func_0x0001089f5440();
    param_2 = puVar2;
  }
  uVar1 = param_1[4];
  if ((uVar1 & 1) != 0) {
    puVar3 = *(uint **)(param_1 + 0x16);
    puVar7 = (uint *)(ulong)puVar3[6];
    puVar2 = (uint *)0xf;
    func_0x00010b250720();
    param_2 = puVar2;
  }
  puVar4 = puVar2;
  if (param_1[0x2a] != 0) {
    func_0x00010b2506fc();
    puVar4 = (uint *)0x80;
    func_0x000107c280a8();
    func_0x00010b250714();
    puVar3 = puVar2;
    param_2 = puVar4;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    puVar3 = *(uint **)(param_1 + 0x18);
    puVar7 = (uint *)(ulong)puVar3[5];
    puVar4 = (uint *)0x11;
    func_0x00010b250720();
    param_2 = puVar4;
  }
  puVar11 = (ulong *)(ulong)param_1[10];
  if (0 < (int)param_1[10]) {
    func_0x00010b2506fc();
    lVar9 = (long)puVar4 + 3;
    *(undefined2 *)puVar4 = 0x192;
    while( true ) {
      if ((uint)puVar11 < 0x80) break;
      *(byte *)(lVar9 + -1) = (byte)puVar11 | 0x80;
      puVar11 = (ulong *)(ulong)((uint)puVar11 >> 7);
      lVar9 = lVar9 + 1;
    }
    *(byte *)(lVar9 + -1) = (byte)puVar11;
    puVar11 = *(ulong **)(param_1 + 8);
    puVar6 = (ulong *)((long)puVar11 + (long)(int)param_1[6] * 4);
    do {
      func_0x00010b2506fc();
      uVar8 = (ulong)*(int *)puVar11;
      puVar2 = puVar4;
      while( true ) {
        param_2 = (uint *)((long)puVar2 + 1);
        if (uVar8 < 0x80) break;
        *(byte *)puVar2 = (byte)uVar8 | 0x80;
        uVar8 = uVar8 >> 7;
        puVar2 = param_2;
      }
      puVar11 = (ulong *)((long)puVar11 + 4);
      *(byte *)puVar2 = (byte)uVar8;
    } while (puVar11 < puVar6);
  }
  func_0x00010b25085c(*(undefined8 *)(param_1 + 0x10));
  if ((long)puVar3 < 0) {
    puVar3 = (uint *)0x0;
    if (puVar11[1] != 0) {
      puVar6 = (ulong *)*puVar11;
      goto LAB_10b24ee68;
    }
  }
  else {
    puVar6 = puVar11;
    if ((int)puVar3 != 0) {
LAB_10b24ee68:
      func_0x00010b25081c(puVar6);
      puVar3 = (uint *)0x13;
      param_2 = param_3;
      func_0x00010b25072c();
    }
  }
  if ((uVar1 >> 2 & 1) != 0) {
    puVar3 = *(uint **)(param_1 + 0x1a);
    puVar7 = (uint *)(ulong)puVar3[6];
    param_2 = (uint *)0x14;
    func_0x00010b250720();
  }
  func_0x00010b25085c(*(undefined8 *)(param_1 + 0x12));
  if ((long)puVar3 < 0) {
    puVar3 = (uint *)0x0;
    if (puVar11[1] != 0) {
      puVar6 = (ulong *)*puVar11;
      goto LAB_10b24eec0;
    }
  }
  else {
    puVar6 = puVar11;
    if ((int)puVar3 != 0) {
LAB_10b24eec0:
      func_0x00010b25081c(puVar6);
      puVar3 = (uint *)0x15;
      param_2 = param_3;
      func_0x00010b25072c();
    }
  }
  func_0x00010b25085c(*(undefined8 *)(param_1 + 0x14));
  if ((long)puVar3 < 0) {
    if (puVar11[1] == 0) goto LAB_10b24ef1c;
    puVar11 = (ulong *)*puVar11;
  }
  else if ((int)puVar3 == 0) goto LAB_10b24ef1c;
  func_0x00010b25081c(puVar11);
  param_2 = param_3;
  func_0x00010b25072c(param_3,0x16);
LAB_10b24ef1c:
  if ((*(ulong *)(param_1 + 2) & 1) == 0) {
    return param_2;
  }
  func_0x00010b250974();
  if ((long)puVar7 < 0) {
    lVar9 = *(long *)(extraout_x8 + 8);
    puVar7 = *(uint **)(extraout_x8 + 0x10);
  }
  else {
    lVar9 = extraout_x8 + 8;
  }
  if (*(long *)param_3 - (long)param_2 < (long)(int)puVar7) {
    while( true ) {
      iVar12 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
      iVar10 = (int)puVar7;
      puVar7 = (uint *)(ulong)(uint)(iVar10 - iVar12);
      if (iVar10 - iVar12 == 0 || iVar10 < iVar12) break;
      func_0x00010b4d5738();
      lVar9 = (long)param_2 + (long)iVar12;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar9);
    }
    func_0x00010b4d5738();
    return (uint *)((long)param_2 + (long)iVar10);
  }
  _memcpy(param_2,lVar9,(ulong)puVar7 & 0xffffffff);
  return (uint *)((long)param_2 + (long)(int)puVar7);
}



/* Entry: 10b24ef54; end: 10b24f193;  */

void FUN_10b24ef54(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  long lVar6;
  
  uVar4 = param_1 + 0x18;
  FUN_10b4d3e0c();
  *(int *)(param_1 + 0x28) = (int)uVar4;
  if (uVar4 == 0) {
    iVar2 = 0;
  }
  else {
    func_0x00010b250768((long)(int)uVar4);
    iVar2 = extraout_w8 + 2;
  }
  uVar5 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  iVar2 = iVar2 + (int)uVar4;
  if (lVar6 != 0) {
    func_0x000107c282a0();
    iVar2 = iVar2 + (int)uVar5 + 1;
    uVar4 = uVar5;
  }
  func_0x00010b2508a4(*(undefined8 *)(param_1 + 0x38));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    iVar2 = iVar2 + (int)uVar4 + 1;
  }
  func_0x00010b2508a4(*(undefined8 *)(param_1 + 0x40));
  lVar6 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b250980();
  }
  func_0x00010b2508a4(*(undefined8 *)(param_1 + 0x48));
  lVar6 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b250980();
  }
  func_0x00010b2508a4(*(undefined8 *)(param_1 + 0x50));
  lVar6 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b250980();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x58);
      func_0x000106af66c4();
      iVar2 = iVar2 + iVar3 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000106af6794(*(undefined8 *)(param_1 + 0x60));
      func_0x00010b250980();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b24f194(*(undefined8 *)(param_1 + 0x68));
      func_0x00010b250980();
    }
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    func_0x00010b2506e8();
    iVar2 = extraout_w8_00 + iVar2;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    func_0x00010b2506e8();
    iVar2 = extraout_w8_01 + iVar2;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x00010b2506e8();
    iVar2 = extraout_w8_02 + iVar2;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    func_0x00010b2506e8();
    iVar2 = extraout_w8_03 + iVar2;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    func_0x00010b2506e8();
    iVar2 = extraout_w8_04 + iVar2;
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    func_0x00010b250768();
    iVar2 = iVar2 + extraout_w8_05 + 1;
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    iVar2 = iVar2 + 5;
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    iVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x90)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    iVar2 = iVar2 + 5;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    func_0x00010b2506e8();
    iVar2 = extraout_w8_06 + iVar2;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    func_0x00010b2506e8();
    iVar2 = extraout_w8_07 + iVar2;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    func_0x00010b2506e8();
    iVar2 = extraout_w8_08 + iVar2;
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0xa8)) * -9 + 0x280U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b250968();
    lVar6 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar6 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar6 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10b24f194; end: 10b24f1af;  */

long FUN_10b24f194(long param_1)

{
  long extraout_x8;
  
  func_0x00010bcebf74();
  func_0x00010b250750();
  return param_1 + extraout_x8;
}



/* Entry: 10b24f1b0; end: 10b24f1b3;  */

void FUN_10b24f1b0(void)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar4;
  
  func_0x00010b250868();
  uVar4 = *(ulong *)(unaff_x19 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar2 = unaff_x20 + 0x18;
  func_0x000107c282d0(unaff_x21 + 0x18);
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x30);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x38);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x40);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x48));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x48);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x50));
  lVar3 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x50);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x58) == 0) {
        func_0x000106af66f4();
        *(ulong *)(unaff_x21 + 0x58) = uVar4;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x60);
      if (lVar2 == 0) {
        func_0x00010b2508e4();
        *(long *)(unaff_x21 + 0x60) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x68);
      if (lVar2 == 0) {
        func_0x00010b2509b4();
        *(long *)(unaff_x21 + 0x68) = lVar2;
      }
      else {
        func_0x00010bcebe80();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    *(long *)(unaff_x21 + 0x78) = *(long *)(unaff_x20 + 0x78);
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    *(int *)(unaff_x21 + 0x80) = *(int *)(unaff_x20 + 0x80);
  }
  if (*(int *)(unaff_x20 + 0x84) != 0) {
    *(int *)(unaff_x21 + 0x84) = *(int *)(unaff_x20 + 0x84);
  }
  if (*(int *)(unaff_x20 + 0x88) != 0) {
    *(int *)(unaff_x21 + 0x88) = *(int *)(unaff_x20 + 0x88);
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  if (*(int *)(unaff_x20 + 0x90) != 0) {
    *(int *)(unaff_x21 + 0x90) = *(int *)(unaff_x20 + 0x90);
  }
  if (*(int *)(unaff_x20 + 0x94) != 0) {
    *(int *)(unaff_x21 + 0x94) = *(int *)(unaff_x20 + 0x94);
  }
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    *(long *)(unaff_x21 + 0x98) = *(long *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    *(int *)(unaff_x21 + 0xa0) = *(int *)(unaff_x20 + 0xa0);
  }
  if (*(int *)(unaff_x20 + 0xa4) != 0) {
    *(int *)(unaff_x21 + 0xa4) = *(int *)(unaff_x20 + 0xa4);
  }
  if (*(int *)(unaff_x20 + 0xa8) != 0) {
    *(int *)(unaff_x21 + 0xa8) = *(int *)(unaff_x20 + 0xa8);
  }
  func_0x00010b250890();
  if ((extraout_x8_04 & 1) == 0) {
    return;
  }
  func_0x00010b250878();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b24f1b4; end: 10b24f3f7;  */

void FUN_10b24f1b4(void)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar4;
  
  func_0x00010b250868();
  uVar4 = *(ulong *)(unaff_x19 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar2 = unaff_x20 + 0x18;
  func_0x000107c282d0(unaff_x21 + 0x18);
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x30);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x38);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x40);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x48));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x48);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x50));
  lVar3 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x50);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x58) == 0) {
        func_0x000106af66f4();
        *(ulong *)(unaff_x21 + 0x58) = uVar4;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x60);
      if (lVar2 == 0) {
        func_0x00010b2508e4();
        *(long *)(unaff_x21 + 0x60) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x68);
      if (lVar2 == 0) {
        func_0x00010b2509b4();
        *(long *)(unaff_x21 + 0x68) = lVar2;
      }
      else {
        func_0x00010bcebe80();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    *(long *)(unaff_x21 + 0x78) = *(long *)(unaff_x20 + 0x78);
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    *(int *)(unaff_x21 + 0x80) = *(int *)(unaff_x20 + 0x80);
  }
  if (*(int *)(unaff_x20 + 0x84) != 0) {
    *(int *)(unaff_x21 + 0x84) = *(int *)(unaff_x20 + 0x84);
  }
  if (*(int *)(unaff_x20 + 0x88) != 0) {
    *(int *)(unaff_x21 + 0x88) = *(int *)(unaff_x20 + 0x88);
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  if (*(int *)(unaff_x20 + 0x90) != 0) {
    *(int *)(unaff_x21 + 0x90) = *(int *)(unaff_x20 + 0x90);
  }
  if (*(int *)(unaff_x20 + 0x94) != 0) {
    *(int *)(unaff_x21 + 0x94) = *(int *)(unaff_x20 + 0x94);
  }
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    *(long *)(unaff_x21 + 0x98) = *(long *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    *(int *)(unaff_x21 + 0xa0) = *(int *)(unaff_x20 + 0xa0);
  }
  if (*(int *)(unaff_x20 + 0xa4) != 0) {
    *(int *)(unaff_x21 + 0xa4) = *(int *)(unaff_x20 + 0xa4);
  }
  if (*(int *)(unaff_x20 + 0xa8) != 0) {
    *(int *)(unaff_x21 + 0xa8) = *(int *)(unaff_x20 + 0xa8);
  }
  func_0x00010b250890();
  if ((extraout_x8_04 & 1) == 0) {
    return;
  }
  func_0x00010b250878();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b24f3f8; end: 10b24f457;  */

void FUN_10b24f3f8(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b25154c();
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffd;
  return;
}



/* Entry: 10b24f458; end: 10b24f48f;  */

void FUN_10b24f458(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110ccada8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = &DAT_11383d918;
  param_1[7] = &DAT_11383d918;
  param_1[8] = &DAT_11383d918;
  param_1[9] = &DAT_11383d918;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  return;
}



/* Entry: 10b24f490; end: 10b24f5cb;  */

void FUN_10b24f490(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010b2507c0();
  func_0x00010b2509c8(&PTR_FUN_110ccada8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b2507b4();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x1c) = 0;
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
  *(undefined4 *)(unaff_x19 + 0x24) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x21;
  FUN_10b24fee8(unaff_x19 + 0x18,unaff_x20 + 0x18);
  lVar2 = unaff_x20 + 0x30;
  func_0x00010b250824();
  *(long *)(unaff_x19 + 0x30) = lVar2;
  lVar2 = unaff_x20 + 0x38;
  func_0x00010b250824();
  *(long *)(unaff_x19 + 0x38) = lVar2;
  lVar2 = unaff_x20 + 0x40;
  func_0x00010b250824();
  *(long *)(unaff_x19 + 0x40) = lVar2;
  lVar2 = unaff_x20 + 0x48;
  func_0x00010b250824();
  *(long *)(unaff_x19 + 0x48) = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x00010b250534();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x00010b250574();
  }
  *(undefined8 *)(unaff_x19 + 0x58) = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b250920();
  }
  *(undefined8 *)(unaff_x19 + 0x60) = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b250920();
  }
  *(undefined8 *)(unaff_x19 + 0x68) = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_10b2505b4();
  }
  *(undefined8 *)(unaff_x19 + 0x70) = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined4 *)(unaff_x19 + 0x98) = *(undefined4 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x80) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x78) = uVar3;
  return;
}



/* Entry: 10b24f5cc; end: 10b24f5f7;  */

undefined8 FUN_10b24f5cc(undefined8 param_1)

{
  func_0x00010b2508d4();
  FUN_10b24f5f8(param_1);
  return param_1;
}



/* Entry: 10b24f5f8; end: 10b24f67f;  */

long * FUN_10b24f5f8(void)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x00010b2509a0();
  func_0x000107c30258(unaff_x19 + 0x38);
  func_0x000107c30258(unaff_x19 + 0x40);
  func_0x000107c30258(unaff_x19 + 0x48);
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_10b251b64();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    FUN_10b2514b4();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    func_0x00010bcebe30();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    func_0x00010bcebe30();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    FUN_10b24ea30();
  }
  __ZdlPv();
  plVar1 = (long *)(unaff_x19 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b24f680; end: 10b24f683;  */

undefined8 FUN_10b24f680(undefined8 param_1)

{
  func_0x00010b2508d4();
  FUN_10b24f5f8(param_1);
  return param_1;
}



/* Entry: 10b24f684; end: 10b24f697;  */

void FUN_10b24f684(void)

{
  FUN_10b24f5cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b24f698; end: 10b24f6a3;  */

undefined ** FUN_10b24f698(void)

{
  return &PTR_DAT_110ccaeb8;
}



/* Entry: 10b24f6a4; end: 10b24f763;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b24f6a4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  FUN_10b250520(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  func_0x000107c3025c(param_1 + 0x40);
  func_0x000107c3025c(param_1 + 0x48);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b251bb4(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b25154c(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bcebedc(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010bcebedc(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10b24eaf0(*(undefined8 *)(param_1 + 0x70));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b24f764; end: 10b24fab3;  */

long * FUN_10b24f764(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long extraout_x8;
  int iVar10;
  long unaff_x22;
  undefined8 *puVar11;
  int iVar12;
  
  plVar3 = param_1;
  plVar6 = param_2;
  plVar8 = param_3;
  func_0x00010b25085c(param_1[6]);
  if ((long)plVar6 < 0) {
    plVar6 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b24f7ac;
  }
  else if ((int)plVar6 != 0) {
LAB_10b24f7ac:
    func_0x00010b25081c();
    plVar6 = (long *)0x1;
    plVar3 = param_3;
    func_0x00010b25072c();
    param_2 = plVar3;
  }
  func_0x00010b25085c(param_1[7]);
  if ((long)plVar6 < 0) {
    plVar6 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b24f7ec;
  }
  else if ((int)plVar6 != 0) {
LAB_10b24f7ec:
    func_0x00010b25081c();
    plVar6 = (long *)0x2;
    plVar3 = param_3;
    func_0x00010b25072c();
    param_2 = plVar3;
  }
  if ((char)param_1[0xf] == '\x01') {
    func_0x00010b2506fc();
    plVar6 = plVar3;
    func_0x00010b25098c();
    func_0x00010b250744();
    param_2 = plVar3;
  }
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    plVar6 = (long *)param_1[10];
    plVar8 = (long *)(ulong)*(uint *)(plVar6 + 5);
    plVar3 = (long *)0x4;
    func_0x00010b250720();
    param_2 = plVar3;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar6 = (long *)param_1[0xb];
    plVar8 = (long *)(ulong)*(uint *)((long)plVar6 + 0x14);
    plVar3 = (long *)0x5;
    func_0x00010b250720();
    param_2 = plVar3;
  }
  lVar7 = param_1[4];
  puVar11 = (undefined8 *)0x0;
  while (iVar10 = (int)puVar11, (int)lVar7 != iVar10) {
    uVar9 = param_1[3];
    puVar1 = (ulong *)(param_1 + 3);
    if ((uVar9 & 1) != 0) {
      puVar1 = (ulong *)(uVar9 + (long)iVar10 * 8 + 7);
    }
    plVar6 = (long *)*puVar1;
    plVar8 = (long *)(ulong)*(uint *)((long)plVar6 + 0x14);
    plVar3 = (long *)0x6;
    func_0x00010b250720();
    param_2 = plVar3;
    puVar11 = (undefined8 *)(ulong)(iVar10 + 1);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    plVar6 = (long *)param_1[0xc];
    plVar8 = (long *)(ulong)*(uint *)(plVar6 + 3);
    plVar3 = (long *)0x7;
    func_0x00010b250720();
    param_2 = plVar3;
  }
  func_0x00010b25085c(param_1[8]);
  if ((long)plVar6 < 0) {
    if (puVar11[1] != 0) {
      puVar4 = (undefined8 *)*puVar11;
      goto LAB_10b24f8e0;
    }
  }
  else {
    puVar4 = puVar11;
    if ((int)plVar6 != 0) {
LAB_10b24f8e0:
      func_0x00010b25081c(puVar4);
      plVar3 = param_3;
      func_0x00010b25072c(param_3,8);
      param_2 = plVar3;
    }
  }
  plVar6 = plVar3;
  if (*(int *)((long)param_1 + 0x7c) != 0) {
    func_0x00010b2506fc();
    plVar6 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar3);
    func_0x00010b250714();
    param_2 = plVar6;
  }
  plVar3 = plVar6;
  if (param_1[0x10] != 0) {
    func_0x00010b2506fc();
    plVar3 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar6);
    func_0x00010b25077c();
    param_2 = plVar3;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    plVar8 = (long *)(ulong)*(uint *)(param_1[0xd] + 0x18);
    plVar3 = (long *)0xb;
    func_0x00010b250720();
    param_2 = plVar3;
  }
  plVar6 = plVar3;
  if ((int)param_1[0x11] != 0) {
    func_0x00010b2506fc();
    plVar6 = (long *)0x68;
    func_0x000107c280a8(0x68,plVar3);
    func_0x00010b250744();
    param_2 = plVar6;
  }
  plVar3 = plVar6;
  if (*(char *)((long)param_1 + 0x79) == '\x01') {
    func_0x00010b2506fc();
    plVar3 = (long *)0x70;
    func_0x000107c280a8(0x70,plVar6);
    func_0x00010b250744();
    param_2 = plVar3;
  }
  plVar6 = (long *)param_1[0x12];
  if (plVar6 != (long *)0x0) {
    func_0x00010b250884();
    func_0x000106af6998();
    param_2 = plVar3;
  }
  plVar5 = plVar3;
  if (*(int *)((long)param_1 + 0x8c) != 0) {
    func_0x00010b2506fc();
    plVar5 = (long *)0x80;
    func_0x000107c280a8();
    func_0x00010b250714();
    plVar6 = plVar3;
    param_2 = plVar5;
  }
  if ((int)param_1[0x13] != 0) {
    func_0x00010b2506fc();
    param_2 = (long *)0x88;
    func_0x000107c280a8();
    func_0x00010b250714();
    plVar6 = plVar5;
  }
  func_0x00010b25085c(param_1[9]);
  if ((long)plVar6 < 0) {
    if (puVar11[1] == 0) goto LAB_10b24fa44;
    puVar11 = (undefined8 *)*puVar11;
  }
  else if ((int)plVar6 == 0) goto LAB_10b24fa44;
  func_0x00010b25081c(puVar11);
  param_2 = param_3;
  func_0x00010b25072c(param_3,0x12);
LAB_10b24fa44:
  if ((uVar2 >> 4 & 1) != 0) {
    plVar8 = (long *)(ulong)*(uint *)(param_1[0xe] + 0x14);
    param_2 = (long *)0x13;
    func_0x00010b250720();
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b250974();
    if ((long)plVar8 < 0) {
      lVar7 = *(long *)(extraout_x8 + 8);
      plVar8 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar7 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar8) {
      while( true ) {
        iVar12 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar10 = (int)plVar8;
        plVar8 = (long *)(ulong)(uint)(iVar10 - iVar12);
        if (iVar10 - iVar12 == 0 || iVar10 < iVar12) break;
        func_0x00010b4d5738();
        lVar7 = (long)param_2 + (long)iVar12;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar7);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar10);
    }
    _memcpy(param_2,lVar7,(ulong)plVar8 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar8);
  }
  return param_2;
}



/* Entry: 10b24fab4; end: 10b24fc8f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b24fab4(long param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int iVar3;
  int extraout_w8_04;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  iVar2 = (int)unaff_x20;
  func_0x00010b2508b0();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    param_1 = *unaff_x21;
    FUN_10b24fc90();
    unaff_x20 = param_1 + unaff_x20;
    iVar2 = (int)unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010b2508a4(*(undefined8 *)(unaff_x19 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    func_0x00010b25082c();
  }
  func_0x00010b2508a4(*(undefined8 *)(unaff_x19 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    func_0x00010b25082c();
  }
  func_0x00010b2508a4(*(undefined8 *)(unaff_x19 + 0x40));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    func_0x00010b25082c();
  }
  func_0x00010b2508a4(*(undefined8 *)(unaff_x19 + 0x48));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    iVar2 = iVar2 + (int)param_1 + 2;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x50);
      FUN_10b251cc0();
      func_0x00010b250750();
      iVar2 = iVar2 + iVar3 + extraout_w8_04 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b24fc90(*(undefined8 *)(unaff_x19 + 0x58));
      func_0x00010b25082c();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b24f194(*(undefined8 *)(unaff_x19 + 0x60));
      func_0x00010b25082c();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b24f194(*(undefined8 *)(unaff_x19 + 0x68));
      func_0x00010b25082c();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x70);
      FUN_10b24ef54();
      func_0x00010b250750();
      iVar2 = iVar2 + iVar3 + extraout_w8 + 2;
    }
  }
  iVar3 = -9;
  iVar2 = iVar2 + (uint)*(byte *)(unaff_x19 + 0x78) * 2 + (uint)*(byte *)(unaff_x19 + 0x79) * 2;
  if (*(int *)(unaff_x19 + 0x7c) != 0) {
    func_0x00010b250950();
    iVar2 = extraout_w9 + 1;
    iVar3 = extraout_w8_00;
  }
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    func_0x00010b250938();
    iVar3 = extraout_w8_01;
  }
  if (*(int *)(unaff_x19 + 0x88) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT(*(int *)(unaff_x19 + 0x88)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(unaff_x19 + 0x8c) != 0) {
    func_0x00010b250950();
    iVar2 = extraout_w9_00 + 2;
    iVar3 = extraout_w8_02;
  }
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    func_0x00010b250938();
    iVar3 = extraout_w8_03;
  }
  if (*(int *)(unaff_x19 + 0x98) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x98)) * iVar3 + 0x280U >> 6) + 2;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b250968();
    lVar4 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(unaff_x19 + 0x14) = iVar2;
  return;
}



/* Entry: 10b24fc90; end: 10b24fcab;  */

long FUN_10b24fc90(long param_1)

{
  long extraout_x8;
  
  FUN_10b2517f8();
  func_0x00010b250750();
  return param_1 + extraout_x8;
}



/* Entry: 10b24fcac; end: 10b24fcaf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b24fcac(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  func_0x00010b250868();
  uVar5 = *(ulong *)(unaff_x19 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  lVar3 = unaff_x20 + 0x18;
  FUN_10b24fee8(unaff_x21 + 0x18);
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x30);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x38);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x40));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x40);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x48);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x50) == 0) {
        uVar2 = uVar5;
        func_0x00010b250534();
        *(ulong *)(unaff_x21 + 0x50) = uVar2;
      }
      else {
        FUN_10b251d4c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x58) == 0) {
        uVar2 = uVar5;
        func_0x00010b250574();
        *(ulong *)(unaff_x21 + 0x58) = uVar2;
      }
      else {
        FUN_10b25195c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x60);
      if (lVar3 == 0) {
        func_0x00010b2509b4();
        *(long *)(unaff_x21 + 0x60) = lVar3;
      }
      else {
        func_0x00010bcebe80();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x68);
      if (lVar3 == 0) {
        func_0x00010b2509b4();
        *(long *)(unaff_x21 + 0x68) = lVar3;
      }
      else {
        func_0x00010bcebe80();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x70) == 0) {
        FUN_10b2505b4();
        *(ulong *)(unaff_x21 + 0x70) = uVar5;
      }
      else {
        FUN_10b24f1b4();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  if (*(char *)(unaff_x20 + 0x79) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x79) = 1;
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x21 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if (*(int *)(unaff_x20 + 0x88) != 0) {
    *(int *)(unaff_x21 + 0x88) = *(int *)(unaff_x20 + 0x88);
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    *(long *)(unaff_x21 + 0x90) = *(long *)(unaff_x20 + 0x90);
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    *(int *)(unaff_x21 + 0x98) = *(int *)(unaff_x20 + 0x98);
  }
  func_0x00010b250890();
  if ((extraout_x8_03 & 1) == 0) {
    return;
  }
  func_0x00010b250878();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b24fcb0; end: 10b24fee7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b24fcb0(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  func_0x00010b250868();
  uVar5 = *(ulong *)(unaff_x19 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  lVar3 = unaff_x20 + 0x18;
  FUN_10b24fee8(unaff_x21 + 0x18);
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x30);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x38);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x40));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x40);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x48);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x50) == 0) {
        uVar2 = uVar5;
        func_0x00010b250534();
        *(ulong *)(unaff_x21 + 0x50) = uVar2;
      }
      else {
        FUN_10b251d4c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x58) == 0) {
        uVar2 = uVar5;
        func_0x00010b250574();
        *(ulong *)(unaff_x21 + 0x58) = uVar2;
      }
      else {
        FUN_10b25195c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x60);
      if (lVar3 == 0) {
        func_0x00010b2509b4();
        *(long *)(unaff_x21 + 0x60) = lVar3;
      }
      else {
        func_0x00010bcebe80();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x68);
      if (lVar3 == 0) {
        func_0x00010b2509b4();
        *(long *)(unaff_x21 + 0x68) = lVar3;
      }
      else {
        func_0x00010bcebe80();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x70) == 0) {
        FUN_10b2505b4();
        *(ulong *)(unaff_x21 + 0x70) = uVar5;
      }
      else {
        FUN_10b24f1b4();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  if (*(char *)(unaff_x20 + 0x79) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x79) = 1;
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x21 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if (*(int *)(unaff_x20 + 0x88) != 0) {
    *(int *)(unaff_x21 + 0x88) = *(int *)(unaff_x20 + 0x88);
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    *(long *)(unaff_x21 + 0x90) = *(long *)(unaff_x20 + 0x90);
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    *(int *)(unaff_x21 + 0x98) = *(int *)(unaff_x20 + 0x98);
  }
  func_0x00010b250890();
  if ((extraout_x8_03 & 1) == 0) {
    return;
  }
  func_0x00010b250878();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b24fee8; end: 10b24fef7;  */

void FUN_10b24fee8(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b24fef8; end: 10b24ff93;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b24fef8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b250838();
  FUN_10b24f6a4();
  func_0x00010b2509bc();
  func_0x00010b250868();
  uVar5 = *(ulong *)(unaff_x19 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  lVar3 = unaff_x20 + 0x18;
  FUN_10b24fee8(unaff_x21 + 0x18);
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x30);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x38);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x40));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x40);
  }
  func_0x00010b250850(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b250844();
    }
    func_0x000107c30248(unaff_x21 + 0x48);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x50) == 0) {
        uVar2 = uVar5;
        func_0x00010b250534();
        *(ulong *)(unaff_x21 + 0x50) = uVar2;
      }
      else {
        FUN_10b251d4c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x58) == 0) {
        uVar2 = uVar5;
        func_0x00010b250574();
        *(ulong *)(unaff_x21 + 0x58) = uVar2;
      }
      else {
        FUN_10b25195c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x60);
      if (lVar3 == 0) {
        func_0x00010b2509b4();
        *(long *)(unaff_x21 + 0x60) = lVar3;
      }
      else {
        func_0x00010bcebe80();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x68);
      if (lVar3 == 0) {
        func_0x00010b2509b4();
        *(long *)(unaff_x21 + 0x68) = lVar3;
      }
      else {
        func_0x00010bcebe80();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x70) == 0) {
        FUN_10b2505b4();
        *(ulong *)(unaff_x21 + 0x70) = uVar5;
      }
      else {
        FUN_10b24f1b4();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  if (*(char *)(unaff_x20 + 0x79) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x79) = 1;
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x21 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if (*(int *)(unaff_x20 + 0x88) != 0) {
    *(int *)(unaff_x21 + 0x88) = *(int *)(unaff_x20 + 0x88);
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    *(long *)(unaff_x21 + 0x90) = *(long *)(unaff_x20 + 0x90);
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    *(int *)(unaff_x21 + 0x98) = *(int *)(unaff_x20 + 0x98);
  }
  func_0x00010b250890();
  if ((extraout_x8_03 & 1) == 0) {
    return;
  }
  func_0x00010b250878();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b24ff94; end: 10b24fff7;  */

void FUN_10b24ff94(undefined8 param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b2507c0();
  func_0x00010b2509c8(&PTR_FUN_110ccad58);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b2507b4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010b250920();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x29);
  *(undefined8 *)(unaff_x19 + 0x31) = *(undefined8 *)(unaff_x20 + 0x31);
  *(undefined8 *)(unaff_x19 + 0x29) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  return;
}



/* Entry: 10b24fff8; end: 10b250023;  */

undefined8 FUN_10b24fff8(undefined8 param_1)

{
  func_0x00010b2508d4();
  FUN_10b250024(param_1);
  return param_1;
}



/* Entry: 10b250024; end: 10b25003f;  */

void FUN_10b250024(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bcebe30();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b250040; end: 10b250043;  */

undefined8 FUN_10b250040(undefined8 param_1)

{
  func_0x00010b2508d4();
  FUN_10b250024(param_1);
  return param_1;
}



/* Entry: 10b250044; end: 10b250057;  */

void FUN_10b250044(void)

{
  FUN_10b24fff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b250058; end: 10b250063;  */

undefined ** FUN_10b250058(void)

{
  return &PTR_DAT_110ccaf08;
}



/* Entry: 10b250064; end: 10b2500af;  */

void FUN_10b250064(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010bcebedc(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
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



/* Entry: 10b2500b0; end: 10b2501c3;  */

long * FUN_10b2500b0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b250928();
  plVar2 = param_1;
  if ((int)param_1[4] != 0) {
    func_0x00010b250708();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010b250714();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010b250708();
    plVar3 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b250714();
    param_4 = plVar3;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b250708();
    func_0x00010b25098c();
    func_0x00010b25077c();
    param_4 = plVar3;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    plVar3 = (long *)0x4;
    func_0x00010b2507d4();
    param_4 = plVar3;
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    func_0x00010b250708();
    func_0x00010b2509ac();
    func_0x00010b250744();
    param_4 = plVar3;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x00010b250708();
    param_4 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar3);
    func_0x00010b25077c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b250974();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
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
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b2501c4; end: 10b250273;  */

void FUN_10b2501c4(long param_1)

{
  int iVar1;
  int extraout_w8;
  int extraout_w8_00;
  long extraout_x8;
  long lVar2;
  int extraout_w9;
  int extraout_w9_00;
  int iVar3;
  long extraout_x9;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_10b24f194();
    iVar1 = iVar1 + 1;
  }
  iVar3 = -9;
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x00010b250904();
    iVar3 = extraout_w9;
    iVar1 = extraout_w8;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x00010b250904();
    iVar3 = extraout_w9_00;
    iVar1 = extraout_w8_00;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x28)) * iVar3 + 0x2c0U >> 6) + iVar1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x30)) * iVar3 + 0x2c0U >> 6) + iVar1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x38) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b250968();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10b250274; end: 10b250277;  */

void FUN_10b250274(void)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b250868();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      func_0x00010b2504e0();
      *(ulong *)(unaff_x21 + 0x18) = uVar2;
    }
    else {
      func_0x00010bcebe80(*(long *)(unaff_x21 + 0x18));
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b250878();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b250278; end: 10b25033f;  */

void FUN_10b250278(void)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b250868();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      func_0x00010b2504e0();
      *(ulong *)(unaff_x21 + 0x18) = uVar2;
    }
    else {
      func_0x00010bcebe80(*(long *)(unaff_x21 + 0x18));
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b250878();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b250340; end: 10b25036f;  */

void FUN_10b250340(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b250838();
  FUN_10b250064();
  func_0x00010b2509bc();
  func_0x00010b250868();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      func_0x00010b2504e0();
      *(ulong *)(unaff_x21 + 0x18) = uVar2;
    }
    else {
      func_0x00010bcebe80(*(long *)(unaff_x21 + 0x18));
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b250878();
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b250370; end: 10b2503a7;  */

undefined1  [16] FUN_10b250370(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x00010b250788();
  puVar1 = param_1 + 0x21;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10b2503a8; end: 10b2503d3;  */

undefined8 * FUN_10b2503a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b24e928(param_1,param_3);
  return param_1;
}



/* Entry: 10b2503d4; end: 10b250403;  */

long * FUN_10b2503d4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b250404; end: 10b25051f;  */

void FUN_10b250404(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x58);
  }
  *puVar1 = &PTR_FUN_110ccad08;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  return;
}



/* Entry: 10b250520; end: 10b250533;  */

void FUN_10b250520(ulong *param_1)

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



/* Entry: 10b250534; end: 10b2505b3;  */

undefined8 * FUN_10b250534(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010b250838();
  if (param_1 == 0) {
    __Znwm(0x30);
  }
  else {
    FUN_10b4d80e0();
  }
  puVar1 = unaff_x19;
  func_0x00010b252040();
  *unaff_x19 = &PTR_FUN_110ccb198;
  if ((puVar1[1] & 1) != 0) {
    func_0x00010b251f1c();
  }
  func_0x000107c2a448(unaff_x19 + 2);
  *(undefined4 *)(unaff_x19 + 4) = 0;
  *(undefined4 *)(unaff_x19 + 5) = 0;
  *(undefined4 *)((long)unaff_x19 + 0x24) = *(undefined4 *)(unaff_x20 + 0x24);
  return unaff_x19;
}



/* Entry: 10b2505b4; end: 10b2506e7;  */

undefined8 * FUN_10b2505b4(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0xb0;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0xb0);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110ccacb8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b2507b4();
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  func_0x000107c282d4(puVar2 + 3,param_1,param_2 + 0x18);
  *(undefined4 *)(puVar2 + 5) = 0;
  lVar3 = param_2 + 0x30;
  func_0x00010b250824();
  puVar2[6] = lVar3;
  lVar3 = param_2 + 0x38;
  func_0x00010b250824();
  puVar2[7] = lVar3;
  lVar3 = param_2 + 0x40;
  func_0x00010b250824();
  puVar2[8] = lVar3;
  lVar3 = param_2 + 0x48;
  func_0x00010b250824();
  puVar2[9] = lVar3;
  lVar3 = param_2 + 0x50;
  func_0x00010b250824();
  puVar2[10] = lVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x000106af66f4(param_1,*(undefined8 *)(param_2 + 0x58));
  }
  puVar2[0xb] = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b2508dc();
  }
  puVar2[0xc] = param_1;
  if ((uVar1 >> 2 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b250920();
  }
  puVar2[0xd] = param_1;
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  uVar7 = *(undefined8 *)(param_2 + 0x88);
  uVar6 = *(undefined8 *)(param_2 + 0x80);
  uVar9 = *(undefined8 *)(param_2 + 0x98);
  uVar8 = *(undefined8 *)(param_2 + 0x90);
  uVar10 = *(undefined8 *)(param_2 + 0x9c);
  *(undefined8 *)((long)puVar2 + 0xa4) = *(undefined8 *)(param_2 + 0xa4);
  *(undefined8 *)((long)puVar2 + 0x9c) = uVar10;
  puVar2[0x11] = uVar7;
  puVar2[0x10] = uVar6;
  puVar2[0x13] = uVar9;
  puVar2[0x12] = uVar8;
  puVar2[0xf] = uVar5;
  puVar2[0xe] = uVar4;
  return puVar2;
}



/* Entry: 10b2506e8; end: 10b2509e7;  */

void FUN_10b2506e8(void)

{
  return;
}



/* Entry: 10b2509e8; end: 10b250a1b;  */

long FUN_10b2509e8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b250a1c; end: 10b250a1f;  */

long FUN_10b250a1c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b250a20; end: 10b250a33;  */

void FUN_10b250a20(void)

{
  FUN_10b2509e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b250a34; end: 10b250a53;  */

undefined ** FUN_10b250a34(void)

{
  return &PTR_DAT_110ccb078;
}



/* Entry: 10b250a54; end: 10b250b33;  */

byte * FUN_10b250a54(byte *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  uVar7 = *(uint *)(param_1 + 0x20);
  if (uVar7 != 0) {
    pbVar2 = param_1;
    FUN_10b250cc8();
    pbVar4 = pbVar2 + 2;
    *pbVar2 = 10;
    for (; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
      pbVar4[-1] = (byte)uVar7 | 0x80;
      pbVar4 = pbVar4 + 1;
    }
    pbVar4[-1] = (byte)uVar7;
    piVar8 = *(int **)(param_1 + 0x18);
    piVar1 = piVar8 + *(int *)(param_1 + 0x10);
    do {
      FUN_10b250cc8();
      uVar5 = (ulong)*piVar8;
      pbVar4 = pbVar2;
      while( true ) {
        param_2 = pbVar4 + 1;
        if (uVar5 < 0x80) break;
        *pbVar4 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        pbVar4 = param_2;
      }
      piVar8 = piVar8 + 1;
      *pbVar4 = (byte)uVar5;
    } while (piVar8 < piVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar3 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar3 = uVar6 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar10 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar9 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar9 - iVar10);
        if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
        func_0x00010b4d5738();
        pbVar4 = param_2 + iVar10;
        param_2 = param_3;
        func_0x000107c303e4(param_3,pbVar4);
      }
      func_0x00010b4d5738();
      return param_2 + iVar9;
    }
    _memcpy(param_2,lVar3,uVar5 & 0xffffffff);
    return param_2 + (int)uVar5;
  }
  return param_2;
}



/* Entry: 10b250b34; end: 10b250bcb;  */

long FUN_10b250b34(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = 0;
  lVar1 = 0;
  for (lVar4 = (long)*(int *)(param_1 + 0x10); lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar2 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar1;
    lVar2 = lVar2 + 0x100000000;
  }
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 + (ulong)((int)LZCOUNT((long)(int)lVar1) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x24) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b250bcc; end: 10b250c4f;  */

void FUN_10b250bcc(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b250c50; end: 10b250c73;  */

undefined1  [16] FUN_10b250c50(long param_1,long param_2)

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



/* Entry: 10b250c74; end: 10b250cc7;  */

void FUN_10b250c74(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110ccb038;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b250cc8; end: 10b250cd3;  */

ulong * FUN_10b250cc8(void)

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



/* Entry: 10b250cd4; end: 10b250d87;  */

undefined * FUN_10b250cd4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((bRam0000000113839790 & 1) == 0) {
    iVar2 = 0x13839790;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar2 != 0) {
      func_0x00010b252054();
      uVar1 = (char)iVar2;
      FUN_10b4c5a3c();
      uRam0000000113839788 = uVar1;
      param_1 = 0x13839790;
      ___cxa_guard_release();
    }
  }
  func_0x00010b252054();
  FUN_10b4c59b8();
  if (param_1 == -1) {
    func_0x000107c280b4();
    puVar3 = &DAT_11383d918;
  }
  else {
    puVar3 = (undefined *)((long)param_1 * 0x18 + 0x113839798);
  }
  return puVar3;
}



/* Entry: 10b250d88; end: 10b250dbb;  */

long FUN_10b250d88(long param_1)

{
  func_0x00010b251fbc();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b250dbc; end: 10b250dbf;  */

long FUN_10b250dbc(long param_1)

{
  func_0x00010b251fbc();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b250dc0; end: 10b250dd3;  */

void FUN_10b250dc0(void)

{
  FUN_10b250d88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b250dd4; end: 10b250ddf;  */

undefined ** FUN_10b250dd4(void)

{
  return &PTR_DAT_110ccb228;
}



/* Entry: 10b250de0; end: 10b250e17;  */

void FUN_10b250de0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b252008();
  func_0x000107c3025c();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10b250e18; end: 10b250eeb;  */

long * FUN_10b250e18(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x00010b251f6c(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar1 < 0) {
    plVar1 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b250e58;
  }
  else if ((int)plVar1 != 0) {
LAB_10b250e58:
    func_0x00010b251f14();
    plVar1 = (long *)0x1;
    param_2 = param_3;
    func_0x00010b251ef4();
  }
  func_0x00010b251f6c(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b250eb4;
  }
  else if ((int)plVar1 == 0) goto LAB_10b250eb4;
  func_0x00010b251f14();
  param_2 = param_3;
  func_0x00010b251ef4(param_3,2);
LAB_10b250eb4:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b252034();
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



/* Entry: 10b250eec; end: 10b250feb;  */

long FUN_10b250eec(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010b251f60(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = lVar2 + 1;
  }
  func_0x00010b251f60(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b251fb0();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b252068();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b250fec; end: 10b251017;  */

undefined8 FUN_10b250fec(undefined8 param_1)

{
  func_0x00010b251fbc();
  FUN_10b251018(param_1);
  return param_1;
}



/* Entry: 10b251018; end: 10b251043;  */

/* WARNING: Possible PIC construction at 0x00010b251028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b25102c) */

void FUN_10b251018(ulong *param_1)

{
  ulong uVar1;
  
  func_0x00010b252008();
  uVar1 = *param_1 ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10b251044; end: 10b251047;  */

undefined8 FUN_10b251044(undefined8 param_1)

{
  func_0x00010b251fbc();
  FUN_10b251018(param_1);
  return param_1;
}



/* Entry: 10b251048; end: 10b25105b;  */

void FUN_10b251048(void)

{
  FUN_10b250fec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b25105c; end: 10b251067;  */

undefined ** FUN_10b25105c(void)

{
  return &PTR_DAT_110ccb268;
}



/* Entry: 10b251068; end: 10b2510ab;  */

void FUN_10b251068(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b252008();
  func_0x000107c3025c();
  func_0x000107c3025c(unaff_x19 + 0x18);
  func_0x000107c3025c(unaff_x19 + 0x20);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
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



/* Entry: 10b2510ac; end: 10b25120b;  */

long * FUN_10b2510ac(long param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  int iVar4;
  long unaff_x22;
  long *plVar5;
  int iVar6;
  
  plVar2 = param_2;
  plVar5 = param_3;
  func_0x00010b251f6c(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b2510ec;
  }
  else if ((int)plVar2 != 0) {
LAB_10b2510ec:
    func_0x00010b251f14();
    plVar2 = (long *)0x1;
    param_2 = param_3;
    func_0x00010b251ef4();
  }
  func_0x00010b251f6c(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b25112c;
  }
  else if ((int)plVar2 != 0) {
LAB_10b25112c:
    func_0x00010b251f14();
    plVar2 = (long *)0x2;
    param_2 = param_3;
    func_0x00010b251ef4();
  }
  func_0x00010b251f6c(*(undefined8 *)(param_1 + 0x20));
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b251188;
  }
  else if ((int)plVar2 == 0) goto LAB_10b251188;
  func_0x00010b251f14();
  param_2 = param_3;
  func_0x00010b251ef4(param_3,3);
LAB_10b251188:
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = *(long **)(param_1 + 0x28);
    uVar1 = 0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x000107c280ac(param_2,uVar1);
  }
  plVar2 = param_2;
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar2 = param_3;
    func_0x000107c282c4();
    plVar5 = param_2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b252034();
    if ((long)plVar5 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      plVar5 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)plVar5) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar4 = (int)plVar5;
        plVar5 = (long *)(ulong)(uint)(iVar4 - iVar6);
        if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar2 + (long)iVar6;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar4);
    }
    _memcpy(plVar2,lVar3,(ulong)plVar5 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)plVar5);
  }
  return plVar2;
}



/* Entry: 10b25120c; end: 10b2512e3;  */

long FUN_10b25120c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010b251f60(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = lVar2 + 1;
  }
  func_0x00010b251f60(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b251fb0();
  }
  func_0x00010b251f60(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b251fb0();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b252068();
    lVar2 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x38) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b2512e4; end: 10b2512e7;  */

void FUN_10b2512e4(ulong *param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  
  puVar1 = param_1;
  lVar2 = param_2;
  func_0x00010b251f84(*(undefined8 *)(param_2 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((param_1[1] & 1) != 0) {
      func_0x00010b251f78();
    }
    puVar1 = param_1 + 2;
    func_0x000107c30248();
  }
  func_0x00010b251f84(*(undefined8 *)(param_2 + 0x18));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((param_1[1] & 1) != 0) {
      func_0x00010b251f78();
    }
    puVar1 = param_1 + 3;
    func_0x000107c30248();
  }
  func_0x00010b251f84(*(undefined8 *)(param_2 + 0x20));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((param_1[1] & 1) != 0) {
      func_0x00010b251f78();
    }
    puVar1 = param_1 + 4;
    func_0x000107c30248();
  }
  if (*(ulong *)(param_2 + 0x28) != 0) {
    param_1[5] = *(ulong *)(param_2 + 0x28);
  }
  if (*(ulong *)(param_2 + 0x30) != 0) {
    param_1[6] = *(ulong *)(param_2 + 0x30);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b251fe0();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 10b2512e8; end: 10b2513a7;  */

void FUN_10b2512e8(ulong *param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  
  puVar1 = param_1;
  lVar2 = param_2;
  func_0x00010b251f84(*(undefined8 *)(param_2 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((param_1[1] & 1) != 0) {
      func_0x00010b251f78();
    }
    puVar1 = param_1 + 2;
    func_0x000107c30248();
  }
  func_0x00010b251f84(*(undefined8 *)(param_2 + 0x18));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((param_1[1] & 1) != 0) {
      func_0x00010b251f78();
    }
    puVar1 = param_1 + 3;
    func_0x000107c30248();
  }
  func_0x00010b251f84(*(undefined8 *)(param_2 + 0x20));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((param_1[1] & 1) != 0) {
      func_0x00010b251f78();
    }
    puVar1 = param_1 + 4;
    func_0x000107c30248();
  }
  if (*(ulong *)(param_2 + 0x28) != 0) {
    param_1[5] = *(ulong *)(param_2 + 0x28);
  }
  if (*(ulong *)(param_2 + 0x30) != 0) {
    param_1[6] = *(ulong *)(param_2 + 0x30);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b251fe0();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 10b2513a8; end: 10b2513db;  */

void FUN_10b2513a8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110ccb1e8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = &DAT_11383d918;
  param_1[10] = &DAT_11383d918;
  param_1[0xb] = &DAT_11383d918;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}



/* Entry: 10b2513dc; end: 10b2514b3;  */

void FUN_10b2513dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010b252040();
  *unaff_x19 = &PTR_FUN_110ccb1e8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b251f1c();
  }
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  FUN_10b251db0(unaff_x19 + 3);
  FUN_10b251db0(unaff_x19 + 6);
  lVar1 = unaff_x20 + 0x48;
  func_0x00010b25201c();
  unaff_x19[9] = lVar1;
  lVar1 = unaff_x20 + 0x50;
  func_0x00010b25201c();
  unaff_x19[10] = lVar1;
  lVar1 = unaff_x20 + 0x58;
  func_0x00010b25201c();
  unaff_x19[0xb] = lVar1;
  if ((*(byte *)(unaff_x19 + 2) & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_10b251e4c();
  }
  unaff_x19[0xc] = unaff_x21;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined2 *)(unaff_x19 + 0xe) = *(undefined2 *)(unaff_x20 + 0x70);
  unaff_x19[0xd] = uVar2;
  return;
}



/* Entry: 10b2514b4; end: 10b2514df;  */

undefined8 FUN_10b2514b4(undefined8 param_1)

{
  func_0x00010b251fbc();
  FUN_10b2514e0(param_1);
  return param_1;
}



/* Entry: 10b2514e0; end: 10b251527;  */

long FUN_10b2514e0(long param_1)

{
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b250fec();
  }
  __ZdlPv();
  FUN_10b251ddc(param_1 + 0x30);
  FUN_10b251ddc(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b251528; end: 10b25152b;  */

undefined8 FUN_10b251528(undefined8 param_1)

{
  func_0x00010b251fbc();
  FUN_10b2514e0(param_1);
  return param_1;
}



/* Entry: 10b25152c; end: 10b25153f;  */

void FUN_10b25152c(void)

{
  FUN_10b2514b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b251540; end: 10b25154b;  */

undefined ** FUN_10b251540(void)

{
  return &PTR_DAT_110ccb2b0;
}



/* Entry: 10b25154c; end: 10b2515bb;  */

void FUN_10b25154c(long param_1)

{
  ulong *puVar1;
  
  FUN_10b251e38(param_1 + 0x18);
  FUN_10b251e38(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  func_0x000107c3025c(param_1 + 0x58);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b251068(*(undefined8 *)(param_1 + 0x60));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
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



/* Entry: 10b2515bc; end: 10b2517f7;  */

long * FUN_10b2515bc(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  int iVar6;
  long unaff_x22;
  undefined8 *puVar7;
  int iVar8;
  
  plVar2 = param_1;
  plVar3 = param_2;
  plVar5 = param_3;
  func_0x00010b251f6c(param_1[9]);
  if ((long)plVar3 < 0) {
    plVar3 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b251600;
  }
  else if ((int)plVar3 != 0) {
LAB_10b251600:
    func_0x00010b251f14();
    plVar3 = (long *)0x1;
    plVar2 = param_3;
    func_0x00010b251f40();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((char)param_1[0xe] == '\x01') {
    func_0x00010b251f00();
    plVar1 = (long *)0x10;
    func_0x000107c280a8();
    func_0x00010b251ee8();
    plVar3 = plVar2;
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((int)param_1[0xd] != 0) {
    func_0x00010b251f00();
    plVar2 = (long *)0x18;
    func_0x000107c280a8();
    func_0x00010b251ee8();
    plVar3 = plVar1;
    param_2 = plVar2;
  }
  func_0x00010b251f6c(param_1[10]);
  if ((long)plVar3 < 0) {
    plVar3 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b25168c;
  }
  else if ((int)plVar3 != 0) {
LAB_10b25168c:
    func_0x00010b251f14();
    plVar3 = (long *)0x4;
    plVar2 = param_3;
    func_0x00010b251f40();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(int *)((long)param_1 + 0x6c) != 0) {
    func_0x00010b251f00();
    plVar1 = (long *)0x28;
    func_0x000107c280a8();
    func_0x00010b251ee8();
    plVar3 = plVar2;
    param_2 = plVar1;
  }
  lVar4 = param_1[4];
  for (iVar6 = 0; (int)lVar4 != iVar6; iVar6 = iVar6 + 1) {
    func_0x00010b251f90();
    plVar1 = (long *)0x6;
    func_0x00010b251f54();
    param_2 = plVar1;
  }
  lVar4 = param_1[7];
  for (puVar7 = (undefined8 *)0x0; (int)lVar4 != (int)puVar7;
      puVar7 = (undefined8 *)(ulong)((int)puVar7 + 1)) {
    func_0x00010b251f90();
    plVar1 = (long *)0x7;
    func_0x00010b251f54();
    param_2 = plVar1;
  }
  func_0x00010b251f6c(param_1[0xb]);
  if ((long)plVar3 < 0) {
    if (puVar7[1] == 0) goto LAB_10b251764;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if ((int)plVar3 == 0) goto LAB_10b251764;
  func_0x00010b251f14(puVar7);
  plVar1 = param_3;
  func_0x00010b251f40(param_3,8);
  param_2 = plVar1;
LAB_10b251764:
  if (*(char *)((long)param_1 + 0x71) == '\x01') {
    func_0x00010b251f00();
    param_2 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar1);
    func_0x00010b251ee8();
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(param_1[0xc] + 0x38);
    param_2 = (long *)0xf;
    func_0x00010b251f54();
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b252034();
    if ((long)plVar5 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      plVar5 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar5) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)plVar5;
        plVar5 = (long *)(ulong)(uint)(iVar6 - iVar8);
        if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar4,(ulong)plVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar5);
  }
  return param_2;
}



/* Entry: 10b2517f8; end: 10b25193b;  */

void FUN_10b2517f8(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar4;
  ulong uVar5;
  long extraout_x9;
  long lVar6;
  long lVar7;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  lVar6 = (long)*(int *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar4 & 1) != 0) {
    puVar1 = (ulong *)(uVar4 + 7);
  }
  uVar4 = param_1;
  for (lVar7 = lVar6 << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    uVar4 = *puVar1;
    FUN_10b25193c();
    lVar6 = uVar4 + lVar6;
    puVar1 = puVar1 + 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x30);
  lVar6 = lVar6 + *(int *)(param_1 + 0x38);
  iVar3 = (int)lVar6;
  puVar1 = (ulong *)(param_1 + 0x30);
  if ((uVar5 & 1) != 0) {
    puVar1 = (ulong *)(uVar5 + 7);
  }
  for (lVar7 = (long)*(int *)(param_1 + 0x38) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    uVar4 = *puVar1;
    FUN_10b25193c();
    lVar6 = uVar4 + lVar6;
    iVar3 = (int)lVar6;
    puVar1 = puVar1 + 1;
  }
  func_0x00010b251f60(*(undefined8 *)(param_1 + 0x48));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b251fb0();
  }
  func_0x00010b251f60(*(undefined8 *)(param_1 + 0x50));
  lVar6 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b251fb0();
  }
  func_0x00010b251f60(*(undefined8 *)(param_1 + 0x58));
  lVar6 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b251fb0();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x60);
    FUN_10b25120c();
    func_0x00010b251ff0();
    iVar3 = iVar3 + iVar2 + extraout_w8 + 1;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    func_0x00010b251fc4();
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    func_0x00010b251fc4();
  }
  iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x70) * 2 + (uint)*(byte *)(param_1 + 0x71) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b252068();
    lVar6 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar6 = *(long *)(extraout_x9 + 0x10);
    }
    iVar3 = (int)lVar6 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 10b25193c; end: 10b251957;  */

long FUN_10b25193c(long param_1)

{
  long extraout_x8;
  
  FUN_10b250eec();
  func_0x00010b251ff0();
  return param_1 + extraout_x8;
}



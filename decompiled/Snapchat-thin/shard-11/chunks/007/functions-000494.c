/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088b9a14; end: 1088b9aff;  */

void FUN_1088b9a14(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x0001088bada4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x000107c2a26c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_1088babd4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x0001088ba2e8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_1088bac30();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x0001088ba474();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  func_0x0001088bae3c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088bad94();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088b9b00; end: 1088b9b37;  */

void FUN_1088b9b00(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_1088b9464();
  func_0x0001088bada4(param_1,param_2);
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248(param_1,uVar3,puVar4);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_1088ba9cc();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088b9938();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_1088baa5c();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_1088b99e8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        FUN_1088baab8();
        *(ulong **)(unaff_x21 + 0x30) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_1088b9a14();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x21 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  func_0x0001088bae3c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088bad94();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088b9b38; end: 1088b9b73;  */

undefined1  [16] FUN_1088b9b38(long param_1,long param_2)

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
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  puVar4 = (undefined1 *)(param_2 + 0x20);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0x20); puVar3 != (undefined1 *)(param_1 + 0x40);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x40);
  return auVar7;
}



/* Entry: 1088b9b74; end: 1088b9b9f;  */

undefined8 FUN_1088b9b74(undefined8 param_1)

{
  func_0x0001088bad40();
  FUN_1088b9ba0(param_1);
  return param_1;
}



/* Entry: 1088b9ba0; end: 1088b9bbb;  */

void FUN_1088b9ba0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088b9ec4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088b9bbc; end: 1088b9bbf;  */

undefined8 FUN_1088b9bbc(undefined8 param_1)

{
  func_0x0001088bad40();
  FUN_1088b9ba0(param_1);
  return param_1;
}



/* Entry: 1088b9bc0; end: 1088b9bd3;  */

void FUN_1088b9bc0(void)

{
  FUN_1088b9b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088b9bd4; end: 1088b9bdf;  */

undefined ** FUN_1088b9bd4(void)

{
  return &PTR_DAT_110a810a8;
}



/* Entry: 1088b9be0; end: 1088b9c0f;  */

void FUN_1088b9be0(long param_1)

{
  ulong *puVar1;
  
  FUN_1088b9e08();
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



/* Entry: 1088b9c10; end: 1088b9ce3;  */

long * FUN_1088b9c10(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001088bacfc();
  if (*(char *)((long)param_1 + 0x24) == '\x01') {
    func_0x0001088bacc8();
    func_0x0001088bad50();
    func_0x0001088bace0();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088bacc8();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x0001088bad64();
    param_4 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x25) == '\x01') {
    func_0x0001088bacc8();
    param_4 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x0001088bace0();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_4 = (long *)0x4;
    func_0x0001088bad48();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088badbc();
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



/* Entry: 1088b9ce4; end: 1088b9d6b;  */

void FUN_1088b9ce4(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_1088b6ff4();
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x24) * 2 + (uint)*(byte *)(param_1 + 0x25) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088bae68();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 1088b9d6c; end: 1088b9d6f;  */

void FUN_1088b9d6c(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088bada4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      func_0x0001088b75f8();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      FUN_1088b9d70();
      puVar2 = puVar3;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(char *)(unaff_x20 + 0x24) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x24) = 1;
  }
  if (*(char *)(unaff_x20 + 0x25) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x25) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088bad94();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 1088b9d70; end: 1088b9e07;  */

void FUN_1088b9d70(ulong *param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar2;
  
  func_0x0001088bada4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        FUN_1088ba014();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_1088b9e08();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_1088bab7c();
        unaff_x21[2] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088bad94();
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



/* Entry: 1088b9e08; end: 1088b9e5b;  */

void FUN_1088b9e08(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_1088ba0ac();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 1088b9e5c; end: 1088b9ec3;  */

undefined8 * FUN_1088b9e5c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110a80f30;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001088bad34();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 1) {
    FUN_1088bab7c(param_2,*(undefined8 *)(param_3 + 0x10));
    param_1[2] = param_2;
  }
  return param_1;
}



/* Entry: 1088b9ec4; end: 1088b9eef;  */

undefined8 FUN_1088b9ec4(undefined8 param_1)

{
  func_0x0001088bad40();
  FUN_1088b9ef0(param_1);
  return param_1;
}



/* Entry: 1088b9ef0; end: 1088b9f03;  */

void FUN_1088b9ef0(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_1088ba0ac();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 1088b9f04; end: 1088b9f17;  */

void FUN_1088b9f04(void)

{
  FUN_1088b9ec4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088b9f18; end: 1088b9f27;  */

undefined8 FUN_1088b9f18(undefined8 param_1)

{
  func_0x0001088bad40();
  return param_1;
}



/* Entry: 1088b9f28; end: 1088b9fe7;  */

long * FUN_1088b9f28(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088bacfc();
  if (*(int *)(param_1 + 0x1c) == 1) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x1c);
    param_4 = (long *)0x1;
    func_0x0001088bad48();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088badbc();
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



/* Entry: 1088b9fe8; end: 1088ba013;  */

long FUN_1088b9fe8(long param_1)

{
  FUN_1088ba188();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 1088ba014; end: 1088ba03f;  */

void FUN_1088ba014(ulong *param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar2;
  
  func_0x0001088bada4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        FUN_1088ba014();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_1088b9e08();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_1088bab7c();
        unaff_x21[2] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088bad94();
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



/* Entry: 1088ba040; end: 1088ba077;  */

void FUN_1088ba040(ulong *param_1,ulong *param_2)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar2;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_1088b9be0();
  func_0x0001088bada4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        FUN_1088ba014();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_1088b9e08();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_1088bab7c();
        unaff_x21[2] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088bad94();
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



/* Entry: 1088ba078; end: 1088ba0ab;  */

void FUN_1088ba078(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  return;
}



/* Entry: 1088ba0ac; end: 1088ba0cf;  */

undefined8 FUN_1088ba0ac(undefined8 param_1)

{
  func_0x0001088bad40();
  return param_1;
}



/* Entry: 1088ba0d0; end: 1088ba0e3;  */

void FUN_1088ba0d0(void)

{
  FUN_1088ba0ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ba0e4; end: 1088ba107;  */

undefined ** FUN_1088ba0e4(void)

{
  return &PTR_DAT_110a81138;
}



/* Entry: 1088ba108; end: 1088ba187;  */

long * FUN_1088ba108(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001088bacfc();
  if ((int)param_1[3] != 0) {
    func_0x0001088bacc8();
    func_0x0001088bad50();
    func_0x0001088bad64();
    param_4 = param_1;
  }
  plVar2 = param_4;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c282cc();
    param_3 = param_4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088badbc();
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
  return plVar2;
}



/* Entry: 1088ba188; end: 1088ba1eb;  */

ulong FUN_1088ba188(long param_1)

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



/* Entry: 1088ba1ec; end: 1088ba20f;  */

undefined8 FUN_1088ba1ec(undefined8 param_1)

{
  func_0x0001088bad40();
  return param_1;
}



/* Entry: 1088ba210; end: 1088ba213;  */

undefined8 FUN_1088ba210(undefined8 param_1)

{
  func_0x0001088bad40();
  return param_1;
}



/* Entry: 1088ba214; end: 1088ba227;  */

void FUN_1088ba214(void)

{
  FUN_1088ba1ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ba228; end: 1088ba233;  */

undefined ** FUN_1088ba228(void)

{
  return &PTR_DAT_110a81180;
}



/* Entry: 1088ba234; end: 1088ba2b7;  */

long * FUN_1088ba234(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088bacfc();
  if (param_1[2] != 0) {
    func_0x0001088bacc8();
    func_0x0001088bad50();
    func_0x0001088bad70();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    func_0x0001088bacc8();
    func_0x0001088badd8();
    func_0x0001088bace0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088badbc();
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



/* Entry: 1088ba2b8; end: 1088ba323;  */

long FUN_1088ba2b8(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x0001088bae10();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088ba324; end: 1088ba347;  */

undefined8 FUN_1088ba324(undefined8 param_1)

{
  func_0x0001088bad40();
  return param_1;
}



/* Entry: 1088ba348; end: 1088ba34b;  */

undefined8 FUN_1088ba348(undefined8 param_1)

{
  func_0x0001088bad40();
  return param_1;
}



/* Entry: 1088ba34c; end: 1088ba35f;  */

void FUN_1088ba34c(void)

{
  FUN_1088ba324();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ba360; end: 1088ba383;  */

undefined ** FUN_1088ba360(void)

{
  return &PTR_DAT_110a811c0;
}



/* Entry: 1088ba384; end: 1088ba42f;  */

long * FUN_1088ba384(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088bacfc();
  if (param_1[2] != 0) {
    func_0x0001088bacc8();
    func_0x0001088bad50();
    func_0x0001088bad70();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    func_0x0001088bacc8();
    func_0x0001088badd8();
    func_0x0001088bace0();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x19) == '\x01') {
    func_0x0001088bacc8();
    param_4 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x0001088bace0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088badbc();
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



/* Entry: 1088ba430; end: 1088ba493;  */

long FUN_1088ba430(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x9;
  long lVar2;
  
  func_0x0001088bae10();
  lVar1 = extraout_x8 + (ulong)*(byte *)(param_1 + 0x19) * 2;
  if ((extraout_x9 & 1) != 0) {
    lVar2 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088ba494; end: 1088ba4b7;  */

undefined8 FUN_1088ba494(undefined8 param_1)

{
  func_0x0001088bad40();
  return param_1;
}



/* Entry: 1088ba4b8; end: 1088ba4bb;  */

undefined8 FUN_1088ba4b8(undefined8 param_1)

{
  func_0x0001088bad40();
  return param_1;
}



/* Entry: 1088ba4bc; end: 1088ba4cf;  */

void FUN_1088ba4bc(void)

{
  FUN_1088ba494();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ba4d0; end: 1088ba4ef;  */

undefined ** FUN_1088ba4d0(void)

{
  return &PTR_DAT_110a81220;
}



/* Entry: 1088ba4f0; end: 1088ba55b;  */

long * FUN_1088ba4f0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088bacfc();
  if ((char)param_1[2] == '\x01') {
    func_0x0001088bacc8();
    func_0x0001088bad50();
    func_0x0001088bace0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088badbc();
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



/* Entry: 1088ba55c; end: 1088ba593;  */

long FUN_1088ba55c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
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



/* Entry: 1088ba594; end: 1088ba5bf;  */

undefined8 FUN_1088ba594(undefined8 param_1)

{
  func_0x0001088bad40();
  FUN_1088ba5c0(param_1);
  return param_1;
}



/* Entry: 1088ba5c0; end: 1088ba607;  */

void FUN_1088ba5c0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088ba324();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1088ba494();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ba608; end: 1088ba60b;  */

undefined8 FUN_1088ba608(undefined8 param_1)

{
  func_0x0001088bad40();
  FUN_1088ba5c0(param_1);
  return param_1;
}



/* Entry: 1088ba60c; end: 1088ba61f;  */

void FUN_1088ba60c(void)

{
  FUN_1088ba594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ba620; end: 1088ba62b;  */

undefined ** FUN_1088ba620(void)

{
  return &PTR_DAT_110a81288;
}



/* Entry: 1088ba62c; end: 1088ba7bf;  */

long * FUN_1088ba62c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088bacfc();
  if ((char)param_1[7] == '\x01') {
    func_0x0001088bacc8();
    func_0x0001088bad50();
    func_0x0001088bace0();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_1 = (long *)0x2;
    func_0x0001088bad48();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x1c);
    param_1 = (long *)0x3;
    func_0x0001088bad48();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x0001088bacc8();
    param_4 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x0001088bad70();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_4 = (long *)0x5;
    func_0x0001088bad48();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088badbc();
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



/* Entry: 1088ba7c0; end: 1088ba803;  */

void FUN_1088ba7c0(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x0001088bada4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x000107c2a26c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_1088babd4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x0001088ba2e8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_1088bac30();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x0001088ba474();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  func_0x0001088bae3c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088bad94();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088ba804; end: 1088ba9cb;  */

void FUN_1088ba804(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088badb4();
  }
  else {
    func_0x0001088bad58();
  }
  *puVar1 = &PTR_FUN_110a80df0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 1088ba9cc; end: 1088baa5b;  */

undefined8 * FUN_1088ba9cc(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x0001088bade8();
  if (param_1 == 0) {
    puVar3 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar3 = unaff_x21;
    func_0x00010b4d80e0();
  }
  puVar3[1] = unaff_x21;
  *puVar3 = &PTR_FUN_110a80fd0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088bad34();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(puVar3 + 2) = uVar1;
  *(undefined4 *)((long)puVar3 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    func_0x0001088b75f8();
  }
  puVar3[3] = unaff_x21;
  uVar2 = *(undefined4 *)(unaff_x19 + 0x20);
  *(undefined2 *)((long)puVar3 + 0x24) = *(undefined2 *)(unaff_x19 + 0x24);
  *(undefined4 *)(puVar3 + 4) = uVar2;
  return puVar3;
}



/* Entry: 1088baa5c; end: 1088baab7;  */

undefined8 * FUN_1088baa5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x21;
  
  func_0x0001088bade8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088badb4();
  }
  else {
    func_0x0001088bad88();
  }
  *param_1 = &PTR_FUN_110a80e40;
  param_1[1] = unaff_x21;
  puVar1 = param_1;
  func_0x0001088bae5c();
  *(undefined1 *)(puVar1 + 3) = 0;
  FUN_1088b99e8();
  return param_1;
}



/* Entry: 1088baab8; end: 1088bab7b;  */

undefined8 * FUN_1088baab8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x0001088bade8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088bae08();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b4d80e0();
  }
  param_1[1] = unaff_x21;
  *param_1 = &PTR_FUN_110a80f80;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088bad34();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x21;
    func_0x000107c2a26c();
  }
  param_1[3] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x21;
    FUN_1088babd4();
  }
  param_1[4] = puVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    FUN_1088bac30();
  }
  param_1[5] = unaff_x21;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(unaff_x19 + 0x38);
  param_1[6] = uVar3;
  return param_1;
}



/* Entry: 1088bab7c; end: 1088babd3;  */

undefined8 * FUN_1088bab7c(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x0001088bade8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088badb4();
  }
  else {
    func_0x0001088bad88();
  }
  *param_1 = &PTR_FUN_110a80df0;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1088ba014();
  return param_1;
}



/* Entry: 1088babd4; end: 1088bac2f;  */

undefined8 * FUN_1088babd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x21;
  
  func_0x0001088bade8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088badb4();
  }
  else {
    func_0x0001088bad88();
  }
  *param_1 = &PTR_FUN_110a80e90;
  param_1[1] = unaff_x21;
  puVar1 = param_1;
  func_0x0001088bae5c();
  *(undefined2 *)(puVar1 + 3) = 0;
  func_0x0001088ba2e8();
  return param_1;
}



/* Entry: 1088bac30; end: 1088bac97;  */

undefined8 * FUN_1088bac30(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x21;
  
  func_0x0001088bade8();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = unaff_x21;
    func_0x00010b4d80e0();
  }
  *puVar1 = &PTR_FUN_110a80ee0;
  puVar1[1] = unaff_x21;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  func_0x0001088ba474();
  return puVar1;
}



/* Entry: 1088bac98; end: 1088baea7;  */

void FUN_1088bac98(void)

{
  return;
}



/* Entry: 1088baea8; end: 1088baecf;  */

long FUN_1088baea8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 1088baed0; end: 1088baf17;  */

undefined8 * FUN_1088baed0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a813a8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x0001088bae74(param_1,param_3);
  return param_1;
}



/* Entry: 1088baf18; end: 1088baf1b;  */

long FUN_1088baf18(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 1088baf1c; end: 1088baf2f;  */

void FUN_1088baf1c(void)

{
  FUN_1088baea8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088baf30; end: 1088baf53;  */

undefined ** FUN_1088baf30(void)

{
  return &PTR_DAT_110a813e8;
}



/* Entry: 1088baf54; end: 1088bb00f;  */

long * FUN_1088baf54(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = param_1;
  if ((int)param_1[3] != 0) {
    plVar1 = param_1;
    func_0x0001088bb0d4();
    plVar6 = (long *)(ulong)*(uint *)(param_1 + 3);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280a8(plVar6,uVar2);
    param_2 = plVar6;
  }
  if (param_1[2] != 0) {
    func_0x0001088bb0d4();
    param_2 = (long *)param_1[2];
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,plVar6);
    func_0x000107c280ac(param_2,uVar2);
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
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 1088bb010; end: 1088bb087;  */

ulong FUN_1088bb010(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
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



/* Entry: 1088bb088; end: 1088bb0cb;  */

void FUN_1088bb088(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110a813a8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 1088bb0cc; end: 1088bb0df;  */

void FUN_1088bb0cc(void)

{
  return;
}



/* Entry: 1088bb0e0; end: 1088bb16b;  */

undefined8 * FUN_1088bb0e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a81458;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c2a26c(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c2a26c(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 1088bb16c; end: 1088bb19f;  */

long FUN_1088bb16c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1088bb1a0(param_1);
  return param_1;
}



/* Entry: 1088bb1a0; end: 1088bb1d7;  */

void FUN_1088bb1a0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bb1d8; end: 1088bb1db;  */

long FUN_1088bb1d8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1088bb1a0(param_1);
  return param_1;
}



/* Entry: 1088bb1dc; end: 1088bb1ef;  */

void FUN_1088bb1dc(void)

{
  FUN_1088bb16c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bb1f0; end: 1088bb1fb;  */

undefined ** FUN_1088bb1f0(void)

{
  return &PTR_DAT_110a81498;
}



/* Entry: 1088bb1fc; end: 1088bb257;  */

void FUN_1088bb1fc(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
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



/* Entry: 1088bb258; end: 1088bb377;  */

long * FUN_1088bb258(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  plVar2 = param_2;
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18),param_2,param_3);
  }
  plVar3 = plVar2;
  if ((uVar1 >> 1 & 1) != 0) {
    plVar3 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18),plVar2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)plVar3 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)plVar3) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar4 = (long)plVar3 + (long)iVar8;
        plVar3 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar3 + (long)iVar7);
    }
    _memcpy(plVar3,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)plVar3 + (long)(int)uVar5);
  }
  return plVar3;
}



/* Entry: 1088bb378; end: 1088bb37b;  */

void FUN_1088bb378(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000107c2a26c(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x000107c2a26c(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088bb37c; end: 1088bb44b;  */

void FUN_1088bb37c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000107c2a26c(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x000107c2a26c(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088bb44c; end: 1088bb453;  */

void FUN_1088bb44c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110a81458;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 1088bb454; end: 1088bb49f;  */

void FUN_1088bb454(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110a81458;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 1088bb4a0; end: 1088bb4ab;  */

void FUN_1088bb4a0(void)

{
  return;
}



/* Entry: 1088bb4ac; end: 1088bb523;  */

undefined8 * FUN_1088bb4ac(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a81500;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c2a26c(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 1088bb524; end: 1088bb553;  */

long FUN_1088bb524(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1088bb554(param_1);
  return param_1;
}



/* Entry: 1088bb554; end: 1088bb56f;  */

void FUN_1088bb554(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bb570; end: 1088bb573;  */

long FUN_1088bb570(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1088bb554(param_1);
  return param_1;
}



/* Entry: 1088bb574; end: 1088bb587;  */

void FUN_1088bb574(void)

{
  FUN_1088bb524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bb588; end: 1088bb593;  */

undefined ** FUN_1088bb588(void)

{
  return &PTR_DAT_110a81540;
}



/* Entry: 1088bb594; end: 1088bb6a7;  */

void FUN_1088bb594(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_1088bf358(*(undefined8 *)(param_1 + 0x18));
  }
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



/* Entry: 1088bb6a8; end: 1088bb6ab;  */

void FUN_1088bb6a8(long param_1,long param_2)

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
      func_0x000107c2a26c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_1088bf398(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 1088bb6ac; end: 1088bb73f;  */

void FUN_1088bb6ac(long param_1,long param_2)

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
      func_0x000107c2a26c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_1088bf398(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 1088bb740; end: 1088bb747;  */

void FUN_1088bb740(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110a81500;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 1088bb748; end: 1088bb78b;  */

void FUN_1088bb748(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110a81500;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 1088bb78c; end: 1088bb797;  */

void FUN_1088bb78c(void)

{
  return;
}



/* Entry: 1088bb798; end: 1088bb7ab;  */

void FUN_1088bb798(void)

{
  func_0x000107c2a298();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bb7ac; end: 1088bb7b7;  */

undefined ** FUN_1088bb7ac(void)

{
  return &PTR_DAT_110a81600;
}



/* Entry: 1088bb7b8; end: 1088bb7f3;  */

void FUN_1088bb7b8(long param_1)

{
  ulong *puVar1;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  func_0x000107c2a294();
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



/* Entry: 1088bb7f4; end: 1088bb91b;  */

long * FUN_1088bb7f4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  iVar8 = *(int *)(param_1 + 0x24);
  plVar1 = param_3;
  if (iVar8 == 3) {
    puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    lVar5 = (long)*(char *)((long)puVar9 + 0x17);
    puVar2 = puVar9;
    if (lVar5 < 0) {
      lVar5 = puVar9[1];
      puVar2 = (undefined8 *)*puVar9;
    }
    func_0x000107c303d4(puVar2,lVar5,1,&UNK_10f4ea298);
    func_0x000107c280a0(param_3,3,puVar9,param_2);
  }
  else if (iVar8 == 2) {
    func_0x000107c282cc(param_3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  else {
    plVar1 = param_2;
    if (iVar8 == 1) {
      plVar1 = (long *)0x1;
      func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                          *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18),param_2,param_3);
    }
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar3 = param_3;
    func_0x000107c28094(param_3,plVar1);
    plVar1 = (long *)(ulong)*(byte *)(param_1 + 0x10);
    uVar4 = 0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x000107c280a8(plVar1,uVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*param_3 - (long)plVar1 < (long)(int)uVar6) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)plVar1) + 0x10;
        iVar8 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar8 - iVar10);
        if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        lVar5 = (long)plVar1 + (long)iVar10;
        plVar1 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar1 + (long)iVar8);
    }
    _memcpy(plVar1,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)plVar1 + (long)(int)uVar6);
  }
  return plVar1;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b59ed48; end: 10b59edcb;  */

long * FUN_10b59ed48(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5a1e8c();
  if ((int)param_1[4] != 0) {
    func_0x00010b5a1e14();
    func_0x00010b5a1fc4();
    func_0x00010b5a1f80();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    param_4 = (long *)0x2;
    func_0x00010b5a1e84();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5a1f48();
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



/* Entry: 10b59edcc; end: 10b59ee3b;  */

void FUN_10b59edcc(void)

{
  int iVar1;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5a2184();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_10b59ee3c();
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x00010b5a1edc((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * 9);
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5a1f68();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 10b59ee3c; end: 10b59ee57;  */

long FUN_10b59ee3c(long param_1)

{
  long extraout_x8;
  
  FUN_10b59e0fc();
  FUN_10b5a1d94();
  return param_1 + extraout_x8;
}



/* Entry: 10b59ee58; end: 10b59ee5b;  */

void FUN_10b59ee58(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5a1e50();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_10b5a19ec();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010b59df94();
      puVar1 = puVar2;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00010b5a2170();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5a1e60();
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



/* Entry: 10b59ee5c; end: 10b59ee9f;  */

long FUN_10b59ee5c(long param_1)

{
  func_0x00010b5a1ec4();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5a21d0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b59dfbc();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b59eea0; end: 10b59eeb3;  */

void FUN_10b59eea0(void)

{
  FUN_10b59ee5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59eeb4; end: 10b59eebf;  */

undefined ** FUN_10b59eeb4(void)

{
  return &PTR_DAT_110d138f8;
}



/* Entry: 10b59eec0; end: 10b59ef13;  */

void FUN_10b59eec0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5a2268(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b59e050(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
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
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b59ef14; end: 10b59f00b;  */

long * FUN_10b59ef14(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5a1e8c();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    param_4 = (long *)0x1;
    func_0x00010b5a1e84();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_4 = (long *)0x2;
    func_0x00010b5a1e84();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5a1f48();
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



/* Entry: 10b59f00c; end: 10b59f00f;  */

void FUN_10b59f00c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b5a1e50();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b5a206c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5a1f98();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b5a219c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5a2150();
      if (param_1 == (ulong *)0x0) {
        FUN_10b5a19ec();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b59df94();
      }
    }
  }
  func_0x00010b5a1de8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b5a1e60();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b59f010; end: 10b59f09b;  */

long FUN_10b59f010(long param_1)

{
  func_0x00010b5a1ec4();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b5a0c68();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b5a0db8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b5a21d0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10b59cae8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_10b58b608();
  }
  __ZdlPv();
  func_0x000107c282dc(param_1 + 0x48);
  FUN_10b5a1274(param_1 + 0x30);
  func_0x000107c282dc(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b59f09c; end: 10b59f0af;  */

void FUN_10b59f09c(void)

{
  FUN_10b59f010();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59f0b0; end: 10b59f0bb;  */

undefined ** FUN_10b59f0b0(void)

{
  return &PTR_DAT_110d13948;
}



/* Entry: 10b59f0bc; end: 10b59f203;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b59f0bc(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b59f16c(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b59f198(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b5a2268(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b59cb3c(*(undefined8 *)(param_1 + 0x78));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10b58b6c8(*(undefined8 *)(param_1 + 0x80));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x90) = 0;
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



/* Entry: 10b59f204; end: 10b59f617;  */

long * FUN_10b59f204(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  int *piVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long *unaff_x19;
  long unaff_x20;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  func_0x00010b5a1e8c();
  uVar7 = *(uint *)(param_1 + 5);
  if (uVar7 != 0) {
    func_0x00010b5a1e14();
    puVar5 = (undefined1 *)((long)param_1 + 2);
    *(undefined1 *)param_1 = 10;
    for (; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
      puVar5[-1] = (byte)uVar7 | 0x80;
      puVar5 = puVar5 + 1;
    }
    puVar5[-1] = (byte)uVar7;
    piVar8 = *(int **)(unaff_x20 + 0x20);
    piVar1 = piVar8 + *(int *)(unaff_x20 + 0x18);
    do {
      func_0x00010b5a1e14();
      uVar6 = (ulong)*piVar8;
      param_4 = (long *)((long)param_1 + 1);
      while (0x7f < uVar6) {
        func_0x00010b5a2130();
        uVar6 = extraout_x8;
      }
      piVar8 = piVar8 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar6;
    } while (piVar8 < piVar1);
  }
  if (*(char *)(unaff_x20 + 0x90) == '\x01') {
    func_0x00010b5a1e14();
    func_0x00010b5a208c();
    func_0x00010b5a1e20();
    param_4 = param_1;
  }
  iVar11 = *(int *)(unaff_x20 + 0x38);
  for (iVar9 = 0; iVar11 != iVar9; iVar9 = iVar9 + 1) {
    uVar6 = *(ulong *)(unaff_x20 + 0x30);
    puVar2 = (ulong *)(unaff_x20 + 0x30);
    if ((uVar6 & 1) != 0) {
      puVar2 = (ulong *)(uVar6 + (long)iVar9 * 8 + 7);
    }
    param_3 = (long *)(ulong)*(uint *)(*puVar2 + 0x14);
    param_1 = (long *)0x3;
    func_0x00010b5a1e84();
    param_4 = param_1;
  }
  uVar7 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar7 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x18);
    param_1 = (long *)0x4;
    func_0x00010b5a1e84();
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x14);
    param_1 = (long *)0x5;
    func_0x00010b5a1e84();
    param_4 = param_1;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x70) + 0x20);
    param_1 = (long *)0x7;
    func_0x00010b5a1e84();
    param_4 = param_1;
  }
  uVar10 = *(uint *)(unaff_x20 + 0x58);
  if (uVar10 != 0) {
    func_0x00010b5a1e14();
    puVar5 = (undefined1 *)((long)param_1 + 2);
    *(undefined1 *)param_1 = 0x42;
    for (; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
      puVar5[-1] = (byte)uVar10 | 0x80;
      puVar5 = puVar5 + 1;
    }
    puVar5[-1] = (byte)uVar10;
    piVar8 = *(int **)(unaff_x20 + 0x50);
    piVar1 = piVar8 + *(int *)(unaff_x20 + 0x48);
    do {
      func_0x00010b5a1e14();
      uVar6 = (ulong)*piVar8;
      param_4 = (long *)((long)param_1 + 1);
      while (0x7f < uVar6) {
        func_0x00010b5a2130();
        uVar6 = extraout_x8_00;
      }
      piVar8 = piVar8 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar6;
    } while (piVar8 < piVar1);
  }
  if ((uVar7 >> 3 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x78) + 0x24);
    param_1 = (long *)0x9;
    func_0x00010b5a1e84();
    param_4 = param_1;
  }
  if ((uVar7 >> 4 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x80) + 0x14);
    param_1 = (long *)0xa;
    func_0x00010b5a1e84();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x91) == '\x01') {
    func_0x00010b5a1e14();
    param_4 = (long *)0x58;
    func_0x000107c280a8(0x58,param_1);
    func_0x00010b5a1e20();
  }
  plVar3 = param_4;
  if (*(long *)(unaff_x20 + 0x88) != 0) {
    plVar3 = unaff_x19;
    func_0x000106af68a8();
    param_3 = param_4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return plVar3;
  }
  func_0x00010b5a1f48();
  if ((long)param_3 < 0) {
    lVar4 = *(long *)(extraout_x8_01 + 8);
    param_3 = *(long **)(extraout_x8_01 + 0x10);
  }
  else {
    lVar4 = extraout_x8_01 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)plVar3) {
    _memcpy(plVar3,lVar4,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar3 + (long)(int)param_3);
  }
  while( true ) {
    iVar11 = ((int)*unaff_x19 - (int)plVar3) + 0x10;
    iVar9 = (int)param_3;
    uVar7 = iVar9 - iVar11;
    param_3 = (long *)(ulong)uVar7;
    if (uVar7 == 0 || iVar9 < iVar11) break;
    func_0x00010b4d5738();
    plVar3 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar3 + (long)iVar9);
}



/* Entry: 10b59f618; end: 10b59f62b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b59f618(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x00010b5a1e50();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010b5a206c();
  }
  func_0x000107c282d0(unaff_x21 + 0x18,unaff_x20 + 0x18);
  FUN_10b59f618(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar2 = (ulong *)(unaff_x21 + 0x48);
  func_0x000107c282d0();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b5a1a20();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        FUN_10b59f62c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b5a1a88();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        FUN_10b59f68c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b5a1f98();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        func_0x00010b5a219c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x0001088bce88();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_10b59cd28();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        FUN_10b5a1b68();
        *(ulong **)(unaff_x21 + 0x80) = puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_10b58beec();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x88) != 0) {
    *(long *)(unaff_x21 + 0x88) = *(long *)(unaff_x20 + 0x88);
  }
  if (*(char *)(unaff_x20 + 0x90) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x90) = 1;
  }
  if (*(char *)(unaff_x20 + 0x91) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x91) = 1;
  }
  func_0x00010b5a1de8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b5a1e60();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b59f62c; end: 10b59f68b;  */

void FUN_10b59f62c(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5a2030();
  func_0x00010b5a1f28(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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



/* Entry: 10b59f68c; end: 10b59f7ab;  */

void FUN_10b59f68c(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar4;
  
  func_0x00010b5a1e50();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00010b5a206c();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  lVar2 = unaff_x20 + 0x18;
  func_0x00010598fce8();
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x40);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      func_0x00010b5a1d58();
      *(ulong **)(unaff_x21 + 0x48) = puVar4;
      puVar1 = puVar4;
    }
    else {
      func_0x00010b59ce1c();
    }
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    *(long *)(unaff_x21 + 0x50) = *(long *)(unaff_x20 + 0x50);
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x21 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(char *)(unaff_x20 + 0x68) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x68) = 1;
  }
  func_0x00010b5a1de8();
  if ((extraout_x8_02 & 1) != 0) {
    func_0x00010b5a1e60();
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



/* Entry: 10b59f7ac; end: 10b59f7f3;  */

long FUN_10b59f7ac(long param_1)

{
  func_0x00010b5a1ec4();
  func_0x00010b5a2094();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5a21d0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b59dfbc();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b59f7f4; end: 10b59f807;  */

void FUN_10b59f7f4(void)

{
  FUN_10b59f7ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59f808; end: 10b59f813;  */

undefined ** FUN_10b59f808(void)

{
  return &PTR_DAT_110d13998;
}



/* Entry: 10b59f814; end: 10b59f867;  */

void FUN_10b59f814(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x00010b5a2118();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5a2108();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b59e050(*(undefined8 *)(unaff_x19 + 0x28));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b59f868; end: 10b59f96b;  */

long * FUN_10b59f868(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long *plVar6;
  int iVar7;
  long *unaff_x22;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 2);
  plVar2 = param_1;
  plVar5 = param_3;
  plVar6 = param_2;
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)param_1[4];
    plVar5 = (long *)(ulong)*(uint *)(param_2 + 4);
    plVar2 = (long *)0x1;
    func_0x00010b5a1e84();
    plVar6 = plVar2;
  }
  func_0x00010b5a1f74(param_1[3]);
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b59f8ec;
  }
  else if ((int)param_2 == 0) goto LAB_10b59f8ec;
  func_0x00010b5a1ed4();
  plVar2 = param_3;
  func_0x00010b5a2084(param_3,2);
  plVar5 = unaff_x22;
  plVar6 = plVar2;
LAB_10b59f8ec:
  if ((uVar1 >> 1 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(param_1[5] + 0x14);
    plVar2 = (long *)0x3;
    func_0x00010b5a1e84();
    plVar6 = plVar2;
  }
  if ((int)param_1[6] != 0) {
    func_0x00010b5a20b4();
    plVar6 = (long *)(ulong)*(uint *)(param_1 + 6);
    uVar3 = 0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x000107c280b8(plVar6,uVar3);
  }
  if ((param_1[1] & 1U) == 0) {
    return plVar6;
  }
  func_0x00010b5a1f48();
  if ((long)plVar5 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if (*param_3 - (long)plVar6 < (long)(int)plVar5) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)plVar6) + 0x10;
      iVar7 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar7 - iVar8);
      if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
      func_0x00010b4d5738();
      lVar4 = (long)plVar6 + (long)iVar8;
      plVar6 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar6 + (long)iVar7);
  }
  _memcpy(plVar6,lVar4,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)plVar6 + (long)(int)plVar5);
}



/* Entry: 10b59f96c; end: 10b59fa17;  */

void FUN_10b59f96c(long param_1)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010b5a1f34(*(undefined8 *)(param_1 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5a2110();
      func_0x00010b5a1f10();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b59ee3c(*(undefined8 *)(param_1 + 0x28));
      func_0x00010b5a1f10();
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x00010b5a1edc((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * 9);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5a1f68();
  }
  func_0x00010b5a2144();
  return;
}



/* Entry: 10b59fa18; end: 10b59fa1b;  */

void FUN_10b59fa18(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5a1e50();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    func_0x00010b5a20e0();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5a2150();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5a1f98();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b5a219c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_10b5a19ec();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b59df94();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  func_0x00010b5a1de8();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b5a1e60();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b59fa1c; end: 10b59fa5f;  */

long FUN_10b59fa1c(long param_1)

{
  func_0x00010b5a1ec4();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5a21d0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5a21d0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b59fa60; end: 10b59fa73;  */

void FUN_10b59fa60(void)

{
  FUN_10b59fa1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59fa74; end: 10b59fa7f;  */

undefined ** FUN_10b59fa74(void)

{
  return &PTR_DAT_110d139e8;
}



/* Entry: 10b59fa80; end: 10b59facf;  */

void FUN_10b59fa80(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5a2268(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5a2108();
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
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
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b59fad0; end: 10b59fbc3;  */

long * FUN_10b59fad0(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5a1e8c();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    param_4 = (long *)0x1;
    func_0x00010b5a1e84();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    param_4 = (long *)0x2;
    func_0x00010b5a1e84();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5a1f48();
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



/* Entry: 10b59fbc4; end: 10b59fbc7;  */

void FUN_10b59fbc4(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5a1e50();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5a206c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5a1f98();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b5a219c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5a2150();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5a1f98();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b5a219c();
      }
    }
  }
  func_0x00010b5a1de8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b5a1e60();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b59fbc8; end: 10b59fd3f;  */

undefined8 * FUN_10b59fbc8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d13820;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5a1dfc();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  FUN_10b5a069c(param_1 + 3,param_3 + 0x18);
  func_0x0001088d94f0(param_1 + 6,param_2,param_3 + 0x30);
  lVar2 = param_3 + 0x48;
  func_0x00010b5a1f54();
  param_1[9] = lVar2;
  lVar2 = param_3 + 0x50;
  func_0x00010b5a1f54();
  param_1[10] = lVar2;
  lVar2 = param_3 + 0x58;
  func_0x00010b5a1f54();
  param_1[0xb] = lVar2;
  lVar2 = param_3 + 0x60;
  func_0x00010b5a1f54();
  param_1[0xc] = lVar2;
  lVar2 = param_3 + 0x68;
  func_0x00010b5a1f54();
  param_1[0xd] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b5a1ba4(param_2,*(undefined8 *)(param_3 + 0x70));
  }
  param_1[0xe] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b5a1c20(param_2,*(undefined8 *)(param_3 + 0x78));
  }
  param_1[0xf] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5a1c8c(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  param_1[0x10] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5a1cbc(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  param_1[0x11] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b5a1cf8(param_2,*(undefined8 *)(param_3 + 0x90));
  }
  param_1[0x12] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x98);
  *(undefined8 *)((long)param_1 + 0x9e) = *(undefined8 *)(param_3 + 0x9e);
  param_1[0x13] = uVar3;
  return param_1;
}



/* Entry: 10b59fd40; end: 10b59fd6b;  */

undefined8 FUN_10b59fd40(undefined8 param_1)

{
  func_0x00010b5a1ec4();
  FUN_10b59fd6c(param_1);
  return param_1;
}



/* Entry: 10b59fd6c; end: 10b59fe03;  */

long FUN_10b59fd6c(long param_1)

{
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c30258(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b5a0a24();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10b5a0b7c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_10b5b32b4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_10b59c77c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_10b59d170();
  }
  __ZdlPv();
  func_0x00010879b6fc(param_1 + 0x30);
  FUN_10b5a12a4(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b59fe04; end: 10b59fe07;  */

undefined8 FUN_10b59fe04(undefined8 param_1)

{
  func_0x00010b5a1ec4();
  FUN_10b59fd6c(param_1);
  return param_1;
}



/* Entry: 10b59fe08; end: 10b59fe1b;  */

void FUN_10b59fe08(void)

{
  FUN_10b59fd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59fe1c; end: 10b59fe27;  */

undefined ** FUN_10b59fe1c(void)

{
  return &PTR_DAT_110d13a38;
}



/* Entry: 10b59fe28; end: 10b59ff3f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b59fe28(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x00010879b6e8(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  func_0x000107c3025c(param_1 + 0x58);
  func_0x000107c3025c(param_1 + 0x60);
  func_0x000107c3025c(param_1 + 0x68);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b59ff00(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b59ff40(*(undefined8 *)(param_1 + 0x78));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b5b3350(*(undefined8 *)(param_1 + 0x80));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b59c818(*(undefined8 *)(param_1 + 0x88));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10b59d204(*(undefined8 *)(param_1 + 0x90));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x9e) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
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



/* Entry: 10b59ff40; end: 10b59ff53;  */

void FUN_10b59ff40(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x10) = 0;
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



/* Entry: 10b59ff54; end: 10b5a043f;  */

long * FUN_10b59ff54(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar7;
  long unaff_x22;
  undefined8 *puVar8;
  int iVar9;
  
  func_0x00010b5a1ff8();
  func_0x00010b5a1f74(param_1[9]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b59ff90;
  }
  else if ((int)param_2 != 0) {
LAB_10b59ff90:
    func_0x00010b5a1ed4();
    param_2 = (long *)0x1;
    param_1 = unaff_x19;
    func_0x00010b5a1e44();
    unaff_x21 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x70);
    param_1 = (long *)0x3;
    func_0x00010b5a1e08(3,param_2,*(undefined4 *)((long)param_2 + 0x14));
    unaff_x21 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x78);
    param_1 = (long *)0x4;
    func_0x00010b5a1e08(4,param_2,*(undefined4 *)((long)param_2 + 0x14));
    unaff_x21 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x80);
    param_1 = (long *)0x5;
    func_0x00010b5a1e08(5,param_2,(int)param_2[7]);
    unaff_x21 = param_1;
  }
  plVar5 = (long *)(*(ulong *)(unaff_x20 + 0x50) & 0xfffffffffffffffc);
  lVar6 = (long)*(char *)((long)plVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = plVar5[1];
  }
  if (lVar6 != 0) {
    param_2 = (long *)0x6;
    param_1 = unaff_x19;
    func_0x000107c280a0();
    unaff_x21 = param_1;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x88);
    plVar5 = (long *)(ulong)*(uint *)(param_2 + 5);
    param_1 = (long *)0x7;
    func_0x00010b5a1e08();
    unaff_x21 = param_1;
  }
  func_0x00010b5a1f74(*(undefined8 *)(unaff_x20 + 0x58));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5a006c;
  }
  else if ((int)param_2 != 0) {
LAB_10b5a006c:
    func_0x00010b5a1ed4();
    param_2 = (long *)0x8;
    param_1 = unaff_x19;
    func_0x00010b5a1e44();
    unaff_x21 = param_1;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x90);
    plVar5 = (long *)(ulong)*(uint *)(param_2 + 7);
    param_1 = (long *)0x9;
    func_0x00010b5a1e08();
    unaff_x21 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    func_0x00010b5a1e38();
    plVar2 = (long *)0x58;
    func_0x000107c280a8();
    func_0x00010b5a1f80();
    param_2 = param_1;
    unaff_x21 = plVar2;
  }
  func_0x00010b5a1f74(*(undefined8 *)(unaff_x20 + 0x60));
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5a00e8;
  }
  else if ((int)param_2 != 0) {
LAB_10b5a00e8:
    func_0x00010b5a1ed4();
    plVar2 = unaff_x19;
    func_0x00010b5a1e44();
    unaff_x21 = plVar2;
  }
  plVar4 = *(long **)(unaff_x20 + 0x98);
  if (plVar4 != (long *)0x0) {
    plVar2 = unaff_x19;
    func_0x000106af6970();
    plVar5 = unaff_x21;
    unaff_x21 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)(unaff_x20 + 0xa4) == '\x01') {
    func_0x00010b5a1e38();
    plVar3 = (long *)0x78;
    func_0x000107c280a8();
    func_0x00010b5a1e20();
    plVar4 = plVar2;
    unaff_x21 = plVar3;
  }
  iVar9 = *(int *)(unaff_x20 + 0x20);
  for (iVar7 = 0; iVar9 != iVar7; iVar7 = iVar7 + 1) {
    func_0x00010b5a1fcc();
    plVar3 = (long *)0x11;
    func_0x00010b5a1e08();
    unaff_x21 = plVar3;
  }
  iVar7 = *(int *)(unaff_x20 + 0x38);
  for (puVar8 = (undefined8 *)0x0; iVar7 != (int)puVar8;
      puVar8 = (undefined8 *)(ulong)((int)puVar8 + 1)) {
    func_0x00010b5a1fcc();
    plVar3 = (long *)0x12;
    func_0x00010b5a1e08();
    unaff_x21 = plVar3;
  }
  if ((*(byte *)(unaff_x20 + 0xa5) & 1) != 0) {
    func_0x00010b5a1e38();
    unaff_x21 = (long *)0x98;
    func_0x000107c280a8();
    func_0x00010b5a1e20();
    plVar4 = plVar3;
  }
  func_0x00010b5a1f74(*(undefined8 *)(unaff_x20 + 0x68));
  if ((long)plVar4 < 0) {
    if (puVar8[1] == 0) goto LAB_10b5a0200;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if ((int)plVar4 == 0) goto LAB_10b5a0200;
  func_0x00010b5a1ed4(puVar8);
  unaff_x21 = unaff_x19;
  func_0x00010b5a1e44();
LAB_10b5a0200:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b5a1f48();
  if ((long)plVar5 < 0) {
    lVar6 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar6 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)unaff_x21 < (long)(int)plVar5) {
    while( true ) {
      iVar9 = ((int)*unaff_x19 - (int)unaff_x21) + 0x10;
      iVar7 = (int)plVar5;
      uVar1 = iVar7 - iVar9;
      plVar5 = (long *)(ulong)uVar1;
      if (uVar1 == 0 || iVar7 < iVar9) break;
      func_0x00010b4d5738();
      unaff_x21 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x21 + (long)iVar7);
  }
  _memcpy(unaff_x21,lVar6,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)unaff_x21 + (long)(int)plVar5);
}



/* Entry: 10b5a0440; end: 10b5a045b;  */

long FUN_10b5a0440(long param_1)

{
  long extraout_x8;
  
  FUN_10b5b3474();
  FUN_10b5a1d94();
  return param_1 + extraout_x8;
}



/* Entry: 10b5a045c; end: 10b5a045f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5a045c(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00010b5a1e50();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    func_0x00010b5a206c();
  }
  FUN_10b5a069c(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar2 = (ulong *)(unaff_x21 + 0x30);
  lVar3 = unaff_x20 + 0x30;
  func_0x0001088c9edc();
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x48);
    func_0x000107c30248();
  }
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x50));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x50);
    func_0x000107c30248();
  }
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x58));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x58);
    func_0x000107c30248();
  }
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x60));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x60);
    func_0x000107c30248();
  }
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x68));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x68);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10b5a1ba4();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        FUN_10b5a06ac();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10b5a1c20();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_10b5a0724();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        func_0x00010b5a1c8c();
        *(ulong **)(unaff_x21 + 0x80) = puVar2;
      }
      else {
        func_0x00010b5b3248();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x88);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        func_0x00010b5a1cbc();
        *(ulong **)(unaff_x21 + 0x88) = puVar2;
      }
      else {
        FUN_10b59c704();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x90);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b5a1cf8();
        *(ulong **)(unaff_x21 + 0x90) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_10b59d4d4();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    *(long *)(unaff_x21 + 0x98) = *(long *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    *(int *)(unaff_x21 + 0xa0) = *(int *)(unaff_x20 + 0xa0);
  }
  if (*(char *)(unaff_x20 + 0xa4) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xa4) = 1;
  }
  if (*(char *)(unaff_x20 + 0xa5) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xa5) = 1;
  }
  func_0x00010b5a1de8();
  if ((extraout_x8_04 & 1) == 0) {
    return;
  }
  func_0x00010b5a1e60();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5a0460; end: 10b5a069b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5a0460(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00010b5a1e50();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    func_0x00010b5a206c();
  }
  FUN_10b5a069c(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar2 = (ulong *)(unaff_x21 + 0x30);
  lVar3 = unaff_x20 + 0x30;
  func_0x0001088c9edc();
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x48);
    func_0x000107c30248();
  }
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x50));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x50);
    func_0x000107c30248();
  }
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x58));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x58);
    func_0x000107c30248();
  }
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x60));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x60);
    func_0x000107c30248();
  }
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x68));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x68);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10b5a1ba4();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        FUN_10b5a06ac();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10b5a1c20();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        FUN_10b5a0724();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        func_0x00010b5a1c8c();
        *(ulong **)(unaff_x21 + 0x80) = puVar2;
      }
      else {
        func_0x00010b5b3248();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x88);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        func_0x00010b5a1cbc();
        *(ulong **)(unaff_x21 + 0x88) = puVar2;
      }
      else {
        FUN_10b59c704();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x90);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b5a1cf8();
        *(ulong **)(unaff_x21 + 0x90) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_10b59d4d4();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    *(long *)(unaff_x21 + 0x98) = *(long *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    *(int *)(unaff_x21 + 0xa0) = *(int *)(unaff_x20 + 0xa0);
  }
  if (*(char *)(unaff_x20 + 0xa4) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xa4) = 1;
  }
  if (*(char *)(unaff_x20 + 0xa5) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xa5) = 1;
  }
  func_0x00010b5a1de8();
  if ((extraout_x8_04 & 1) == 0) {
    return;
  }
  func_0x00010b5a1e60();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5a069c; end: 10b5a06ab;  */

void FUN_10b5a069c(long *param_1,long param_2)

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



/* Entry: 10b5a06ac; end: 10b5a0723;  */

void FUN_10b5a06ac(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5a1e50();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x00010b5a1d28();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_10b59de80();
      puVar1 = puVar2;
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  func_0x00010b5a2170();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5a1e60();
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



/* Entry: 10b5a0724; end: 10b5a074f;  */

void FUN_10b5a0724(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
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



/* Entry: 10b5a0750; end: 10b5a0787;  */

long FUN_10b5a0750(long param_1)

{
  func_0x00010b5a1ec4();
  func_0x00010b5a2094();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5a21d0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5a0788; end: 10b5a078b;  */

long FUN_10b5a0788(long param_1)

{
  func_0x00010b5a1ec4();
  func_0x00010b5a2094();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5a21d0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5a078c; end: 10b5a079f;  */

void FUN_10b5a078c(void)

{
  FUN_10b5a0750();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a07a0; end: 10b5a07ab;  */

undefined ** FUN_10b5a07a0(void)

{
  return &PTR_DAT_110d13a78;
}



/* Entry: 10b5a07ac; end: 10b5a07eb;  */

void FUN_10b5a07ac(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5a2118();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010b5a2108();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 10b5a07ec; end: 10b5a08d3;  */

long * FUN_10b5a07ec(long *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  func_0x00010b5a1ff8();
  if ((int)param_1[5] != 0) {
    func_0x00010b5a1e38();
    param_2 = param_1;
    func_0x00010b5a1fc4();
    func_0x00010b5a1f80();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x00010b5a1e38();
    param_2 = param_1;
    func_0x00010b5a208c();
    func_0x00010b5a1e20();
    unaff_x21 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 4);
    unaff_x21 = (long *)0x3;
    func_0x00010b5a1e08();
  }
  func_0x00010b5a1f74(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5a089c;
  }
  else if ((int)param_2 == 0) goto LAB_10b5a089c;
  func_0x00010b5a1ed4();
  unaff_x21 = unaff_x19;
  func_0x00010b5a1e44();
LAB_10b5a089c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b5a1f48();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)unaff_x21 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)unaff_x21) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      unaff_x21 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x21 + (long)iVar3);
  }
  _memcpy(unaff_x21,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x21 + (long)(int)param_3);
}



/* Entry: 10b5a08d4; end: 10b5a097f;  */

void FUN_10b5a08d4(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010b5a1f34(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b5a2110();
    func_0x00010b5a1f10();
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x00010b5a1edc((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * 9);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    func_0x00010b5a1edc((int)LZCOUNT(*(int *)(param_1 + 0x2c)) * 9);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5a1f68();
  }
  func_0x00010b5a2144();
  return;
}



/* Entry: 10b5a0980; end: 10b5a0a23;  */

void FUN_10b5a0980(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5a1e50();
  uVar1 = *(ulong *)(unaff_x19 + 8);
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    func_0x00010b5a20e0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5a2150();
    if (param_1 == (ulong *)0x0) {
      func_0x00010b5a1f98();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      func_0x00010b5a219c();
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x21 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  func_0x00010b5a1de8();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b5a1e60();
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



/* Entry: 10b5a0a24; end: 10b5a0a4f;  */

undefined8 FUN_10b5a0a24(undefined8 param_1)

{
  func_0x00010b5a1ec4();
  FUN_10b5a0a50(param_1);
  return param_1;
}



/* Entry: 10b5a0a50; end: 10b5a0a6b;  */

void FUN_10b5a0a50(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b59db9c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a0a6c; end: 10b5a0a6f;  */

undefined8 FUN_10b5a0a6c(undefined8 param_1)

{
  func_0x00010b5a1ec4();
  FUN_10b5a0a50(param_1);
  return param_1;
}



/* Entry: 10b5a0a70; end: 10b5a0a83;  */

void FUN_10b5a0a70(void)

{
  FUN_10b5a0a24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a0a84; end: 10b5a0a8f;  */

undefined ** FUN_10b5a0a84(void)

{
  return &PTR_DAT_110d13ab0;
}



/* Entry: 10b5a0a90; end: 10b5a0b17;  */

long * FUN_10b5a0a90(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5a1e8c();
  if ((char)param_1[4] == '\x01') {
    func_0x00010b5a1e14();
    func_0x00010b5a1fc4();
    func_0x00010b5a1e20();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x3c);
    param_4 = (long *)0x2;
    func_0x00010b5a1e84();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5a1f48();
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



/* Entry: 10b5a0b18; end: 10b5a0b77;  */

void FUN_10b5a0b18(void)

{
  int iVar1;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5a2184();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_10b59dda0();
    func_0x00010b5a1d94();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x20) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5a1f68();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 10b5a0b78; end: 10b5a0b7b;  */

void FUN_10b5a0b78(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5a1e50();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x00010b5a1d28();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_10b59de80();
      puVar1 = puVar2;
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  func_0x00010b5a2170();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5a1e60();
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



/* Entry: 10b5a0b7c; end: 10b5a0b9f;  */

undefined8 FUN_10b5a0b7c(undefined8 param_1)

{
  func_0x00010b5a1ec4();
  return param_1;
}



/* Entry: 10b5a0ba0; end: 10b5a0ba3;  */

undefined8 FUN_10b5a0ba0(undefined8 param_1)

{
  func_0x00010b5a1ec4();
  return param_1;
}



/* Entry: 10b5a0ba4; end: 10b5a0bb7;  */

void FUN_10b5a0ba4(void)

{
  FUN_10b5a0b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a0bb8; end: 10b5a0bc3;  */

undefined ** FUN_10b5a0bb8(void)

{
  return &PTR_DAT_110d13af0;
}



/* Entry: 10b5a0bc4; end: 10b5a0c2f;  */

long * FUN_10b5a0bc4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5a1e8c();
  if ((char)param_1[2] == '\x01') {
    func_0x00010b5a1e14();
    func_0x00010b5a1fc4();
    func_0x00010b5a1e20();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5a1f48();
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



/* Entry: 10b5a0c30; end: 10b5a0c67;  */

long FUN_10b5a0c30(long param_1)

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



/* Entry: 10b5a0c68; end: 10b5a0c93;  */

long FUN_10b5a0c68(long param_1)

{
  func_0x00010b5a1ec4();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5a0c94; end: 10b5a0c97;  */

long FUN_10b5a0c94(long param_1)

{
  func_0x00010b5a1ec4();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5a0c98; end: 10b5a0cab;  */

void FUN_10b5a0c98(void)

{
  FUN_10b5a0c68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a0cac; end: 10b5a0cb7;  */

undefined ** FUN_10b5a0cac(void)

{
  return &PTR_DAT_110d13b38;
}



/* Entry: 10b5a0cb8; end: 10b5a0d53;  */

long * FUN_10b5a0cb8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long *unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x00010b5a1f74(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5a0d1c;
  }
  else if ((int)plVar1 == 0) goto LAB_10b5a0d1c;
  func_0x00010b5a1ed4();
  param_2 = param_3;
  func_0x000107c280a0(param_3,1);
  plVar4 = unaff_x22;
LAB_10b5a0d1c:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b5a1f48();
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



/* Entry: 10b5a0d54; end: 10b5a0db3;  */

void FUN_10b5a0d54(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010b5a1f34(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5a1f68();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 10b5a0db4; end: 10b5a0db7;  */

void FUN_10b5a0db4(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5a2030();
  func_0x00010b5a1f28(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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



/* Entry: 10b5a0db8; end: 10b5a0e0b;  */

long FUN_10b5a0db8(long param_1)

{
  func_0x00010b5a1ec4();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b59ce98();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5a0e0c; end: 10b5a0e0f;  */

long FUN_10b5a0e0c(long param_1)

{
  func_0x00010b5a1ec4();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b59ce98();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5a0e10; end: 10b5a0e23;  */

void FUN_10b5a0e10(void)

{
  FUN_10b5a0db8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a0e24; end: 10b5a0e2f;  */

undefined ** FUN_10b5a0e24(void)

{
  return &PTR_DAT_110d13b78;
}



/* Entry: 10b5a0e30; end: 10b5a10e3;  */

long * FUN_10b5a0e30(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar7;
  long unaff_x22;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  func_0x00010b5a1ff8();
  if ((char)param_1[0xd] == '\x01') {
    func_0x00010b5a1e38();
    param_2 = param_1;
    func_0x00010b5a1fc4();
    func_0x00010b5a1e20();
    unaff_x21 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    func_0x00010b5a1e38();
    param_2 = param_1;
    func_0x00010b5a208c();
    func_0x00010b5a2078();
    unaff_x21 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    func_0x00010b5a1e38();
    unaff_x21 = (long *)0x18;
    func_0x000107c280a8();
    func_0x00010b5a2078();
    param_2 = param_1;
  }
  func_0x00010b5a1f74(*(undefined8 *)(unaff_x20 + 0x30));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5a0edc;
  }
  else if ((int)param_2 != 0) {
LAB_10b5a0edc:
    func_0x00010b5a1ed4();
    param_2 = (long *)0x4;
    unaff_x21 = unaff_x19;
    func_0x00010b5a1e44();
  }
  lVar11 = 8;
  puVar4 = &UNK_10f77da2d;
  for (uVar10 = (ulong)(*(uint *)(unaff_x20 + 0x20) &
                       ((int)*(uint *)(unaff_x20 + 0x20) >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    uVar6 = *(ulong *)(unaff_x20 + 0x18);
    puVar1 = (ulong *)(unaff_x20 + 0x18);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + lVar11 + -1);
    }
    param_3 = (long *)*puVar1;
    lVar5 = (long)*(char *)((long)param_3 + 0x17);
    plVar9 = param_3;
    if (lVar5 < 0) {
      lVar5 = param_3[1];
      plVar9 = (long *)*param_3;
    }
    func_0x000107c303d4(plVar9,lVar5,1,&UNK_10f77da2d);
    plVar9 = (long *)(long)*(char *)((long)param_3 + 0x17);
    if ((((long)plVar9 < 0) && (plVar9 = (long *)param_3[1], 0x7f < (long)plVar9)) ||
       ((*unaff_x19 - (long)unaff_x21) + 0xe < (long)plVar9)) {
      param_2 = (long *)0x5;
      unaff_x21 = unaff_x19;
      func_0x00010b4d5120();
    }
    else {
      *(undefined1 *)unaff_x21 = 0x2a;
      *(char *)((long)unaff_x21 + 1) = (char)plVar9;
      param_2 = param_3;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        param_2 = (long *)*param_3;
      }
      param_3 = plVar9;
      _memcpy((undefined1 *)((long)unaff_x21 + 2));
      unaff_x21 = (long *)((undefined1 *)((long)unaff_x21 + 2) + (long)plVar9);
    }
    lVar11 = lVar11 + 8;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x48);
    param_3 = (long *)(ulong)*(uint *)(param_2 + 8);
    unaff_x21 = (long *)0x6;
    func_0x00010b5a1e08();
  }
  func_0x00010b5a1f74(*(undefined8 *)(unaff_x20 + 0x38));
  if ((long)param_2 < 0) {
    puVar3 = (undefined *)0x2e676e696b6e6172;
LAB_10b5a1010:
    func_0x00010b5a1ed4(puVar3);
    param_2 = (long *)0x7;
    unaff_x21 = unaff_x19;
    func_0x00010b5a1e44();
  }
  else {
    puVar3 = puVar4;
    if ((int)param_2 != 0) goto LAB_10b5a1010;
  }
  func_0x00010b5a1f74(*(undefined8 *)(unaff_x20 + 0x40));
  if ((long)param_2 < 0) {
    puVar4 = (undefined *)0x2e676e696b6e6172;
  }
  else if ((int)param_2 == 0) goto LAB_10b5a106c;
  func_0x00010b5a1ed4(puVar4);
  unaff_x21 = unaff_x19;
  func_0x00010b5a1e44();
LAB_10b5a106c:
  plVar9 = unaff_x21;
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    plVar9 = unaff_x19;
    func_0x000106af68f8();
    param_3 = unaff_x21;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5a1f48();
    if ((long)param_3 < 0) {
      lVar11 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar11 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)plVar9 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)plVar9) + 0x10;
        iVar7 = (int)param_3;
        uVar2 = iVar7 - iVar8;
        param_3 = (long *)(ulong)uVar2;
        if (uVar2 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        plVar9 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar9 + (long)iVar7);
    }
    _memcpy(plVar9,lVar11,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar9 + (long)(int)param_3);
  }
  return plVar9;
}



/* Entry: 10b5a10e4; end: 10b5a120f;  */

void FUN_10b5a10e4(ulong param_1)

{
  ulong *puVar1;
  int extraout_w8;
  int extraout_w8_00;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = *(uint *)(param_1 + 0x20);
  uVar5 = (ulong)uVar4;
  lVar7 = 8;
  uVar3 = param_1;
  for (uVar6 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)); uVar6 != 0; uVar6 = uVar6 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar7 + -1);
    }
    uVar3 = *puVar1;
    func_0x000107c282a0();
    uVar5 = uVar3 + uVar5;
    uVar4 = (uint)uVar5;
    lVar7 = lVar7 + 8;
  }
  func_0x00010b5a1f34(*(undefined8 *)(param_1 + 0x30));
  lVar7 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    func_0x000107c282a0();
    func_0x00010b5a1f10();
  }
  func_0x00010b5a1f34(*(undefined8 *)(param_1 + 0x38));
  lVar7 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    func_0x000107c282a0();
    func_0x00010b5a1f10();
  }
  func_0x00010b5a1f34(*(undefined8 *)(param_1 + 0x40));
  lVar7 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    func_0x000107c282a0();
    func_0x00010b5a1f10();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b59d060(*(undefined8 *)(param_1 + 0x48));
    func_0x00010b5a1d94();
    func_0x00010b5a1e9c();
  }
  iVar2 = -9;
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010b5a1ef8();
    iVar2 = extraout_w8;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010b5a1ef8();
    iVar2 = extraout_w8_00;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar4 = ((int)LZCOUNT(*(long *)(param_1 + 0x60)) * iVar2 + 0x2c0U >> 6) + uVar4;
  }
  iVar2 = uVar4 + (uint)*(byte *)(param_1 + 0x68) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5a1f68();
    lVar7 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar7 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar7 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10b5a1210; end: 10b5a1273;  */

void FUN_10b5a1210(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar4;
  
  func_0x00010b5a1e50();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00010b5a206c();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  lVar2 = unaff_x20 + 0x18;
  func_0x00010598fce8();
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar1 = (ulong *)(unaff_x21 + 0x40);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      func_0x00010b5a1d58();
      *(ulong **)(unaff_x21 + 0x48) = puVar4;
      puVar1 = puVar4;
    }
    else {
      func_0x00010b59ce1c();
    }
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    *(long *)(unaff_x21 + 0x50) = *(long *)(unaff_x20 + 0x50);
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x21 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(char *)(unaff_x20 + 0x68) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x68) = 1;
  }
  func_0x00010b5a1de8();
  if ((extraout_x8_02 & 1) != 0) {
    func_0x00010b5a1e60();
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



/* Entry: 10b5a1274; end: 10b5a12a3;  */

long * FUN_10b5a1274(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5a12a4; end: 10b5a12d3;  */

long * FUN_10b5a12a4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5a12d4; end: 10b5a163b;  */

long FUN_10b5a12d4(long param_1)

{
  func_0x00010879b6fc(param_1 + 0x20);
  FUN_10b5a12a4(param_1 + 8);
  return param_1;
}



/* Entry: 10b5a163c; end: 10b5a1743;  */

undefined8 * FUN_10b5a163c(undefined8 *param_1)

{
  uint uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b5a1f5c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5a1f40();
  }
  else {
    func_0x00010b5a20d4();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110d136e0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5a1dfc();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_10b5a19ec();
  }
  param_1[3] = unaff_x20;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(unaff_x19 + 0x20);
  return param_1;
}



/* Entry: 10b5a1744; end: 10b5a18af;  */

undefined8 * FUN_10b5a1744(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x98;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x98);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_DAT_110d13780;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5a1dfc();
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  func_0x000107c282d4(puVar2 + 3,param_1,param_2 + 0x18);
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  puVar2[7] = 0;
  puVar2[8] = param_1;
  FUN_10b59f618(puVar2 + 6,param_2 + 0x30);
  func_0x000107c282d4(puVar2 + 9,param_1,param_2 + 0x48);
  *(undefined4 *)(puVar2 + 0xb) = 0;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10b5a1a20(param_1,*(undefined8 *)(param_2 + 0x60));
  }
  puVar2[0xc] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10b5a1a88(param_1,*(undefined8 *)(param_2 + 0x68));
  }
  puVar2[0xd] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x0001088dc304(param_1,*(undefined8 *)(param_2 + 0x70));
  }
  puVar2[0xe] = puVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x0001088bce88(param_1,*(undefined8 *)(param_2 + 0x78));
  }
  puVar2[0xf] = puVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10b5a1b68(param_1,*(undefined8 *)(param_2 + 0x80));
  }
  puVar2[0x10] = param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  *(undefined2 *)(puVar2 + 0x12) = *(undefined2 *)(param_2 + 0x90);
  puVar2[0x11] = uVar4;
  return puVar2;
}



/* Entry: 10b5a18b0; end: 10b5a19eb;  */

undefined8 * FUN_10b5a18b0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b5a1f5c();
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar2 = unaff_x20;
    FUN_10b4d80e0();
  }
  puVar2[1] = unaff_x20;
  *puVar2 = &PTR_DAT_110d135a0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5a1dfc();
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  lVar3 = unaff_x19 + 0x18;
  func_0x00010b5a20e8();
  puVar2[3] = lVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = unaff_x20;
    func_0x0001088dc304();
  }
  puVar2[4] = puVar4;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    FUN_10b5a19ec();
  }
  puVar2[5] = unaff_x20;
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(unaff_x19 + 0x30);
  return puVar2;
}



/* Entry: 10b5a19ec; end: 10b5a1a1f;  */

undefined8 * FUN_10b5a19ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010b5a1f5c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5a20f8();
  }
  else {
    func_0x00010b5a2100();
    param_1 = unaff_x20;
  }
  func_0x00010b5a1fec();
  *param_1 = &PTR_FUN_110d13408;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010b59df94();
  return param_1;
}



/* Entry: 10b5a1a20; end: 10b5a1a87;  */

undefined8 * FUN_10b5a1a20(undefined8 *param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b5a2030();
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    func_0x00010b5a20c0();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_FUN_110d134b0;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5a1dfc();
  }
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c2809c();
  param_1[2] = lVar1;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10b5a1a88; end: 10b5a1b67;  */

undefined8 * FUN_10b5a1a88(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x70;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x70);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d13690;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5a1dfc();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  func_0x00010598fd00(puVar1 + 3,param_1,param_2 + 0x18);
  lVar2 = param_2 + 0x30;
  func_0x00010b5a1f54();
  puVar1[6] = lVar2;
  lVar2 = param_2 + 0x38;
  func_0x00010b5a1f54();
  puVar1[7] = lVar2;
  lVar2 = param_2 + 0x40;
  func_0x00010b5a1f54();
  puVar1[8] = lVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b5a1d58(param_1,*(undefined8 *)(param_2 + 0x48));
  }
  puVar1[9] = param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x59);
  *(undefined8 *)((long)puVar1 + 0x61) = *(undefined8 *)(param_2 + 0x61);
  *(undefined8 *)((long)puVar1 + 0x59) = uVar5;
  puVar1[0xb] = uVar4;
  puVar1[10] = uVar3;
  return puVar1;
}



/* Entry: 10b5a1b68; end: 10b5a1ba3;  */

undefined8 * FUN_10b5a1b68(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00010b5a1f5c();
  if (param_1 == 0) {
    unaff_x20 = (undefined8 *)0xd0;
    __Znwm();
  }
  else {
    param_2 = 0xd0;
    FUN_10b4d80e0();
  }
  func_0x00010b5a1fec();
  unaff_x20[1] = param_2;
  *unaff_x20 = &PTR_FUN_110d0f620;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b58c4cc();
  }
  *(undefined4 *)(unaff_x20 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)unaff_x20 + 0x1c) = 0;
  *(undefined8 *)((long)unaff_x20 + 0x14) = 0;
  *(undefined4 *)((long)unaff_x20 + 0x24) = 0;
  unaff_x20[5] = param_2;
  FUN_10b58c138(unaff_x20 + 3,param_3 + 0x18);
  func_0x00010598fd00(unaff_x20 + 6,param_2,param_3 + 0x30);
  func_0x000107c282d4(unaff_x20 + 9,param_2,param_3 + 0x48);
  *(undefined4 *)(unaff_x20 + 0xb) = 0;
  lVar2 = param_3 + 0x60;
  func_0x00010b58c548();
  unaff_x20[0xc] = lVar2;
  lVar2 = param_3 + 0x68;
  func_0x00010b58c548();
  unaff_x20[0xd] = lVar2;
  lVar2 = param_3 + 0x70;
  func_0x00010b58c548();
  unaff_x20[0xe] = lVar2;
  lVar2 = param_3 + 0x78;
  func_0x00010b58c548();
  unaff_x20[0xf] = lVar2;
  uVar1 = *(uint *)(unaff_x20 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b575774(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  unaff_x20[0x10] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b58c2fc(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  unaff_x20[0x11] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b58c378(param_2,*(undefined8 *)(param_3 + 0x90));
  }
  unaff_x20[0x12] = param_2;
  uVar4 = *(undefined8 *)(param_3 + 0xa0);
  uVar3 = *(undefined8 *)(param_3 + 0x98);
  uVar6 = *(undefined8 *)(param_3 + 0xb0);
  uVar5 = *(undefined8 *)(param_3 + 0xa8);
  uVar8 = *(undefined8 *)(param_3 + 0xc0);
  uVar7 = *(undefined8 *)(param_3 + 0xb8);
  *(undefined4 *)(unaff_x20 + 0x19) = *(undefined4 *)(param_3 + 200);
  unaff_x20[0x18] = uVar8;
  unaff_x20[0x17] = uVar7;
  unaff_x20[0x16] = uVar6;
  unaff_x20[0x15] = uVar5;
  unaff_x20[0x14] = uVar4;
  unaff_x20[0x13] = uVar3;
  return unaff_x20;
}



/* Entry: 10b5a1ba4; end: 10b5a1c1f;  */

undefined8 * FUN_10b5a1ba4(undefined8 *param_1)

{
  uint uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b5a1f5c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5a1f40();
  }
  else {
    func_0x00010b5a20d4();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110d13640;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5a1dfc();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x00010b5a1d28();
  }
  param_1[3] = unaff_x20;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(unaff_x19 + 0x20);
  return param_1;
}



/* Entry: 10b5a1c20; end: 10b5a1c8b;  */

undefined8 * FUN_10b5a1c20(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5a20f8();
  }
  else {
    func_0x00010b5a2100();
  }
  *puVar1 = &PTR_FUN_110d13500;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_10b5a0724();
  return puVar1;
}



/* Entry: 10b5a1c8c; end: 10b5a1d93;  */

undefined8 * FUN_10b5a1c8c(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010b5a1f5c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5a20f0();
  }
  else {
    func_0x00010b5a1f8c();
  }
  func_0x00010b5a1fec();
  *param_1 = &PTR_FUN_110d16c28;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  func_0x00010b5b3248();
  return param_1;
}



/* Entry: 10b5a1d94; end: 10b5a21cf;  */

void FUN_10b5a1d94(void)

{
  return;
}



/* Entry: 10b5a21d0; end: 10b5a21f7;  */

long FUN_10b5a21d0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5a21f8; end: 10b5a2243;  */

undefined8 * FUN_10b5a21f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d13ce8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b5a219c(param_1,param_3);
  return param_1;
}



/* Entry: 10b5a2244; end: 10b5a2247;  */

long FUN_10b5a2244(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5a2248; end: 10b5a225b;  */

void FUN_10b5a2248(void)

{
  FUN_10b5a21d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



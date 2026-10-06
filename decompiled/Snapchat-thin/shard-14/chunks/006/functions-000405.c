/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b522174; end: 10b5221af;  */

void FUN_10b522174(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b52330c();
  func_0x000107c282d0();
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    func_0x00010b52343c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5233f0();
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



/* Entry: 10b5221b0; end: 10b5221d3;  */

undefined8 FUN_10b5221b0(undefined8 param_1)

{
  func_0x00010b5232b4();
  return param_1;
}



/* Entry: 10b5221d4; end: 10b5221d7;  */

undefined8 FUN_10b5221d4(undefined8 param_1)

{
  func_0x00010b5232b4();
  return param_1;
}



/* Entry: 10b5221d8; end: 10b5221eb;  */

void FUN_10b5221d8(void)

{
  FUN_10b5221b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5221ec; end: 10b52220b;  */

undefined ** FUN_10b5221ec(void)

{
  return &PTR_DAT_110cfcba0;
}



/* Entry: 10b52220c; end: 10b522283;  */

long * FUN_10b52220c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b523230();
  if ((int)param_1[2] != 0) {
    func_0x00010b52319c();
    func_0x00010b5233ac();
    func_0x00010b5231d4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b52319c();
    func_0x00010b5233bc();
    func_0x00010b5231d4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b523334();
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



/* Entry: 10b522284; end: 10b5222db;  */

long FUN_10b522284(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00010b523360();
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



/* Entry: 10b5222dc; end: 10b522317;  */

long FUN_10b5222dc(long param_1)

{
  func_0x00010b5232b4();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c303ac();
  }
  func_0x00010b523450();
  return param_1;
}



/* Entry: 10b522318; end: 10b52231b;  */

long FUN_10b522318(long param_1)

{
  func_0x00010b5232b4();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c303ac();
  }
  func_0x00010b523450();
  return param_1;
}



/* Entry: 10b52231c; end: 10b52232f;  */

void FUN_10b52231c(void)

{
  FUN_10b5222dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b522330; end: 10b52233b;  */

undefined ** FUN_10b522330(void)

{
  return &PTR_DAT_110cfcc38;
}



/* Entry: 10b52233c; end: 10b52236f;  */

void FUN_10b52233c(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b523494();
  if (in_NG == in_OV) {
    func_0x00010b523448();
  }
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



/* Entry: 10b522370; end: 10b52248f;  */

long * FUN_10b522370(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  uint unaff_w22;
  int iVar6;
  
  func_0x00010b523230();
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != 0) {
    func_0x00010b52319c();
    func_0x00010b523400();
    while (0x7f < uVar1) {
      func_0x00010b5232f8();
    }
    func_0x00010b5232bc();
    do {
      func_0x00010b52319c();
      uVar4 = (ulong)*(int *)(ulong)uVar1;
      param_4 = (long *)(param_1 + 1);
      while (bVar2 = 0x7f < uVar4, bVar2) {
        func_0x00010b523320();
        uVar4 = extraout_x8;
      }
      func_0x00010b523420();
    } while (!bVar2);
  }
  func_0x00010b523410();
  while (unaff_w22 != uVar1) {
    func_0x00010b5231a8();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x00010b5232a0();
    func_0x00010b523430();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b523334();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar3 = extraout_x8_00 + 8;
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
  return param_4;
}



/* Entry: 10b522490; end: 10b5224cb;  */

void FUN_10b522490(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b52330c();
  func_0x000107c282d0();
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    func_0x00010b52343c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5233f0();
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



/* Entry: 10b5224cc; end: 10b52253b;  */

void FUN_10b5224cc(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
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



/* Entry: 10b52253c; end: 10b52255f;  */

undefined8 FUN_10b52253c(undefined8 param_1)

{
  func_0x00010b5232b4();
  return param_1;
}



/* Entry: 10b522560; end: 10b522563;  */

undefined8 FUN_10b522560(undefined8 param_1)

{
  func_0x00010b5232b4();
  return param_1;
}



/* Entry: 10b522564; end: 10b522577;  */

void FUN_10b522564(void)

{
  FUN_10b52253c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b522578; end: 10b52259b;  */

undefined ** FUN_10b522578(void)

{
  return &PTR_DAT_110cfccb0;
}



/* Entry: 10b52259c; end: 10b5226a3;  */

long * FUN_10b52259c(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b523230();
  lVar2 = param_1;
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x00010b52319c();
    lVar2 = 0xd;
    func_0x000107c280a8(0xd,param_1);
    func_0x00010b5233a0();
  }
  lVar3 = lVar2;
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b52319c();
    lVar3 = 0x15;
    func_0x000107c280a8(0x15,lVar2);
    func_0x00010b5233a0();
  }
  lVar2 = lVar3;
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b52319c();
    lVar2 = 0x1d;
    func_0x000107c280a8(0x1d,lVar3);
    func_0x00010b5233a0();
  }
  lVar3 = lVar2;
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x00010b52319c();
    lVar3 = 0x25;
    func_0x000107c280a8(0x25,lVar2);
    func_0x00010b5233a0();
  }
  lVar2 = lVar3;
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b52319c();
    lVar2 = 0x2d;
    func_0x000107c280a8(0x2d,lVar3);
    func_0x00010b5233a0();
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010b52319c();
    func_0x000107c280a8(0x35,lVar2);
    func_0x00010b5233a0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b523334();
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



/* Entry: 10b5226a4; end: 10b522723;  */

long FUN_10b5226a4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b522724; end: 10b522777;  */

void FUN_10b522724(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x3c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x30) != 0) {
        FUN_10b52253c();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}



/* Entry: 10b522778; end: 10b5227af;  */

long FUN_10b522778(long param_1)

{
  func_0x00010b5232b4();
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_10b522724(param_1);
  }
  func_0x00010b523450();
  return param_1;
}



/* Entry: 10b5227b0; end: 10b5227b3;  */

long FUN_10b5227b0(long param_1)

{
  func_0x00010b5232b4();
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_10b522724(param_1);
  }
  func_0x00010b523450();
  return param_1;
}



/* Entry: 10b5227b4; end: 10b5227c7;  */

void FUN_10b5227b4(void)

{
  FUN_10b522778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5227c8; end: 10b5227d3;  */

undefined ** FUN_10b5227c8(void)

{
  return &PTR_DAT_110cfcd38;
}



/* Entry: 10b5227d4; end: 10b52280f;  */

void FUN_10b5227d4(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_10b522724();
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



/* Entry: 10b522810; end: 10b52292b;  */

long * FUN_10b522810(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  int iVar8;
  
  func_0x00010b523230();
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != 0) {
    func_0x00010b52319c();
    func_0x00010b523400();
    while (0x7f < uVar1) {
      func_0x00010b5232f8();
    }
    func_0x00010b5232bc();
    do {
      func_0x00010b52319c();
      uVar6 = (ulong)*(int *)(ulong)uVar1;
      param_4 = (long *)((long)param_1 + 1);
      while (bVar2 = 0x7f < uVar6, bVar2) {
        func_0x00010b523320();
        uVar6 = extraout_x8;
      }
      func_0x00010b523420();
    } while (!bVar2);
  }
  if (*(int *)(unaff_x20 + 0x3c) == 2) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x28);
    func_0x00010b5232a0();
    param_4 = param_1;
  }
  plVar3 = param_1;
  if (*(char *)(unaff_x20 + 0x24) == '\x01') {
    func_0x00010b52319c();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x00010b5231d4();
    param_4 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b52319c();
    plVar4 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x00010b5231d4();
    param_4 = plVar4;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x00010b52319c();
    param_4 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar4);
    func_0x00010b5231d4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b523334();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar5 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)param_3;
        uVar1 = iVar7 - iVar8;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar7 < iVar8) break;
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



/* Entry: 10b52292c; end: 10b5229f3;  */

long FUN_10b52292c(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x11;
  long extraout_x11_00;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b523240();
  lVar2 = extraout_x11;
  while (lVar2 != 0) {
    func_0x00010b523208();
    lVar2 = extraout_x11_00;
  }
  func_0x00010b5231e0();
  lVar2 = extraout_x9 + (ulong)*(byte *)(unaff_x19 + 0x24) * 2;
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT(*(int *)(unaff_x19 + 0x28)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(unaff_x19 + 0x2c) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT(*(int *)(unaff_x19 + 0x2c)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(unaff_x19 + 0x3c) == 2) {
    lVar1 = *(long *)(unaff_x19 + 0x30);
    FUN_10b5226a4();
    lVar2 = lVar2 + lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b523488();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9_00 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x38) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5229f4; end: 10b522ae7;  */

void FUN_10b5229f4(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  iVar1 = *(int *)(param_2 + 0x3c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x3c) == iVar1) {
      if (iVar1 == 2) {
        FUN_10b5224cc(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
      }
    }
    else {
      if (*(int *)(param_1 + 0x3c) != 0) {
        FUN_10b522724(param_1);
      }
      *(int *)(param_1 + 0x3c) = iVar1;
      if (iVar1 == 2) {
        FUN_10b523104(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
    }
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



/* Entry: 10b522ae8; end: 10b522b0f;  */

void FUN_10b522ae8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110cfca50;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 10b522b10; end: 10b522b3b;  */

long FUN_10b522b10(long param_1)

{
  func_0x00010b5232b4();
  FUN_10b522edc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b522b3c; end: 10b522b3f;  */

long FUN_10b522b3c(long param_1)

{
  func_0x00010b5232b4();
  FUN_10b522edc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b522b40; end: 10b522b53;  */

void FUN_10b522b40(void)

{
  FUN_10b522b10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b522b54; end: 10b522b5f;  */

undefined ** FUN_10b522b54(void)

{
  return &PTR_DAT_110cfcda8;
}



/* Entry: 10b522b60; end: 10b522bc3;  */

void FUN_10b522b60(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x00010b523448();
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    func_0x0001053936e4(param_1 + 0x40);
  }
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



/* Entry: 10b522bc4; end: 10b522d47;  */

/* WARNING: Removing unreachable block (ram,0x00010b522c18) */

long * FUN_10b522bc4(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b523230();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x00010b5231a8();
    param_3 = (ulong)*(uint *)(param_2 + 0x40);
    func_0x000107c303cc(1);
    func_0x00010b523430();
  }
  func_0x00010b523410();
  iVar3 = *(int *)(unaff_x20 + 0x48);
  while (iVar3 != 0) {
    func_0x00010b5231a8();
    param_3 = (ulong)*(uint *)(param_2 + 0x38);
    func_0x000107c303cc(3);
    func_0x00010b523430();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b523334();
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



/* Entry: 10b522d48; end: 10b522d4b;  */

void FUN_10b522d48(void)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b52330c();
  FUN_10b522d94();
  func_0x00010b522da4(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 0x40);
  func_0x00010b522db4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5233f0();
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



/* Entry: 10b522d4c; end: 10b522d93;  */

void FUN_10b522d4c(void)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b52330c();
  FUN_10b522d94();
  func_0x00010b522da4(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 0x40);
  func_0x00010b522db4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5233f0();
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



/* Entry: 10b522d94; end: 10b522dc3;  */

void FUN_10b522d94(long *param_1,long param_2)

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



/* Entry: 10b522dc4; end: 10b522e4b;  */

void FUN_10b522dc4(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b522b60();
  func_0x00010b52330c(param_1,param_2);
  FUN_10b522d94();
  func_0x00010b522da4(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 0x40);
  func_0x00010b522db4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5233f0();
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



/* Entry: 10b522e4c; end: 10b522e83;  */

void FUN_10b522e4c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b523470();
  }
  *puVar1 = &PTR_FUN_110cfc870;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b522e84; end: 10b522eaf;  */

long * FUN_10b522e84(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b523468();
  }
  return param_1;
}



/* Entry: 10b522eb0; end: 10b522edb;  */

long * FUN_10b522eb0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b523468();
  }
  return param_1;
}



/* Entry: 10b522edc; end: 10b522f0b;  */

long * FUN_10b522edc(long *param_1)

{
  FUN_10b522f0c(param_1 + 6);
  FUN_10b522e84(param_1 + 3);
  if (*param_1 != 0) {
    func_0x00010b523468();
  }
  return param_1;
}



/* Entry: 10b522f0c; end: 10b522f37;  */

long * FUN_10b522f0c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b523468();
  }
  return param_1;
}



/* Entry: 10b522f38; end: 10b523103;  */

void FUN_10b522f38(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b523470();
  }
  *puVar1 = &PTR_FUN_110cfc870;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b523104; end: 10b52317b;  */

undefined8 * FUN_10b523104(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110cfc910;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_10b5224cc();
  return puVar1;
}



/* Entry: 10b52317c; end: 10b5234a7;  */

void FUN_10b52317c(void)

{
  return;
}



/* Entry: 10b5234a8; end: 10b5234db;  */

long FUN_10b5234a8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5234dc; end: 10b5234df;  */

long FUN_10b5234dc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5234e0; end: 10b5234f3;  */

void FUN_10b5234e0(void)

{
  FUN_10b5234a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5234f4; end: 10b5234ff;  */

undefined ** FUN_10b5234f4(void)

{
  return &PTR_DAT_110cfcf00;
}



/* Entry: 10b523500; end: 10b52353b;  */

void FUN_10b523500(long param_1)

{
  ulong *puVar1;
  
  func_0x000105991b74(param_1 + 0x10);
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



/* Entry: 10b52353c; end: 10b5236bb;  */

long * FUN_10b52353c(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lStack_78;
  undefined8 *apuStack_70 [2];
  
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((*(int *)(param_1 + 0x10) == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      plVar3 = &lStack_78;
      func_0x00010564c19c(plVar3);
      while (plVar4 = plVar3, lVar10 = lStack_78, lStack_78 != 0) {
        lVar5 = lStack_78 + 8;
        lVar8 = lStack_78 + 0x20;
        func_0x00010b523814();
        lVar6 = (long)*(char *)(lVar10 + 0x1f);
        if (lVar6 < 0) {
          lVar5 = *(long *)(lVar10 + 8);
          lVar6 = *(long *)(lVar10 + 0x10);
        }
        func_0x00010b523808(lVar5,lVar6);
        lVar5 = (long)*(char *)(lVar10 + 0x37);
        if (lVar5 < 0) {
          lVar8 = *(long *)(lVar10 + 0x20);
          lVar5 = *(long *)(lVar10 + 0x28);
        }
        func_0x00010b523808(lVar8,lVar5);
        plVar3 = &lStack_78;
        func_0x000107c27d54(plVar3);
        param_2 = plVar4;
      }
    }
    else {
      plVar3 = &lStack_78;
      func_0x000105991b98(plVar3);
      puVar1 = apuStack_70[0];
      for (lVar10 = lStack_78 << 3; plVar4 = plVar3, lVar10 != 0; lVar10 = lVar10 + -8) {
        puVar9 = (undefined8 *)*puVar1;
        plVar3 = puVar9 + 3;
        func_0x00010b523814();
        lVar5 = (long)*(char *)((long)puVar9 + 0x17);
        puVar2 = puVar9;
        if (lVar5 < 0) {
          lVar5 = puVar9[1];
          puVar2 = (undefined8 *)*puVar9;
        }
        func_0x00010b523808(puVar2,lVar5);
        lVar5 = (long)*(char *)((long)puVar9 + 0x2f);
        if (lVar5 < 0) {
          plVar3 = (long *)puVar9[3];
          lVar5 = puVar9[4];
        }
        func_0x00010b523808(plVar3,lVar5);
        puVar1 = puVar1 + 1;
        param_2 = plVar4;
      }
      func_0x000105991ac8(apuStack_70);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar10 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar10 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      lVar10 = *(long *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    func_0x0001053930c4(param_3,lVar5,lVar10,param_2);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10b5236bc; end: 10b52373b;  */

ulong FUN_10b5236bc(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long alStack_38 [3];
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x10);
  func_0x00010564c19c(alStack_38);
  while (alStack_38[0] != 0) {
    lVar1 = alStack_38[0] + 8;
    func_0x000105990b3c(lVar1,alStack_38[0] + 0x20);
    uVar3 = lVar1 + uVar3;
    func_0x000107c27d54(alStack_38);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    uVar3 = lVar1 + uVar3;
  }
  *(int *)(param_1 + 0x30) = (int)uVar3;
  return uVar3;
}



/* Entry: 10b52373c; end: 10b52373f;  */

void FUN_10b52373c(long param_1,long param_2)

{
  func_0x0001059929d4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b523740; end: 10b5237c3;  */

void FUN_10b523740(long param_1,long param_2)

{
  func_0x0001059929d4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b5237c4; end: 10b5237cb;  */

void FUN_10b5237c4(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cfcec0;
  puVar1[1] = param_2;
  puVar1[3] = 0x100000000;
  puVar1[2] = 0x100000000;
  puVar1[4] = &DAT_10e5b4a18;
  puVar1[5] = param_2;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b5237cc; end: 10b523807;  */

void FUN_10b5237cc(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfcec0;
  puVar1[1] = param_1;
  puVar1[3] = 0x100000000;
  puVar1[2] = 0x100000000;
  puVar1[4] = &DAT_10e5b4a18;
  puVar1[5] = param_1;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b523808; end: 10b52382b;  */

/* WARNING: Removing unreachable block (ram,0x0001006281e8) */

ulong FUN_10b523808(ulong param_1,int param_2)

{
  func_0x00010029f6ec(param_1,(long)param_2);
  if ((param_1 & 1) == 0) {
    func_0x000107c613d0();
    func_0x000107c303d0(&UNK_10f7741f2,0);
  }
  return param_1;
}



/* Entry: 10b52382c; end: 10b523853;  */

long FUN_10b52382c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b523854; end: 10b523857;  */

long FUN_10b523854(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b523858; end: 10b52386b;  */

void FUN_10b523858(void)

{
  FUN_10b52382c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52386c; end: 10b52388f;  */

undefined ** FUN_10b52386c(void)

{
  return &PTR_DAT_110cfd008;
}



/* Entry: 10b523890; end: 10b523943;  */

long * FUN_10b523890(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  
  plVar7 = param_1;
  if (param_1[2] != 0) {
    plVar1 = param_1;
    func_0x00010b523d4c();
    plVar7 = (long *)param_1[2];
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280ac(plVar7,uVar2);
    param_2 = plVar7;
  }
  if ((int)param_1[3] != 0) {
    func_0x00010b523d4c();
    lVar4 = param_1[3];
    puVar3 = (undefined4 *)0x15;
    func_0x000107c280a8(0x15,plVar7);
    param_2 = (long *)(puVar3 + 1);
    *puVar3 = (int)lVar4;
  }
  if ((param_1[1] & 1U) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar9;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar8);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 10b523944; end: 10b5239d3;  */

ulong FUN_10b523944(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + 5;
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



/* Entry: 10b5239d4; end: 10b523a03;  */

long FUN_10b5239d4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b523c74(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b523a04; end: 10b523a07;  */

long FUN_10b523a04(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b523c74(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b523a08; end: 10b523a1b;  */

void FUN_10b523a08(void)

{
  FUN_10b5239d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b523a1c; end: 10b523a27;  */

undefined ** FUN_10b523a1c(void)

{
  return &PTR_DAT_110cfd078;
}



/* Entry: 10b523a28; end: 10b523a6f;  */

void FUN_10b523a28(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
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



/* Entry: 10b523a70; end: 10b523baf;  */

long * FUN_10b523a70(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x1c),param_2,param_3);
    param_2 = plVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
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



/* Entry: 10b523bb0; end: 10b523bb3;  */

void FUN_10b523bb0(long param_1,long param_2)

{
  FUN_10b523c00(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b523bb4; end: 10b523bff;  */

void FUN_10b523bb4(long param_1,long param_2)

{
  FUN_10b523c00(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b523c00; end: 10b523c0f;  */

void FUN_10b523c00(long *param_1,long param_2)

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



/* Entry: 10b523c10; end: 10b523c47;  */

void FUN_10b523c10(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  FUN_10b523a28();
  FUN_10b523c00(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b523c48; end: 10b523c73;  */

undefined1  [16] FUN_10b523c48(long param_1,long param_2)

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



/* Entry: 10b523c74; end: 10b523ca3;  */

long * FUN_10b523c74(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b523ca4; end: 10b523d33;  */

void FUN_10b523ca4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfcf78;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b523d34; end: 10b523d57;  */

void FUN_10b523d34(void)

{
  return;
}



/* Entry: 10b523d58; end: 10b523e0f;  */

undefined * FUN_10b523d58(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((bRam000000011383dd30 & 1) == 0) {
    iVar2 = 0x1383dd30;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar2 != 0) {
      FUN_10b523e10();
      uVar1 = (char)iVar2;
      FUN_10b4c5a3c();
      uRam000000011383dd28 = uVar1;
      param_1 = 0x1383dd30;
      ___cxa_guard_release();
    }
  }
  FUN_10b523e10();
  FUN_10b4c59b8();
  if (param_1 == -1) {
    func_0x000107c280b4();
    puVar3 = &DAT_11383d918;
  }
  else {
    puVar3 = (undefined *)((long)param_1 * 0x18 + 0x11383dd38);
  }
  return puVar3;
}



/* Entry: 10b523e10; end: 10b523e23;  */

undefined1  [16] FUN_10b523e10(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &UNK_10e5ba790;
  auVar1._0_8_ = &PTR_DAT_110cfd100;
  return auVar1;
}



/* Entry: 10b523e24; end: 10b523f07;  */

void FUN_10b523e24(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b524728();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b523ecc;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10b5252c8();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b524728();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10b523ecc;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10b525600();
    }
    break;
  default:
    goto LAB_10b523ecc;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b524728();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b523ecc;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10b52507c();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b524728();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10b523ecc;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10b51ea44();
    }
  }
  __ZdlPv();
LAB_10b523ecc:
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b523f08; end: 10b523f3b;  */

long FUN_10b523f08(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b523f3c(param_1);
  return param_1;
}



/* Entry: 10b523f3c; end: 10b523f93;  */

void FUN_10b523f3c(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b524cb0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b524728();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b523ecc;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10b5252c8();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b524728();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10b523ecc;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10b525600();
    }
    break;
  default:
    goto LAB_10b523ecc;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b524728();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b523ecc;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10b52507c();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b524728();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10b523ecc;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10b51ea44();
    }
  }
  __ZdlPv();
LAB_10b523ecc:
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b523f94; end: 10b523f97;  */

long FUN_10b523f94(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b523f3c(param_1);
  return param_1;
}



/* Entry: 10b523f98; end: 10b523fab;  */

void FUN_10b523f98(void)

{
  FUN_10b523f08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b523fac; end: 10b523fb7;  */

undefined ** FUN_10b523fac(void)

{
  return &PTR_DAT_110cfd5a0;
}



/* Entry: 10b523fb8; end: 10b524023;  */

void FUN_10b523fb8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b524d2c(*(undefined8 *)(param_1 + 0x28));
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_10b523e24(param_1);
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



/* Entry: 10b524024; end: 10b5241d3;  */

long * FUN_10b524024(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  plVar2 = (long *)(ulong)uVar1;
  if (uVar1 == 1) {
    lVar6 = 0x20;
LAB_10b524064:
    FUN_10b524694(plVar2,*(long *)(param_1 + 0x38),
                  *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar6));
    param_2 = plVar2;
  }
  else if (uVar1 == 2) {
    lVar6 = 0x24;
    goto LAB_10b524064;
  }
  plVar3 = plVar2;
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x00010b5246f4();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b524708();
    param_2 = plVar3;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    func_0x00010b5246f4();
    param_2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x00010b524708();
  }
  if (*(int *)(param_1 + 0x40) == 5) {
    param_2 = (long *)0x5;
    FUN_10b524694(5,*(long *)(param_1 + 0x38),*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14));
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x6;
    FUN_10b524694(6,*(long *)(param_1 + 0x20),*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14));
  }
  if (*(int *)(param_1 + 0x40) == 7) {
    param_2 = (long *)0x7;
    FUN_10b524694(7,*(long *)(param_1 + 0x38),*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14));
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar6 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar6 < 0) {
    lVar6 = puVar9[1];
    if (lVar6 == 0) goto LAB_10b524168;
    puVar4 = (undefined8 *)*puVar9;
  }
  else {
    puVar4 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b524168;
  }
  func_0x000107c303d4(puVar4,lVar6,1,&UNK_10f776e7a);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,8,puVar9,param_2);
  param_2 = plVar2;
LAB_10b524168:
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x3e7;
    FUN_10b524694(999,*(long *)(param_1 + 0x28),*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x24));
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar6 = *(long *)(uVar7 + 8);
    uVar5 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    lVar6 = uVar7 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar5) {
    while( true ) {
      iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar8 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar8 - iVar10);
      if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
      func_0x00010b4d5738();
      lVar6 = (long)param_2 + (long)iVar10;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar6);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar8);
  }
  _memcpy(param_2,lVar6,uVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar5);
}



/* Entry: 10b5241d4; end: 10b524317;  */

long FUN_10b5241d4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) != 0) goto LAB_10b5241fc;
LAB_10b524210:
    lVar4 = 0;
  }
  else {
    if (*(char *)(uVar2 + 0x17) == '\0') goto LAB_10b524210;
LAB_10b5241fc:
    func_0x000107c282a0();
    lVar4 = uVar2 + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x000105991570();
      lVar4 = lVar4 + lVar3 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b524e7c(*(undefined8 *)(param_1 + 0x28));
      func_0x00010b5246bc();
      lVar4 = extraout_x8 + 2;
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * -9 + 0x280U >> 6) + 1;
  }
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 1:
    FUN_10b525414(*(undefined8 *)(param_1 + 0x38));
    break;
  case 2:
    FUN_10b5257d4(*(undefined8 *)(param_1 + 0x38));
    break;
  default:
    goto LAB_10b5242e0;
  case 5:
    FUN_10b5251bc(*(undefined8 *)(param_1 + 0x38));
    break;
  case 7:
    FUN_10b51ec78(*(undefined8 *)(param_1 + 0x38));
  }
  func_0x00010b5246bc();
  lVar4 = extraout_x8_00 + 1;
LAB_10b5242e0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b524318; end: 10b52453b;  */

void FUN_10b524318(ulong param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar7 = *(ulong *)(param_1 + 8);
  uVar5 = uVar7;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
  }
  uVar6 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar8 = (long)*(char *)(uVar6 + 0x17);
  if (lVar8 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  uVar4 = param_1;
  if (lVar8 != 0) {
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    uVar4 = param_1 + 0x18;
    func_0x000107c30248(uVar4,uVar6,uVar7);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x20);
      if (uVar4 == 0) {
        uVar4 = uVar5;
        func_0x000105992a50(uVar5,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x28);
      if (uVar4 == 0) {
        func_0x00010b52458c(uVar5,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar5;
        uVar4 = uVar5;
      }
      else {
        FUN_10b524f30();
      }
    }
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  iVar2 = *(int *)(param_2 + 0x40);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x40);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        uVar4 = param_1;
        FUN_10b523e24();
      }
      *(int *)(param_1 + 0x40) = iVar2;
    }
    switch(iVar2) {
    case 1:
      if (iVar3 == iVar2) {
        func_0x00010b5246a0();
        FUN_10b5254a0();
        goto LAB_10b5244f4;
      }
      func_0x00010b52471c();
      func_0x00010b5245bc();
      break;
    case 2:
      if (iVar3 == iVar2) {
        func_0x00010b5246a0();
        FUN_10b52588c();
        goto LAB_10b5244f4;
      }
      func_0x00010b52471c();
      func_0x00010b5245ec();
      break;
    default:
      goto LAB_10b5244f4;
    case 5:
      if (iVar3 == iVar2) {
        func_0x00010b5246a0();
        func_0x00010b525054();
        goto LAB_10b5244f4;
      }
      func_0x00010b52471c();
      func_0x00010b52461c();
      break;
    case 7:
      if (iVar3 == iVar2) {
        func_0x00010b5246a0();
        FUN_10b51ed50();
        goto LAB_10b5244f4;
      }
      func_0x00010b52471c();
      func_0x00010b524658();
    }
    *(ulong *)(param_1 + 0x38) = uVar4;
  }
LAB_10b5244f4:
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b52453c; end: 10b524543;  */

void FUN_10b52453c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x48);
  }
  *puVar1 = &PTR_FUN_110cfd560;
  puVar1[1] = param_2;
  func_0x00010b524734();
  return;
}



/* Entry: 10b524544; end: 10b524693;  */

void FUN_10b524544(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x48);
  }
  *puVar1 = &PTR_FUN_110cfd560;
  puVar1[1] = param_1;
  func_0x00010b524734();
  return;
}



/* Entry: 10b524694; end: 10b52474f;  */

void FUN_10b524694(int param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 unaff_x19;
  
  func_0x0001001a597c();
  uVar1 = (ulong)(param_1 << 3 | 2);
  func_0x0001001a59d0(uVar1,unaff_x19);
  func_0x0001001a59d0(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_3);
  return;
}



/* Entry: 10b524750; end: 10b52477f;  */

undefined8 * FUN_10b524750(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110cfd618;
  param_1[1] = param_2;
  FUN_10b524780();
  return param_1;
}



/* Entry: 10b524780; end: 10b52479f;  */

void FUN_10b524780(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10b5247a0; end: 10b524827;  */

undefined8 * FUN_10b5247a0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cfd618;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x000107c282d4(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x000107c282d4(param_1 + 5,param_2,param_3 + 0x28);
  param_1[7] = 0;
  return param_1;
}



/* Entry: 10b524828; end: 10b52485b;  */

long FUN_10b524828(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b524b94(param_1 + 0x10);
  return param_1;
}



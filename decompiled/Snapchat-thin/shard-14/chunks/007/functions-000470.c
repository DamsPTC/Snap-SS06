/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5cc72c; end: 10b5cc72f;  */

undefined8 FUN_10b5cc72c(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5cc730; end: 10b5cc743;  */

void FUN_10b5cc730(void)

{
  FUN_10b5cc708();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cc744; end: 10b5cc76b;  */

undefined ** FUN_10b5cc744(void)

{
  return &PTR_DAT_110d22e18;
}



/* Entry: 10b5cc76c; end: 10b5cc86b;  */

long * FUN_10b5cc76c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b5d21d8();
  if ((int)param_1[3] != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d288c();
    func_0x00010b5d2460();
    func_0x00010b5d2248();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x00010b5d230c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x00010b5d23c4();
    func_0x000107c282ac();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d26d0();
    func_0x00010b5d23f8();
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d26c8();
    func_0x00010b5d23f8();
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5d2164();
    plVar2 = (long *)0x35;
    func_0x000107c280a8(0x35,param_1);
    func_0x00010b5d23f8();
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x00010b5d2164();
    func_0x000107c280a8(0x3d,plVar2);
    func_0x00010b5d23f8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d23b8();
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



/* Entry: 10b5cc86c; end: 10b5cc927;  */

ulong FUN_10b5cc86c(long param_1)

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
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = uVar1 + 5;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar1 = uVar1 + 5;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = uVar1 + 5;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
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
  *(int *)(param_1 + 0x30) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b5cc928; end: 10b5cc96f;  */

long FUN_10b5cc928(long param_1)

{
  func_0x00010b5d239c();
  func_0x00010b5d26c0();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4e4778();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5ccedc();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5cc970; end: 10b5cc973;  */

long FUN_10b5cc970(long param_1)

{
  func_0x00010b5d239c();
  func_0x00010b5d26c0();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4e4778();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5ccedc();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5cc974; end: 10b5cc987;  */

void FUN_10b5cc974(void)

{
  FUN_10b5cc928();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cc988; end: 10b5cc993;  */

undefined ** FUN_10b5cc988(void)

{
  return &PTR_DAT_110d22e58;
}



/* Entry: 10b5cc994; end: 10b5cc9f7;  */

void FUN_10b5cc994(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b4e46c4(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5cc9f8(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 10b5cc9f8; end: 10b5cca0f;  */

void FUN_10b5cc9f8(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x14) = 0;
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



/* Entry: 10b5cca10; end: 10b5ccc77;  */

uint * FUN_10b5cca10(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  long extraout_x8;
  int iVar7;
  undefined8 *unaff_x22;
  int iVar8;
  
  puVar3 = param_1;
  puVar6 = param_3;
  puVar4 = param_2;
  if ((char)param_1[0xd] == '\x01') {
    func_0x00010b5d2260();
    param_2 = puVar3;
    func_0x00010b5d2460();
    func_0x00010b5d217c();
    puVar4 = puVar3;
  }
  if (param_1[0xc] != 0) {
    func_0x00010b5d2260();
    uVar1 = param_1[0xc];
    unaff_x22 = (undefined8 *)(ulong)uVar1;
    param_2 = puVar3;
    func_0x00010b5d2594();
    puVar4 = puVar3 + 1;
    *puVar3 = uVar1;
  }
  if (*(char *)((long)param_1 + 0x35) == '\x01') {
    func_0x00010b5d2260();
    param_2 = puVar3;
    func_0x00010b5d26b8();
    func_0x00010b5d217c();
    puVar4 = puVar3;
  }
  puVar2 = puVar3;
  if (*(char *)((long)param_1 + 0x36) == '\x01') {
    func_0x00010b5d2260();
    puVar2 = (uint *)0x20;
    func_0x000107c280a8();
    func_0x00010b5d217c();
    param_2 = puVar3;
    puVar4 = puVar2;
  }
  func_0x00010b5d24ec(*(undefined8 *)(param_1 + 6));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5ccafc;
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b5ccafc;
  func_0x00010b5d2430(unaff_x22);
  puVar2 = param_3;
  func_0x00010b5d27b8(param_3,5);
  puVar4 = puVar2;
LAB_10b5ccafc:
  puVar3 = puVar2;
  if (*(char *)((long)param_1 + 0x37) == '\x01') {
    func_0x00010b5d2260();
    puVar3 = (uint *)0x30;
    func_0x000107c280a8(0x30,puVar2);
    func_0x00010b5d217c();
    puVar4 = puVar3;
  }
  uVar1 = param_1[4];
  if ((uVar1 & 1) != 0) {
    puVar6 = (uint *)(ulong)*(uint *)(*(long *)(param_1 + 8) + 0x20);
    puVar3 = (uint *)0x8;
    func_0x00010b5d22bc();
    puVar4 = puVar3;
  }
  if ((char)param_1[0xe] == '\x01') {
    func_0x00010b5d2260();
    func_0x00010b5d27d0();
    func_0x00010b5d217c();
    puVar4 = puVar3;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    puVar6 = (uint *)(ulong)*(uint *)(*(long *)(param_1 + 10) + 0x18);
    puVar4 = (uint *)0xa;
    func_0x00010b5d22bc();
  }
  if ((*(ulong *)(param_1 + 2) & 1) != 0) {
    func_0x00010b5d23b8();
    if ((long)puVar6 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      puVar6 = *(uint **)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*(long *)param_3 - (long)puVar4 < (long)(int)puVar6) {
      while( true ) {
        iVar8 = ((int)*(undefined8 *)param_3 - (int)puVar4) + 0x10;
        iVar7 = (int)puVar6;
        puVar6 = (uint *)(ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar5 = (long)puVar4 + (long)iVar8;
        puVar4 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (uint *)((long)puVar4 + (long)iVar7);
    }
    _memcpy(puVar4,lVar5,(ulong)puVar6 & 0xffffffff);
    return (uint *)((long)puVar4 + (long)(int)puVar6);
  }
  return puVar4;
}



/* Entry: 10b5ccc78; end: 10b5ccc7b;  */

void FUN_10b5ccc78(ulong *param_1,long param_2)

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
  
  func_0x00010b5d2228();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b5d2518(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010b5d250c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d2844();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b4e49e4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b4e46f4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_10b5d16ec();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b5ccda0();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x34) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x34) = 1;
  }
  if (*(char *)(unaff_x20 + 0x35) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x35) = 1;
  }
  if (*(char *)(unaff_x20 + 0x36) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x36) = 1;
  }
  if (*(char *)(unaff_x20 + 0x37) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x37) = 1;
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  func_0x00010b5d21f4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b5d2238();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5ccc7c; end: 10b5ccd9f;  */

void FUN_10b5ccc7c(ulong *param_1,long param_2)

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
  
  func_0x00010b5d2228();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b5d2518(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010b5d250c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d2844();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b4e49e4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b4e46f4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_10b5d16ec();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b5ccda0();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x34) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x34) = 1;
  }
  if (*(char *)(unaff_x20 + 0x35) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x35) = 1;
  }
  if (*(char *)(unaff_x20 + 0x36) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x36) = 1;
  }
  if (*(char *)(unaff_x20 + 0x37) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x37) = 1;
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  func_0x00010b5d21f4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b5d2238();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5ccda0; end: 10b5ccde7;  */

void FUN_10b5ccda0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 1;
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



/* Entry: 10b5ccde8; end: 10b5cce0b;  */

undefined8 FUN_10b5ccde8(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5cce0c; end: 10b5cce0f;  */

undefined8 FUN_10b5cce0c(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5cce10; end: 10b5cce23;  */

void FUN_10b5cce10(void)

{
  FUN_10b5ccde8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cce24; end: 10b5cce43;  */

undefined ** FUN_10b5cce24(void)

{
  return &PTR_DAT_110d22e98;
}



/* Entry: 10b5cce44; end: 10b5ccea3;  */

long * FUN_10b5cce44(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d21d8();
  if ((int)param_1[2] != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d2208();
    func_0x00010b5d2248();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5d23b8();
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



/* Entry: 10b5ccea4; end: 10b5ccedb;  */

long FUN_10b5ccea4(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x00010b5d2560();
  lVar1 = extraout_x8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5ccedc; end: 10b5cceff;  */

undefined8 FUN_10b5ccedc(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5ccf00; end: 10b5ccf03;  */

undefined8 FUN_10b5ccf00(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5ccf04; end: 10b5ccf17;  */

void FUN_10b5ccf04(void)

{
  FUN_10b5ccedc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5ccf18; end: 10b5ccf23;  */

undefined ** FUN_10b5ccf18(void)

{
  return &PTR_DAT_110d22ee0;
}



/* Entry: 10b5ccf24; end: 10b5ccfa7;  */

long * FUN_10b5ccf24(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d21d8();
  if ((int)param_1[2] != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d2208();
    func_0x00010b5d2248();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x14) == '\x01') {
    func_0x00010b5d2164();
    func_0x00010b5d2524();
    func_0x00010b5d217c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d23b8();
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



/* Entry: 10b5ccfa8; end: 10b5cd003;  */

long FUN_10b5ccfa8(long param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  func_0x00010b5d2560();
  lVar1 = extraout_x8 + (ulong)*(byte *)(param_1 + 0x14) * 2;
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



/* Entry: 10b5cd004; end: 10b5cd027;  */

undefined8 FUN_10b5cd004(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5cd028; end: 10b5cd02b;  */

undefined8 FUN_10b5cd028(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5cd02c; end: 10b5cd03f;  */

void FUN_10b5cd02c(void)

{
  FUN_10b5cd004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cd040; end: 10b5cd05f;  */

undefined ** FUN_10b5cd040(void)

{
  return &PTR_DAT_110d22f28;
}



/* Entry: 10b5cd060; end: 10b5cd0bf;  */

long * FUN_10b5cd060(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d21d8();
  if ((int)param_1[2] != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d2208();
    func_0x00010b5d2248();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5d23b8();
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



/* Entry: 10b5cd0c0; end: 10b5cd0f7;  */

long FUN_10b5cd0c0(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x00010b5d2560();
  lVar1 = extraout_x8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5cd0f8; end: 10b5cd12b;  */

long FUN_10b5cd0f8(long param_1)

{
  func_0x00010b5d239c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5cc708();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5cd12c; end: 10b5cd12f;  */

long FUN_10b5cd12c(long param_1)

{
  func_0x00010b5d239c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5cc708();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5cd130; end: 10b5cd143;  */

void FUN_10b5cd130(void)

{
  FUN_10b5cd0f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cd144; end: 10b5cd14f;  */

undefined ** FUN_10b5cd144(void)

{
  return &PTR_DAT_110d22f68;
}



/* Entry: 10b5cd150; end: 10b5cd19f;  */

void FUN_10b5cd150(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5d268c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5cc750(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x54) = 0;
  *(undefined8 *)(unaff_x19 + 0x4c) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 10b5cd1a0; end: 10b5cd39f;  */

long * FUN_10b5cd1a0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x00010b5d21d8();
  plVar2 = param_1;
  if ((int)param_1[4] != 0) {
    func_0x00010b5d2164();
    plVar2 = (long *)0xd;
    func_0x000107c280a8(0xd,param_1);
    func_0x00010b5d23f8();
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d2594();
    func_0x00010b5d23f8();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d27e8();
    func_0x00010b5d23f8();
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d26d0();
    func_0x00010b5d23f8();
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d26c8();
    func_0x00010b5d23f8();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x30);
    plVar2 = (long *)0x6;
    func_0x00010b5d238c();
    param_4 = plVar2;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x00010b5d23c4();
    func_0x000106af6880();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)(unaff_x20 + 0x4c) == '\x01') {
    func_0x00010b5d2164();
    plVar3 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar2);
    func_0x00010b5d217c();
    param_4 = plVar3;
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x00010b5d23c4();
    func_0x000106af68f8();
    param_4 = plVar3;
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x00010b5d23c4();
    func_0x000106af6920();
    param_4 = plVar3;
  }
  plVar2 = plVar3;
  if (*(char *)(unaff_x20 + 0x4d) == '\x01') {
    func_0x00010b5d2164();
    plVar2 = (long *)0x58;
    func_0x000107c280a8(0x58,plVar3);
    func_0x00010b5d217c();
    param_4 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x4e) == '\x01') {
    func_0x00010b5d2164();
    func_0x00010b5d27b0();
    func_0x00010b5d217c();
    param_4 = plVar2;
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    func_0x00010b5d23c4();
    func_0x000106af6948();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)(unaff_x20 + 0x4f) == '\x01') {
    func_0x00010b5d2164();
    plVar3 = (long *)0x70;
    func_0x000107c280a8(0x70,plVar2);
    func_0x00010b5d217c();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d27a8();
    func_0x00010b5d2248();
    param_4 = plVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d23b8();
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



/* Entry: 10b5cd3a0; end: 10b5cd4a3;  */

void FUN_10b5cd3a0(void)

{
  int iVar1;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  long unaff_x19;
  short sVar3;
  short sVar4;
  
  func_0x00010b5d268c();
  if ((extraout_x8 & 1) != 0) {
    FUN_10b5cc86c(*(undefined8 *)(unaff_x19 + 0x18));
    func_0x00010b5d20f4();
  }
  func_0x00010b5d2698(0xfffffff7);
  func_0x00010b5d2698();
  func_0x00010b5d26d8();
  func_0x00010b5d26d8();
  sVar3 = (ushort)(byte)*(undefined4 *)(unaff_x19 + 0x4c) * 2;
  sVar4 = (ushort)(byte)((uint)*(undefined4 *)(unaff_x19 + 0x4c) >> 8) * 2;
  func_0x00010b5d2354();
  iVar1 = CONCAT22(sVar4,sVar3) + extraout_w9;
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    iVar1 = ((uint)(extraout_w10 + (int)LZCOUNT(*(long *)(unaff_x19 + 0x50)) * extraout_w8) >> 6) +
            iVar1;
  }
  if (*(int *)(unaff_x19 + 0x58) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x58)) * extraout_w8 + 0x280U >> 6) + 1
    ;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d2748();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 10b5cd4a4; end: 10b5cd4a7;  */

void FUN_10b5cd4a4(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5d2228();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_10b5d1750();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010b5cc694();
      puVar1 = puVar2;
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
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x21 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if (*(char *)(unaff_x20 + 0x4c) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4c) = 1;
  }
  if (*(char *)(unaff_x20 + 0x4d) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4d) = 1;
  }
  if (*(char *)(unaff_x20 + 0x4e) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4e) = 1;
  }
  if (*(char *)(unaff_x20 + 0x4f) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4f) = 1;
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    *(long *)(unaff_x21 + 0x50) = *(long *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    *(int *)(unaff_x21 + 0x58) = *(int *)(unaff_x20 + 0x58);
  }
  func_0x00010b5d25b4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d2238();
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



/* Entry: 10b5cd4a8; end: 10b5cd5db;  */

void FUN_10b5cd4a8(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5d2228();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_10b5d1750();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010b5cc694();
      puVar1 = puVar2;
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
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x21 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if (*(char *)(unaff_x20 + 0x4c) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4c) = 1;
  }
  if (*(char *)(unaff_x20 + 0x4d) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4d) = 1;
  }
  if (*(char *)(unaff_x20 + 0x4e) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4e) = 1;
  }
  if (*(char *)(unaff_x20 + 0x4f) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4f) = 1;
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    *(long *)(unaff_x21 + 0x50) = *(long *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    *(int *)(unaff_x21 + 0x58) = *(int *)(unaff_x20 + 0x58);
  }
  func_0x00010b5d25b4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d2238();
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



/* Entry: 10b5cd5dc; end: 10b5cd5f7;  */

long FUN_10b5cd5dc(long param_1)

{
  long extraout_x8;
  
  FUN_10b5cd3a0();
  func_0x00010b5d20f4();
  return param_1 + extraout_x8;
}



/* Entry: 10b5cd5f8; end: 10b5cd623;  */

undefined8 FUN_10b5cd5f8(undefined8 param_1)

{
  func_0x00010b5d239c();
  func_0x00010b5d25ac();
  func_0x00010b5d26c0();
  return param_1;
}



/* Entry: 10b5cd624; end: 10b5cd627;  */

undefined8 FUN_10b5cd624(undefined8 param_1)

{
  func_0x00010b5d239c();
  func_0x00010b5d25ac();
  func_0x00010b5d26c0();
  return param_1;
}



/* Entry: 10b5cd628; end: 10b5cd63b;  */

void FUN_10b5cd628(void)

{
  FUN_10b5cd5f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cd63c; end: 10b5cd647;  */

undefined ** FUN_10b5cd63c(void)

{
  return &PTR_DAT_110d22fa8;
}



/* Entry: 10b5cd648; end: 10b5cd677;  */

void FUN_10b5cd648(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5d2378();
  func_0x00010b5d27e0();
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



/* Entry: 10b5cd678; end: 10b5cd73f;  */

long * FUN_10b5cd678(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar2 = param_2;
  plVar4 = param_3;
  func_0x00010b5d23d0();
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5cd6b0;
  }
  else if ((int)plVar2 != 0) {
LAB_10b5cd6b0:
    param_4 = (long *)&UNK_10f77f162;
    func_0x00010b5d2430();
    plVar2 = (long *)0x1;
    param_1 = param_3;
    func_0x00010b5d22e8();
    param_2 = param_1;
  }
  func_0x00010b5d24ec(*(undefined8 *)(unaff_x21 + 0x18));
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5cd70c;
  }
  else if ((int)plVar2 == 0) goto LAB_10b5cd70c;
  param_4 = (long *)&UNK_10f77f188;
  func_0x00010b5d2430();
  func_0x00010b5d22e8(param_3,2);
  param_1 = param_3;
  param_2 = param_3;
LAB_10b5cd70c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b5d23b8();
  if ((long)plVar4 < 0) {
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010b5d2898();
  if (*param_1 - (long)param_4 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)plVar4);
}



/* Entry: 10b5cd740; end: 10b5cd7b7;  */

long FUN_10b5cd740(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b5d22d4();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  func_0x00010b5d24e0(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5d2414();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d2748();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5cd7b8; end: 10b5cd7bb;  */

void FUN_10b5cd7b8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d226c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5d250c();
    }
    func_0x00010b5d2654();
  }
  func_0x00010b5d2518(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5d250c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d2290();
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



/* Entry: 10b5cd7bc; end: 10b5cd82b;  */

void FUN_10b5cd7bc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d226c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5d250c();
    }
    func_0x00010b5d2654();
  }
  func_0x00010b5d2518(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5d250c();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d2290();
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



/* Entry: 10b5cd82c; end: 10b5cd843;  */

void FUN_10b5cd82c(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
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



/* Entry: 10b5cd844; end: 10b5cd867;  */

undefined8 FUN_10b5cd844(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5cd868; end: 10b5cd86b;  */

undefined8 FUN_10b5cd868(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5cd86c; end: 10b5cd87f;  */

void FUN_10b5cd86c(void)

{
  FUN_10b5cd844();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cd880; end: 10b5cd8ff;  */

undefined ** FUN_10b5cd880(void)

{
  return &PTR_DAT_110d22fe8;
}



/* Entry: 10b5cd900; end: 10b5cd983;  */

long FUN_10b5cd900(long param_1)

{
  func_0x00010b5d239c();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b4e30f4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x000107c303ac();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c303ac();
  }
  FUN_10b4e4968(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5cd984; end: 10b5cd987;  */

long FUN_10b5cd984(long param_1)

{
  func_0x00010b5d239c();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b4e30f4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x000107c303ac();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c303ac();
  }
  FUN_10b4e4968(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5cd988; end: 10b5cd99b;  */

void FUN_10b5cd988(void)

{
  FUN_10b5cd900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cd99c; end: 10b5cd9a7;  */

undefined ** FUN_10b5cd99c(void)

{
  return &PTR_DAT_110d23028;
}



/* Entry: 10b5cd9a8; end: 10b5cda4f;  */

void FUN_10b5cd9a8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  FUN_10b4e4a20(param_1 + 0x18);
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    func_0x0001053936e4(param_1 + 0x48);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b535efc(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b4e31ac(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b535efc(*(undefined8 *)(param_1 + 0x70));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
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



/* Entry: 10b5cda50; end: 10b5cdf9b;  */

long * FUN_10b5cda50(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x00010b5d21d8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x20);
    func_0x00010b5d2254();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    func_0x00010b5d230c();
    param_4 = param_1;
  }
  iVar6 = *(int *)(unaff_x20 + 0x20);
  while (iVar6 != 0) {
    func_0x00010b5d2754(*(undefined8 *)(unaff_x20 + 0x18));
    param_1 = (long *)0x3;
    func_0x00010b5d238c();
    func_0x00010b5d2500();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x14);
    param_1 = (long *)0x4;
    func_0x00010b5d238c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d26c8();
    func_0x00010b5d23f8();
  }
  if (*(char *)(unaff_x20 + 0x84) == '\x01') {
    func_0x00010b5d2164();
    func_0x00010b5d26b0();
    func_0x00010b5d217c();
    param_4 = param_1;
  }
  plVar4 = *(long **)(unaff_x20 + 0x88);
  if (plVar4 != (long *)0x0) {
    func_0x00010b5d23c4();
    func_0x00010599ce18();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar4 = *(long **)(unaff_x20 + 0x70);
    param_3 = (ulong)*(uint *)(plVar4 + 4);
    param_1 = (long *)0x9;
    func_0x00010b5d238c();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(char *)(unaff_x20 + 0x85) == '\x01') {
    func_0x00010b5d2164();
    plVar2 = (long *)0x50;
    func_0x000107c280a8();
    func_0x00010b5d217c();
    plVar4 = param_1;
    param_4 = plVar2;
  }
  iVar6 = *(int *)(unaff_x20 + 0x38);
  while (iVar6 != 0) {
    func_0x00010b5d20d8();
    param_3 = (ulong)*(uint *)(plVar4 + 3);
    plVar2 = (long *)0xb;
    func_0x00010b5d238c();
    func_0x00010b5d2500();
  }
  if (*(int *)(unaff_x20 + 0x90) != 0) {
    func_0x00010b5d2164();
    plVar4 = plVar2;
    func_0x00010b5d27b0();
    func_0x00010b5d217c();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x94) != 0) {
    func_0x00010b5d2164();
    plVar3 = (long *)0x6d;
    func_0x000107c280a8();
    func_0x00010b5d23f8();
    plVar4 = plVar2;
  }
  iVar6 = *(int *)(unaff_x20 + 0x50);
  while (iVar6 != 0) {
    func_0x00010b5d20d8();
    param_3 = (ulong)*(uint *)(plVar4 + 6);
    plVar3 = (long *)0xe;
    func_0x00010b5d238c();
    func_0x00010b5d2500();
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d27a8();
    func_0x00010b5d217c();
    param_4 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)(unaff_x20 + 0x9c) != 0) {
    func_0x00010b5d2164();
    plVar4 = (long *)0x85;
    func_0x000107c280a8(0x85,plVar3);
    func_0x00010b5d23f8();
  }
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    func_0x00010b5d2164();
    func_0x000107c280a8(0x8d,plVar4);
    func_0x00010b5d23f8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d23b8();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar1 = iVar6 - iVar7;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar5,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5cdf9c; end: 10b5cdfd7;  */

long FUN_10b5cdf9c(long param_1)

{
  func_0x00010b5d239c();
  func_0x00010b5d25ac();
  func_0x00010b5d26c0();
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_10b5cdff0(param_1);
  }
  return param_1;
}



/* Entry: 10b5cdfd8; end: 10b5cdfdb;  */

long FUN_10b5cdfd8(long param_1)

{
  func_0x00010b5d239c();
  func_0x00010b5d25ac();
  func_0x00010b5d26c0();
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_10b5cdff0(param_1);
  }
  return param_1;
}



/* Entry: 10b5cdfdc; end: 10b5cdfef;  */

void FUN_10b5cdfdc(void)

{
  FUN_10b5cdf9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cdff0; end: 10b5ce023;  */

void FUN_10b5cdff0(long param_1)

{
  if ((*(uint *)(param_1 + 0x34) & 0xfffffffe) == 100) {
    func_0x000107c30258(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 10b5ce024; end: 10b5ce02f;  */

undefined ** FUN_10b5ce024(void)

{
  return &PTR_DAT_110d23068;
}



/* Entry: 10b5ce030; end: 10b5ce06b;  */

void FUN_10b5ce030(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5d2378();
  func_0x00010b5d27e0();
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  FUN_10b5cdff0();
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



/* Entry: 10b5ce06c; end: 10b5ce1bf;  */

long * FUN_10b5ce06c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long extraout_x8;
  long *plVar4;
  long unaff_x21;
  int iVar5;
  long *unaff_x22;
  long *plVar6;
  int iVar7;
  
  plVar2 = param_2;
  plVar6 = param_3;
  func_0x00010b5d23d0();
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_10b5ce0a4;
  }
  else if ((int)plVar2 != 0) {
LAB_10b5ce0a4:
    param_4 = (long *)&UNK_10f77f1b4;
    func_0x00010b5d2430();
    plVar2 = (long *)0x1;
    param_1 = param_3;
    func_0x00010b5d22e8();
    param_2 = param_1;
  }
  plVar4 = param_1;
  if (*(int *)(unaff_x21 + 0x20) != 0) {
    func_0x00010b5d2808();
    plVar4 = (long *)(ulong)*(uint *)(unaff_x21 + 0x20);
    func_0x00010b5d2524();
    func_0x000107c280b8();
    plVar2 = param_1;
    param_2 = plVar4;
  }
  func_0x00010b5d24ec(*(undefined8 *)(unaff_x21 + 0x18));
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] != 0) goto LAB_10b5ce10c;
  }
  else if ((int)plVar2 != 0) {
LAB_10b5ce10c:
    param_4 = (long *)&UNK_10f77f1d6;
    func_0x00010b5d2430();
    plVar4 = param_3;
    func_0x00010b5d22e8();
    param_2 = plVar4;
  }
  if (*(int *)(unaff_x21 + 0x34) == 0x65) {
    unaff_x22 = (long *)(*(ulong *)(unaff_x21 + 0x28) & 0xfffffffffffffffc);
    uVar3 = 0x65;
  }
  else {
    if (*(int *)(unaff_x21 + 0x34) != 100) goto LAB_10b5ce18c;
    func_0x00010b5d24ec(*(undefined8 *)(unaff_x21 + 0x28));
    func_0x00010b5d2430();
    uVar3 = 100;
  }
  func_0x000107c280a0(param_3,uVar3);
  plVar4 = param_3;
  plVar6 = unaff_x22;
  param_4 = param_2;
  param_2 = param_3;
LAB_10b5ce18c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b5d23b8();
  if ((long)plVar6 < 0) {
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010b5d2898();
  if ((long)(int)plVar6 <= *plVar4 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)plVar6);
  }
  while( true ) {
    iVar7 = ((int)*plVar4 - (int)param_4) + 0x10;
    iVar5 = (int)plVar6;
    plVar6 = (long *)(ulong)(uint)(iVar5 - iVar7);
    if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)param_4 + (long)iVar7);
    param_4 = plVar4;
    func_0x000107c303e4(plVar4,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar5);
}



/* Entry: 10b5ce1c0; end: 10b5ce283;  */

long FUN_10b5ce1c0(long param_1)

{
  ulong uVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long unaff_x19;
  long lVar3;
  
  func_0x00010b5d22d4();
  if (extraout_x8 < 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_10b5ce1ec;
LAB_10b5ce1d8:
    func_0x000107c282a0();
    lVar3 = param_1 + 1;
  }
  else {
    if (extraout_x8 != 0) goto LAB_10b5ce1d8;
LAB_10b5ce1ec:
    lVar3 = 0;
  }
  func_0x00010b5d24e0(*(undefined8 *)(unaff_x19 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b5d2414();
  }
  func_0x00010b5d25ec((long)*(int *)(unaff_x19 + 0x20));
  if (extraout_w8 != 0) {
    lVar3 = lVar3 + extraout_x9 + 1;
  }
  if (*(int *)(unaff_x19 + 0x34) == 0x65) {
    uVar1 = *(ulong *)(unaff_x19 + 0x28) & 0xfffffffffffffffc;
    func_0x000107c28098();
  }
  else {
    if (*(int *)(unaff_x19 + 0x34) != 100) goto LAB_10b5ce258;
    uVar1 = *(ulong *)(unaff_x19 + 0x28) & 0xfffffffffffffffc;
    func_0x000107c282a0();
  }
  lVar3 = lVar3 + uVar1 + 2;
LAB_10b5ce258:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d2748();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9_00 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(unaff_x19 + 0x30) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5ce284; end: 10b5ce38f;  */

void FUN_10b5ce284(ulong *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong uVar6;
  
  func_0x00010b5d2228();
  uVar4 = *(ulong *)(unaff_x19 + 8);
  uVar6 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar6 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  func_0x00010b5d2518(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x00010b5d250c();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  func_0x00010b5d2518(*(undefined8 *)(unaff_x20 + 0x18));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5d250c();
    }
    param_1 = unaff_x21 + 3;
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 4) = *(int *)(unaff_x20 + 0x20);
  }
  iVar2 = *(int *)(unaff_x20 + 0x34);
  if (iVar2 != 0) {
    iVar3 = *(int *)((long)unaff_x21 + 0x34);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        FUN_10b5cdff0();
      }
      *(int *)((long)unaff_x21 + 0x34) = iVar2;
    }
    if ((iVar2 == 0x65) || (iVar2 == 100)) {
      if (iVar3 != iVar2) {
        unaff_x21[5] = (ulong)&DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(unaff_x20 + 0x28) & 0xfffffffffffffffc);
      if (*(int *)(unaff_x20 + 0x34) != iVar2) {
        puVar1 = &DAT_11383d918;
      }
      param_1 = unaff_x21 + 5;
      func_0x000107c30248(param_1,puVar1,uVar6);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d2238();
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



/* Entry: 10b5ce390; end: 10b5ce41f;  */

void FUN_10b5ce390(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  
  func_0x00010b5d2778(*(undefined4 *)(param_1 + 0x1c));
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b5ce3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5d09d0)[extraout_x8] * 4 + 0x10b5ce3c4))();
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b5ce420; end: 10b5ce453;  */

long FUN_10b5ce420(long param_1)

{
  func_0x00010b5d239c();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b5ce390(param_1);
  }
  return param_1;
}



/* Entry: 10b5ce454; end: 10b5ce457;  */

long FUN_10b5ce454(long param_1)

{
  func_0x00010b5d239c();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b5ce390(param_1);
  }
  return param_1;
}



/* Entry: 10b5ce458; end: 10b5ce46b;  */

void FUN_10b5ce458(void)

{
  FUN_10b5ce420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5ce46c; end: 10b5ce477;  */

undefined ** FUN_10b5ce46c(void)

{
  return &PTR_DAT_110d230a8;
}



/* Entry: 10b5ce478; end: 10b5ce593;  */

void FUN_10b5ce478(long param_1)

{
  ulong *puVar1;
  
  FUN_10b5ce390();
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



/* Entry: 10b5ce594; end: 10b5ce6a3;  */

void FUN_10b5ce594(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b5d21b8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5d2554();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b5ce688;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b5ce390();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  switch(iVar1) {
  case 1:
    if (iVar2 != iVar1) {
code_r0x00010b5ce66c:
      func_0x000107c284d4();
      param_1 = unaff_x22;
      goto code_r0x00010b5ce684;
    }
    func_0x00010b5d2498();
    break;
  case 2:
    if (iVar2 != iVar1) goto code_r0x00010b5ce66c;
    func_0x00010b5d2498();
    break;
  case 3:
    if (iVar2 == iVar1) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x00010b535e30();
      goto LAB_10b5ce688;
    }
    func_0x00010b5d24f8();
code_r0x00010b5ce684:
    unaff_x21[2] = (ulong)param_1;
    goto LAB_10b5ce688;
  case 4:
    if (iVar2 != iVar1) goto code_r0x00010b5ce66c;
    func_0x00010b5d2498();
    break;
  default:
    goto LAB_10b5ce688;
  }
  func_0x00010bd1b688();
LAB_10b5ce688:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d2238();
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



/* Entry: 10b5ce6a4; end: 10b5ce6cb;  */

undefined8 FUN_10b5ce6a4(undefined8 param_1)

{
  func_0x00010b5d239c();
  func_0x00010b5d25ac();
  return param_1;
}



/* Entry: 10b5ce6cc; end: 10b5ce6cf;  */

undefined8 FUN_10b5ce6cc(undefined8 param_1)

{
  func_0x00010b5d239c();
  func_0x00010b5d25ac();
  return param_1;
}



/* Entry: 10b5ce6d0; end: 10b5ce6e3;  */

void FUN_10b5ce6d0(void)

{
  FUN_10b5ce6a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5ce6e4; end: 10b5ce6ef;  */

undefined ** FUN_10b5ce6e4(void)

{
  return &PTR_DAT_110d230f0;
}



/* Entry: 10b5ce6f0; end: 10b5ce71b;  */

void FUN_10b5ce6f0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5d2378();
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



/* Entry: 10b5ce71c; end: 10b5ce79f;  */

long * FUN_10b5ce71c(undefined8 param_1,long *param_2,long *param_3)

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
  func_0x00010b5d23d0();
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5ce768;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar1 == 0) goto LAB_10b5ce768;
  func_0x00010b5d2430();
  func_0x00010b5d2640();
  param_2 = unaff_x22;
LAB_10b5ce768:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b5d23b8();
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



/* Entry: 10b5ce7a0; end: 10b5ce7f7;  */

void FUN_10b5ce7a0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5d22d4();
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
    func_0x00010b5d2748();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b5ce7f8; end: 10b5ce7fb;  */

void FUN_10b5ce7f8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d226c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5d250c();
    }
    func_0x00010b5d2654();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d2290();
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



/* Entry: 10b5ce7fc; end: 10b5ce843;  */

void FUN_10b5ce7fc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d226c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5d250c();
    }
    func_0x00010b5d2654();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d2290();
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



/* Entry: 10b5ce844; end: 10b5ce8cf;  */

long FUN_10b5ce844(long param_1)

{
  func_0x00010b5d239c();
  func_0x000107c30258(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b5ce6a4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b5ce6a4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b58ca80();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b4e3764();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x30);
  FUN_10b5d10f8(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5ce8d0; end: 10b5ce8d3;  */

long FUN_10b5ce8d0(long param_1)

{
  func_0x00010b5d239c();
  func_0x000107c30258(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b5ce6a4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b5ce6a4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b58ca80();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b4e3764();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x30);
  FUN_10b5d10f8(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5ce8d4; end: 10b5ce8e7;  */

void FUN_10b5ce8d4(void)

{
  FUN_10b5ce844();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5ce8e8; end: 10b5ce8f3;  */

undefined ** FUN_10b5ce8e8(void)

{
  return &PTR_DAT_110d23128;
}



/* Entry: 10b5ce8f4; end: 10b5ce9ab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5ce8f4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x000107c282c0(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x48);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b535efc(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5ce6f0(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b5ce6f0(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b58cad4(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10b4e37b4(*(undefined8 *)(param_1 + 0x70));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
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



/* Entry: 10b5ce9ac; end: 10b5cec93;  */

long * FUN_10b5ce9ac(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long extraout_x8;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  ulong uVar15;
  
  uVar3 = *(uint *)(param_1 + 2);
  plVar5 = param_1;
  plVar7 = param_2;
  plVar9 = param_3;
  if ((uVar3 & 1) != 0) {
    plVar7 = (long *)param_1[10];
    plVar9 = (long *)(ulong)*(uint *)(plVar7 + 4);
    param_2 = (long *)0x1;
    func_0x00010b5d22bc();
    plVar5 = param_2;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    plVar7 = (long *)param_1[0xb];
    plVar9 = (long *)(ulong)*(uint *)(plVar7 + 3);
    plVar5 = (long *)0x2;
    func_0x00010b5d22bc();
    param_2 = plVar5;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    plVar7 = (long *)param_1[0xc];
    plVar9 = (long *)(ulong)*(uint *)(plVar7 + 3);
    plVar5 = (long *)0x3;
    func_0x00010b5d22bc();
    param_2 = plVar5;
  }
  if ((int)param_1[0xf] != 0) {
    func_0x00010b5d2260();
    lVar12 = param_1[0xf];
    plVar7 = plVar5;
    func_0x00010b5d26d0();
    param_2 = (long *)((long)plVar5 + 4);
    *(int *)plVar5 = (int)lVar12;
  }
  if (*(int *)((long)param_1 + 0x7c) != 0) {
    func_0x00010b5d2260();
    uVar4 = *(undefined4 *)((long)param_1 + 0x7c);
    plVar7 = plVar5;
    func_0x00010b5d26c8();
    param_2 = (long *)((long)plVar5 + 4);
    *(undefined4 *)plVar5 = uVar4;
  }
  plVar6 = plVar5;
  if (param_1[0x10] != 0) {
    func_0x00010b5d2260();
    lVar12 = param_1[0x10];
    plVar6 = (long *)0x31;
    func_0x000107c280a8();
    param_2 = plVar6 + 1;
    *plVar6 = lVar12;
    plVar7 = plVar5;
  }
  lVar12 = param_1[4];
  for (puVar13 = (undefined8 *)0x0; (int)lVar12 != (int)puVar13;
      puVar13 = (undefined8 *)(ulong)((int)puVar13 + 1)) {
    func_0x00010b5d2754(param_1[3]);
    plVar6 = (long *)0x7;
    func_0x00010b5d22bc();
    param_2 = plVar6;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    plVar7 = (long *)param_1[0xd];
    plVar9 = (long *)(ulong)*(uint *)(plVar7 + 5);
    plVar6 = (long *)0x8;
    func_0x00010b5d22bc();
    param_2 = plVar6;
  }
  if ((char)param_1[0x11] == '\x01') {
    func_0x00010b5d2260();
    plVar7 = plVar6;
    func_0x00010b5d27d0();
    func_0x00010b5d217c();
    param_2 = plVar6;
  }
  func_0x00010b5d24ec(param_1[9]);
  if ((long)plVar7 < 0) {
    if (puVar13[1] == 0) goto LAB_10b5ceb48;
    puVar13 = (undefined8 *)*puVar13;
  }
  else if ((int)plVar7 == 0) goto LAB_10b5ceb48;
  func_0x00010b5d2430(puVar13);
  param_2 = param_3;
  func_0x00010b5d27b8(param_3,10);
LAB_10b5ceb48:
  lVar12 = 8;
  for (uVar15 = (ulong)(*(uint *)(param_1 + 7) & ((int)*(uint *)(param_1 + 7) >> 0x1f ^ 0xffffffffU)
                       ); uVar15 != 0; uVar15 = uVar15 - 1) {
    uVar10 = param_1[6];
    puVar2 = (ulong *)(param_1 + 6);
    if ((uVar10 & 1) != 0) {
      puVar2 = (ulong *)(uVar10 + lVar12 + -1);
    }
    plVar7 = (long *)*puVar2;
    lVar8 = (long)*(char *)((long)plVar7 + 0x17);
    plVar5 = plVar7;
    if (lVar8 < 0) {
      lVar8 = plVar7[1];
      plVar5 = (long *)*plVar7;
    }
    func_0x00010b5d27c4(plVar5,lVar8);
    lVar8 = (long)*(char *)((long)plVar7 + 0x17);
    if (((lVar8 < 0) && (lVar8 = plVar7[1], 0x7f < lVar8)) ||
       ((*param_3 - (long)param_2) + 0xe < lVar8)) {
      plVar5 = param_3;
      func_0x00010b4d5120(param_3,0xb,plVar7,param_2);
    }
    else {
      *(undefined1 *)param_2 = 0x5a;
      *(char *)((long)param_2 + 1) = (char)lVar8;
      func_0x00010b5d27fc((undefined1 *)((long)param_2 + 2));
      plVar5 = (long *)((undefined1 *)((long)param_2 + 2) + lVar8);
      plVar7 = plVar9;
    }
    lVar12 = lVar12 + 8;
    plVar9 = plVar7;
    param_2 = plVar5;
  }
  if ((uVar3 >> 4 & 1) != 0) {
    plVar9 = (long *)(ulong)*(uint *)(param_1[0xe] + 0x18);
    param_2 = (long *)0xc;
    func_0x00010b5d22bc();
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b5d23b8();
    if ((long)plVar9 < 0) {
      lVar12 = *(long *)(extraout_x8 + 8);
      plVar9 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar12 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar9) {
      while( true ) {
        iVar14 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar11 = (int)plVar9;
        plVar9 = (long *)(ulong)(uint)(iVar11 - iVar14);
        if (iVar11 - iVar14 == 0 || iVar11 < iVar14) break;
        func_0x00010b4d5738();
        puVar1 = (undefined1 *)((long)param_2 + (long)iVar14);
        param_2 = param_3;
        func_0x000107c303e4(param_3,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar11);
    }
    _memcpy(param_2,lVar12,(ulong)plVar9 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar9);
  }
  return param_2;
}



/* Entry: 10b5cec94; end: 10b5ceddf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5cec94(long param_1)

{
  uint uVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long lVar4;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong uVar5;
  
  func_0x00010b5d2604();
  func_0x00010b5d212c();
  while (unaff_x22 != 0) {
    param_1 = *unaff_x21;
    func_0x00010b5cdc98();
    func_0x00010b5d2188();
    unaff_x21 = unaff_x21 + 1;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x38);
  lVar4 = unaff_x20 + (ulong)uVar1;
  for (uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    func_0x00010b5d252c();
    lVar4 = param_1 + lVar4;
  }
  func_0x00010b5d24e0(*(undefined8 *)(unaff_x19 + 0x48));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b5d2414();
  }
  iVar2 = (int)param_1;
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x50);
      func_0x000108c6cd50();
      func_0x00010b5d2414();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x58);
      FUN_10b5cede0();
      func_0x00010b5d2414();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x60);
      FUN_10b5cede0();
      func_0x00010b5d2414();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x68);
      FUN_10b588480();
      func_0x00010b5d2414();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x70);
      FUN_10b4e3878();
      func_0x00010b5d20f4();
      func_0x00010b5d2728();
    }
  }
  if (*(int *)(unaff_x19 + 0x78) != 0) {
    lVar4 = lVar4 + 5;
  }
  if (*(int *)(unaff_x19 + 0x7c) != 0) {
    lVar4 = lVar4 + 5;
  }
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    lVar4 = lVar4 + 9;
  }
  func_0x00010b5d2784(lVar4);
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b5d2748();
    lVar4 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(unaff_x19 + 0x14) = iVar2;
  return;
}



/* Entry: 10b5cede0; end: 10b5cedfb;  */

long FUN_10b5cede0(long param_1)

{
  long extraout_x8;
  
  FUN_10b5ce7a0();
  func_0x00010b5d20f4();
  return param_1 + extraout_x8;
}



/* Entry: 10b5cedfc; end: 10b5cedff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5cedfc(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b5d21b8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5d2554();
  }
  FUN_10b5cef98(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar2 = (ulong *)(unaff_x21 + 0x30);
  lVar3 = unaff_x20 + 0x30;
  func_0x00010598fce8();
  func_0x00010b5d2518(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5d250c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x48);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x50);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b5d24f8();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x58);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_10b5d17b8();
        *(ulong **)(unaff_x21 + 0x58) = puVar2;
      }
      else {
        FUN_10b5ce7fc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_10b5d17b8();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        FUN_10b5ce7fc();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_10b58849c();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        FUN_10b58cc78();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        FUN_10b5d180c();
        *(ulong **)(unaff_x21 + 0x70) = unaff_x22;
        puVar2 = unaff_x22;
      }
      else {
        FUN_10b4e38dc();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x78) != 0) {
    *(int *)(unaff_x21 + 0x78) = *(int *)(unaff_x20 + 0x78);
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x21 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x88) = 1;
  }
  func_0x00010b5d21f4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b5d2238();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5cee00; end: 10b5cef97;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5cee00(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b5d21b8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5d2554();
  }
  FUN_10b5cef98(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar2 = (ulong *)(unaff_x21 + 0x30);
  lVar3 = unaff_x20 + 0x30;
  func_0x00010598fce8();
  func_0x00010b5d2518(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5d250c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x48);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x50);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b5d24f8();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x58);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_10b5d17b8();
        *(ulong **)(unaff_x21 + 0x58) = puVar2;
      }
      else {
        FUN_10b5ce7fc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_10b5d17b8();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        FUN_10b5ce7fc();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_10b58849c();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        FUN_10b58cc78();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        FUN_10b5d180c();
        *(ulong **)(unaff_x21 + 0x70) = unaff_x22;
        puVar2 = unaff_x22;
      }
      else {
        FUN_10b4e38dc();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x78) != 0) {
    *(int *)(unaff_x21 + 0x78) = *(int *)(unaff_x20 + 0x78);
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x21 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x88) = 1;
  }
  func_0x00010b5d21f4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b5d2238();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5cef98; end: 10b5cefa7;  */

void FUN_10b5cef98(long *param_1,long param_2)

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



/* Entry: 10b5cefa8; end: 10b5cefd3;  */

long FUN_10b5cefa8(long param_1)

{
  func_0x00010b5d239c();
  FUN_10b5d1154(param_1 + 0x10);
  return param_1;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b56fc40; end: 10b56fc9f;  */

void FUN_10b56fc40(void)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar2;
  
  func_0x000107c39e64();
  func_0x000107c39ea4(&PTR_FUN_110d0a7a8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e1c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000107c305c4();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x21;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  return;
}



/* Entry: 10b56fca0; end: 10b56fccb;  */

undefined8 FUN_10b56fca0(undefined8 param_1)

{
  func_0x000107c39e78();
  FUN_10b56fccc(param_1);
  return param_1;
}



/* Entry: 10b56fccc; end: 10b56fce7;  */

void FUN_10b56fccc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c305cc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56fce8; end: 10b56fceb;  */

undefined8 FUN_10b56fce8(undefined8 param_1)

{
  func_0x000107c39e78();
  FUN_10b56fccc(param_1);
  return param_1;
}



/* Entry: 10b56fcec; end: 10b56fcff;  */

void FUN_10b56fcec(void)

{
  FUN_10b56fca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56fd00; end: 10b56fd0b;  */

undefined ** FUN_10b56fd00(void)

{
  return &PTR_DAT_110d0b4c8;
}



/* Entry: 10b56fd0c; end: 10b56fd4b;  */

void FUN_10b56fd0c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b573408();
  if ((extraout_x8 & 1) != 0) {
    FUN_10b56d190(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 10b56fd4c; end: 10b56fdef;  */

long * FUN_10b56fd4c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b572eac();
  if (param_1[4] != 0) {
    func_0x00010b572ee4();
    func_0x00010b5733c8();
    func_0x00010b572e7c();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    param_1 = (long *)0x2;
    func_0x00010b572ffc();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b572ee4();
    func_0x00010b5731d4();
    func_0x00010b572e7c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b573018();
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



/* Entry: 10b56fdf0; end: 10b56fe6f;  */

void FUN_10b56fdf0(void)

{
  int iVar1;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b573408();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    func_0x000107c30598();
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x20)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    func_0x00010b573044();
    iVar1 = extraout_w8 + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b573390();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 10b56fe70; end: 10b56fe73;  */

void FUN_10b56fe70(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b572e6c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x000107c305c4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_10b56c67c();
      puVar1 = puVar2;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x00010b5735c4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b56fe74; end: 10b56fef3;  */

void FUN_10b56fe74(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b572e6c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x000107c305c4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_10b56c67c();
      puVar1 = puVar2;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x00010b5735c4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b56fef4; end: 10b56ff2b;  */

long FUN_10b56fef4(long param_1)

{
  func_0x000107c39e78();
  func_0x000107c39eb0();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b56f144();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b56ff2c; end: 10b56ff3f;  */

void FUN_10b56ff2c(void)

{
  FUN_10b56fef4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56ff40; end: 10b56ff4b;  */

undefined ** FUN_10b56ff40(void)

{
  return &PTR_DAT_110d0b510;
}



/* Entry: 10b56ff4c; end: 10b56ff8b;  */

void FUN_10b56ff4c(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010b5735e4();
  func_0x000107c3025c();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_10b56f1bc(unaff_x19[4]);
  }
  func_0x00010b573474();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b56ff8c; end: 10b570023;  */

long * FUN_10b56ff8c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b572fb0();
  func_0x000107c39e90(param_1[3]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b56ffd8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b56ffd8;
  param_4 = (long *)&UNK_10f77b8ac;
  func_0x000107c39e84();
  func_0x00010b572e88();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b56ffd8:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    func_0x00010b573574();
    func_0x00010b572f8c();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b573018();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5732cc();
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



/* Entry: 10b570024; end: 10b570097;  */

void FUN_10b570024(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010b573210(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b56ea48(*(undefined8 *)(param_1 + 0x20));
    func_0x000107c39e94();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b573390();
  }
  func_0x00010b573310();
  return;
}



/* Entry: 10b570098; end: 10b57009b;  */

void FUN_10b570098(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b572e6c();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b5735a0();
    puVar1 = unaff_x22;
  }
  func_0x00010b573244(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010b573238();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      FUN_10b572be4();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_10b56f554();
    }
  }
  func_0x00010b572fc0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b57009c; end: 10b57011b;  */

void FUN_10b57009c(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b5700f8;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b571604();
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_10b5700f8;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b5700f8;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b571324();
    }
  }
  __ZdlPv();
LAB_10b5700f8:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b57011c; end: 10b570153;  */

long FUN_10b57011c(long param_1)

{
  func_0x000107c39e78();
  func_0x00010b57329c();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10b57009c(param_1);
  }
  return param_1;
}



/* Entry: 10b570154; end: 10b570167;  */

void FUN_10b570154(void)

{
  FUN_10b57011c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b570168; end: 10b570173;  */

undefined ** FUN_10b570168(void)

{
  return &PTR_DAT_110d0b558;
}



/* Entry: 10b570174; end: 10b5701ab;  */

void FUN_10b570174(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107c39e8c();
  func_0x000107c3025c();
  FUN_10b57009c();
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



/* Entry: 10b5701ac; end: 10b57025b;  */

long * FUN_10b5701ac(long param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar5;
  long *unaff_x22;
  int iVar6;
  
  func_0x00010b572fb0();
  func_0x000107c39e90(*(undefined8 *)(param_1 + 0x10));
  if (param_2 < 0) {
    if (unaff_x22[1] != 0) {
      unaff_x22 = (long *)*unaff_x22;
      goto LAB_10b5701e4;
    }
  }
  else if ((int)param_2 != 0) {
LAB_10b5701e4:
    param_4 = (long *)&UNK_10f77b8d7;
    func_0x000107c39e84();
    func_0x00010b572e88();
    unaff_x20 = unaff_x22;
  }
  uVar2 = *(uint *)(unaff_x21 + 0x24);
  plVar3 = (long *)(ulong)uVar2;
  if (uVar2 == 2) {
    lVar4 = 0x14;
  }
  else {
    if (uVar2 != 3) goto LAB_10b570228;
    lVar4 = 0x28;
  }
  param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x18) + lVar4);
  func_0x00010b572f8c();
  unaff_x20 = plVar3;
LAB_10b570228:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b573018();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5732cc();
  if (*plVar3 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar6 = ((int)*plVar3 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      param_3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar6);
      param_4 = plVar3;
      func_0x000107c303e4(plVar3,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b57025c; end: 10b5702e3;  */

long FUN_10b57025c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000107c39e88();
  if (extraout_x8 < 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_10b570288;
LAB_10b570274:
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  else {
    if (extraout_x8 != 0) goto LAB_10b570274;
LAB_10b570288:
    param_1 = 0;
  }
  if (*(int *)(unaff_x19 + 0x24) == 3) {
    func_0x00010b56f534(*(undefined8 *)(unaff_x19 + 0x18));
  }
  else {
    if (*(int *)(unaff_x19 + 0x24) != 2) goto LAB_10b5702b8;
    func_0x00010b56f518(*(undefined8 *)(unaff_x19 + 0x18));
  }
  func_0x000107c39e94();
LAB_10b5702b8:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b573390();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x20) = (int)param_1;
  return param_1;
}



/* Entry: 10b5702e4; end: 10b5702e7;  */

void FUN_10b5702e4(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b572e6c();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar3 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    func_0x00010b5735a0();
    puVar3 = unaff_x22;
  }
  func_0x00010b573244(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      func_0x00010b573238();
    }
    func_0x00010b5734e8();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 == 0) goto LAB_10b56d14c;
  iVar2 = *(int *)((long)unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b57009c();
    }
    *(int *)((long)unaff_x21 + 0x24) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[3];
      FUN_10b56f8b8();
      goto LAB_10b56d14c;
    }
    func_0x00010b572b90();
    param_1 = puVar3;
  }
  else {
    if (iVar1 != 2) goto LAB_10b56d14c;
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[3];
      func_0x00010b573504(*(undefined4 *)(unaff_x20 + 0x24));
      FUN_10b56f840();
      goto LAB_10b56d14c;
    }
    func_0x00010b572b18();
    param_1 = puVar3;
  }
  unaff_x21[3] = (ulong)param_1;
LAB_10b56d14c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b5702e8; end: 10b5703a3;  */

void FUN_10b5702e8(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b570374;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b56f144();
    }
    break;
  default:
    goto LAB_10b570374;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10b570374;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b571764();
    }
    break;
  case 5:
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b573024();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b570374;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b56fb08();
    }
  }
  __ZdlPv();
LAB_10b570374:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 10b5703a4; end: 10b5703e7;  */

long FUN_10b5703a4(long param_1)

{
  func_0x000107c39e78();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b570acc();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_10b5702e8(param_1);
  }
  return param_1;
}



/* Entry: 10b5703e8; end: 10b5703eb;  */

long FUN_10b5703e8(long param_1)

{
  func_0x000107c39e78();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b570acc();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_10b5702e8(param_1);
  }
  return param_1;
}



/* Entry: 10b5703ec; end: 10b5703ff;  */

void FUN_10b5703ec(void)

{
  FUN_10b5703a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b570400; end: 10b57040f;  */

long FUN_10b570400(long param_1)

{
  func_0x000107c39e78();
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return param_1;
}



/* Entry: 10b570410; end: 10b57048b;  */

void FUN_10b570410(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00010b573408();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b570450(unaff_x19[3]);
  }
  FUN_10b5702e8();
  func_0x00010b573474();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b57048c; end: 10b57057f;  */

long * FUN_10b57048c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b572eac();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x30);
    func_0x00010b572ed8();
    param_4 = param_1;
  }
  switch(*(undefined4 *)(unaff_x20 + 0x28)) {
  case 2:
    func_0x00010b573574();
    break;
  case 3:
    func_0x00010b572ee4();
    func_0x00010b5731d4();
    func_0x00010b573498();
    param_4 = param_1;
    goto LAB_10b570520;
  case 4:
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    param_1 = (long *)0x4;
    break;
  case 5:
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    param_1 = (long *)0x5;
    break;
  case 6:
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    param_1 = (long *)0x6;
    break;
  default:
    goto LAB_10b570520;
  }
  func_0x00010b572ffc();
  param_4 = param_1;
LAB_10b570520:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b573018();
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



/* Entry: 10b570580; end: 10b570623;  */

void FUN_10b570580(void)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010b573408();
  if ((extraout_x8 & 1) != 0) {
    FUN_10b570624(*(undefined8 *)(unaff_x19 + 0x18));
  }
  switch(*(undefined4 *)(unaff_x19 + 0x28)) {
  case 2:
    FUN_10b56ea48(*(undefined8 *)(unaff_x19 + 0x20));
    break;
  case 3:
    goto LAB_10b5705f4;
  case 4:
    func_0x00010b570640(*(undefined8 *)(unaff_x19 + 0x20));
    break;
  case 5:
  case 6:
    FUN_10b56f4fc(*(undefined8 *)(unaff_x19 + 0x20));
    break;
  default:
    goto LAB_10b5705f4;
  }
  func_0x000107c39e94();
LAB_10b5705f4:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b573390();
  }
  func_0x00010b573310();
  return;
}



/* Entry: 10b570624; end: 10b57065b;  */

long FUN_10b570624(long param_1)

{
  long extraout_x8;
  
  func_0x00010b570bd4();
  func_0x00010b572d34();
  return param_1 + extraout_x8;
}



/* Entry: 10b57065c; end: 10b5707d3;  */

void FUN_10b57065c(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b572db0();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b573168();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      param_1 = unaff_x22;
      FUN_10b572c1c();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_10b5707d4();
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x28);
  if (iVar2 == 0) goto LAB_10b5707b8;
  iVar3 = (int)unaff_x21[5];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      param_1 = unaff_x21;
      FUN_10b5702e8();
    }
    *(int *)(unaff_x21 + 5) = iVar2;
  }
  switch(iVar2) {
  case 2:
    if (iVar3 == iVar2) {
      func_0x00010b573280();
      func_0x00010b573504();
      FUN_10b56f554();
      goto LAB_10b5707b8;
    }
    FUN_10b572be4();
    param_1 = unaff_x22;
    break;
  case 3:
    *(undefined1 *)(unaff_x21 + 4) = *(undefined1 *)(unaff_x20 + 0x20);
    goto LAB_10b5707b8;
  case 4:
    if (iVar3 == iVar2) {
      func_0x00010b573280();
      FUN_10b57082c();
      goto LAB_10b5707b8;
    }
    FUN_10b572ca0();
    param_1 = unaff_x22;
    break;
  case 5:
    if (iVar3 == iVar2) {
      func_0x00010b573280();
code_r0x00010b570770:
      func_0x00010b56f7ac();
      goto LAB_10b5707b8;
    }
    goto code_r0x00010b57077c;
  case 6:
    if (iVar3 == iVar2) {
      func_0x00010b573280();
      goto code_r0x00010b570770;
    }
code_r0x00010b57077c:
    func_0x00010b572a74();
    param_1 = unaff_x22;
    break;
  default:
    goto LAB_10b5707b8;
  }
  unaff_x21[4] = (ulong)param_1;
LAB_10b5707b8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b5707d4; end: 10b57082b;  */

void FUN_10b5707d4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b570c4c();
  func_0x00010b573244(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b573238();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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



/* Entry: 10b57082c; end: 10b570867;  */

void FUN_10b57082c(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1c) != iVar1) {
      *(int *)(param_1 + 0x1c) = iVar1;
    }
    if (iVar1 == 1) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
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



/* Entry: 10b570868; end: 10b57089b;  */

long FUN_10b570868(long param_1)

{
  func_0x000107c39e78();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b5708b4(param_1);
  }
  return param_1;
}



/* Entry: 10b57089c; end: 10b57089f;  */

long FUN_10b57089c(long param_1)

{
  func_0x000107c39e78();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b5708b4(param_1);
  }
  return param_1;
}



/* Entry: 10b5708a0; end: 10b5708b3;  */

void FUN_10b5708a0(void)

{
  FUN_10b570868();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5708b4; end: 10b5708db;  */

void FUN_10b5708b4(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x00010b57315c();
  if (extraout_w8 == 1) {
    func_0x00010b57329c();
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b5708dc; end: 10b5708e7;  */

undefined ** FUN_10b5708dc(void)

{
  return &PTR_DAT_110d0b5f8;
}



/* Entry: 10b5708e8; end: 10b570917;  */

void FUN_10b5708e8(long param_1)

{
  ulong *puVar1;
  
  FUN_10b5708b4();
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



/* Entry: 10b570918; end: 10b5709d3;  */

long * FUN_10b570918(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long *plVar2;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010b572fb0();
  if (*(int *)((long)param_1 + 0x1c) == 2) {
    func_0x00010b57310c();
    if (*(int *)(unaff_x21 + 0x1c) == 2) {
      plVar2 = *(long **)(unaff_x21 + 0x10);
    }
    else {
      plVar2 = (long *)0x0;
    }
    func_0x00010b5732ec();
    func_0x000107c280ac(plVar2,param_1);
    unaff_x20 = plVar2;
  }
  else {
    plVar2 = param_1;
    if (*(int *)((long)param_1 + 0x1c) == 1) {
      func_0x000107c39e90(*(undefined8 *)(unaff_x21 + 0x10));
      if (param_2 < 0) {
        unaff_x22 = (long *)*unaff_x22;
      }
      param_4 = (long *)&UNK_10f77b90a;
      func_0x000107c39e84();
      func_0x00010b572e88();
      plVar2 = unaff_x22;
      unaff_x20 = unaff_x22;
    }
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b573018();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010b5732cc();
    if (*plVar2 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*plVar2 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        param_3 = (ulong)(uint)(iVar3 - iVar4);
        if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar4);
        param_4 = plVar2;
        func_0x000107c303e4(plVar2,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 10b5709d4; end: 10b570a37;  */

void FUN_10b5709d4(int param_1)

{
  undefined1 in_ZR;
  uint uVar1;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b572fe4();
  if ((bool)in_ZR) {
    func_0x00010b573004(*(undefined8 *)(unaff_x19 + 0x10));
    uVar1 = (uint)(extraout_x8 >> 6) & 0x3ffffff;
  }
  else if (extraout_w8 == 1) {
    func_0x00010b5730a4();
    uVar1 = param_1 + 1;
  }
  else {
    uVar1 = 0;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b573390();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    uVar1 = (int)lVar2 + uVar1;
  }
  *(uint *)(unaff_x19 + 0x18) = uVar1;
  return;
}



/* Entry: 10b570a38; end: 10b570acb;  */

void FUN_10b570a38(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong extraout_x8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x00010b572db0();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b573168();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x00010b57331c();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        FUN_10b5708b4();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    if (iVar1 == 2) {
      unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
    }
    else {
      bVar2 = iVar1 == 1;
      if (bVar2) {
        func_0x00010b572fd4();
        if (!bVar2) {
          unaff_x21[2] = extraout_x8;
        }
        func_0x00010b5731f4();
        func_0x00010b573120();
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b570acc; end: 10b570aff;  */

long FUN_10b570acc(long param_1)

{
  func_0x000107c39e78();
  func_0x000107c30258(param_1 + 0x28);
  FUN_10b571b2c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b570b00; end: 10b570b03;  */

long FUN_10b570b00(long param_1)

{
  func_0x000107c39e78();
  func_0x000107c30258(param_1 + 0x28);
  FUN_10b571b2c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b570b04; end: 10b570b17;  */

void FUN_10b570b04(void)

{
  FUN_10b570acc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b570b18; end: 10b570b23;  */

undefined ** FUN_10b570b18(void)

{
  return &PTR_DAT_110d0b650;
}



/* Entry: 10b570b24; end: 10b570c4b;  */

long * FUN_10b570b24(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b572fb0();
  func_0x000107c39e90(param_1[5]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b570b74;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b570b74;
  param_4 = (long *)&UNK_10f77b947;
  func_0x000107c39e84();
  func_0x00010b572e88();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b570b74:
  iVar3 = *(int *)(unaff_x21 + 0x18);
  for (iVar2 = 0; iVar3 != iVar2; iVar2 = iVar2 + 1) {
    func_0x00010b572e50();
    func_0x00010b573574();
    func_0x00010b572f8c();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b573018();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010b5732cc();
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



/* Entry: 10b570c4c; end: 10b570c5f;  */

void FUN_10b570c4c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b570c4c();
  func_0x00010b573244(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b573238();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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



/* Entry: 10b570c60; end: 10b570c87;  */

undefined8 FUN_10b570c60(undefined8 param_1)

{
  func_0x000107c39e78();
  func_0x00010b57329c();
  return param_1;
}



/* Entry: 10b570c88; end: 10b570c8b;  */

undefined8 FUN_10b570c88(undefined8 param_1)

{
  func_0x000107c39e78();
  func_0x00010b57329c();
  return param_1;
}



/* Entry: 10b570c8c; end: 10b570c9f;  */

void FUN_10b570c8c(void)

{
  FUN_10b570c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b570ca0; end: 10b570cab;  */

undefined ** FUN_10b570ca0(void)

{
  return &PTR_DAT_110d0b698;
}



/* Entry: 10b570cac; end: 10b570cdf;  */

void FUN_10b570cac(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107c39e8c();
  func_0x000107c3025c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 10b570ce0; end: 10b570dab;  */

long * FUN_10b570ce0(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  undefined8 *unaff_x22;
  int iVar4;
  
  func_0x00010b572fb0();
  plVar2 = param_1;
  if (param_1[3] != 0) {
    func_0x00010b57310c();
    unaff_x22 = *(undefined8 **)(unaff_x21 + 0x18);
    plVar2 = (long *)0x9;
    func_0x000107c280a8();
    unaff_x20 = plVar2 + 1;
    *plVar2 = (long)unaff_x22;
    param_2 = param_1;
  }
  if (*(long *)(unaff_x21 + 0x20) != 0) {
    func_0x00010b57310c();
    unaff_x22 = *(undefined8 **)(unaff_x21 + 0x20);
    param_2 = plVar2;
    func_0x00010b5734bc();
    unaff_x20 = plVar2 + 1;
    *plVar2 = (long)unaff_x22;
  }
  func_0x000107c39e90(*(undefined8 *)(unaff_x21 + 0x10));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b570d78;
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b570d78;
  param_4 = (long *)&UNK_10f77b97a;
  func_0x000107c39e84(unaff_x22);
  func_0x00010b572f18();
  plVar2 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10b570d78:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b573018();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5732cc();
  if (*plVar2 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*plVar2 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = plVar2;
      func_0x000107c303e4(plVar2,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b570dac; end: 10b570e87;  */

void FUN_10b570dac(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000107c39e88();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  iVar1 = 0;
  if (lVar2 != 0) {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    iVar1 = iVar1 + 9;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    iVar1 = iVar1 + 9;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b573390();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x28) = iVar1;
  return;
}



/* Entry: 10b570e88; end: 10b570ecf;  */

void FUN_10b570e88(void)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010b573030();
  func_0x000107c39ea4(&PTR_FUN_110d0a8e8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e1c();
  }
  FUN_10b571b54(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 10b570ed0; end: 10b570efb;  */

long FUN_10b570ed0(long param_1)

{
  func_0x000107c39e78();
  FUN_10b571b74(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b570efc; end: 10b570eff;  */

long FUN_10b570efc(long param_1)

{
  func_0x000107c39e78();
  FUN_10b571b74(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b570f00; end: 10b570f13;  */

void FUN_10b570f00(void)

{
  FUN_10b570ed0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b570f14; end: 10b570f1f;  */

undefined ** FUN_10b570f14(void)

{
  return &PTR_DAT_110d0b6f0;
}



/* Entry: 10b570f20; end: 10b570f53;  */

void FUN_10b570f20(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5732a4();
  if (in_NG == in_OV) {
    func_0x00010b5733f4();
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



/* Entry: 10b570f54; end: 10b570fbb;  */

long * FUN_10b570f54(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w22;
  int iVar4;
  
  func_0x00010b572dec();
  while (unaff_w22 != unaff_w21) {
    func_0x00010b572d94();
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    func_0x00010b572ed8();
    func_0x00010b573354();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b573018();
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



/* Entry: 10b570fbc; end: 10b57100b;  */

void FUN_10b570fbc(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  FUN_10b572d10();
  while (unaff_x22 != 0) {
    FUN_10b57100c(*unaff_x21);
    func_0x00010b5731e8();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b573390();
  }
  func_0x00010b5733fc();
  return;
}



/* Entry: 10b57100c; end: 10b571027;  */

long FUN_10b57100c(long param_1)

{
  long extraout_x8;
  
  FUN_10b570dac();
  func_0x00010b572d34();
  return param_1 + extraout_x8;
}



/* Entry: 10b571028; end: 10b57102b;  */

void FUN_10b571028(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b57105c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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



/* Entry: 10b57102c; end: 10b57105b;  */

void FUN_10b57102c(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b57105c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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



/* Entry: 10b57105c; end: 10b57106b;  */

void FUN_10b57105c(long *param_1,long param_2)

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



/* Entry: 10b57106c; end: 10b57108f;  */

undefined8 FUN_10b57106c(undefined8 param_1)

{
  func_0x000107c39e78();
  return param_1;
}



/* Entry: 10b571090; end: 10b5710d7;  */

undefined8 * FUN_10b571090(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110d0a578;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_10b56f7dc(param_1,param_3);
  return param_1;
}



/* Entry: 10b5710d8; end: 10b5710eb;  */

void FUN_10b5710d8(void)

{
  FUN_10b57106c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5710ec; end: 10b57110b;  */

undefined ** FUN_10b5710ec(void)

{
  return &PTR_DAT_110d0b748;
}



/* Entry: 10b57110c; end: 10b571197;  */

long * FUN_10b57110c(undefined8 *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x00010b572eac();
  puVar2 = param_1;
  if (param_1[2] != 0) {
    func_0x00010b572ee4();
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar2 = (undefined8 *)0x9;
    func_0x000107c280a8(9,param_1);
    param_4 = puVar2 + 1;
    *puVar2 = uVar4;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b572ee4();
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x00010b5734bc();
    param_4 = puVar2 + 1;
    *puVar2 = uVar4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b573018();
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
  return param_4;
}



/* Entry: 10b571198; end: 10b5711db;  */

long FUN_10b571198(long param_1)

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
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5711dc; end: 10b571207;  */

long FUN_10b5711dc(long param_1)

{
  func_0x000107c39e78();
  FUN_10b571b9c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b571208; end: 10b57121b;  */

void FUN_10b571208(void)

{
  FUN_10b5711dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57121c; end: 10b571227;  */

undefined ** FUN_10b57121c(void)

{
  return &PTR_DAT_110d0b790;
}



/* Entry: 10b571228; end: 10b571257;  */

void FUN_10b571228(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107c39e8c();
  func_0x00010b572254();
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



/* Entry: 10b571258; end: 10b5712bf;  */

long * FUN_10b571258(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w22;
  int iVar4;
  
  func_0x00010b572dec();
  while (unaff_w22 != unaff_w21) {
    func_0x00010b572d94();
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    func_0x00010b572ed8();
    func_0x00010b573354();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b573018();
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



/* Entry: 10b5712c0; end: 10b57130f;  */

void FUN_10b5712c0(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  FUN_10b572d10();
  while (unaff_x22 != 0) {
    FUN_10b56ac0c(*unaff_x21);
    func_0x00010b5731e8();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b573390();
  }
  func_0x00010b5733fc();
  return;
}



/* Entry: 10b571310; end: 10b571323;  */

void FUN_10b571310(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b571310();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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



/* Entry: 10b571324; end: 10b571357;  */

long FUN_10b571324(long param_1)

{
  func_0x000107c39e78();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b57106c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b571358; end: 10b57136b;  */

void FUN_10b571358(void)

{
  FUN_10b571324();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57136c; end: 10b571377;  */

undefined ** FUN_10b57136c(void)

{
  return &PTR_DAT_110d0b7d0;
}



/* Entry: 10b571378; end: 10b5713b7;  */

void FUN_10b571378(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b573408();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5710f8(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10b5713b8; end: 10b571437;  */

long * FUN_10b5713b8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long lVar2;
  int iVar3;
  int iVar4;
  
  func_0x00010b572eac();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    func_0x00010b572ed8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b572ee4();
    lVar2 = *(long *)(unaff_x20 + 0x20);
    func_0x00010b5734bc();
    param_4 = param_1 + 1;
    *param_1 = lVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b573018();
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



/* Entry: 10b571438; end: 10b571497;  */

void FUN_10b571438(void)

{
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b573408();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_10b56ac0c();
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    iVar1 = iVar1 + 9;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b573390();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 10b571498; end: 10b57149b;  */

void FUN_10b571498(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b572e6c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_10b56b6b0();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_10b56f7dc();
      puVar1 = puVar2;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x00010b5735c4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b572e9c();
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



/* Entry: 10b57149c; end: 10b5714c7;  */

long FUN_10b57149c(long param_1)

{
  func_0x000107c39e78();
  FUN_10b571b9c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5714c8; end: 10b5714cb;  */

long FUN_10b5714c8(long param_1)

{
  func_0x000107c39e78();
  FUN_10b571b9c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5714cc; end: 10b5714df;  */

void FUN_10b5714cc(void)

{
  FUN_10b57149c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5714e0; end: 10b5714eb;  */

undefined ** FUN_10b5714e0(void)

{
  return &PTR_DAT_110d0b818;
}



/* Entry: 10b5714ec; end: 10b57151b;  */

void FUN_10b5714ec(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107c39e8c();
  func_0x00010b572254();
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



/* Entry: 10b57151c; end: 10b571583;  */

long * FUN_10b57151c(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w22;
  int iVar4;
  
  func_0x00010b572dec();
  while (unaff_w22 != unaff_w21) {
    func_0x00010b572d94();
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    func_0x00010b572ed8();
    func_0x00010b573354();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b573018();
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



/* Entry: 10b571584; end: 10b5715d3;  */

void FUN_10b571584(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  FUN_10b572d10();
  while (unaff_x22 != 0) {
    FUN_10b56ac0c(*unaff_x21);
    func_0x00010b5731e8();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b573390();
  }
  func_0x00010b5733fc();
  return;
}



/* Entry: 10b5715d4; end: 10b571603;  */

void FUN_10b5715d4(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b572e08();
  FUN_10b571310();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b572f30();
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



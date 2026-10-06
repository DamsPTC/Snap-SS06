/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0050282c; end: 00502857;  */

undefined8 FUN_0050282c(undefined8 param_1)

{
  func_0x005043ec();
  FUN_00502858(param_1);
  return param_1;
}



/* Entry: 00502858; end: 0050286b;  */

void FUN_00502858(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_005027c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_005032d8();
    }
    break;
  default:
    goto LAB_005027c0;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_005027c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00504c30();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_005027c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00506a58();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_005027c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_004e5a24();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_005027c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_004e7820();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_005027c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_005031a0();
    }
    break;
  case 0xe:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_005027c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00503818();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_005027c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00502e58();
    }
  }
  __ZdlPv();
LAB_005027c0:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 0050286c; end: 0050287f;  */

void FUN_0050286c(void)

{
  FUN_0050282c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00502880; end: 0050289b;  */

long FUN_00502880(long param_1)

{
  func_0x005043ec();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00504c30();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00512598();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0050289c; end: 00502a0f;  */

void FUN_0050289c(long param_1)

{
  ulong *puVar1;
  
  FUN_005026a8();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00502a10; end: 00502caf;  */

void FUN_00502a10(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x005043ac();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00504500();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_005026a8();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00504354();
        func_0x00502c18();
        goto LAB_00502bfc;
      }
      func_0x00504408();
      FUN_00503ec0();
      break;
    default:
      goto LAB_00502bfc;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00504354();
        FUN_005052ac();
        goto LAB_00502bfc;
      }
      func_0x00504408();
      func_0x004e035c();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00504354();
        FUN_00506ca8();
        goto LAB_00502bfc;
      }
      func_0x00504408();
      func_0x00503f4c();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x00504354();
        FUN_004e5be0();
        goto LAB_00502bfc;
      }
      func_0x00504408();
      func_0x00503f8c();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x00504354();
        FUN_004e7b2c();
        goto LAB_00502bfc;
      }
      func_0x00504408();
      FUN_004ec49c();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x00504354();
        FUN_00502cb0();
        goto LAB_00502bfc;
      }
      func_0x00504408();
      func_0x00503fc4();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x00504354();
        FUN_00502d18();
        goto LAB_00502bfc;
      }
      func_0x00504408();
      func_0x00504030();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x00504354();
        FUN_00502df0();
        goto LAB_00502bfc;
      }
      func_0x00504408();
      func_0x005040f0();
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_00502bfc:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x005043bc();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00502cb0; end: 00502d17;  */

void FUN_00502cb0(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x005043ac();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x004d3468();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_004f097c();
      puVar1 = puVar2;
    }
  }
  func_0x00504458();
  if ((extraout_x8 & 1) != 0) {
    func_0x005043bc();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00502d18; end: 00502def;  */

void FUN_00502d18(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x005043ac();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00504500();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_005018b4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_00510fb0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x004d3428();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00504284();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_00503674();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x00504520();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x005043bc();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00502df0; end: 00502e57;  */

void FUN_00502df0(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x005043ac();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x0050415c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_00502fd8();
      puVar1 = puVar2;
    }
  }
  func_0x00504458();
  if ((extraout_x8 & 1) != 0) {
    func_0x005043bc();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00502e58; end: 00502e8b;  */

long FUN_00502e58(long param_1)

{
  func_0x005043ec();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0050304c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00502e8c; end: 00502e9f;  */

void FUN_00502e8c(void)

{
  FUN_00502e58();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00502ea0; end: 00502eab;  */

undefined ** FUN_00502ea0(void)

{
  return &PTR_DAT_009f9aa0;
}



/* Entry: 00502eac; end: 00502fd3;  */

void FUN_00502eac(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00504488();
  if ((extraout_x8 & 1) != 0) {
    func_0x00502ee8(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00502fd4; end: 00502fd7;  */

void FUN_00502fd4(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x005043ac();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x0050415c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_00502fd8();
      puVar1 = puVar2;
    }
  }
  func_0x00504458();
  if ((extraout_x8 & 1) != 0) {
    func_0x005043bc();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00502fd8; end: 0050304b;  */

void FUN_00502fd8(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x005043ac();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_004d9d18();
      puVar1 = puVar2;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x00504458();
  if ((extraout_x8 & 1) != 0) {
    func_0x005043bc();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0050304c; end: 0050307f;  */

long FUN_0050304c(long param_1)

{
  func_0x005043ec();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00503080; end: 00503083;  */

long FUN_00503080(long param_1)

{
  func_0x005043ec();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00503084; end: 00503097;  */

void FUN_00503084(void)

{
  FUN_0050304c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00503098; end: 005030a3;  */

undefined ** FUN_00503098(void)

{
  return &PTR_DAT_009f9ae8;
}



/* Entry: 005030a4; end: 0050312b;  */

dword * FUN_005030a4(dword *param_1,undefined8 param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00504364();
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_1 = (dword *)((long)&MACH_HEADER.magic + 1);
    func_0x005043e4();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x005044d0();
    param_4 = &MACH_HEADER.ncmds;
    func_0x00487cbc(0x10,param_1);
    func_0x005044f4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00504420();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (dword *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (dword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 0050312c; end: 0050319b;  */

void FUN_0050312c(void)

{
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00504488();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_004d2ec0();
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x20)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00504414();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 0050319c; end: 0050319f;  */

void FUN_0050319c(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x005043ac();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_004d9d18();
      puVar1 = puVar2;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x00504458();
  if ((extraout_x8 & 1) != 0) {
    func_0x005043bc();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 005031a0; end: 005031d3;  */

long FUN_005031a0(long param_1)

{
  func_0x005043ec();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004f0520();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 005031d4; end: 005031e7;  */

void FUN_005031d4(void)

{
  FUN_005031a0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005031e8; end: 005031f3;  */

undefined ** FUN_005031e8(void)

{
  return &PTR_DAT_009f9b38;
}



/* Entry: 005031f4; end: 005032d3;  */

void FUN_005031f4(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00504488();
  if ((extraout_x8 & 1) != 0) {
    FUN_004f05c0(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 005032d4; end: 005032d7;  */

void FUN_005032d4(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x005043ac();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      func_0x004d3468();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_004f097c();
      puVar1 = puVar2;
    }
  }
  func_0x00504458();
  if ((extraout_x8 & 1) != 0) {
    func_0x005043bc();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 005032d8; end: 0050331b;  */

long FUN_005032d8(long param_1)

{
  func_0x005043ec();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00504c30();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00512598();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0050331c; end: 0050332f;  */

void FUN_0050331c(void)

{
  FUN_005032d8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00503330; end: 0050333b;  */

undefined ** FUN_00503330(void)

{
  return &PTR_DAT_009f9b88;
}



/* Entry: 0050333c; end: 0050338f;  */

void FUN_0050333c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_00504d20(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_00512654(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00503390; end: 00503483;  */

long * FUN_00503390(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00504364();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x00504334();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x005043e4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00504420();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 00503484; end: 00503487;  */

void FUN_00503484(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x005043ac();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00504500();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x004e035c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_005052ac();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_004ec240();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_005128ec();
      }
    }
  }
  func_0x00504520();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x005043bc();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00503488; end: 00503507;  */

void FUN_00503488(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_005034e4;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00503ba4();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_005034e4;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_005034e4;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00503a6c();
    }
  }
  __ZdlPv();
LAB_005034e4:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 00503508; end: 0050353b;  */

long FUN_00503508(long param_1)

{
  func_0x005043ec();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00503488(param_1);
  }
  return param_1;
}



/* Entry: 0050353c; end: 0050353f;  */

long FUN_0050353c(long param_1)

{
  func_0x005043ec();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00503488(param_1);
  }
  return param_1;
}



/* Entry: 00503540; end: 00503553;  */

void FUN_00503540(void)

{
  FUN_00503508();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00503554; end: 00503567;  */

long FUN_00503554(long param_1)

{
  func_0x005043ec();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 00503568; end: 0050366f;  */

void FUN_00503568(long param_1)

{
  ulong *puVar1;
  
  FUN_00503488();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00503670; end: 00503673;  */

void FUN_00503670(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x005043ac();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00504500();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_0050372c;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_00503488();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x00504354();
      func_0x005037b0();
      goto LAB_0050372c;
    }
    func_0x00504408();
    func_0x00504230();
  }
  else {
    if (iVar1 != 1) goto LAB_0050372c;
    if (iVar2 == 1) {
      func_0x00504354();
      FUN_00503748();
      goto LAB_0050372c;
    }
    func_0x00504408();
    func_0x005041dc();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_0050372c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x005043bc();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00503674; end: 00503747;  */

void FUN_00503674(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x005043ac();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00504500();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_0050372c;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_00503488();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x00504354();
      func_0x005037b0();
      goto LAB_0050372c;
    }
    func_0x00504408();
    func_0x00504230();
  }
  else {
    if (iVar1 != 1) goto LAB_0050372c;
    if (iVar2 == 1) {
      func_0x00504354();
      FUN_00503748();
      goto LAB_0050372c;
    }
    func_0x00504408();
    func_0x005041dc();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_0050372c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x005043bc();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00503748; end: 00503817;  */

void FUN_00503748(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0050446c();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(unaff_x19 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00503818; end: 0050386b;  */

long FUN_00503818(long param_1)

{
  func_0x005043ec();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00510d1c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_00503508();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0050386c; end: 0050387f;  */

void FUN_0050386c(void)

{
  FUN_00503818();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00503880; end: 0050388b;  */

undefined ** FUN_00503880(void)

{
  return &PTR_DAT_009f9c38;
}



/* Entry: 0050388c; end: 005038fb;  */

void FUN_0050388c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_00510d8c(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_00503568(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 005038fc; end: 00503a67;  */

dword * FUN_005038fc(dword *param_1,undefined8 param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00504364();
  uVar1 = param_1[4];
  if ((uVar1 & 1) != 0) {
    func_0x00504334();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    param_1 = (dword *)((long)&MACH_HEADER.magic + 2);
    func_0x005043e4();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x005044d0();
    param_4 = &MACH_HEADER.flags;
    func_0x00487cbc(0x18,param_1);
    func_0x005044f4();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x18);
    param_4 = &MACH_HEADER.cputype;
    func_0x005043e4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00504420();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (dword *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (dword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 00503a68; end: 00503a6b;  */

void FUN_00503a68(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x005043ac();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00504500();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_005018b4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_00510fb0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x004d3428();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00504284();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_00503674();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x00504520();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x005043bc();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00503a6c; end: 00503a97;  */

long FUN_00503a6c(long param_1)

{
  func_0x005043ec();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 00503a98; end: 00503aab;  */

void FUN_00503a98(void)

{
  FUN_00503a6c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00503aac; end: 00503ab7;  */

undefined ** FUN_00503aac(void)

{
  return &PTR_DAT_009f9c88;
}



/* Entry: 00503ab8; end: 00503b9f;  */

void FUN_00503ab8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x005044e8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00503ba0; end: 00503ba3;  */

void FUN_00503ba0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0050446c();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(unaff_x19 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00503ba4; end: 00503bcf;  */

long FUN_00503ba4(long param_1)

{
  func_0x005043ec();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 00503bd0; end: 00503be3;  */

void FUN_00503bd0(void)

{
  FUN_00503ba4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00503be4; end: 00503bef;  */

undefined ** FUN_00503be4(void)

{
  return &PTR_DAT_009f9ce0;
}



/* Entry: 00503bf0; end: 00503cd7;  */

void FUN_00503bf0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x005044e8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00503cd8; end: 00503d23;  */

void FUN_00503cd8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0050446c();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(unaff_x19 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00503d24; end: 00503ebf;  */

void FUN_00503d24(long param_1)

{
  if (param_1 == 0) {
    func_0x005043dc();
  }
  else {
    func_0x00504328();
  }
  func_0x005044ac(&PTR_FUN_009f9798);
  return;
}



/* Entry: 00503ec0; end: 00503f4b;  */

void FUN_00503ec0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050446c();
  if (param_1 == 0) {
    func_0x00504478();
  }
  else {
    func_0x00504480();
  }
  func_0x005044a0();
  func_0x00504494(&PTR_FUN_009f9978);
  if ((extraout_x8 & 1) != 0) {
    func_0x00504348();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x19;
    func_0x004e035c();
  }
  *(undefined8 *)(unaff_x21 + 0x18) = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    FUN_004ec240();
  }
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x19;
  return;
}



/* Entry: 00503f4c; end: 00503fc3;  */

long FUN_00503f4c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00504534();
  if (param_1 == 0) {
    __Znwm(0x30);
  }
  else {
    func_0x005510c4();
  }
  func_0x0050f430();
  func_0x0050f3ac(&PTR_FUN_009fb3d0);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x0050e320();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x004e035c();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  return unaff_x19;
}



/* Entry: 00503fc4; end: 0050431b;  */

void FUN_00503fc4(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050446c();
  if (param_1 == 0) {
    func_0x005043dc();
  }
  else {
    func_0x00504328();
  }
  func_0x005044a0();
  func_0x00504494(&PTR_DAT_009f99c8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00504348();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    func_0x004d3468();
  }
  *(undefined8 *)(unaff_x21 + 0x18) = unaff_x19;
  return;
}



/* Entry: 0050431c; end: 0050453f;  */

void FUN_0050431c(void)

{
  return;
}



/* Entry: 00504540; end: 0050456b;  */

long FUN_00504540(long param_1)

{
  func_0x00504a8c();
  FUN_0050498c(param_1 + 0x10);
  return param_1;
}



/* Entry: 0050456c; end: 0050456f;  */

long FUN_0050456c(long param_1)

{
  func_0x00504a8c();
  FUN_0050498c(param_1 + 0x10);
  return param_1;
}



/* Entry: 00504570; end: 00504583;  */

void FUN_00504570(void)

{
  FUN_00504540();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00504584; end: 0050458f;  */

undefined ** FUN_00504584(void)

{
  return &PTR_DAT_009f9ea8;
}



/* Entry: 00504590; end: 005045cf;  */

void FUN_00504590(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    FUN_00437de0(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 005045d0; end: 005046ff;  */

long * FUN_005045d0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00504a7c();
  lVar2 = param_1[3];
  for (iVar5 = 0; (int)lVar2 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00504a58();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if ((long)(int)uVar3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar3);
  }
  while( true ) {
    iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar5 = (int)uVar3;
    uVar1 = iVar5 - iVar6;
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar5 < iVar6) break;
    func_0x0054f690();
    param_4 = unaff_x19;
    func_0x0054ed58();
  }
  func_0x0054f690();
  return (long *)((long)param_4 + (long)iVar5);
}



/* Entry: 00504700; end: 0050474f;  */

void FUN_00504700(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x0054d484(param_1 + 0x10,param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00504750; end: 00504783;  */

long FUN_00504750(long param_1)

{
  func_0x00504a8c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004e07d8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00504784; end: 00504787;  */

long FUN_00504784(long param_1)

{
  func_0x00504a8c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004e07d8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00504788; end: 0050479b;  */

void FUN_00504788(void)

{
  FUN_00504750();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050479c; end: 005047a7;  */

undefined ** FUN_0050479c(void)

{
  return &PTR_DAT_009f9ef0;
}



/* Entry: 005047a8; end: 005047e7;  */

void FUN_005047a8(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00504ab4();
  if ((extraout_x8 & 1) != 0) {
    FUN_004e0950(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 005047e8; end: 0050488f;  */

long * FUN_005047e8(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  int iVar8;
  
  func_0x00504a7c();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x00504a58();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    plVar2 = unaff_x19;
    func_0x00487c24();
    param_4 = *(long **)(unaff_x20 + 0x20);
    uVar3 = 0x10;
    func_0x00487cbc(0x10,plVar2);
    func_0x00487cf0(param_4,uVar3);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)uVar5;
        uVar1 = iVar7 - iVar8;
        uVar5 = (ulong)uVar1;
        if (uVar1 == 0 || iVar7 < iVar8) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar5);
  }
  return param_4;
}



/* Entry: 00504890; end: 00504903;  */

void FUN_00504890(void)

{
  int iVar1;
  ulong extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x00504ab4();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    func_0x004e5964();
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x20)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 00504904; end: 0050497b;  */

void FUN_00504904(ulong param_1)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00504ac0();
  if ((param_1 & 1) != 0) {
    param_1 = *(ulong *)(param_1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      FUN_004ebfe8();
      *(ulong *)(unaff_x21 + 0x18) = param_1;
    }
    else {
      FUN_004e14b4(*(long *)(unaff_x21 + 0x18));
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x00504ad4();
  if ((extraout_x8 & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0050497c; end: 0050498b;  */

void FUN_0050497c(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  
  if (param_2 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_2;
    func_0x005510c4(param_2,0x28);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009f9e18;
  *(char **)(pcVar1 + 8) = param_2;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(qword *)(pcVar1 + 0x10) = 0;
  return;
}



/* Entry: 0050498c; end: 005049bb;  */

long * FUN_0050498c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 005049bc; end: 00504a4f;  */

void FUN_005049bc(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x28);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009f9e18;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(qword *)(pcVar1 + 0x10) = 0;
  return;
}



/* Entry: 00504a50; end: 00504ae7;  */

void FUN_00504a50(void)

{
  return;
}



/* Entry: 00504ae8; end: 00504c2f;  */

void FUN_00504ae8(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar3;
  
  func_0x0050f430();
  func_0x0050f3ac(&PTR_FUN_009fb2e0);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x004d3428();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_0050e0f8();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_004ef624();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x004ef6cc();
  }
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x004ef744();
  }
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_004de228();
  }
  *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x0050e128();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x0050e194();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
  if ((uVar1 >> 8 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x004efbe0();
  }
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x21;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
  return;
}



/* Entry: 00504c30; end: 00504c5b;  */

undefined8 FUN_00504c30(undefined8 param_1)

{
  func_0x0050f184();
  FUN_00504c5c(param_1);
  return param_1;
}



/* Entry: 00504c5c; end: 00504cfb;  */

void FUN_00504c5c(long param_1)

{
  long unaff_x19;
  
  func_0x0050f4f8();
  if (param_1 != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_004f222c();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_004f7a60();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_0050c54c();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_004d7874();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_004d93b4();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_00505918();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_005068e0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    FUN_005062b8();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00504cfc; end: 00504cff;  */

undefined8 FUN_00504cfc(undefined8 param_1)

{
  func_0x0050f184();
  FUN_00504c5c(param_1);
  return param_1;
}



/* Entry: 00504d00; end: 00504d13;  */

void FUN_00504d00(void)

{
  FUN_00504c30();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00504d14; end: 00504d1f;  */

undefined ** FUN_00504d14(void)

{
  return &PTR_DAT_009fb410;
}



/* Entry: 00504d20; end: 00504f6f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00504d20(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0050f38c();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004f22c8(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_004f7b88(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00504dec(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_004d78d8(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_004d9440(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x00504ecc(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x00504f04(*(undefined8 *)(param_1 + 0x50));
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    func_0x00504f38(*(undefined8 *)(param_1 + 0x58));
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 00504f70; end: 005052a7;  */

/* WARNING: Type propagation algorithm not settling */

qword * FUN_00504f70(qword *param_1,undefined8 param_2,ulong param_3,qword *param_4)

{
  uint uVar1;
  qword *pqVar2;
  qword *pqVar3;
  long lVar4;
  long extraout_x8;
  qword *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x0050ef9c();
  if (param_1[0xc] != 0) {
    func_0x0050ef54();
    func_0x0050f2c4();
    func_0x0050f028();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x0050f0d4();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    func_0x0050f14c();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_1 = (qword *)&MACH_HEADER.cputype;
    func_0x0050f17c();
    param_4 = param_1;
  }
  pqVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    func_0x0050ef54();
    pqVar2 = (qword *)segment_command_00000020.segname;
    func_0x00487cbc(0x28,param_1);
    func_0x0050f140();
    param_4 = pqVar2;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    pqVar2 = (qword *)((long)&MACH_HEADER.cputype + 2);
    func_0x0050f17c();
    param_4 = pqVar2;
  }
  pqVar3 = pqVar2;
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    func_0x0050ef54();
    pqVar3 = &segment_command_00000020.vmaddr;
    func_0x00487cbc(0x38,pqVar2);
    func_0x0050f028();
    param_4 = pqVar3;
  }
  if (*(int *)(unaff_x20 + 0x6c) != 0) {
    func_0x0050ef54();
    param_4 = &segment_command_00000020.vmsize;
    func_0x00487cbc(0x40,pqVar3);
    func_0x0050f140();
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x20);
    param_4 = (qword *)((long)&MACH_HEADER.cpusubtype + 1);
    func_0x0050f17c();
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x14);
    param_4 = (qword *)((long)&MACH_HEADER.cpusubtype + 2);
    func_0x0050f17c();
  }
  if ((uVar1 >> 6 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x48) + 0x20);
    param_4 = (qword *)((long)&MACH_HEADER.cpusubtype + 3);
    func_0x0050f17c();
  }
  if ((uVar1 >> 7 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x14);
    param_4 = (qword *)&MACH_HEADER.filetype;
    func_0x0050f17c();
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x30);
    param_4 = (qword *)((long)&MACH_HEADER.filetype + 1);
    func_0x0050f17c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0050f1f4();
  if ((long)param_3 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if ((long)(*unaff_x19 - (long)param_4) < (long)(int)param_3) {
    while( true ) {
      iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      uVar1 = iVar5 - iVar6;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar5 < iVar6) break;
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (qword *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4,lVar4,param_3 & 0xffffffff);
  return (qword *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 005052a8; end: 005052ab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_005052a8(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0050f424();
      if (param_1 == (ulong *)0x0) {
        func_0x0050f3c0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0050f3d0();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_0050e0f8();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_004f24d8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_004ef624();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_004f81e0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x0050f4c8();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004ef6cc();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00505498();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004ef744();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_004d7ae4();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_004de228();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_004d9744();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0050e128();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_005056c0();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0050e194();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_00505738();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x58);
    if (param_1 == (ulong *)0x0) {
      func_0x004efbe0();
      *(ulong **)(unaff_x21 + 0x58) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_00505790();
    }
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x6c) != 0) {
    *(int *)(unaff_x21 + 0x6c) = *(int *)(unaff_x20 + 0x6c);
  }
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    *(long *)(unaff_x21 + 0x70) = *(long *)(unaff_x20 + 0x70);
  }
  func_0x0050ef40();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0050f018();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 005052ac; end: 005056bf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_005052ac(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0050f424();
      if (param_1 == (ulong *)0x0) {
        func_0x0050f3c0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0050f3d0();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_0050e0f8();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_004f24d8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_004ef624();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_004f81e0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x0050f4c8();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004ef6cc();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00505498();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004ef744();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_004d7ae4();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_004de228();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_004d9744();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0050e128();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_005056c0();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0050e194();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_00505738();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x58);
    if (param_1 == (ulong *)0x0) {
      func_0x004efbe0();
      *(ulong **)(unaff_x21 + 0x58) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_00505790();
    }
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x6c) != 0) {
    *(int *)(unaff_x21 + 0x6c) = *(int *)(unaff_x20 + 0x6c);
  }
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    *(long *)(unaff_x21 + 0x70) = *(long *)(unaff_x20 + 0x70);
  }
  func_0x0050ef40();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0050f018();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 005056c0; end: 00505737;  */

void FUN_005056c0(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0050f224();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x00532e08(param_1,uVar1,uVar2);
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if (*(char *)(unaff_x20 + 0x1c) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x1c) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f164();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00505738; end: 0050578f;  */

void FUN_00505738(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0050f54c();
    }
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00505790; end: 005058ab;  */

void FUN_00505790(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  if (*(ulong *)(unaff_x20 + 0x10) != 0) {
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
  }
  if (*(ulong *)(unaff_x20 + 0x18) != 0) {
    unaff_x21[3] = *(ulong *)(unaff_x20 + 0x18);
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 4) = 1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)((long)unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 == 0) goto LAB_00505890;
  iVar2 = *(int *)((long)unaff_x21 + 0x34);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_005061b8();
    }
    *(int *)((long)unaff_x21 + 0x34) = iVar1;
  }
  if (iVar1 == 5) {
    if (iVar2 == 5) {
      param_1 = (ulong *)unaff_x21[5];
      FUN_00506178();
      goto LAB_00505890;
    }
    func_0x0050e2cc();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 4) goto LAB_00505890;
    if (iVar2 == 4) {
      param_1 = (ulong *)unaff_x21[5];
      FUN_00505df4();
      goto LAB_00505890;
    }
    FUN_0050e24c();
    param_1 = unaff_x22;
  }
  unaff_x21[5] = (ulong)param_1;
LAB_00505890:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f018();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 005058ac; end: 005058df;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_005058ac(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  ulong *unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0050f2e4();
  FUN_00504d20();
  puVar2 = unaff_x20;
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  uVar1 = (uint)unaff_x20[2];
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0050f424();
      if (puVar2 == (ulong *)0x0) {
        func_0x0050f3c0();
        *(ulong **)(unaff_x21 + 0x18) = puVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0050f3d0();
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_0050e0f8();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
      }
      else {
        FUN_004f24d8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x28);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004ef624();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
      }
      else {
        FUN_004f81e0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x0050f4c8();
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x004ef6cc();
        *(ulong **)(unaff_x21 + 0x30) = puVar2;
      }
      else {
        func_0x00505498();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x004ef744();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
      }
      else {
        FUN_004d7ae4();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_004de228();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        FUN_004d9744();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x0050e128();
        *(ulong **)(unaff_x21 + 0x48) = puVar2;
      }
      else {
        FUN_005056c0();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x50);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x0050e194();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
      }
      else {
        FUN_00505738();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x58);
    if (puVar2 == (ulong *)0x0) {
      func_0x004efbe0();
      *(ulong **)(unaff_x21 + 0x58) = unaff_x22;
      puVar2 = unaff_x22;
    }
    else {
      FUN_00505790();
    }
  }
  if (unaff_x20[0xc] != 0) {
    *(ulong *)(unaff_x21 + 0x60) = unaff_x20[0xc];
  }
  if ((int)unaff_x20[0xd] != 0) {
    *(int *)(unaff_x21 + 0x68) = (int)unaff_x20[0xd];
  }
  if (*(int *)((long)unaff_x20 + 0x6c) != 0) {
    *(int *)(unaff_x21 + 0x6c) = *(int *)((long)unaff_x20 + 0x6c);
  }
  if (unaff_x20[0xe] != 0) {
    *(ulong *)(unaff_x21 + 0x70) = unaff_x20[0xe];
  }
  func_0x0050ef40();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0050f018();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 005058e0; end: 00505917;  */

undefined1  [16] FUN_005058e0(long param_1,long param_2)

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
  for (puVar3 = (undefined1 *)(param_1 + 0x18); puVar3 != (undefined1 *)(param_1 + 0x78);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x78);
  return auVar7;
}



/* Entry: 00505918; end: 00505943;  */

long FUN_00505918(long param_1)

{
  func_0x0050f184();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 00505944; end: 00505947;  */

long FUN_00505944(long param_1)

{
  func_0x0050f184();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 00505948; end: 0050595b;  */

void FUN_00505948(void)

{
  FUN_00505918();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



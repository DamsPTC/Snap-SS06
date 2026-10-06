/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b596928; end: 10b5969ab;  */

undefined8 * FUN_10b596928(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d11970;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5974fc();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010b597274(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b597344(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 10b5969ac; end: 10b5969d7;  */

undefined8 FUN_10b5969ac(undefined8 param_1)

{
  func_0x00010b597528();
  FUN_10b5969d8(param_1);
  return param_1;
}



/* Entry: 10b5969d8; end: 10b596a0b;  */

void FUN_10b5969d8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b595f5c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b596628();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b596a0c; end: 10b596a0f;  */

undefined8 FUN_10b596a0c(undefined8 param_1)

{
  func_0x00010b597528();
  FUN_10b5969d8(param_1);
  return param_1;
}



/* Entry: 10b596a10; end: 10b596a23;  */

void FUN_10b596a10(void)

{
  FUN_10b5969ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b596a24; end: 10b596a2f;  */

undefined ** FUN_10b596a24(void)

{
  return &PTR_DAT_110d11df0;
}



/* Entry: 10b596a30; end: 10b596a83;  */

void FUN_10b596a30(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b596000(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5966bc(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 10b596a84; end: 10b596b7b;  */

long * FUN_10b596a84(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b59749c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    param_1 = (long *)0x1;
    func_0x00010b597538();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010b5974c4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b597540();
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



/* Entry: 10b596b7c; end: 10b596b7f;  */

void FUN_10b596b7c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b597568();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b597274();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b5961e0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b597344();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b596858();
      }
    }
  }
  func_0x00010b597554();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b597578();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b596b80; end: 10b596c1b;  */

void FUN_10b596b80(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b597568();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b597274();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b5961e0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b597344();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b596858();
      }
    }
  }
  func_0x00010b597554();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b597578();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b596c1c; end: 10b596c53;  */

void FUN_10b596c1c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b596a30();
  func_0x00010b597568();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b597274();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b5961e0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b597344();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b596858();
      }
    }
  }
  func_0x00010b597554();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b597578();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b596c54; end: 10b596cd7;  */

undefined1  [16] FUN_10b596c54(long param_1,long param_2)

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
  for (puVar3 = (undefined1 *)(param_1 + 0x18); puVar3 != (undefined1 *)(param_1 + 0x28);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x28);
  return auVar7;
}



/* Entry: 10b596cd8; end: 10b596f6f;  */

void FUN_10b596cd8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b597530();
  }
  else {
    func_0x00010b5974b8();
  }
  *puVar1 = &PTR_FUN_110d11650;
  puVar1[1] = param_1;
  func_0x00010b5975d0();
  return;
}



/* Entry: 10b596f70; end: 10b596fcb;  */

undefined8 * FUN_10b596f70(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b597588();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5975c0();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5975c8();
  }
  *param_1 = &PTR_FUN_110d116a0;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x00010b5959a8();
  return param_1;
}



/* Entry: 10b596fcc; end: 10b59702f;  */

undefined8 * FUN_10b596fcc(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b597588();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5975c0();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5975c8();
  }
  *param_1 = &PTR_FUN_110d116f0;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x17) = 0;
  func_0x00010b5955f8();
  return param_1;
}



/* Entry: 10b597030; end: 10b59708b;  */

undefined8 * FUN_10b597030(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x21;
  
  func_0x00010b597588();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b597530();
  }
  else {
    func_0x00010b5974ac();
  }
  *param_1 = &PTR_FUN_110d11740;
  param_1[1] = unaff_x21;
  puVar1 = param_1;
  func_0x00010b597628();
  *(undefined1 *)((long)puVar1 + 0x12) = 0;
  func_0x00010b595834();
  return param_1;
}



/* Entry: 10b59708c; end: 10b597113;  */

undefined8 * FUN_10b59708c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5975f0();
  }
  else {
    FUN_10b4d80e0(param_1,0x28);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d11880;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5974fc();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10b596f70(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = param_1;
  *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(param_2 + 0x20);
  return puVar2;
}



/* Entry: 10b597114; end: 10b59716b;  */

undefined8 * FUN_10b597114(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010b597588();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b597530();
  }
  else {
    func_0x00010b5974ac();
  }
  *param_1 = &PTR_FUN_110d11650;
  param_1[1] = unaff_x21;
  func_0x00010b5975d0();
  FUN_10b595e54();
  return param_1;
}



/* Entry: 10b59716c; end: 10b5971c3;  */

undefined8 * FUN_10b59716c(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010b597588();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b597530();
  }
  else {
    func_0x00010b5974ac();
  }
  *param_1 = &PTR_FUN_110d117e0;
  param_1[1] = unaff_x21;
  func_0x00010b5975d0();
  FUN_10b5962dc();
  return param_1;
}



/* Entry: 10b5971c4; end: 10b59721b;  */

undefined8 * FUN_10b5971c4(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010b597588();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b597530();
  }
  else {
    func_0x00010b5974ac();
  }
  *param_1 = &PTR_FUN_110d11830;
  param_1[1] = unaff_x21;
  func_0x00010b597628();
  func_0x00010b5963e4();
  return param_1;
}



/* Entry: 10b59721c; end: 10b597273;  */

undefined8 * FUN_10b59721c(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00010b597588();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b597530();
  }
  else {
    func_0x00010b5974ac();
  }
  *param_1 = &PTR_FUN_110d11790;
  param_1[1] = unaff_x21;
  func_0x00010b5975d0();
  func_0x00010b596520();
  return param_1;
}



/* Entry: 10b597274; end: 10b5973f7;  */

undefined8 * FUN_10b597274(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b597604();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d11920;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5974fc();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10b596fcc(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10b597030(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_10b59708c(param_1,*(undefined8 *)(param_2 + 0x28));
  }
  puVar2[5] = puVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10b597114(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar2[6] = param_1;
  return puVar2;
}



/* Entry: 10b5973f8; end: 10b59768f;  */

void FUN_10b5973f8(void)

{
  return;
}



/* Entry: 10b597690; end: 10b5976bb;  */

long FUN_10b597690(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5976bc; end: 10b5976bf;  */

long FUN_10b5976bc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5976c0; end: 10b5976d3;  */

void FUN_10b5976c0(void)

{
  FUN_10b597690();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5976d4; end: 10b5976f7;  */

undefined ** FUN_10b5976d4(void)

{
  return &PTR_DAT_110d11f98;
}



/* Entry: 10b5976f8; end: 10b597813;  */

long * FUN_10b5976f8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((char)param_1[2] == '\x01') {
    plVar2 = param_1;
    FUN_10b597970();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b59797c();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    FUN_10b597970();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b59797c();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[3] != 0) {
    FUN_10b597970();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b59797c();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    FUN_10b597970();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b59797c();
    param_2 = plVar2;
  }
  if ((int)param_1[4] != 0) {
    FUN_10b597970();
    param_2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b59797c();
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



/* Entry: 10b597814; end: 10b5978c7;  */

long FUN_10b597814(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x1c)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x24) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5978c8; end: 10b5978ff;  */

void FUN_10b5978c8(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b5976e0();
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
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



/* Entry: 10b597900; end: 10b597923;  */

undefined1  [16] FUN_10b597900(long param_1,long param_2)

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
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x24);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x24);
  return auVar6;
}



/* Entry: 10b597924; end: 10b59796f;  */

void FUN_10b597924(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d11f58;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b597970; end: 10b597987;  */

ulong * FUN_10b597970(void)

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



/* Entry: 10b597988; end: 10b5979bb;  */

long FUN_10b597988(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5979bc; end: 10b5979bf;  */

long FUN_10b5979bc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5979c0; end: 10b5979d3;  */

void FUN_10b5979c0(void)

{
  FUN_10b597988();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5979d4; end: 10b5979f3;  */

undefined ** FUN_10b5979d4(void)

{
  return &PTR_DAT_110d12050;
}



/* Entry: 10b5979f4; end: 10b597ad3;  */

byte * FUN_10b5979f4(byte *param_1,byte *param_2,byte *param_3)

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
    FUN_10b597c10();
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
      FUN_10b597c10();
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



/* Entry: 10b597ad4; end: 10b597b67;  */

long FUN_10b597ad4(long param_1)

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



/* Entry: 10b597b68; end: 10b597bb3;  */

void FUN_10b597b68(long param_1,long param_2)

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



/* Entry: 10b597bb4; end: 10b597bbb;  */

void FUN_10b597bb4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110d12010;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b597bbc; end: 10b597c0f;  */

void FUN_10b597bbc(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d12010;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b597c10; end: 10b597c1f;  */

ulong * FUN_10b597c10(void)

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



/* Entry: 10b597c20; end: 10b597c33;  */

void FUN_10b597c20(void)

{
  func_0x000107c30608();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b597c34; end: 10b597c5b;  */

undefined ** FUN_10b597c34(void)

{
  return &PTR_DAT_110d12158;
}



/* Entry: 10b597c5c; end: 10b597dcf;  */

long * FUN_10b597c5c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((int)param_1[2] != 0) {
    plVar2 = param_1;
    FUN_10b59871c();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b598728();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    FUN_10b59871c();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b598728();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[3] != 0) {
    FUN_10b59871c();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b598728();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    FUN_10b59871c();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b598728();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[4] != 0) {
    FUN_10b59871c();
    plVar1 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b598728();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x24) != 0) {
    FUN_10b59871c();
    plVar2 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar1);
    func_0x00010b598728();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[5] != 0) {
    FUN_10b59871c();
    plVar1 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar2);
    func_0x00010b598728();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    FUN_10b59871c();
    param_2 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar1);
    func_0x00010b598728();
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



/* Entry: 10b597dd0; end: 10b597ecf;  */

long FUN_10b597dd0(long param_1)

{
  int extraout_w8;
  long lVar1;
  long extraout_x9;
  long lVar2;
  ulong uVar3;
  
  func_0x00010b598784(0x1a0);
  func_0x00010b598784();
  lVar1 = extraout_x9;
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar1 = extraout_x9 +
            (ulong)((uint)(extraout_w8 + (int)LZCOUNT(*(int *)(param_1 + 0x28)) * -9) >> 6);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    lVar1 = lVar1 + (ulong)((uint)(extraout_w8 + (int)LZCOUNT(*(int *)(param_1 + 0x2c)) * -9) >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x30) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b597ed0; end: 10b597ee3;  */

void FUN_10b597ed0(void)

{
  func_0x000107c30618();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b597ee4; end: 10b5982df;  */

long * FUN_10b597ee4(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined8 extraout_x8_09;
  undefined8 extraout_x8_10;
  undefined8 extraout_x8_11;
  undefined8 uVar8;
  undefined8 extraout_x8_12;
  ulong uVar9;
  int iVar10;
  int iVar11;
  
  plVar4 = param_1;
  if ((int)param_1[0x19] != 0) {
    plVar5 = param_1;
    FUN_10b59871c();
    plVar4 = (long *)0x8;
    func_0x000107c280a8(8,plVar5);
    func_0x00010b598728();
    param_2 = plVar4;
  }
  plVar5 = plVar4;
  if (*(int *)((long)param_1 + 0xcc) != 0) {
    FUN_10b59871c();
    plVar5 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar4);
    func_0x00010b598728();
    param_2 = plVar5;
  }
  plVar4 = plVar5;
  if ((int)param_1[0x1a] != 0) {
    FUN_10b59871c();
    plVar4 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar5);
    func_0x00010b598728();
    param_2 = plVar4;
  }
  plVar5 = plVar4;
  if (*(int *)((long)param_1 + 0xd4) != 0) {
    FUN_10b59871c();
    plVar5 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar4);
    func_0x00010b598728();
    param_2 = plVar5;
  }
  plVar4 = plVar5;
  if ((int)param_1[0x1b] != 0) {
    FUN_10b59871c();
    plVar4 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar5);
    func_0x00010b598728();
    param_2 = plVar4;
  }
  uVar2 = *(uint *)(param_1 + 5);
  if (0 < (int)uVar2) {
    FUN_10b59871c();
    param_2 = (long *)((long)plVar4 + 2);
    *(undefined1 *)plVar4 = 0x32;
    while (0x7f < uVar2) {
      func_0x00010b598734();
    }
    *(char *)((long)param_2 + -1) = (char)uVar2;
    do {
      FUN_10b59871c();
      func_0x00010b5987a4();
      uVar8 = extraout_x8;
      while (bVar3 = 0x7f < (uint)uVar8, bVar3) {
        func_0x00010b598748();
        uVar8 = extraout_x8_00;
      }
      func_0x00010b598774();
    } while (!bVar3);
  }
  uVar2 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar2) {
    FUN_10b59871c();
    param_2 = (long *)((long)plVar4 + 2);
    *(undefined1 *)plVar4 = 0x3a;
    while (0x7f < uVar2) {
      func_0x00010b598734();
    }
    *(char *)((long)param_2 + -1) = (char)uVar2;
    do {
      FUN_10b59871c();
      func_0x00010b5987a4();
      uVar8 = extraout_x8_01;
      while (bVar3 = 0x7f < (uint)uVar8, bVar3) {
        func_0x00010b598748();
        uVar8 = extraout_x8_02;
      }
      func_0x00010b598774();
    } while (!bVar3);
  }
  uVar2 = *(uint *)(param_1 + 0xb);
  if (0 < (int)uVar2) {
    FUN_10b59871c();
    param_2 = (long *)((long)plVar4 + 2);
    *(undefined1 *)plVar4 = 0x42;
    while (0x7f < uVar2) {
      func_0x00010b598734();
    }
    *(char *)((long)param_2 + -1) = (char)uVar2;
    do {
      FUN_10b59871c();
      func_0x00010b5987a4();
      uVar8 = extraout_x8_03;
      while (bVar3 = 0x7f < (uint)uVar8, bVar3) {
        func_0x00010b598748();
        uVar8 = extraout_x8_04;
      }
      func_0x00010b598774();
    } while (!bVar3);
  }
  uVar2 = *(uint *)(param_1 + 0xe);
  if (0 < (int)uVar2) {
    FUN_10b59871c();
    param_2 = (long *)((long)plVar4 + 2);
    *(undefined1 *)plVar4 = 0x4a;
    while (0x7f < uVar2) {
      func_0x00010b598734();
    }
    *(char *)((long)param_2 + -1) = (char)uVar2;
    do {
      FUN_10b59871c();
      func_0x00010b5987a4();
      uVar8 = extraout_x8_05;
      while (bVar3 = 0x7f < (uint)uVar8, bVar3) {
        func_0x00010b598748();
        uVar8 = extraout_x8_06;
      }
      func_0x00010b598774();
    } while (!bVar3);
  }
  uVar2 = *(uint *)(param_1 + 0x11);
  if (0 < (int)uVar2) {
    FUN_10b59871c();
    param_2 = (long *)((long)plVar4 + 2);
    *(undefined1 *)plVar4 = 0x52;
    while (0x7f < uVar2) {
      func_0x00010b598734();
    }
    *(char *)((long)param_2 + -1) = (char)uVar2;
    do {
      FUN_10b59871c();
      func_0x00010b5987a4();
      uVar8 = extraout_x8_07;
      while (bVar3 = 0x7f < (uint)uVar8, bVar3) {
        func_0x00010b598748();
        uVar8 = extraout_x8_08;
      }
      func_0x00010b598774();
    } while (!bVar3);
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  if (0 < (int)uVar2) {
    FUN_10b59871c();
    param_2 = (long *)((long)plVar4 + 2);
    *(undefined1 *)plVar4 = 0x5a;
    while (0x7f < uVar2) {
      func_0x00010b598734();
    }
    *(char *)((long)param_2 + -1) = (char)uVar2;
    do {
      FUN_10b59871c();
      func_0x00010b5987a4();
      uVar8 = extraout_x8_09;
      while (bVar3 = 0x7f < (uint)uVar8, bVar3) {
        func_0x00010b598748();
        uVar8 = extraout_x8_10;
      }
      func_0x00010b598774();
    } while (!bVar3);
  }
  uVar2 = *(uint *)(param_1 + 0x17);
  if (0 < (int)uVar2) {
    FUN_10b59871c();
    param_2 = (long *)((long)plVar4 + 2);
    *(undefined1 *)plVar4 = 0x62;
    while (0x7f < uVar2) {
      func_0x00010b598734();
    }
    *(char *)((long)param_2 + -1) = (char)uVar2;
    do {
      FUN_10b59871c();
      func_0x00010b5987a4();
      uVar8 = extraout_x8_11;
      while (bVar3 = 0x7f < (uint)uVar8, bVar3) {
        func_0x00010b598748();
        uVar8 = extraout_x8_12;
      }
      func_0x00010b598774();
    } while (!bVar3);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar4 = (long *)0xd;
    func_0x000107c303cc(0xd,param_1[0x18],*(undefined4 *)(param_1[0x18] + 0x30));
    param_2 = plVar4;
  }
  plVar5 = plVar4;
  if (*(char *)((long)param_1 + 0xdc) == '\x01') {
    FUN_10b59871c();
    plVar5 = (long *)0x70;
    func_0x000107c280a8(0x70,plVar4);
    func_0x00010b598728();
    param_2 = plVar5;
  }
  if (*(char *)((long)param_1 + 0xdd) == '\x01') {
    FUN_10b59871c();
    param_2 = (long *)0x78;
    func_0x000107c280a8(0x78,plVar5);
    func_0x00010b598728();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar9 = param_1[1] & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar6 = *(long *)(uVar9 + 8);
      uVar7 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      lVar6 = uVar9 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      while( true ) {
        iVar11 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar10 = (int)uVar7;
        uVar7 = (ulong)(uint)(iVar10 - iVar11);
        if (iVar10 - iVar11 == 0 || iVar10 < iVar11) break;
        func_0x00010b4d5738();
        puVar1 = (undefined1 *)((long)param_2 + (long)iVar11);
        param_2 = param_3;
        func_0x000107c303e4(param_3,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar10);
    }
    _memcpy(param_2,lVar6,uVar7 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar7);
  }
  return param_2;
}



/* Entry: 10b5982e0; end: 10b59854b;  */

void FUN_10b5982e0(long param_1)

{
  int iVar1;
  int iVar2;
  int extraout_w8;
  long lVar3;
  int extraout_w9;
  ulong uVar4;
  
  iVar1 = (int)param_1;
  iVar2 = iVar1 + 0x18;
  func_0x00010b4d3e38();
  *(int *)(param_1 + 0x28) = iVar2;
  iVar2 = iVar1 + 0x30;
  func_0x00010b4d3e38();
  *(int *)(param_1 + 0x40) = iVar2;
  iVar2 = iVar1 + 0x48;
  func_0x00010b4d3e38();
  *(int *)(param_1 + 0x58) = iVar2;
  func_0x00010b59875c();
  iVar2 = iVar1 + 0x60;
  func_0x00010b4d3e38();
  *(int *)(param_1 + 0x70) = iVar2;
  func_0x00010b59875c();
  iVar2 = iVar1 + 0x78;
  func_0x00010b4d3e38();
  *(int *)(param_1 + 0x88) = iVar2;
  func_0x00010b59875c();
  iVar2 = iVar1 + 0x90;
  func_0x00010b4d3e38();
  *(int *)(param_1 + 0xa0) = iVar2;
  func_0x00010b59875c();
  iVar1 = iVar1 + 0xa8;
  func_0x00010b4d3e38();
  *(int *)(param_1 + 0xb8) = iVar1;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b597dd0(*(undefined8 *)(param_1 + 0xc0));
  }
  func_0x00010b598784(0x1a0);
  iVar2 = extraout_w9;
  if (*(int *)(param_1 + 0xd8) != 0) {
    iVar2 = extraout_w9 + ((uint)(extraout_w8 + (int)LZCOUNT(*(int *)(param_1 + 0xd8)) * -9) >> 6);
  }
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0xdc) * 2 + (uint)*(byte *)(param_1 + 0xdd) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10b59854c; end: 10b59854f;  */

void FUN_10b59854c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x0001088ffb98(param_1 + 0x18,param_2 + 0x18);
  func_0x0001088ffb98(param_1 + 0x30,param_2 + 0x30);
  func_0x0001088ffb98(param_1 + 0x48,param_2 + 0x48);
  func_0x0001088ffb98(param_1 + 0x60,param_2 + 0x60);
  func_0x0001088ffb98(param_1 + 0x78,param_2 + 0x78);
  func_0x0001088ffb98(param_1 + 0x90,param_2 + 0x90);
  func_0x0001088ffb98(param_1 + 0xa8,param_2 + 0xa8);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0xc0) == 0) {
      func_0x000107c30624(uVar2,*(undefined8 *)(param_2 + 0xc0));
      *(ulong *)(param_1 + 0xc0) = uVar2;
    }
    else {
      func_0x000107c30604();
    }
  }
  if (*(int *)(param_2 + 200) != 0) {
    *(int *)(param_1 + 200) = *(int *)(param_2 + 200);
  }
  if (*(int *)(param_2 + 0xcc) != 0) {
    *(int *)(param_1 + 0xcc) = *(int *)(param_2 + 0xcc);
  }
  if (*(int *)(param_2 + 0xd0) != 0) {
    *(int *)(param_1 + 0xd0) = *(int *)(param_2 + 0xd0);
  }
  if (*(int *)(param_2 + 0xd4) != 0) {
    *(int *)(param_1 + 0xd4) = *(int *)(param_2 + 0xd4);
  }
  if (*(int *)(param_2 + 0xd8) != 0) {
    *(int *)(param_1 + 0xd8) = *(int *)(param_2 + 0xd8);
  }
  if (*(char *)(param_2 + 0xdc) == '\x01') {
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  if (*(char *)(param_2 + 0xdd) == '\x01') {
    *(undefined1 *)(param_1 + 0xdd) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10b598550; end: 10b59869f;  */

void FUN_10b598550(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x0001088ffb98(param_1 + 0x18,param_2 + 0x18);
  func_0x0001088ffb98(param_1 + 0x30,param_2 + 0x30);
  func_0x0001088ffb98(param_1 + 0x48,param_2 + 0x48);
  func_0x0001088ffb98(param_1 + 0x60,param_2 + 0x60);
  func_0x0001088ffb98(param_1 + 0x78,param_2 + 0x78);
  func_0x0001088ffb98(param_1 + 0x90,param_2 + 0x90);
  func_0x0001088ffb98(param_1 + 0xa8,param_2 + 0xa8);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0xc0) == 0) {
      func_0x000107c30624(uVar2,*(undefined8 *)(param_2 + 0xc0));
      *(ulong *)(param_1 + 0xc0) = uVar2;
    }
    else {
      func_0x000107c30604();
    }
  }
  if (*(int *)(param_2 + 200) != 0) {
    *(int *)(param_1 + 200) = *(int *)(param_2 + 200);
  }
  if (*(int *)(param_2 + 0xcc) != 0) {
    *(int *)(param_1 + 0xcc) = *(int *)(param_2 + 0xcc);
  }
  if (*(int *)(param_2 + 0xd0) != 0) {
    *(int *)(param_1 + 0xd0) = *(int *)(param_2 + 0xd0);
  }
  if (*(int *)(param_2 + 0xd4) != 0) {
    *(int *)(param_1 + 0xd4) = *(int *)(param_2 + 0xd4);
  }
  if (*(int *)(param_2 + 0xd8) != 0) {
    *(int *)(param_1 + 0xd8) = *(int *)(param_2 + 0xd8);
  }
  if (*(char *)(param_2 + 0xdc) == '\x01') {
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  if (*(char *)(param_2 + 0xdd) == '\x01') {
    *(undefined1 *)(param_1 + 0xdd) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10b5986a0; end: 10b5986d7;  */

void FUN_10b5986a0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c3061c();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x0001088ffb98(param_1 + 0x18,param_2 + 0x18);
  func_0x0001088ffb98(param_1 + 0x30,param_2 + 0x30);
  func_0x0001088ffb98(param_1 + 0x48,param_2 + 0x48);
  func_0x0001088ffb98(param_1 + 0x60,param_2 + 0x60);
  func_0x0001088ffb98(param_1 + 0x78,param_2 + 0x78);
  func_0x0001088ffb98(param_1 + 0x90,param_2 + 0x90);
  func_0x0001088ffb98(param_1 + 0xa8,param_2 + 0xa8);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0xc0) == 0) {
      func_0x000107c30624(uVar2,*(undefined8 *)(param_2 + 0xc0));
      *(ulong *)(param_1 + 0xc0) = uVar2;
    }
    else {
      func_0x000107c30604();
    }
  }
  if (*(int *)(param_2 + 200) != 0) {
    *(int *)(param_1 + 200) = *(int *)(param_2 + 200);
  }
  if (*(int *)(param_2 + 0xcc) != 0) {
    *(int *)(param_1 + 0xcc) = *(int *)(param_2 + 0xcc);
  }
  if (*(int *)(param_2 + 0xd0) != 0) {
    *(int *)(param_1 + 0xd0) = *(int *)(param_2 + 0xd0);
  }
  if (*(int *)(param_2 + 0xd4) != 0) {
    *(int *)(param_1 + 0xd4) = *(int *)(param_2 + 0xd4);
  }
  if (*(int *)(param_2 + 0xd8) != 0) {
    *(int *)(param_1 + 0xd8) = *(int *)(param_2 + 0xd8);
  }
  if (*(char *)(param_2 + 0xdc) == '\x01') {
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  if (*(char *)(param_2 + 0xdd) == '\x01') {
    *(undefined1 *)(param_1 + 0xdd) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 10b5986d8; end: 10b5986df;  */

undefined8 * FUN_10b5986d8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xe0;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0xe0);
  }
  *puVar1 = &PTR_DAT_110d12118;
  puVar1[1] = param_2;
  func_0x0001004a040c();
  return puVar1;
}



/* Entry: 10b5986e0; end: 10b59871b;  */

undefined8 * FUN_10b5986e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xe0;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0xe0);
  }
  *puVar1 = &PTR_DAT_110d12118;
  puVar1[1] = param_1;
  func_0x0001004a040c();
  return puVar1;
}



/* Entry: 10b59871c; end: 10b5987bb;  */

ulong * FUN_10b59871c(void)

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



/* Entry: 10b5987bc; end: 10b5987e3;  */

long FUN_10b5987bc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5987e4; end: 10b5987e7;  */

long FUN_10b5987e4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5987e8; end: 10b5987fb;  */

void FUN_10b5987e8(void)

{
  FUN_10b5987bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5987fc; end: 10b59881f;  */

undefined ** FUN_10b5987fc(void)

{
  return &PTR_DAT_110d122e8;
}



/* Entry: 10b598820; end: 10b5988cf;  */

long * FUN_10b598820(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = *(long **)(param_1 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280ac(param_2,uVar2);
  }
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x18),param_2);
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
    if (*param_3 - (long)plVar1 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)plVar1) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar1 + (long)iVar7;
        plVar1 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar1 + (long)iVar6);
    }
    _memcpy(plVar1,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar1 + (long)(int)uVar4);
  }
  return plVar1;
}



/* Entry: 10b5988d0; end: 10b598967;  */

ulong FUN_10b5988d0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
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



/* Entry: 10b598968; end: 10b598997;  */

long FUN_10b598968(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b598ba8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b598998; end: 10b59899b;  */

long FUN_10b598998(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b598ba8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b59899c; end: 10b5989af;  */

void FUN_10b59899c(void)

{
  FUN_10b598968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5989b0; end: 10b5989bb;  */

undefined ** FUN_10b5989b0(void)

{
  return &PTR_DAT_110d12348;
}



/* Entry: 10b5989bc; end: 10b598a03;  */

void FUN_10b5989bc(long param_1)

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



/* Entry: 10b598a04; end: 10b598b43;  */

long * FUN_10b598a04(long param_1,long *param_2,long *param_3)

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
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x1c),param_2,param_3);
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



/* Entry: 10b598b44; end: 10b598b97;  */

void FUN_10b598b44(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b598b98; end: 10b598ba7;  */

void FUN_10b598b98(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110d12258;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b598ba8; end: 10b598bd7;  */

long * FUN_10b598ba8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b598bd8; end: 10b598c23;  */

void FUN_10b598bd8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d122a8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b598c24; end: 10b598c4b;  */

void FUN_10b598c24(void)

{
  return;
}



/* Entry: 10b598c4c; end: 10b598c7f;  */

void FUN_10b598c4c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b59a498();
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



/* Entry: 10b598c80; end: 10b598d47;  */

long * FUN_10b598c80(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  int iVar4;
  long *unaff_x22;
  long *plVar5;
  int iVar6;
  
  plVar2 = param_2;
  plVar5 = param_3;
  func_0x00010b59a458();
  if ((long)plVar2 < 0) {
    plVar2 = (long *)unaff_x22[1];
    if (plVar2 != (long *)0x0) {
      plVar1 = (long *)*unaff_x22;
      goto LAB_10b598cb8;
    }
  }
  else {
    plVar1 = unaff_x22;
    if ((int)plVar2 != 0) {
LAB_10b598cb8:
      func_0x00010b59a434();
      func_0x00010b59a570();
      func_0x00010b59a3e8();
      param_2 = plVar1;
    }
  }
  func_0x00010b59a4b4(*(undefined8 *)(unaff_x21 + 0x18));
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b598d10;
  }
  else if ((int)plVar2 == 0) goto LAB_10b598d10;
  func_0x00010b59a434();
  param_2 = param_3;
  func_0x00010b59a3e8(param_3,2);
LAB_10b598d10:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b59a504();
  if ((long)plVar5 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar5) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar3,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar5);
}



/* Entry: 10b598d48; end: 10b598e33;  */

long FUN_10b598d48(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  
  func_0x00010b59a484();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = param_1 + 1;
  }
  func_0x00010b59a4d8(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b59a4f8();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar1 + lVar3;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b598e34; end: 10b598e37;  */

long FUN_10b598e34(long param_1)

{
  func_0x0001002a857c();
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return param_1;
}



/* Entry: 10b598e38; end: 10b598e4b;  */

void FUN_10b598e38(void)

{
  func_0x000107c3062c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b598e4c; end: 10b598e6f;  */

undefined ** FUN_10b598e4c(void)

{
  return &PTR_DAT_110d126b0;
}



/* Entry: 10b598e70; end: 10b598f7f;  */

long * FUN_10b598e70(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  int iVar4;
  long *plVar5;
  int iVar6;
  
  iVar4 = *(int *)((long)param_1 + 0x1c);
  plVar1 = param_1;
  plVar5 = param_3;
  if (iVar4 == 3) {
    func_0x00010b59a3a0();
    plVar2 = (long *)0x18;
  }
  else if (iVar4 == 2) {
    func_0x00010b59a3a0();
    plVar2 = (long *)0x10;
  }
  else {
    plVar2 = param_1;
    if (iVar4 != 1) goto LAB_10b598f28;
    func_0x00010b59a3a0();
    plVar2 = (long *)0x8;
  }
  func_0x000107c280a8(plVar2,plVar1);
  func_0x00010b59a3d0();
  param_2 = plVar2;
LAB_10b598f28:
  if ((int)param_1[2] != 0) {
    func_0x00010b59a3a0();
    param_2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x00010b59a3d0();
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x00010b59a504();
  if ((long)plVar5 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if ((long)(int)plVar5 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar3,(ulong)plVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar5);
  }
  while( true ) {
    iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar4 = (int)plVar5;
    plVar5 = (long *)(ulong)(uint)(iVar4 - iVar6);
    if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
    func_0x00010b4d5738();
    lVar3 = (long)param_2 + (long)iVar6;
    param_2 = param_3;
    func_0x000107c303e4(param_3,lVar3);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar4);
}



/* Entry: 10b598f80; end: 10b59903f;  */

ulong FUN_10b598f80(long param_1)

{
  uint uVar1;
  long lVar3;
  ulong uVar4;
  ulong uVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x1c) - 1U < 3) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  uVar2 = (ulong)uVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x18) = (int)uVar2;
  return uVar2;
}



/* Entry: 10b599040; end: 10b599053;  */

void FUN_10b599040(void)

{
  func_0x000107c30634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b599054; end: 10b59905f;  */

undefined ** FUN_10b599054(void)

{
  return &PTR_DAT_110d12720;
}



/* Entry: 10b599060; end: 10b599093;  */

void FUN_10b599060(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
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



/* Entry: 10b599094; end: 10b5991ef;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b599094(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  int iVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  lVar11 = 8;
  plVar6 = param_3;
  for (uVar10 = (ulong)(*(uint *)(param_1 + 0x18) &
                       ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar2 = (ulong *)(uVar4 + lVar11 + -1);
    }
    plVar6 = (long *)*puVar2;
    lVar3 = (long)*(char *)((long)plVar6 + 0x17);
    plVar7 = plVar6;
    if (lVar3 < 0) {
      lVar3 = plVar6[1];
      plVar7 = (long *)*plVar6;
    }
    func_0x000107c303d4(plVar7,lVar3,1,&UNK_10f77d306);
    plVar9 = (long *)(long)*(char *)((long)plVar6 + 0x17);
    if ((((long)plVar9 < 0) && (plVar9 = (long *)plVar6[1], 0x7f < (long)plVar9)) ||
       ((*param_3 - (long)param_2) + 0xe < (long)plVar9)) {
      func_0x00010b59a570();
      func_0x00010b4d5120();
    }
    else {
      *(undefined1 *)param_2 = 10;
      *(char *)((long)param_2 + 1) = (char)plVar9;
      plVar7 = plVar6;
      if (*(char *)((long)plVar6 + 0x17) < '\0') {
        plVar7 = (long *)*plVar6;
      }
      plVar6 = plVar9;
      _memcpy((long)param_2 + 2,plVar7);
      plVar7 = (long *)((long)param_2 + 2 + (long)plVar9);
    }
    lVar11 = lVar11 + 8;
    param_2 = plVar7;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b59a504();
  if ((long)plVar6 < 0) {
    lVar11 = *(long *)(extraout_x8 + 8);
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar11 = extraout_x8 + 8;
  }
  if ((long)(int)plVar6 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar11,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar6);
  }
  while( true ) {
    iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar5 = (int)plVar6;
    plVar6 = (long *)(ulong)(uint)(iVar5 - iVar8);
    if (iVar5 - iVar8 == 0 || iVar5 < iVar8) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar8);
    param_2 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar5);
}



/* Entry: 10b5991f0; end: 10b599277;  */

ulong FUN_10b5991f0(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = (ulong)uVar2;
  lVar6 = 8;
  for (uVar5 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar6 + -1);
    }
    uVar3 = *puVar1;
    func_0x000107c282a0();
    uVar4 = uVar3 + uVar4;
    lVar6 = lVar6 + 8;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x28) = (int)uVar4;
  return uVar4;
}



/* Entry: 10b599278; end: 10b59927b;  */

void FUN_10b599278(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x00010b59a4ec();
  puVar1 = (ulong *)(param_1 + 0x10);
  func_0x00010598fce8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b59a4a4();
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



/* Entry: 10b59927c; end: 10b5992b3;  */

void FUN_10b59927c(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x00010b59a4ec();
  puVar1 = (ulong *)(param_1 + 0x10);
  func_0x00010598fce8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b59a4a4();
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



/* Entry: 10b5992b4; end: 10b5992b7;  */

undefined8 FUN_10b5992b4(undefined8 param_1)

{
  func_0x0001002a857c();
  func_0x0001002a8d34();
  return param_1;
}



/* Entry: 10b5992b8; end: 10b5992cb;  */

void FUN_10b5992b8(void)

{
  func_0x000107c30638();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5992cc; end: 10b5992d7;  */

undefined ** FUN_10b5992cc(void)

{
  return &PTR_DAT_110d12790;
}



/* Entry: 10b5992d8; end: 10b599303;  */

void FUN_10b5992d8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b59a498();
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



/* Entry: 10b599304; end: 10b599397;  */

long * FUN_10b599304(undefined8 param_1,long *param_2,long *param_3)

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
  func_0x00010b59a458();
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b599360;
  }
  else if ((int)plVar1 == 0) goto LAB_10b599360;
  func_0x00010b59a434();
  param_2 = param_3;
  func_0x000107c280a0(param_3,1);
  plVar4 = unaff_x22;
LAB_10b599360:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b59a504();
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



/* Entry: 10b599398; end: 10b5993f3;  */

void FUN_10b599398(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x00010b59a484();
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
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b5993f4; end: 10b5993f7;  */

void FUN_10b5993f4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b59a41c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b59a4c0();
    }
    func_0x00010b59a55c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b59a4a4();
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



/* Entry: 10b5993f8; end: 10b59943f;  */

void FUN_10b5993f8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b59a41c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b59a4c0();
    }
    func_0x00010b59a55c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b59a4a4();
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



/* Entry: 10b599440; end: 10b599443;  */

long FUN_10b599440(long param_1)

{
  func_0x0001002a857c();
  func_0x0001002a8d34();
  func_0x000100067de0(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b599444; end: 10b599457;  */

void FUN_10b599444(void)

{
  func_0x000107c3063c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b599458; end: 10b599463;  */

undefined ** FUN_10b599458(void)

{
  return &PTR_DAT_110d12800;
}



/* Entry: 10b599464; end: 10b599497;  */

void FUN_10b599464(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b59a498();
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



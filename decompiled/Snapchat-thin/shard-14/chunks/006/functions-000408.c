/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b528744; end: 10b5287af;  */

void FUN_10b528744(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53424c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b534958();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5349bc();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_10b532c40();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_10b5359bc();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00010b534400();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b5287b0; end: 10b5287eb;  */

long FUN_10b5287b0(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5285ac();
  }
  __ZdlPv();
  FUN_10b531928(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5287ec; end: 10b5287ef;  */

long FUN_10b5287ec(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5285ac();
  }
  __ZdlPv();
  FUN_10b531928(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5287f0; end: 10b528803;  */

void FUN_10b5287f0(void)

{
  FUN_10b5287b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b528804; end: 10b52880f;  */

undefined ** FUN_10b528804(void)

{
  return &PTR_DAT_110cff448;
}



/* Entry: 10b528810; end: 10b528853;  */

void FUN_10b528810(ulong *param_1)

{
  ulong extraout_x8;
  
  FUN_10b532a50(param_1 + 3);
  if ((param_1[2] & 1) != 0) {
    FUN_10b528604(param_1[6]);
  }
  func_0x00010b534764();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b528854; end: 10b5288df;  */

long * FUN_10b528854(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5342b4();
  lVar2 = param_1[4];
  while ((int)lVar2 != 0) {
    func_0x00010b5343e4();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x00010b5343c0();
    func_0x00010b534bdc();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    func_0x00010b53442c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b534550();
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



/* Entry: 10b5288e0; end: 10b52894f;  */

void FUN_10b5288e0(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b5349e0();
  func_0x00010b5342d0();
  while (unaff_x22 != 0) {
    FUN_10b528950(*unaff_x21);
    func_0x00010b5348a0();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_10b5286c4(*(undefined8 *)(unaff_x19 + 0x30));
    func_0x00010b534014();
    func_0x00010b534470();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
  }
  func_0x00010b534770();
  return;
}



/* Entry: 10b528950; end: 10b52896b;  */

long FUN_10b528950(long param_1)

{
  long extraout_x8;
  
  func_0x00010b528474();
  func_0x00010b534014();
  return param_1 + extraout_x8;
}



/* Entry: 10b52896c; end: 10b52896f;  */

void FUN_10b52896c(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar1;
  
  func_0x00010b53424c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b5347ec();
  }
  func_0x00010b534c08();
  FUN_10b5289dc();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b534b78();
    if (param_1 == (ulong *)0x0) {
      FUN_10b532c70();
      *(ulong **)(unaff_x21 + 0x30) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_10b528744();
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b528970; end: 10b5289db;  */

void FUN_10b528970(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar1;
  
  func_0x00010b53424c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b5347ec();
  }
  func_0x00010b534c08();
  FUN_10b5289dc();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b534b78();
    if (param_1 == (ulong *)0x0) {
      FUN_10b532c70();
      *(ulong **)(unaff_x21 + 0x30) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_10b528744();
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b5289dc; end: 10b528a1b;  */

void FUN_10b5289dc(long *param_1,long param_2)

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



/* Entry: 10b528a1c; end: 10b528a3f;  */

undefined8 FUN_10b528a1c(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b528a40; end: 10b528a43;  */

undefined8 FUN_10b528a40(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b528a44; end: 10b528a57;  */

void FUN_10b528a44(void)

{
  FUN_10b528a1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b528a58; end: 10b528a77;  */

undefined ** FUN_10b528a58(void)

{
  return &PTR_DAT_110cff4a8;
}



/* Entry: 10b528a78; end: 10b528b07;  */

long * FUN_10b528a78(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5342b4();
  if ((char)param_1[2] == '\x01') {
    func_0x00010b53425c();
    func_0x00010b53477c();
    func_0x00010b534354();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x11) == '\x01') {
    func_0x00010b53425c();
    func_0x00010b5346f8();
    func_0x00010b534354();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b534550();
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



/* Entry: 10b528b08; end: 10b528b3f;  */

long FUN_10b528b08(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = ((ulong)((uint)*(byte *)(param_1 + 0x11) + (uint)*(byte *)(param_1 + 0x10)) & 3) * 2;
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



/* Entry: 10b528b40; end: 10b528b77;  */

long FUN_10b528b40(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b528b78; end: 10b528b7b;  */

long FUN_10b528b78(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b528b7c; end: 10b528b8f;  */

void FUN_10b528b7c(void)

{
  FUN_10b528b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b528b90; end: 10b528b9b;  */

undefined ** FUN_10b528b90(void)

{
  return &PTR_DAT_110cff510;
}



/* Entry: 10b528b9c; end: 10b528bd3;  */

void FUN_10b528b9c(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010b534360();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x00010b5347e4();
  }
  func_0x00010b534764();
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



/* Entry: 10b528bd4; end: 10b528c5f;  */

long * FUN_10b528bd4(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b534274();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x00010b5341e0();
    unaff_x20 = param_1;
  }
  func_0x00010b534460();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b528c2c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b528c2c;
  param_4 = (long *)&UNK_10f77717d;
  func_0x00010b534528();
  func_0x00010b534074();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b528c2c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
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



/* Entry: 10b528c60; end: 10b528cc7;  */

void FUN_10b528c60(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x00010b5341b8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010b5347dc();
    func_0x00010b5345d4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
  }
  func_0x00010b534770();
  return;
}



/* Entry: 10b528cc8; end: 10b528ccb;  */

void FUN_10b528cc8(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b534170();
  if ((param_3 & 1) != 0) {
    func_0x00010b534784();
  }
  func_0x00010b534344();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5347a4();
    if (param_1 == (ulong *)0x0) {
      func_0x00010b5346c4();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      func_0x00010b535e30();
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b528ccc; end: 10b528d4b;  */

void FUN_10b528ccc(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b534170();
  if ((param_3 & 1) != 0) {
    func_0x00010b534784();
  }
  func_0x00010b534344();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5347a4();
    if (param_1 == (ulong *)0x0) {
      func_0x00010b5346c4();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      func_0x00010b535e30();
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b528d4c; end: 10b528d73;  */

undefined8 FUN_10b528d4c(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b528d74; end: 10b528d77;  */

undefined8 FUN_10b528d74(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b528d78; end: 10b528d8b;  */

void FUN_10b528d78(void)

{
  FUN_10b528d4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b528d8c; end: 10b528d97;  */

undefined ** FUN_10b528d8c(void)

{
  return &PTR_DAT_110cff560;
}



/* Entry: 10b528d98; end: 10b528dc3;  */

void FUN_10b528d98(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
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



/* Entry: 10b528dc4; end: 10b528e43;  */

long * FUN_10b528dc4(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  plVar2 = param_2;
  func_0x00010b534118();
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b528e10;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_10b528e10;
  param_4 = (long *)&UNK_10f7771b8;
  func_0x00010b534528();
  func_0x00010b5341cc();
  param_1 = unaff_x22;
  param_2 = unaff_x22;
LAB_10b528e10:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5349b0();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b528e44; end: 10b528ee3;  */

void FUN_10b528e44(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5340e0();
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
    func_0x00010b5348d0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b528ee4; end: 10b528f2b;  */

long FUN_10b528ee4(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b53cbd8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b54bca8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b528f2c; end: 10b528f2f;  */

long FUN_10b528f2c(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b53cbd8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b54bca8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b528f30; end: 10b528f43;  */

void FUN_10b528f30(void)

{
  FUN_10b528ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b528f44; end: 10b528f4f;  */

undefined ** FUN_10b528f44(void)

{
  return &PTR_DAT_110cff5b8;
}



/* Entry: 10b528f50; end: 10b528fa7;  */

void FUN_10b528f50(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x00010b534360();
  func_0x00010b534a94();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      FUN_10b53cc3c(*(undefined8 *)(unaff_x19 + 0x20));
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_10b54bd24(*(undefined8 *)(unaff_x19 + 0x28));
    }
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x3d) = 0;
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



/* Entry: 10b528fa8; end: 10b5290f3;  */

long * FUN_10b528fa8(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar5;
  undefined8 *unaff_x22;
  int iVar6;
  
  func_0x00010b534738();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x1;
    func_0x00010b534164();
    unaff_x21 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x00010b5342f4();
    param_2 = param_1;
    func_0x00010b5346f8();
    func_0x00010b534af8();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    func_0x00010b5342f4();
    param_2 = param_1;
    func_0x00010b534940();
    func_0x00010b5343b4();
    unaff_x21 = param_1;
  }
  plVar3 = param_1;
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x00010b5342f4();
    unaff_x22 = *(undefined8 **)(unaff_x20 + 0x38);
    plVar3 = (long *)0x21;
    func_0x000107c280a8();
    unaff_x21 = plVar3 + 1;
    *plVar3 = (long)unaff_x22;
    param_2 = param_1;
  }
  plVar4 = plVar3;
  if (*(char *)(unaff_x20 + 0x44) == '\x01') {
    func_0x00010b5342f4();
    plVar4 = (long *)0x30;
    func_0x000107c280a8();
    func_0x00010b534354();
    param_2 = plVar3;
    unaff_x21 = plVar4;
  }
  func_0x00010b534580(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5290a8;
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b5290a8;
  param_4 = (long *)&UNK_10f7771ed;
  func_0x00010b534528(unaff_x22);
  func_0x00010b5344b0();
  plVar4 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_10b5290a8:
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    plVar4 = (long *)0x8;
    func_0x00010b534164();
    unaff_x21 = plVar4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534aa0();
  if (*plVar4 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar6 = ((int)*plVar4 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      param_3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar6);
      param_4 = plVar4;
      func_0x000107c303e4(plVar4,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b5290f4; end: 10b5291cf;  */

void FUN_10b5290f4(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x00010b5341b8();
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
  func_0x00010b534a7c();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      FUN_10b5291d0(*(undefined8 *)(unaff_x19 + 0x20));
      func_0x00010b5345d4();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      func_0x00010b5291ec(*(undefined8 *)(unaff_x19 + 0x28));
      func_0x00010b5345d4();
    }
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x30)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    iVar1 = iVar1 + 9;
  }
  if (*(int *)(unaff_x19 + 0x40) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x40)) * -9 + 0x280U >> 6) + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x44) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 10b5291d0; end: 10b529207;  */

long FUN_10b5291d0(long param_1)

{
  long extraout_x8;
  
  func_0x00010b53cce8();
  func_0x00010b534014();
  return param_1 + extraout_x8;
}



/* Entry: 10b529208; end: 10b52920b;  */

void FUN_10b529208(ulong *param_1,long param_2,ulong *param_3)

{
  undefined1 in_ZR;
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b534170();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x00010b534784();
    puVar1 = unaff_x22;
  }
  func_0x00010b534344();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  func_0x00010b534914();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b5347a4();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar1;
        func_0x00010b532cd8();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b53cd78();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b53499c();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b532d0c();
        *(ulong **)(unaff_x21 + 0x28) = puVar1;
        param_1 = puVar1;
      }
      else {
        FUN_10b54bf54();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  if (*(char *)(unaff_x20 + 0x44) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x44) = 1;
  }
  func_0x00010b5340f4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b53423c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b52920c; end: 10b5292ef;  */

void FUN_10b52920c(ulong *param_1,long param_2,ulong *param_3)

{
  undefined1 in_ZR;
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b534170();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x00010b534784();
    puVar1 = unaff_x22;
  }
  func_0x00010b534344();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  func_0x00010b534914();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b5347a4();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar1;
        func_0x00010b532cd8();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b53cd78();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b53499c();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b532d0c();
        *(ulong **)(unaff_x21 + 0x28) = puVar1;
        param_1 = puVar1;
      }
      else {
        FUN_10b54bf54();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  if (*(char *)(unaff_x20 + 0x44) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x44) = 1;
  }
  func_0x00010b5340f4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b53423c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5292f0; end: 10b529367;  */

void FUN_10b5292f0(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00010b534890();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5348ac();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b529344;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b54df3c();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_10b529344;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5348ac();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b529344;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b528b40();
    }
  }
  __ZdlPv();
LAB_10b529344:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b529368; end: 10b52939b;  */

long FUN_10b529368(long param_1)

{
  func_0x00010b534518();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b5292f0(param_1);
  }
  return param_1;
}



/* Entry: 10b52939c; end: 10b52939f;  */

long FUN_10b52939c(long param_1)

{
  func_0x00010b534518();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b5292f0(param_1);
  }
  return param_1;
}



/* Entry: 10b5293a0; end: 10b5293b3;  */

void FUN_10b5293a0(void)

{
  FUN_10b529368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5293b4; end: 10b5293bf;  */

undefined ** FUN_10b5293b4(void)

{
  return &PTR_DAT_110cff610;
}



/* Entry: 10b5293c0; end: 10b5294b7;  */

void FUN_10b5293c0(long param_1)

{
  ulong *puVar1;
  
  FUN_10b5292f0();
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



/* Entry: 10b5294b8; end: 10b5294ef;  */

long FUN_10b5294b8(long param_1)

{
  long extraout_x8;
  
  FUN_10b528c60();
  func_0x00010b534014();
  return param_1 + extraout_x8;
}



/* Entry: 10b5294f0; end: 10b5294f3;  */

void FUN_10b5294f0(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b53424c();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5347ec();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b5295ac;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b5292f0();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x00010b534848();
      FUN_10b54e230();
      goto LAB_10b5295ac;
    }
    func_0x00010b534c14();
    FUN_10b532da4();
  }
  else {
    if (iVar1 != 1) goto LAB_10b5295ac;
    if (iVar2 == 1) {
      func_0x00010b534848();
      FUN_10b528ccc();
      goto LAB_10b5295ac;
    }
    func_0x00010b534c14();
    FUN_10b532d3c();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b5295ac:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b5294f4; end: 10b5295c7;  */

void FUN_10b5294f4(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b53424c();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5347ec();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b5295ac;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b5292f0();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x00010b534848();
      FUN_10b54e230();
      goto LAB_10b5295ac;
    }
    func_0x00010b534c14();
    FUN_10b532da4();
  }
  else {
    if (iVar1 != 1) goto LAB_10b5295ac;
    if (iVar2 == 1) {
      func_0x00010b534848();
      FUN_10b528ccc();
      goto LAB_10b5295ac;
    }
    func_0x00010b534c14();
    FUN_10b532d3c();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b5295ac:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b5295c8; end: 10b529607;  */

long FUN_10b5295c8(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  func_0x00010b534840();
  func_0x00010b5349a8();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b529368();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b529608; end: 10b52960b;  */

long FUN_10b529608(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  func_0x00010b534840();
  func_0x00010b5349a8();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b529368();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52960c; end: 10b52961f;  */

void FUN_10b52960c(void)

{
  FUN_10b5295c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b529620; end: 10b52962b;  */

undefined ** FUN_10b529620(void)

{
  return &PTR_DAT_110cff688;
}



/* Entry: 10b52962c; end: 10b52966f;  */

void FUN_10b52962c(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010b534360();
  func_0x00010b534838();
  func_0x00010b534900();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_10b5293c0(unaff_x19[6]);
  }
  func_0x00010b534764();
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



/* Entry: 10b529670; end: 10b52977b;  */

long * FUN_10b529670(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010b534274();
  func_0x00010b534580(param_1[3]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b5296a8;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b5296a8:
      param_4 = (long *)&UNK_10f777238;
      func_0x00010b534528();
      func_0x00010b53402c();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010b534580(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b5296e0;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b5296e0:
      param_4 = (long *)&UNK_10f777281;
      func_0x00010b534528();
      func_0x00010b534074();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010b534580(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52972c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b52972c;
  param_4 = (long *)&UNK_10f7772cd;
  func_0x00010b534528();
  func_0x00010b53412c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52972c:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x30) + 0x18);
    param_1 = (long *)0x4;
    func_0x00010b5342c4();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b52977c; end: 10b529823;  */

void FUN_10b52977c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long unaff_x19;
  
  func_0x00010b5341b8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x28));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010b529454(*(undefined8 *)(unaff_x19 + 0x30));
    func_0x00010b534014();
    func_0x00010b534470();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
  }
  func_0x00010b534770();
  return;
}



/* Entry: 10b529824; end: 10b529827;  */

void FUN_10b529824(ulong *param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b534170();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x00010b534784();
    puVar1 = unaff_x22;
  }
  func_0x00010b534344();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534b10();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b534b78();
    if (param_1 == (ulong *)0x0) {
      FUN_10b532dd4();
      *(ulong **)(unaff_x21 + 0x30) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_10b5294f4();
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8_02 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b529828; end: 10b5298f7;  */

void FUN_10b529828(ulong *param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b534170();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x00010b534784();
    puVar1 = unaff_x22;
  }
  func_0x00010b534344();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534b10();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b534b78();
    if (param_1 == (ulong *)0x0) {
      FUN_10b532dd4();
      *(ulong **)(unaff_x21 + 0x30) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_10b5294f4();
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8_02 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b5298f8; end: 10b52991f;  */

undefined8 FUN_10b5298f8(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b529920; end: 10b529923;  */

undefined8 FUN_10b529920(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b529924; end: 10b529937;  */

void FUN_10b529924(void)

{
  FUN_10b5298f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b529938; end: 10b529943;  */

undefined ** FUN_10b529938(void)

{
  return &PTR_DAT_110cff6f0;
}



/* Entry: 10b529944; end: 10b529977;  */

void FUN_10b529944(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x1c) = 0;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10b529978; end: 10b529a3f;  */

long * FUN_10b529978(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b534738();
  func_0x00010b534580(param_1[2]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5299c8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b5299c8;
  param_4 = (long *)&UNK_10f77731b;
  func_0x00010b534528();
  func_0x00010b534310();
  func_0x00010b534790();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_10b5299c8:
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b5342f4();
    func_0x00010b5346f8();
    func_0x00010b5343b4();
    unaff_x21 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x1c) == '\x01') {
    func_0x00010b5342f4();
    func_0x00010b534940();
    func_0x00010b534354();
    unaff_x21 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b534550();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010b534aa0();
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
  return unaff_x21;
}



/* Entry: 10b529a40; end: 10b529b0f;  */

void FUN_10b529a40(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  int extraout_w9;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5340e0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  iVar1 = 0;
  if (lVar2 != 0) {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x00010b534ac4();
    iVar1 = extraout_w8 + extraout_w9 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x1c) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x20) = iVar1;
  return;
}



/* Entry: 10b529b10; end: 10b529b43;  */

long FUN_10b529b10(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b529b44; end: 10b529b47;  */

long FUN_10b529b44(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b529b48; end: 10b529b5b;  */

void FUN_10b529b48(void)

{
  FUN_10b529b10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b529b5c; end: 10b529b67;  */

undefined ** FUN_10b529b5c(void)

{
  return &PTR_DAT_110cff740;
}



/* Entry: 10b529b68; end: 10b529c43;  */

void FUN_10b529b68(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00010b534798();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b534af0();
  }
  func_0x00010b534764();
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



/* Entry: 10b529c44; end: 10b529c47;  */

void FUN_10b529c44(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53424c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b534958();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5349bc();
    if (extraout_x8 == 0) {
      func_0x000108c6f470();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010b534ae0();
    }
  }
  func_0x00010b534400();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b529c48; end: 10b529ca3;  */

void FUN_10b529c48(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53424c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b534958();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5349bc();
    if (extraout_x8 == 0) {
      func_0x000108c6f470();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010b534ae0();
    }
  }
  func_0x00010b534400();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b529ca4; end: 10b529cd7;  */

long FUN_10b529ca4(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b529cd8; end: 10b529cdb;  */

long FUN_10b529cd8(long param_1)

{
  func_0x00010b534518();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b529cdc; end: 10b529cef;  */

void FUN_10b529cdc(void)

{
  FUN_10b529ca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b529cf0; end: 10b529cfb;  */

undefined ** FUN_10b529cf0(void)

{
  return &PTR_DAT_110cff7b0;
}



/* Entry: 10b529cfc; end: 10b529dd7;  */

void FUN_10b529cfc(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00010b534798();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b534af0();
  }
  func_0x00010b534764();
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



/* Entry: 10b529dd8; end: 10b529ddb;  */

void FUN_10b529dd8(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53424c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b534958();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5349bc();
    if (extraout_x8 == 0) {
      func_0x000108c6f470();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010b534ae0();
    }
  }
  func_0x00010b534400();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b529ddc; end: 10b529e37;  */

void FUN_10b529ddc(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53424c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b534958();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5349bc();
    if (extraout_x8 == 0) {
      func_0x000108c6f470();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010b534ae0();
    }
  }
  func_0x00010b534400();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b529e38; end: 10b529eaf;  */

void FUN_10b529e38(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00010b534890();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5348ac();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b529e8c;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b529ca4();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_10b529e8c;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5348ac();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b529e8c;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b529b10();
    }
  }
  __ZdlPv();
LAB_10b529e8c:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b529eb0; end: 10b529ee3;  */

long FUN_10b529eb0(long param_1)

{
  func_0x00010b534518();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b529e38(param_1);
  }
  return param_1;
}



/* Entry: 10b529ee4; end: 10b529ee7;  */

long FUN_10b529ee4(long param_1)

{
  func_0x00010b534518();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b529e38(param_1);
  }
  return param_1;
}



/* Entry: 10b529ee8; end: 10b529efb;  */

void FUN_10b529ee8(void)

{
  FUN_10b529eb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b529efc; end: 10b529f07;  */

undefined ** FUN_10b529efc(void)

{
  return &PTR_DAT_110cff828;
}



/* Entry: 10b529f08; end: 10b52a003;  */

void FUN_10b529f08(long param_1)

{
  ulong *puVar1;
  
  FUN_10b529e38();
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



/* Entry: 10b52a004; end: 10b52a007;  */

void FUN_10b52a004(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b53424c();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5347ec();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b52a0c0;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b529e38();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x00010b534848();
      FUN_10b529ddc();
      goto LAB_10b52a0c0;
    }
    func_0x00010b534c14();
    func_0x00010b532ea8();
  }
  else {
    if (iVar1 != 1) goto LAB_10b52a0c0;
    if (iVar2 == 1) {
      func_0x00010b534848();
      FUN_10b529c48();
      goto LAB_10b52a0c0;
    }
    func_0x00010b534c14();
    func_0x00010b532e48();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b52a0c0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b52a008; end: 10b52a0db;  */

void FUN_10b52a008(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b53424c();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5347ec();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b52a0c0;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b529e38();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x00010b534848();
      FUN_10b529ddc();
      goto LAB_10b52a0c0;
    }
    func_0x00010b534c14();
    func_0x00010b532ea8();
  }
  else {
    if (iVar1 != 1) goto LAB_10b52a0c0;
    if (iVar2 == 1) {
      func_0x00010b534848();
      FUN_10b529c48();
      goto LAB_10b52a0c0;
    }
    func_0x00010b534c14();
    func_0x00010b532e48();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b52a0c0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b52a0dc; end: 10b52a113;  */

long FUN_10b52a0dc(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52a114; end: 10b52a117;  */

long FUN_10b52a114(long param_1)

{
  func_0x00010b534518();
  func_0x00010b53465c();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b52a118; end: 10b52a12b;  */

void FUN_10b52a118(void)

{
  FUN_10b52a0dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52a12c; end: 10b52a137;  */

undefined ** FUN_10b52a12c(void)

{
  return &PTR_DAT_110cff888;
}



/* Entry: 10b52a138; end: 10b52a16f;  */

void FUN_10b52a138(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010b534360();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x00010b5347e4();
  }
  func_0x00010b534764();
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



/* Entry: 10b52a170; end: 10b52a1fb;  */

long * FUN_10b52a170(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b534274();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x00010b5341e0();
    unaff_x20 = param_1;
  }
  func_0x00010b534460();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52a1c8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b52a1c8;
  param_4 = (long *)&UNK_10f777351;
  func_0x00010b534528();
  func_0x00010b534074();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52a1c8:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
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



/* Entry: 10b52a1fc; end: 10b52a263;  */

void FUN_10b52a1fc(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x00010b5341b8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010b5347dc();
    func_0x00010b5345d4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
  }
  func_0x00010b534770();
  return;
}



/* Entry: 10b52a264; end: 10b52a267;  */

void FUN_10b52a264(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b534170();
  if ((param_3 & 1) != 0) {
    func_0x00010b534784();
  }
  func_0x00010b534344();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5347a4();
    if (param_1 == (ulong *)0x0) {
      func_0x00010b5346c4();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      func_0x00010b535e30();
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
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



/* Entry: 10b52a268; end: 10b52a2e7;  */

void FUN_10b52a268(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b534170();
  if ((param_3 & 1) != 0) {
    func_0x00010b534784();
  }
  func_0x00010b534344();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b5347a4();
    if (param_1 == (ulong *)0x0) {
      func_0x00010b5346c4();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      func_0x00010b535e30();
    }
  }
  func_0x00010b5340f4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b53423c();
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



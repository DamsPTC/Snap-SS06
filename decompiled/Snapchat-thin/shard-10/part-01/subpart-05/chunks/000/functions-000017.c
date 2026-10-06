/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10793b368; end: 10793b39b;  */

long FUN_10793b368(long param_1)

{
  func_0x000107946a94();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x00010793b28c(param_1);
  }
  return param_1;
}



/* Entry: 10793b694; end: 10793b697;  */

long FUN_10793b694(long param_1)

{
  func_0x000107946a94();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10793b368();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010793abc4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10793b854; end: 10793b85f;  */

undefined ** FUN_10793b854(void)

{
  return &PTR_DAT_1109ef450;
}



/* Entry: 10793b9ec; end: 10793ba4b;  */

ulong FUN_10793b9ec(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
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



/* Entry: 10793bbd4; end: 10793bc7f;  */

void FUN_10793bbd4(void)

{
  int iVar1;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001079473c0();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    FUN_10793b9ec();
    func_0x000107946300();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x24) * 2 + (uint)*(byte *)(unaff_x19 + 0x25) * 2;
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 10793be6c; end: 10793be7f;  */

void FUN_10793be6c(void)

{
  func_0x00010793be08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793c25c; end: 10793c29f;  */

undefined1  [16] FUN_10793c25c(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  func_0x000107946994();
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  func_0x0001079470e8();
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x38);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x38); puVar2 != (undefined1 *)(param_1 + 0x41);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x41);
  return auVar6;
}



/* Entry: 10793c3ec; end: 10793c3ef;  */

undefined8 FUN_10793c3ec(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793c568; end: 10793c56b;  */

undefined8 FUN_10793c568(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793c54c(param_1);
  return param_1;
}



/* Entry: 10793c774; end: 10793c79f;  */

undefined8 FUN_10793c774(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  func_0x000107946c10();
  return param_1;
}



/* Entry: 10793c9d8; end: 10793ca03;  */

undefined8 FUN_10793c9d8(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793ca04(param_1);
  return param_1;
}



/* Entry: 10793d078; end: 10793d08f;  */

void FUN_10793d078(void)

{
  FUN_107933510();
  func_0x0001079462e4();
  return;
}



/* Entry: 10793d324; end: 10793d32f;  */

undefined ** FUN_10793d324(void)

{
  return &PTR_DAT_1109ef6f8;
}



/* Entry: 10793d530; end: 10793d573;  */

undefined8 * FUN_10793d530(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_1109ec790;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010793d4bc(param_1,param_3);
  return param_1;
}



/* Entry: 10793d730; end: 10793d733;  */

undefined8 FUN_10793d730(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793d6f0(param_1);
  return param_1;
}



/* Entry: 10793da78; end: 10793da8b;  */

void FUN_10793da78(void)

{
  func_0x00010793da48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793dbcc; end: 10793dbe7;  */

void FUN_10793dbcc(long *param_1,long param_2)

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



/* Entry: 10793dcf4; end: 10793dd07;  */

void FUN_10793dcf4(void)

{
  func_0x00010793dca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793e078; end: 10793e07b;  */

void FUN_10793e078(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  return;
}



/* Entry: 10793e1b8; end: 10793e1e7;  */

void FUN_10793e1b8(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x00010793e1e8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10793e3c0; end: 10793e517;  */

long * FUN_10793e3c0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x000107946984();
  switch(*(undefined4 *)((long)param_1 + 0x1c)) {
  case 1:
    func_0x0001079466b8();
    func_0x000107947174();
    func_0x000107946ec0();
    func_0x0001079466ac();
    unaff_x21 = param_1;
    break;
  case 2:
    func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x10));
    if (param_2 < 0) {
      unaff_x22 = (long *)*unaff_x22;
    }
    param_4 = (long *)&UNK_10f438f2e;
    func_0x000107946aa4();
    func_0x000107946cd0();
    func_0x000107946758();
    param_1 = unaff_x22;
    unaff_x21 = unaff_x22;
    break;
  case 3:
    func_0x0001079466b8();
    func_0x000107947174();
    func_0x000107946e70();
    func_0x000107946a44();
    unaff_x21 = param_1;
    break;
  case 4:
    func_0x000107946f3c();
    func_0x000100628298();
    unaff_x21 = param_1;
    break;
  case 5:
    func_0x0001079466b8();
    func_0x000107947174();
    param_1 = (long *)0x29;
    func_0x0001001a59d0();
    func_0x000107947238();
    break;
  case 6:
    func_0x000107947360();
    param_1 = (long *)0x6;
    goto code_r0x00010793e48c;
  case 7:
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x10);
    param_1 = (long *)0x7;
    goto code_r0x00010793e48c;
  case 8:
    func_0x000107947360();
    param_1 = (long *)0x8;
code_r0x00010793e48c:
    func_0x0001079467ac();
    unaff_x21 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946ee4();
  if ((long)(int)param_3 <= *param_1 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
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



/* Entry: 10793e650; end: 10793e65b;  */

undefined ** FUN_10793e650(void)

{
  return &PTR_DAT_1109ef978;
}



/* Entry: 10793e868; end: 10793e87b;  */

void FUN_10793e868(void)

{
  func_0x00010793e808();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793eba8; end: 10793ebbb;  */

void FUN_10793eba8(void)

{
  func_0x00010793eb54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793eda8; end: 10793edab;  */

void FUN_10793eda8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  return;
}



/* Entry: 10793eee0; end: 10793eef7;  */

void FUN_10793eee0(void)

{
  func_0x00010793ec8c();
  func_0x0001079462e4();
  return;
}



/* Entry: 10793f048; end: 10793f10b;  */

void FUN_10793f048(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000107946514();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x0001001a5744();
    iVar1 = (int)param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x0001079468e0((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x18)) * 9);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10793f34c; end: 10793f377;  */

undefined8 FUN_10793f34c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793f378(param_1);
  return param_1;
}



/* Entry: 10793f648; end: 10793f677;  */

long FUN_10793f648(long param_1)

{
  func_0x000107946a94();
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10793f800; end: 10793f813;  */

void FUN_10793f800(void)

{
  func_0x00010793f7d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793fb0c; end: 10793fb33;  */

undefined8 FUN_10793fb0c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}



/* Entry: 10793fc90; end: 10793fcbb;  */

void FUN_10793fc90(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464ac();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10793fe78; end: 10793fe7b;  */

void FUN_10793fe78(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001079464ac();
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10793ffb4; end: 10793ffb7;  */

long FUN_10793ffb4(long param_1)

{
  func_0x000107946a94();
  func_0x000107946c10();
  func_0x000107946f1c();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107931394();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 107940218; end: 10794023f;  */

undefined8 FUN_107940218(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}



/* Entry: 1079403c0; end: 1079403f7;  */

void FUN_1079403c0(ulong *param_1)

{
  undefined1 in_ZR;
  undefined1 extraout_w8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001079464ac();
  func_0x000107947214();
  if ((bool)in_ZR) {
    *(undefined1 *)(unaff_x19 + 0x28) = extraout_w8;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 1079405fc; end: 1079405ff;  */

void FUN_1079405fc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946430();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946bb4();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946d64();
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x20) = 1;
  }
  if (*(char *)(unaff_x20 + 0x21) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x21) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10794078c; end: 1079407e3;  */

void FUN_10794078c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000107946514();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x0001001a5744();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 1079408a8; end: 10794095f;  */

long * FUN_1079408a8(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x23;
  int iVar4;
  long unaff_x26;
  long *unaff_x30;
  
  func_0x000107946ffc();
  func_0x000107946448();
  while (unaff_x26 != 0) {
    func_0x000107946378();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x000107946894();
    cVar2 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar2 < 0) && (func_0x000107946ea4(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x000107946764(), in_NG != in_OV)) {
      func_0x000107946598();
      unaff_x20 = param_1;
    }
    else {
      func_0x0001079469b8();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x0001079464f0();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar2);
    }
    func_0x000107946e98();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
  if ((long)(int)param_3 <= *param_1 - (long)unaff_x30) {
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*param_1 - (int)unaff_x30) + 0x10;
    iVar3 = (int)param_3;
    param_3 = (ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    lVar1 = (long)unaff_x30 + (long)iVar4;
    unaff_x30 = param_1;
    func_0x000107c303e4(param_1,lVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x30 + (long)iVar3);
}



/* Entry: 107940a28; end: 107940aaf;  */

undefined ** FUN_107940a28(void)

{
  return &PTR_DAT_1109effb8;
}



/* Entry: 107940bb0; end: 107940c2b;  */

undefined ** FUN_107940bb0(void)

{
  return &PTR_DAT_1109f0088;
}



/* Entry: 107940dac; end: 107940daf;  */

void FUN_107940dac(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464ac();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10794110c; end: 10794120b;  */

void FUN_10794110c(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109ede60);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946c64();
  if ((uint)extraout_x8_00 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x000107941154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dedef98)[extraout_x8_00] * 4 + 0x107941158))();
    return;
  }
  return;
}



/* Entry: 107941560; end: 10794187b;  */

void FUN_107941560(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x0001079465bc();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x000107947068();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        func_0x000107940ea0();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x00010793fa48();
        goto LAB_107941860;
      }
      func_0x000107946bdc();
      FUN_107945b7c();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x00010794736c();
        FUN_10793fc90();
        goto LAB_107941860;
      }
      func_0x000107946bdc();
      func_0x000107945bcc();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x00010793fe7c();
        goto LAB_107941860;
      }
      func_0x000107946bdc();
      func_0x000107945c18();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x00010793feb4();
        goto LAB_107941860;
      }
      func_0x000107946bdc();
      func_0x000107945c70();
      break;
    case 5:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107940170();
        goto LAB_107941860;
      }
      func_0x000107946bdc();
      func_0x000107945cc0();
      break;
    case 6:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        FUN_1079403c0();
        goto LAB_107941860;
      }
      func_0x000107946bdc();
      func_0x000107945d48();
      break;
    case 7:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107940600();
        goto LAB_107941860;
      }
      func_0x000107946bdc();
      func_0x000107945d94();
      break;
    case 8:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x0001079407e8();
        goto LAB_107941860;
      }
      func_0x000107946bdc();
      func_0x000107945dfc();
      break;
    case 9:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x0001079409b4();
        goto LAB_107941860;
      }
      func_0x000107946bdc();
      func_0x000107945e48();
      break;
    case 10:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x0001079409e0();
        goto LAB_107941860;
      }
      func_0x000107946bdc();
      func_0x000107945e94();
      break;
    case 0xb:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x000107940aa4();
        goto LAB_107941860;
      }
      func_0x000107946bdc();
      func_0x000107945ee4();
      break;
    case 0xc:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x000107940b68();
        goto LAB_107941860;
      }
      func_0x000107946bdc();
      func_0x000107945f34();
      break;
    case 0xd:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107940db0();
        goto LAB_107941860;
      }
      func_0x000107946bdc();
      func_0x000107945f84();
      break;
    case 0xe:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x000107940ddc();
        goto LAB_107941860;
      }
      func_0x000107946bdc();
      FUN_107945fd0();
      break;
    default:
      goto LAB_107941860;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_107941860:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010794672c();
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



/* Entry: 1079419bc; end: 1079419f7;  */

long FUN_1079419bc(long param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  func_0x000107947474();
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



/* Entry: 107941bd0; end: 107941bd3;  */

void FUN_107941bd0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946430();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946bb4();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946d64();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 107941ef4; end: 107941f1f;  */

undefined8 FUN_107941ef4(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107941f20(param_1);
  return param_1;
}



/* Entry: 107942114; end: 10794213f;  */

undefined8 FUN_107942114(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107942140(param_1);
  return param_1;
}



/* Entry: 1079422d8; end: 10794232b;  */

void FUN_1079422d8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x000107931b0c();
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946f48();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 107942518; end: 10794251b;  */

void FUN_107942518(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0001079465bc();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  func_0x000107947208();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000107947080();
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x000107931364();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000107946e34();
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb0();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x000107931364();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x000107946584();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010794672c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1079426ac; end: 1079426ef;  */

long FUN_1079426ac(long param_1)

{
  undefined8 uVar1;
  long extraout_x8;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = 5;
  }
  func_0x00010794742c(uVar1);
  lVar2 = extraout_x8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar2 = lVar2 + extraout_x8;
  }
  *(int *)(param_1 + 0x18) = (int)lVar2;
  return lVar2;
}



/* Entry: 107942858; end: 10794285b;  */

void FUN_107942858(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946430();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946bb4();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10794294c; end: 1079429f7;  */

long * FUN_10794294c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x000107946414();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10794297c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10794297c:
      param_4 = (long *)&UNK_10f4394d1;
      func_0x000107946aa4();
      func_0x000107946398();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x000107946964();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1079429c4;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1079429c4;
  param_4 = (long *)&UNK_10f439508;
  func_0x000107946aa4();
  func_0x000107946498();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1079429c4:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
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



/* Entry: 107942b78; end: 107942b83;  */

undefined ** FUN_107942b78(void)

{
  return &PTR_DAT_1109f04d8;
}



/* Entry: 107942f9c; end: 107942f9f;  */

undefined8 FUN_107942f9c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107942f7c(param_1);
  return param_1;
}



/* Entry: 107943220; end: 107943243;  */

undefined8 FUN_107943220(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107943774; end: 10794379b;  */

void FUN_107943774(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 1079438ac; end: 1079438f7;  */

long FUN_1079438ac(long param_1)

{
  func_0x0001000682a4(param_1 + 0x20);
  func_0x000107943884(param_1 + 8);
  return param_1;
}



/* Entry: 107943a00; end: 107943a27;  */

void FUN_107943a00(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 107944e4c; end: 107944e7b;  */

long FUN_107944e4c(long param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  
  func_0x00010068f438();
  if (param_1 == 0) {
    func_0x000107946b38();
  }
  else {
    func_0x000107946a78();
  }
  func_0x00010068f4c0();
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109edaa0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946c64();
  if ((uint)extraout_x8_00 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00010793269c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1079326a0 + (ulong)(byte)(&UNK_10dedef27)[extraout_x8_00] * 4))();
    return param_1;
  }
  return unaff_x19;
}



/* Entry: 107945494; end: 1079454c3;  */

long FUN_107945494(long param_1)

{
  func_0x00010068f438();
  if (param_1 == 0) {
    func_0x00010068f474();
  }
  else {
    func_0x0001079472c8();
  }
  func_0x00010068f4c0();
  func_0x0001079473f4();
  FUN_10793a790();
  return param_1;
}



/* Entry: 107945878; end: 1079458d3;  */

long FUN_107945878(long param_1)

{
  long lVar1;
  long unaff_x21;
  
  func_0x000107946d30();
  if (param_1 == 0) {
    func_0x000107946b38();
  }
  else {
    func_0x000107946b40();
    param_1 = unaff_x21;
  }
  lVar1 = param_1;
  func_0x0001079473a8(&PTR_DAT_1109ed0a0);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  func_0x00010793b8ec();
  return param_1;
}



/* Entry: 107945b7c; end: 107945bcb;  */

long FUN_107945b7c(long param_1)

{
  func_0x000107946d30();
  if (param_1 == 0) {
    func_0x00010068f474();
  }
  else {
    func_0x0001079468bc();
  }
  func_0x0001079469c8(&PTR_DAT_1109ecce0);
  func_0x00010793fa48();
  return param_1;
}



/* Entry: 107945fd0; end: 10794601f;  */

long FUN_107945fd0(long param_1)

{
  func_0x000107946d30();
  if (param_1 == 0) {
    func_0x00010068f474();
  }
  else {
    func_0x0001079468bc();
  }
  func_0x0001079469c8(&PTR_DAT_1109ecc90);
  func_0x000107940ddc();
  return param_1;
}



/* Entry: 107947534; end: 107947537;  */

long FUN_107947534(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  return param_1;
}



/* Entry: 107947720; end: 10794775b;  */

void FUN_107947720(byte *param_1)

{
  uint unaff_w21;
  
  for (; 0x7f < unaff_w21; unaff_w21 = unaff_w21 >> 7) {
    *param_1 = (byte)unaff_w21 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)unaff_w21;
  return;
}



/* Entry: 107948338; end: 107948427;  */

undefined8 FUN_107948338(int param_1)

{
  switch(param_1) {
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
    return 3;
  case 4:
  case 0x13:
  case 0x14:
    goto LAB_107948364;
  case 5:
    return 5;
  case 6:
    return 6;
  case 7:
  case 8:
    return 0;
  case 9:
    return 9;
  case 10:
    return 10;
  case 0xb:
    return 0xb;
  case 0xc:
    return 0xc;
  case 0xd:
    return 0xd;
  case 0xe:
    return 0xe;
  case 0xf:
    return 0xf;
  case 0x10:
    return 0x10;
  case 0x11:
    return 0x11;
  case 0x12:
    return 0x12;
  case 0x15:
    return 0x15;
  case 0x16:
    return 0x16;
  case 0x17:
    return 0x17;
  case 0x18:
    return 0x18;
  case 0x19:
    return 0x19;
  case 0x1a:
    return 0x1a;
  default:
    if (param_1 != -0x4524111) {
      return 0;
    }
LAB_107948364:
    return 0xffffffffffffffff;
  }
}



/* Entry: 10794b38c; end: 10794b62f;  */

void FUN_10794b38c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001079482ac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0c6c20(param_1);
  uVar4 = param_1;
  func_0x00010c083e00();
  puVar5 = PTR_PTR_1126bfca8;
  _objc_alloc(PTR_PTR_1126bfca8);
  uVar6 = param_1;
  func_0x00010c0c54a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c0c5480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar5,param_2,uVar6,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010c083e00();
  if ((uVar6 & 1) == 0) {
    uVar6 = param_1;
    func_0x00010c0c6c20();
    FUN_107948338();
    bVar10 = 1;
    if (((uVar6 + 1 < 0x1c) && ((1L << (uVar6 + 1 & 0x3f) & 0xb4b5dbbU) != 0)) &&
       ((long)uVar6 < 0x1a)) {
      bVar10 = (byte)(0x1394288 >> (ulong)((int)uVar6 + 1U & 0x1f));
    }
  }
  else {
    bVar10 = 0;
  }
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc();
  uVar6 = param_1;
  func_0x00010c2709c0(param_1);
  uVar7 = param_1;
  func_0x00010c26f480(param_1);
  func_0x00010c052380((double)(long)uVar6 / 1000.0 + (double)(long)uVar7 / 1000.0);
  if (puVar8 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar8);
    puVar9 = puVar8;
  }
  FUN_107948338(uVar2);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126c3390;
  _objc_alloc(PTR_PTR_1126c3390);
  uVar6 = param_1;
  func_0x00010c0c6e00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c0c6e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa840(puVar8,param_2,uVar3,uVar1,puVar5,uVar2,uVar4 & 0xffffffff,0,uVar6,0,puVar9,0,
                      bVar10 & 1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10794b888; end: 10794b8ef; +[SCMTGetPoiSharePlaylistRequest descriptor] */

void FUN_10794b888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113726f88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b64d00,
                        &PTR____CFConstantStringClassReference_110ea6218,
                        &PTR_s_snapchat_map_11323a6d0,&PTR_DAT_11323a6e8,1,0x10,0x1c);
    puRam0000000113726f88 = puVar1;
  }
  return;
}



/* Entry: 10794be58; end: 10794bee3; -[SCMemoriesSnapDocSaveServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10794be58(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127662b4);
  _objc_destroyWeak(param_1 + _DAT_1127662b0);
  _objc_destroyWeak(param_1 + _DAT_1127662ac);
  _objc_destroyWeak(param_1 + _DAT_1127662a8);
  _objc_destroyWeak(param_1 + _DAT_1127662a4);
  _objc_destroyWeak(param_1 + _DAT_1127662a0);
  _objc_destroyWeak(param_1 + _DAT_11276629c);
  _objc_destroyWeak(param_1 + _DAT_112766298);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112766294);
  return;
}



/* Entry: 10794c82c; end: 10794c977; -[SCMemoriesSnapDocSaveManager _handleStorySave:storyMetadata:] */

void FUN_10794c82c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar2);
  _objc_retain(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10794d8ec; end: 10794da53;  */

void FUN_10794d8ec(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf0a120(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010794ee7c(*(undefined8 *)(param_1 + 0x20),puVar1,param_3,0,
                      *(undefined8 *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x30),param_4,
                      param_5);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10794e608; end: 10794ea6b; -[SCMemoriesSnapDocSaveManager _mapToDataMutatingSnapDocBasedSnap:snapDocKey:saveSource:saveData:originalCreateTimeUtc:snapDoc:mediaAssets:orientation:subject:] */

void FUN_10794e608(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,long param_7,long param_8,undefined8 param_9,
                  undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  lVar1 = param_8;
  func_0x000107950544();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_8;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0fef80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf85640();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (param_7 == 0) {
    lStack_148 = param_8;
    func_0x0001079507c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_7);
    lStack_148 = param_7;
  }
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
  lVar2 = param_8;
  func_0x00010c0fee00(param_8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar4 = param_6;
  func_0x00010c231aa0();
  if ((uVar4 & 1) == 0) {
    puStack_150 = PTR_PTR_1126b2220;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_6;
    func_0x00010c14bf60(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_6;
    func_0x00010bf31200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560();
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(puVar5);
  }
  else {
    puStack_150 = (undefined *)0x0;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar10);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c240360(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar9);
  _objc_retain(param_3);
  _objc_retain(param_12);
  func_0x00010befb5e0(uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(param_12);
  _objc_release(param_3);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puStack_150);
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(lStack_148);
  _objc_release(lVar1);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10794f3d8; end: 10794f723;  */

/* WARNING: Possible PIC construction at 0x00010794f554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010794f558) */
/* WARNING: Removing unreachable block (ram,0x00010794f624) */

void FUN_10794f3d8(undefined *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar3 = param_2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(lVar4);
      puVar7 = puVar2;
      func_0x00010bf51e00(puVar2);
      _objc_release(puVar2);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
        ___stack_chk_fail();
code_r0x00010794f724:
        FUN_10794ffd4();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = param_1;
        func_0x00010b7f5374();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
      return;
    }
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      lVar10 = *(long *)(lVar9 * 8);
      _objc_retain(param_1);
      _objc_retain(param_2);
      _objc_retain(param_3);
      _objc_retain(lVar10);
      lVar5 = lVar10;
      func_0x00010c08c3a0();
      if ((int)lVar5 == 1) {
        lVar5 = lVar10;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf0b760();
        func_0x00010b697928();
        _objc_release(lVar5);
        if (lVar6 != -0x4524111) {
          func_0x00010c0c3fe0(lVar10);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          goto code_r0x00010794f724;
        }
      }
      _objc_release(lVar10);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release(param_1);
      _objc_release(0);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10794ffd4; end: 1079501e3;  */

void FUN_10794ffd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_1;
  _objc_retain(param_1);
  func_0x000108017f48();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c13e340(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfc4120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107950ca0; end: 107950fb3; -[SCDecryptedContentCache cachedFilePathForContentKey:key:iv:decryptBlock:] */

/* WARNING: Removing unreachable block (ram,0x000107950dd4) */

void FUN_107950ca0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  int iVar10;
  undefined8 unaff_x28;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010bf26ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfacf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = 0;
LAB_107950d68:
  do {
    _os_unfair_lock_lock(param_1 + 0x10);
    puVar5 = puVar4;
    func_0x00010bfacbe0();
    if ((int)puVar5 == 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        _os_unfair_lock_unlock(param_1 + 0x10);
        _dispatch_group_wait(lVar6,0xffffffffffffffff);
        _objc_release(lVar6);
        goto LAB_107950d68;
      }
      _dispatch_group_create();
      _objc_release(lVar9);
      _dispatch_group_enter(lVar6);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18));
      iVar10 = 3;
    }
    else {
      _objc_retain(uVar3);
      iVar10 = 1;
      lVar6 = lVar9;
      unaff_x28 = uVar3;
    }
    _os_unfair_lock_unlock(param_1 + 0x10);
    lVar9 = lVar6;
    if (iVar10 != 0) {
      if (iVar10 == 3) {
        uVar7 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSUUID_1126b0270;
        func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar5;
        func_0x00010bdc3580();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar7;
        func_0x00010bfacf80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar5);
        _objc_release(uVar7);
        lVar9 = param_6;
        (**(code **)(param_6 + 0x10))(param_6,uVar2);
        _os_unfair_lock_lock(param_1 + 0x10);
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18));
        if ((int)lVar9 == 0) {
          unaff_x28 = 0;
        }
        else {
          puVar5 = puVar4;
          func_0x00010bfacbe0();
          if ((int)puVar5 == 0) {
            func_0x00010c0d1560(puVar4);
          }
          else {
            func_0x00010c12cc40(puVar4);
          }
          puVar5 = puVar4;
          func_0x00010bfacbe0();
          unaff_x28 = uVar3;
          if ((int)puVar5 == 0) {
            unaff_x28 = uVar2;
          }
          _objc_retain(unaff_x28);
        }
        _os_unfair_lock_unlock(param_1 + 0x10);
        _dispatch_group_leave(lVar6);
        _objc_release(uVar2);
      }
      _objc_release(lVar6);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_release(lVar1);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x28);
      return;
    }
  } while( true );
}



/* Entry: 107951528; end: 107951667;  */

void FUN_107951528(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dc4098);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b25b8;
  _objc_alloc(PTR_PTR_1126b25b8);
  uVar1 = param_1;
  func_0x00010c0c46a0(param_1);
  _objc_release(param_1);
  func_0x00010c011280(puVar3,param_2,puVar2,uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107952038; end: 1079520f3;  */

void FUN_107952038(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c008340();
    _objc_retain();
    puVar3 = puVar2;
    func_0x00010bfdcf80(puVar2,param_2,&PTR____CFConstantStringClassReference_110db2db8);
    puVar4 = puVar2;
    if (((ulong)puVar3 & 1) == 0) {
      _objc_retain(puVar2);
    }
    else {
      puVar3 = puVar2;
      func_0x00010c08fa60(puVar2);
      func_0x00010c260c20(puVar2,param_2,puVar3 + -1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1079529bc; end: 107952a3b;  */

void FUN_1079529bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c11d5a0();
  _objc_release(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107953174; end: 1079533a7; -[SCSnapDocManagerImpl associatePlaybackMediaForKey:snapDoc:context:completePrefetch:completion:] */

void FUN_107953174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lStack_78 = 0;
  func_0x00010bee7c60(param_1);
  lVar1 = lStack_78;
  _objc_retain(lStack_78);
  if (lVar1 == 0) {
    _objc_initWeak(auStack_80,param_1);
    _objc_copyWeak(auStack_90,auStack_80);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    uStack_88 = param_6;
    _objc_retain(param_3);
    func_0x00010bde4260(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_80);
  }
  else {
    func_0x00010be52ae0(param_1);
    puVar2 = PTR_PTR_1126d5760;
    _objc_alloc(PTR_PTR_1126d5760);
    func_0x00010c04c260();
    (**(code **)(param_7 + 0x10))(param_7,puVar2);
    _objc_release(puVar2);
    param_1 = 0;
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107953b28; end: 107953b3b;  */

void FUN_107953b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107953b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107954668; end: 1079547f3; -[SCSnapDocManagerImpl monitorPlaybackMediaDownloadProgressForKey:snapDoc:onProgress:onError:] */

/* WARNING: Removing unreachable block (ram,0x0001079546e4) */

void FUN_107954668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bee7c60(param_1);
  _objc_retain(0);
  uVar1 = param_4;
  func_0x00010c0fee00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c0c3fe0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0cc0(param_1);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107954fbc; end: 107955027; -[SCSnapDocManagerImpl createContentWriterForContentKey:] */

void FUN_107954fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf555e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107955788; end: 10795579f;  */

void FUN_107955788(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107956094; end: 10795614f; -[SCSnapDocManagerImpl cloneAndReplaceMediaReferencesForSnapDoc:mediaContextType:mediaIdToContentRefMap:error:] */

void FUN_107956094(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  func_0x00010bf51e00(param_3);
  func_0x00010be4c480(param_1,param_2,param_5,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  if (param_1 == 0) {
    _objc_retain(param_3);
    uVar1 = param_3;
  }
  else if (param_6 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    _objc_retainAutorelease(param_1);
    *param_6 = param_1;
    uVar1 = 0;
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079567f8; end: 107956a07; -[SCSnapDocManagerImpl removeClaimForKeyWithSnapDocKey:snapDoc:onComplete:onError:] */

/* WARNING: Removing unreachable block (ram,0x0001079568fc) */
/* WARNING: Removing unreachable block (ram,0x000107956900) */

void FUN_1079567f8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0c46a0(param_4);
  if ((uint)(int)param_1 < 0x2d) {
    puVar1 = PTR_PTR_1126b25b8;
    _objc_alloc(PTR_PTR_1126b25b8);
    uVar2 = param_4;
    func_0x00010bf9e140(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0(param_4);
    func_0x00010c011280(puVar1);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b25c0;
    _objc_alloc(PTR_PTR_1126b25c0);
    uVar2 = param_5;
    func_0x00010bf25f00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360(puVar3);
    _objc_retain(0);
    _objc_release(uVar2);
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010c12b7c0(param_2);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(puVar3);
    _objc_release(0);
    _objc_release(puVar1);
  }
  else if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,&PTR____CFConstantStringClassReference_110ea6658);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10795798c; end: 1079579ab;  */

void FUN_10795798c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000107957998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1079587ec; end: 1079588ab; -[SCSnapDocManagerImpl _shouldManuallyDecryptContentResult:mediaData:mediaType:] */

uint FUN_1079587ec(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bfd69e0();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1;
    func_0x00010be34c60(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      uVar4 = 1;
    }
    else {
      func_0x00010be42a60(param_1,param_2,lVar2,param_5,param_3);
      uVar4 = (uint)param_1 ^ 1;
    }
    _objc_release(lVar2);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107958f2c; end: 107958f73;  */

bool FUN_107958f2c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bec53c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      param_2,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 107959bb0; end: 107959cb7; -[SCSnapDocManagerImpl _computeAndMergeResultsForSnapDoc:snapDocKey:apiType:singleResultComputeBlock:mergeResultsBlock:] */

void FUN_107959bb0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 in_x5;
  long in_x6;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  func_0x00010be5e9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_107959cb8;
  puStack_50 = &UNK_1109f1830;
  uStack_48 = in_x5;
  _objc_retain(in_x5);
  uVar1 = param_1;
  func_0x000100504554(param_1,&puStack_68);
  lVar2 = in_x6;
  (**(code **)(in_x6 + 0x10))(in_x6,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x6);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(in_x5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10795a4f0; end: 10795a50f; -[SCSnapDocManagerImpl _invalidSnapDocErrorWithDescription:] */

void FUN_10795a4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e40,
             PTR_PTR_11323ac20,param_3,1);
  return;
}



/* Entry: 10795b190; end: 10795b1b7;  */

void FUN_10795b190(void)

{
  return;
}



/* Entry: 10795b594; end: 10795b5db; -[SCSnapDocManagerImpl _emptyToNilForString:] */

void FUN_10795b594(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_3;
  }
  _objc_retain(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10795b948; end: 10795b96f; -[SCSnapDocMediaResultImpl getContentResult] */

void FUN_10795b948(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10795bba0; end: 10795bf13; -[SCSnapDocThumbnailResolverImpl retrieveImageForKey:snapDoc:thumbnailSnapDoc:pageInfo:thumbnailRequestConfigBuilder:completion:] */

void FUN_10795bba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,undefined *param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = param_3;
  FUN_107951528();
  _objc_retainAutoreleasedReturnValue();
  if (param_7 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126d57b0;
    _objc_alloc_init();
    puVar4 = puVar3;
    func_0x00010bf220e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    puVar4 = param_7;
    func_0x00010bf220e0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126b2798;
  _objc_opt_new();
  _objc_initWeak(auStack_68,param_1);
  if (param_5 == (undefined1 *)0x0) {
    puVar11 = auStack_68;
    _objc_loadWeakRetained(puVar11);
    func_0x00010be96800();
  }
  else {
    puVar5 = param_5;
    func_0x00010c0fee00(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar7;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    lVar8 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126bfc90;
    puVar9 = PTR_PTR_1126b1378;
    func_0x00010c0c46a0(uVar2);
    func_0x00010c119380(puVar1);
    func_0x00010c291560(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(param_8);
    lVar10 = lVar8;
    func_0x00010c13eb80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(lVar8);
    if (lVar10 != 0) {
      func_0x00010bef7460(puVar3);
    }
    _objc_release(lVar10);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar4);
  }
  _objc_release(puVar11);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10795c6cc; end: 10795c777;  */

void FUN_10795c6cc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_4 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    puVar1 = PTR_PTR_1126d57b8;
    _objc_alloc(PTR_PTR_1126d57b8);
    func_0x00010c008560();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  }
  else {
    puVar1 = (undefined *)(param_1 + 0x40);
    _objc_loadWeakRetained(puVar1);
    func_0x00010be1c140();
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10795d3d4; end: 10795d4fb; -[SCSnapDocThumbnailResolverImpl _saveGeneratedThumbnailToCMForKey:thumbnailRequestConfig:data:] */

void FUN_10795d3d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c09da20(param_4);
  lVar1 = param_1;
  func_0x00010be4f300(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x40f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_10795d4fc;
  puStack_50 = &UNK_110841f20;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c14a860(uVar3,param_2,param_5,lVar1,puVar2,0,&puStack_68);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 10795d8b8; end: 10795d90b;  */

void FUN_10795d8b8(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113726fd8 != -1) {
    func_0x00010002a2fc(0x113726fd8,&PTR___NSConcreteGlobalBlock_1109f1ad0);
  }
  uVar1 = uRam0000000113726fd0;
  _objc_retain(uRam0000000113726fd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10795e29c; end: 10795e2a3; -[SCMemoriesStorySavingLoggingStatus saveToCameraRoll] */

undefined1 FUN_10795e29c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10795e47c; end: 10795e49f; -[SCShakePromptCoordinatorHelper shakeReportDidComplete] */

void FUN_10795e47c(void)

{
  func_0x00010c12e1c0(uRam0000000113824538);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10793b698; end: 10793b6ab;  */

void FUN_10793b698(void)

{
  func_0x00010793b630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793b860; end: 10793b8b3;  */

long * FUN_10793b860(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  if ((int)param_1[2] != 0) {
    func_0x000107946fc8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000107946ab4();
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



/* Entry: 10793ba4c; end: 10793ba77;  */

undefined8 FUN_10793ba4c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793ba78(param_1);
  return param_1;
}



/* Entry: 10793bc80; end: 10793bc83;  */

void FUN_10793bc80(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = *(ulong **)(param_1 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(param_1 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      func_0x000107945878();
      *(ulong **)(param_1 + 0x18) = puVar2;
    }
    else {
      func_0x00010793b8ec();
      puVar2 = puVar3;
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  if (*(char *)(param_2 + 0x25) == '\x01') {
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010794672c();
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



/* Entry: 10793be80; end: 10793be8b;  */

undefined ** FUN_10793be80(void)

{
  return &PTR_DAT_1109ef518;
}



/* Entry: 10793c2a0; end: 10793c2d7;  */

long FUN_10793c2a0(long param_1)

{
  func_0x000107946a94();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000681a0();
  }
  return param_1;
}



/* Entry: 10793c3f0; end: 10793c403;  */

void FUN_10793c3f0(void)

{
  func_0x00010793c3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793c56c; end: 10793c57f;  */

void FUN_10793c56c(void)

{
  func_0x00010793c520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793c7a0; end: 10793c7a3;  */

undefined8 FUN_10793c7a0(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  func_0x000107946c10();
  return param_1;
}



/* Entry: 10793ca04; end: 10793cab7;  */

/* WARNING: Possible PIC construction at 0x00010793ca90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010793ca94) */
/* WARNING: Removing unreachable block (ram,0x00010793caa0) */
/* WARNING: Removing unreachable block (ram,0x00010793caa4) */

long FUN_10793ca04(long param_1)

{
  long extraout_x8;
  
  func_0x000100067de0(param_1 + 0x60);
  func_0x000100067de0(param_1 + 0x68);
  func_0x000100067de0(param_1 + 0x70);
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x00010793c520();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_107931394();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    func_0x000107933978();
  }
  __ZdlPv();
  func_0x000107946d94(param_1 + 0x48);
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return param_1;
}



/* Entry: 10793d090; end: 10793d093;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10793d090(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001079465bc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  func_0x00010793d2a4(unaff_x21 + 0x18,unaff_x20 + 0x18);
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    func_0x000107946f80();
  }
  puVar2 = (ulong *)(unaff_x21 + 0x48);
  lVar3 = unaff_x20 + 0x48;
  func_0x00010793d2a4();
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x60));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x60);
    func_0x0001001a53d4();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x68));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x68);
    func_0x0001001a53d4();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x70));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x70);
    func_0x0001001a53d4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        func_0x000107945960();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        func_0x00010793c6dc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        func_0x000107946eb8();
        *(ulong **)(unaff_x21 + 0x80) = puVar2;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x88);
      if (puVar2 == (ulong *)0x0) {
        func_0x000107946eb8();
        *(ulong **)(unaff_x21 + 0x88) = puVar2;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x90);
      if (puVar2 == (ulong *)0x0) {
        func_0x000107946eb0();
        *(ulong **)(unaff_x21 + 0x90) = puVar2;
      }
      else {
        func_0x000107931364();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x98);
      if (puVar2 == (ulong *)0x0) {
        func_0x000107946eb8();
        *(ulong **)(unaff_x21 + 0x98) = puVar2;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xa0);
      if (puVar2 == (ulong *)0x0) {
        func_0x000107945990();
        *(ulong **)(unaff_x21 + 0xa0) = unaff_x22;
        puVar2 = unaff_x22;
      }
      else {
        func_0x000107933ac0();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0xa8) != 0) {
    *(int *)(unaff_x21 + 0xa8) = *(int *)(unaff_x20 + 0xa8);
  }
  if (*(char *)(unaff_x20 + 0xac) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xac) = 1;
  }
  if (*(char *)(unaff_x20 + 0xad) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xad) = 1;
  }
  if (*(int *)(unaff_x20 + 0xb0) != 0) {
    *(int *)(unaff_x21 + 0xb0) = *(int *)(unaff_x20 + 0xb0);
  }
  func_0x000107946584();
  if ((extraout_x8_02 & 1) == 0) {
    return;
  }
  func_0x00010794672c();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10793d330; end: 10793d35b;  */

void FUN_10793d330(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010794673c();
  func_0x000107947378();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10793d574; end: 10793d577;  */

undefined8 FUN_10793d574(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793d734; end: 10793d747;  */

void FUN_10793d734(void)

{
  func_0x00010793d6c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793da8c; end: 10793da97;  */

undefined ** FUN_10793da8c(void)

{
  return &PTR_DAT_1109ef820;
}



/* Entry: 10793dbe8; end: 10793dc0b;  */

undefined8 FUN_10793dbe8(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793dd08; end: 10793dd13;  */

undefined ** FUN_10793dd08(void)

{
  return &PTR_DAT_1109ef8a8;
}



/* Entry: 10793e07c; end: 10793e0a7;  */

long FUN_10793e07c(long param_1)

{
  func_0x000107946a94();
  func_0x000107943a00(param_1 + 0x10);
  return param_1;
}



/* Entry: 10793e1e8; end: 10793e1f7;  */

void FUN_10793e1e8(long *param_1,long param_2)

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



/* Entry: 10793e518; end: 10793e5c7;  */

void FUN_10793e518(void)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000107946c2c();
  if ((uint)extraout_x8 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00010793e544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dedef82)[extraout_x8] * 4 + 0x10793e548))();
    return;
  }
  iVar1 = 0;
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



/* Entry: 10793e65c; end: 10793e693;  */

void FUN_10793e65c(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000107946940();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x000107947280();
  }
  func_0x000107946df4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10793e87c; end: 10793e887;  */

undefined ** FUN_10793e87c(void)

{
  return &PTR_DAT_1109ef9c0;
}



/* Entry: 10793ebbc; end: 10793ebc7;  */

undefined ** FUN_10793ebbc(void)

{
  return &PTR_DAT_1109efa08;
}



/* Entry: 10793edac; end: 10793edd7;  */

long FUN_10793edac(long param_1)

{
  func_0x000107946a94();
  func_0x000107943a50(param_1 + 0x10);
  return param_1;
}



/* Entry: 10793eef8; end: 10793ef2f;  */

void FUN_10793eef8(ulong *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000107946b0c();
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107946d58();
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



/* Entry: 10793f10c; end: 10793f137;  */

long FUN_10793f10c(long param_1)

{
  func_0x000107946a94();
  func_0x000107943a78(param_1 + 0x10);
  return param_1;
}



/* Entry: 10793f378; end: 10793f3a3;  */

void FUN_10793f378(long param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 10793f678; end: 10793f67b;  */

long FUN_10793f678(long param_1)

{
  func_0x000107946a94();
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10793f814; end: 10793f833;  */

undefined ** FUN_10793f814(void)

{
  return &PTR_DAT_1109efbd8;
}



/* Entry: 10793fb34; end: 10793fb37;  */

undefined8 FUN_10793fb34(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}



/* Entry: 10793fcbc; end: 10793fce3;  */

undefined8 FUN_10793fcbc(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}



/* Entry: 10793fe7c; end: 10793feb3;  */

void FUN_10793fe7c(ulong *param_1)

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



/* Entry: 10793ffb8; end: 10793ffcb;  */

void FUN_10793ffb8(void)

{
  func_0x00010793ff78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107940240; end: 107940243;  */

undefined8 FUN_107940240(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}



/* Entry: 1079403f8; end: 107940423;  */

undefined8 FUN_1079403f8(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  func_0x000107946c10();
  return param_1;
}



/* Entry: 107940600; end: 107940687;  */

void FUN_107940600(ulong *param_1,long param_2)

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



/* Entry: 1079407e4; end: 1079407e7;  */

void FUN_1079407e4(ulong *param_1,long param_2)

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



/* Entry: 107940960; end: 1079409af;  */

void FUN_107940960(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010794656c();
  while (unaff_x22 != 0) {
    func_0x000107946340();
    func_0x000107946974();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946cb0();
  return;
}



/* Entry: 107940ab0; end: 107940ad3;  */

undefined8 FUN_107940ab0(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107940c2c; end: 107940c53;  */

undefined8 FUN_107940c2c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}



/* Entry: 107940db0; end: 107940ddb;  */

void FUN_107940db0(ulong *param_1)

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



/* Entry: 10794120c; end: 107941237;  */

undefined8 FUN_10794120c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107941238(param_1);
  return param_1;
}



/* Entry: 10794187c; end: 1079418ab;  */

void FUN_10794187c(ulong *param_1,ulong *param_2)

{
  int iVar1;
  undefined1 uVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  uVar2 = param_2 == param_1;
  if ((bool)uVar2) {
    return;
  }
  func_0x00010068f438();
  func_0x00010794126c();
  func_0x000107946c18();
  func_0x0001079465bc();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x000107947068();
    if (!(bool)uVar2) {
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
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945b7c();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x00010794736c();
        func_0x00010793fc90();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945bcc();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        FUN_10793fe7c();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945c18();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x00010793feb4();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945c70();
      break;
    case 5:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107940170();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945cc0();
      break;
    case 6:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x0001079403c0();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945d48();
      break;
    case 7:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        FUN_107940600();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945d94();
      break;
    case 8:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x0001079407e8();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945dfc();
      break;
    case 9:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x0001079409b4();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945e48();
      break;
    case 10:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x0001079409e0();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945e94();
      break;
    case 0xb:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x000107940aa4();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945ee4();
      break;
    case 0xc:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x000107940b68();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945f34();
      break;
    case 0xd:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        FUN_107940db0();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945f84();
      break;
    case 0xe:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x000107940ddc();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945fd0();
      break;
    default:
      goto code_r0x000107941860;
    }
    unaff_x21[2] = (ulong)param_1;
  }
code_r0x000107941860:
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



/* Entry: 1079419f8; end: 107941a23;  */

undefined8 FUN_1079419f8(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  func_0x000107946c10();
  return param_1;
}



/* Entry: 107941bd4; end: 107941cc3;  */

void FUN_107941bd4(ulong *param_1,long param_2)

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



/* Entry: 107941f20; end: 107941f3b;  */

void FUN_107941f20(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x000107946934();
  uVar1 = *(ulong *)(unaff_x19 + 0x18) ^ 2;
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



/* Entry: 107942140; end: 10794215f;  */

long FUN_107942140(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000107946fe4();
  func_0x000107946d94(unaff_x19 + 0x10);
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return unaff_x19;
}



/* Entry: 10794232c; end: 107942357;  */

undefined8 FUN_10794232c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107942358(param_1);
  return param_1;
}



/* Entry: 10794251c; end: 1079425ab;  */

void FUN_10794251c(ulong *param_1)

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



/* Entry: 1079426f0; end: 107942717;  */

undefined8 FUN_1079426f0(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 10794285c; end: 1079428af;  */

void FUN_10794285c(ulong *param_1,long param_2)

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



/* Entry: 1079429f8; end: 107942a67;  */

void FUN_1079429f8(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x19;
  
  func_0x000107946514();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
  }
  func_0x0001079468ac();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x0001079470c0();
  return;
}



/* Entry: 107942b84; end: 107942c07;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_107942b84(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x000107947098();
  if ((unaff_w20 & 0x1f) != 0) {
    if ((unaff_w20 & 1) != 0) {
      func_0x0001079423ac(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x000107942620(unaff_x19[4]);
    }
    if ((unaff_w20 >> 2 & 1) != 0) {
      func_0x00010794273c(unaff_x19[5]);
    }
    if ((unaff_w20 >> 3 & 1) != 0) {
      func_0x000107935d4c(unaff_x19[6]);
    }
    if ((unaff_w20 >> 4 & 1) != 0) {
      func_0x00010794291c(unaff_x19[7]);
    }
  }
  func_0x000107946df4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
    *(undefined1 *)*unaff_x19 = 0;
    unaff_x19[1] = 0;
    return;
  }
  *(undefined1 *)unaff_x19 = 0;
  *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
  return;
}



/* Entry: 107942fa0; end: 107942fb3;  */

void FUN_107942fa0(void)

{
  func_0x000107942f50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107943244; end: 107943247;  */

undefined8 FUN_107943244(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10794379c; end: 1079437bb;  */

void FUN_10794379c(void)

{
  func_0x000107946c78();
  func_0x000107933160();
  return;
}



/* Entry: 1079438f8; end: 10794391f;  */

void FUN_1079438f8(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 107943a28; end: 107943a4f;  */

void FUN_107943a28(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 107944e7c; end: 107944ecb;  */

void FUN_107944e7c(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010068f438();
  if (param_1 == 0) {
    func_0x000107946b04();
  }
  else {
    func_0x0001079467e4();
  }
  func_0x000107946d24();
  func_0x000107946d3c(&PTR_FUN_1109edb40);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946778();
  func_0x000107931f58();
  func_0x000107946dd0();
  return;
}



/* Entry: 1079454c4; end: 10794551b;  */

undefined8 * FUN_1079454c4(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x000107946d30();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010068f474();
  }
  else {
    func_0x0001079468bc();
  }
  *param_1 = &PTR_DAT_1109ec470;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x00010793a7d0();
  return param_1;
}



/* Entry: 1079458d4; end: 10794595f;  */

undefined8 * FUN_1079458d4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x000107946d30();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107946b04();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b4d80e0();
  }
  param_1[1] = unaff_x21;
  *param_1 = &PTR_DAT_1109eda50;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107946680();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    func_0x000107945878();
  }
  param_1[3] = unaff_x21;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(unaff_x19 + 0x28);
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 107945bcc; end: 107945c6f;  */

void FUN_107945bcc(long param_1)

{
  ulong extraout_x8;
  
  func_0x000107946b0c();
  if (param_1 == 0) {
    func_0x000107946b04();
  }
  else {
    func_0x0001079466e4();
  }
  func_0x000107946e4c();
  func_0x000107946e58(&PTR_FUN_1109ecba0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946884();
  func_0x000107946dd0();
  return;
}



/* Entry: 107946020; end: 10794607f;  */

long FUN_107946020(long param_1)

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
  func_0x0001079473a8(&PTR_DAT_1109ed190);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined1 *)(lVar1 + 0x14) = 0;
  func_0x0001079418ac();
  return param_1;
}



/* Entry: 107947538; end: 10794754b;  */

void FUN_107947538(void)

{
  func_0x0001079474d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10794775c; end: 10794785f; -[SCStoryManifest sc_shakeLogDescription] */

void FUN_10794775c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276460(param_1);
  func_0x00010c2762c0();
  puVar3 = PTR_PTR_1126d5160;
  uVar2 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107947ecc(puVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dcc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107948428; end: 1079489db;  */

void FUN_107948428(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  byte bVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uStack_80;
  
  _objc_retain();
  uVar14 = param_1;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar14;
  func_0x00010c242060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  uVar14 = param_1;
  func_0x00010c24cfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar14;
  func_0x0001079482ac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  uVar14 = param_1;
  func_0x00010c241660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2420c0();
  _objc_release(uVar14);
  uVar14 = param_1;
  func_0x00010c241660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083e00();
  _objc_release(uVar14);
  puVar3 = PTR_PTR_1126bfca8;
  _objc_alloc(PTR_PTR_1126bfca8);
  uVar14 = param_1;
  func_0x00010c241660(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010c241660(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar15;
  func_0x00010c0c5480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar3,param_2,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar15);
  _objc_release(uVar4);
  _objc_release(uVar14);
  uVar14 = param_1;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010c083e00();
  if ((uVar4 & 1) == 0) {
    uVar4 = param_1;
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar4;
    func_0x00010c2420c0();
    func_0x000107948338();
    bVar13 = 1;
    if (((uVar15 + 1 < 0x1c) && ((1L << (uVar15 + 1 & 0x3f) & 0xb4b5dbbU) != 0)) &&
       ((long)uVar15 < 0x1a)) {
      bVar13 = (byte)(0x1394288 >> (ulong)((int)uVar15 + 1U & 0x1f));
    }
    _objc_release(uVar4);
  }
  else {
    bVar13 = 0;
  }
  _objc_release(uVar14);
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc();
  uVar14 = param_1;
  func_0x00010c2709c0(param_1);
  func_0x00010c052380((double)(long)uVar14 / 1000.0 + 15552000.0);
  if (puVar6 == (undefined *)0x0) {
    uStack_80 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar6);
    uStack_80 = puVar6;
  }
  _objc_release(puVar6);
  uVar14 = param_1;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010c23f5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  uVar14 = uVar4;
  func_0x00010c23f5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c0c4640();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar15;
  func_0x00010c08fa60();
  _objc_release(uVar15);
  _objc_release(uVar14);
  if (uVar5 == 0) {
    uVar14 = 0;
  }
  else {
    uVar15 = uVar4;
    func_0x00010c23f5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar15;
    func_0x00010c0c4640();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar5;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar15);
  }
  uVar15 = uVar4;
  func_0x00010c23f5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar15;
  func_0x00010c0ef6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c08fa60();
  _objc_release(uVar5);
  _objc_release(uVar15);
  if (uVar7 == 0) {
    uVar15 = 0;
  }
  else {
    uVar5 = uVar4;
    func_0x00010c23f5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0ef6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar7;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar5);
  }
  puVar6 = PTR_PTR_1126bfca8;
  _objc_alloc();
  uVar5 = uVar4;
  func_0x00010c0c54a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c0c5480(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar6,param_2,uVar5,uVar7);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(uVar5);
  uVar5 = uVar4;
  func_0x00010c0c5180(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010c0c6c20();
  func_0x000107948338();
  uVar7 = uVar4;
  func_0x00010c083e00();
  puVar8 = PTR_PTR_1126cbca8;
  _objc_alloc();
  func_0x00010c022600();
  puVar9 = PTR_PTR_1126c3390;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar10 = param_1;
  func_0x00010c241660(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c0c6e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar3,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa840(puVar9,param_2,uVar2,uVar5,puVar6,uVar1,uVar7 & 0xffffffff,0,puVar12,0,
                      uStack_80,puVar8,bVar13 & 1);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar8);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uStack_80);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10794b630; end: 10794b65f;  */

void FUN_10794b630(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea6158;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ea6158,
                      &PTR____CFConstantStringClassReference_110ea6178,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10794b8f0; end: 10794b957; +[SCMTGetPoiSharePlaylistResponse descriptor] */

void FUN_10794b8f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113726f90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b64d50,
                        &PTR____CFConstantStringClassReference_110ea6238,
                        &PTR_s_snapchat_map_11323a6d0,&PTR_s_status_11323a8a8,6,0x30,0x1c);
    puRam0000000113726f90 = puVar1;
  }
  return;
}



/* Entry: 10794bee4; end: 10794c177; -[SCMemoriesSnapDocSaveManager initWithDataMutatingServices:featureSettingsService:overlayFormatServices:snapDocManager:previewURLVideoProvider:dataObjectContext:circumstanceEngine:memoriesExperimentService:] */

undefined8 *
FUN_10794bee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f8ed0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar5);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar5);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10794c978; end: 10794c9c3;  */

void FUN_10794c978(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010be5cf20(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10794da54; end: 10794e2cf; -[SCMemoriesSnapDocSaveManager _mapToDataMutatingSnapDocBasedSnap:snapDocKey:saveSource:saveData:originalCreateTimeUtc:subject:] */

void FUN_10794da54(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lStack_3d0;
  long lStack_3c0;
  long lStack_380;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  long lStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar13 = param_6;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = lVar13;
  func_0x00010801f1ac();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x2020000000;
  uStack_188 = 0;
  puStack_1c8 = &uStack_1d0;
  uStack_1d0 = 0;
  uStack_1c0 = 0x3032000000;
  puStack_1b8 = &UNK_10794e2d0;
  puStack_1b0 = &UNK_10794e2e0;
  uStack_1a8 = 0;
  lVar4 = lVar3;
  _dispatch_group_create();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010bf1f440();
  if (iVar1 == 0) {
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    lStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    plStack_290 = (long *)0x0;
    lVar14 = lVar13;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar14;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    lStack_380 = lVar19;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar14);
    lStack_3d0 = lStack_380;
    func_0x00010bf52a60();
    if (lStack_3d0 != 0) {
      lVar14 = *plStack_290;
      do {
        lStack_3c0 = 0;
        do {
          if (*plStack_290 != lVar14) {
            _objc_enumerationMutation(lStack_380);
          }
          uVar16 = 0;
          uVar15 = *(ulong *)(lStack_298 + lStack_3c0 * 8);
          while( true ) {
            uVar17 = uVar15;
            func_0x00010c2787a0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar17;
            func_0x00010bf529e0();
            _objc_release(uVar17);
            if (uVar7 <= uVar16) break;
            uVar17 = uVar15;
            func_0x00010c2787a0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar17;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar17);
            uVar17 = uVar7;
            func_0x00010c0ff660();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar17;
            func_0x00010bf529e0();
            _objc_release(uVar17);
            if (uVar8 == 0) {
              func_0x00010794edb0(param_3,*(undefined8 *)(param_1 + 0x20),param_8,
                                  &PTR____CFConstantStringClassReference_110ea6358);
              _objc_release(uVar7);
              _objc_release(lStack_380);
              goto LAB_10794e1c4;
            }
            uVar17 = 0;
            while( true ) {
              uVar8 = uVar7;
              func_0x00010c0ff660();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar8;
              func_0x00010bf529e0();
              _objc_release(uVar8);
              if (uVar9 <= uVar17) break;
              uVar8 = uVar7;
              func_0x00010c0ff660(uVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296de0();
              _objc_release(uVar8);
              puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              lVar18 = lVar3;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar10);
              lVar19 = lVar18;
              func_0x00010801f33c();
              _objc_retainAutoreleasedReturnValue();
              if (lVar19 != 0) {
                _dispatch_group_enter(lVar4);
                uVar6 = *(undefined8 *)(param_1 + 0x20);
                func_0x00010794f768(uVar6,lVar13,param_4,lVar19);
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar6;
                func_0x00010c0e0ea0();
                _objc_retainAutoreleasedReturnValue();
                puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_2e8 = 0xc2000000;
                puStack_2e0 = &UNK_10794e42c;
                puStack_2d8 = &UNK_1109f1198;
                puStack_2b0 = &uStack_1d0;
                _objc_retain(lVar19);
                puStack_2a8 = &uStack_1a0;
                lStack_2d0 = lVar19;
                _objc_retain(puVar2);
                puStack_2c8 = puVar2;
                _objc_retain(param_4);
                uVar11 = uVar12;
                uStack_2c0 = param_4;
                lStack_2b8 = lVar4;
                func_0x00010c25ff60(uVar12);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf1a3e0();
                _objc_release(uVar11);
                _objc_release(uVar12);
                _objc_release(uVar6);
                _objc_release(uStack_2c0);
                _objc_release(puStack_2c8);
                _objc_release(lStack_2d0);
              }
              _objc_release(lVar19);
              _objc_release(lVar18);
              uVar17 = uVar17 + 1;
            }
            _objc_release(uVar7);
            uVar16 = uVar16 + 1;
          }
          lStack_3c0 = lStack_3c0 + 1;
        } while (lStack_3c0 != lStack_3d0);
        lStack_3d0 = lStack_380;
        func_0x00010bf52a60();
      } while (lStack_3d0 != 0);
    }
  }
  else {
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    lStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    plStack_200 = (long *)0x0;
    lVar14 = lVar13;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lStack_380 = lVar14;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    lVar14 = lStack_380;
    func_0x00010bf52a60();
    if (lVar14 != 0) {
      lVar18 = *plStack_200;
      do {
        lVar19 = 0;
        do {
          if (*plStack_200 != lVar18) {
            _objc_enumerationMutation(lStack_380);
          }
          lVar5 = *(long *)(lStack_208 + lVar19 * 8);
          func_0x00010801f33c();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 != 0) {
            _dispatch_group_enter(lVar4);
            uVar6 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010794f768(uVar6,lVar13,param_4,lVar5);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar6;
            func_0x00010c0e0ea0();
            _objc_retainAutoreleasedReturnValue();
            puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_258 = 0xc2000000;
            puStack_250 = &UNK_10794e2e8;
            puStack_248 = &UNK_1109f1198;
            puStack_220 = &uStack_1d0;
            _objc_retain(lVar5);
            puStack_218 = &uStack_1a0;
            lStack_240 = lVar5;
            _objc_retain(puVar2);
            puStack_238 = puVar2;
            _objc_retain(param_4);
            uVar11 = uVar12;
            uStack_230 = param_4;
            lStack_228 = lVar4;
            func_0x00010c25ff60(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf1a3e0();
            _objc_release(uVar11);
            _objc_release(uVar12);
            _objc_release(uVar6);
            _objc_release(uStack_230);
            _objc_release(puStack_238);
            _objc_release(lStack_240);
          }
          _objc_release(lVar5);
          lVar19 = lVar19 + 1;
        } while (lVar14 != lVar19);
        lVar14 = lStack_380;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
    }
  }
  _objc_release(lStack_380);
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puStack_360 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_358 = 0xc2000000;
  puStack_350 = &UNK_10794e570;
  puStack_348 = &UNK_1109f11c8;
  lStack_340 = param_1;
  _objc_retain(param_3);
  lStack_338 = param_3;
  _objc_retain(param_4);
  uStack_330 = param_4;
  uStack_2f8 = param_5;
  _objc_retain(param_6);
  lStack_328 = param_6;
  _objc_retain(param_7);
  uStack_320 = param_7;
  _objc_retain(lVar13);
  lStack_318 = lVar13;
  _objc_retain(puVar2);
  puStack_300 = &uStack_1a0;
  puStack_310 = puVar2;
  _objc_retain(param_8);
  uStack_308 = param_8;
  func_0x000100bc0718(lVar4,uVar12,&puStack_360);
  _objc_release(uVar12);
  _objc_release(uStack_308);
  _objc_release(puStack_310);
  _objc_release(lStack_318);
  _objc_release(uStack_320);
  _objc_release(lStack_328);
  _objc_release(uStack_330);
  _objc_release(lStack_338);
LAB_10794e1c4:
  _objc_release(lVar4);
  __Block_object_dispose(&uStack_1d0,8);
  _objc_release(uStack_1a8);
  __Block_object_dispose(&uStack_1a0,8);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar13);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_1d0,8);
    lVar13 = 8;
    __Block_object_dispose(&uStack_1a0);
    __Unwind_Resume();
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar13 + 0x28);
    *(undefined8 *)(lVar13 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 10794ea6c; end: 10794eb3f;  */

void FUN_10794ea6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c08c3a0();
  if ((int)uVar1 == 1) {
    uVar1 = param_2;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd51e0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar1 = param_2;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf30ae0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfbb280();
      _objc_release(uVar2);
      _objc_release(uVar1);
      lVar4 = 0x20;
      if ((int)uVar3 == 0) {
        lVar4 = 0x28;
      }
      lVar4 = *(long *)(*(long *)(param_1 + lVar4) + 8);
      *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10794f724; end: 10794f767;  */

void FUN_10794f724(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010794ffd4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079501e4; end: 10795025b;  */

void FUN_1079501e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bfc4120(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107950fb4; end: 10795113b; -[SCDecryptedContentCache cacheNameForContentKey:key:iv:] */

void FUN_107950fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  uVar3 = param_4;
  if ((uVar2 & 1) == 0) {
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar1);
  uVar4 = param_5;
  if ((uVar2 & 1) == 0) {
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_5);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = param_3;
  func_0x00010b0ee738();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107951668; end: 1079517db;  */

void FUN_107951668(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfdd480();
  if ((int)uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b25c8;
    _objc_alloc_init(PTR_PTR_1126b25c8);
    uVar1 = param_1;
    func_0x00010c26d760(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c26e060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar4,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126d5750;
    _objc_alloc_init(PTR_PTR_1126d5750);
    func_0x00010c195ca0(puVar4,param_2,puVar3);
    _objc_release(puVar3);
    uVar1 = param_1;
    func_0x00010c26d760(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf93e60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b40();
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c26d760(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf93e60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b64a0();
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1079520f4; end: 1079521d7;  */

void FUN_1079520f4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    func_0x00010b7f5738();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107952a3c; end: 107952a6b;  */

void FUN_107952a3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x0001079517dc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_2);
  return;
}



/* Entry: 1079533a8; end: 10795349b;  */

void FUN_1079533a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf0bd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107953b3c; end: 107953d2f; -[SCSnapDocManagerImpl retrieveCachedPlaybackMediaForKey:snapDoc:pageInfo:] */

void FUN_107953b3c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lStack_68 = 0;
  func_0x00010bee7c60(param_1);
  lVar1 = lStack_68;
  _objc_retain(lStack_68);
  if (lVar1 == 0) {
    _objc_initWeak(auStack_70,param_1);
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010bde4280(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  else {
    func_0x00010be52ae0(param_1);
    param_1 = PTR_PTR_1126d5758;
    _objc_alloc(PTR_PTR_1126d5758);
    func_0x00010c04c320();
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1079547f4; end: 10795493b; -[SCSnapDocManagerImpl monitorMediaDownloadProgressForKey:mediaId:snapDoc:onProgress:onError:] */

/* WARNING: Removing unreachable block (ram,0x000107954878) */

void FUN_1079547f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010bee77e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  lVar2 = param_1;
  func_0x00010bde7e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(0);
  func_0x00010c0d0c20(uVar3);
  _objc_release(param_7);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 107955028; end: 1079551ff; -[SCSnapDocManagerImpl addMediaReferenceForKey:snapDoc:contentWriter:mediaType:error:] */

void FUN_107955028(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_5;
  func_0x00010bfc40e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c0c5600(param_4);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126bcf20;
    _objc_alloc_init(PTR_PTR_1126bcf20);
    func_0x00010c1c4aa0();
    puVar4 = PTR_PTR_1126bc860;
    func_0x00010bf4c8c0(PTR_PTR_1126bc860,param_2,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  puVar3 = param_5;
  func_0x00010c126140(param_5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010bf267e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc7580(param_1,param_2,puVar1,puVar4,param_4,param_6,lVar2 + 1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = puVar3;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010b7f5498();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (param_7 != (undefined8 *)0x0) {
      _objc_retainAutorelease(puVar6);
      *param_7 = puVar6;
    }
    _objc_release(puVar6);
    param_1 = 0;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1079557a0; end: 10795580b;  */

void FUN_1079557a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x30);
  lVar3 = lVar4;
  func_0x00010c0c5600(lVar4);
  func_0x00010bdc7580(uVar1,param_2,uVar2,0,lVar4,0,lVar3 + 1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107956150; end: 1079561b3; -[SCSnapDocManagerImpl markClaimAsNonAuthoritativeForKey:snapDoc:] */

void FUN_107956150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010c0c6280(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb280(param_1,param_2,param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107956a08; end: 107956a37;  */

void FUN_107956a08(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107956a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x10))(lVar1,&PTR____CFConstantStringClassReference_110ea6678);
      return;
    }
  }
  else if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107956a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1079579ac; end: 107957ad7; -[SCSnapDocManagerImpl _registerContentForContentKey:request:encryptionKey:encryptionIv:expirationDate:isEligibleForStreaming:featureMetadata:completion:] */

void FUN_1079579ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_9;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  func_0x00010c1261a0(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,uVar1,param_10
                     );
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1079588ac; end: 1079589b7; -[SCSnapDocManagerImpl _headerDataForContentResult:mediaData:mediaType:] */

void FUN_1079588ac(long param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010be34ca0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_107958994;
  }
  if ((param_5 == 3) && ((*(byte *)(param_1 + 0x50) & 1) != 0)) {
    lVar1 = param_3;
    func_0x00010bfc5880();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      _objc_release(lVar1);
      goto LAB_107958950;
    }
    func_0x00010be34c80(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_107958950:
    lVar1 = param_3;
    func_0x00010b7f5374();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010be34ca0(param_1,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(lVar1);
LAB_107958994:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107958f74; end: 10795914b; -[SCSnapDocManagerImpl _streamingDecryptContentResult:inputFilePath:outputFilePath:key:iv:] */

void FUN_107958f74(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126ae4e8;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c22b6a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar2);
  lStack_68 = 0;
  uVar3 = param_1;
  func_0x00010bdf8b00(param_1,param_2,param_4,param_5,param_6,param_7,&lStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  lVar1 = lStack_68;
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar2);
  if (((int)uVar3 == 0) || (lVar1 != 0)) {
    puVar2 = param_3;
    func_0x00010bfc40e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8f7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f538,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc40();
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126d5798;
    _objc_alloc(PTR_PTR_1126d5798);
    puVar2 = param_3;
    func_0x00010bfc40e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0036e0(puVar4,param_2,puVar2,param_5,1,0);
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107959cb8; end: 107959cc3;  */

void FUN_107959cb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107959cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10795a510; end: 10795a57b; -[SCSnapDocManagerImpl _reportError:contentKey:] */

void FUN_10795a510(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c0c46a0(param_4);
  func_0x00010b7f519c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010795d600(uVar1,param_4,param_3,1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10795b1b8; end: 10795b1e7; -[SCSnapDocManagerImpl _firstFrameMediaMetadataIfPresentForSnapDoc:mediaContextType:] */

void FUN_10795b1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 == 0x14) {
    FUN_107951668(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10795b5dc; end: 10795b623; -[SCSnapDocManagerImpl _emptyToNilForData:] */

void FUN_10795b5dc(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 10795b970; end: 10795b99f; -[SCSnapDocMediaResultImpl .cxx_destruct] */

void FUN_10795b970(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10795bf14; end: 10795bfe3;  */

void FUN_10795bf14(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = lVar2;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa05c0();
    if (iVar1 != 0) {
      puVar3 = (undefined *)(param_1 + 0x48);
      _objc_loadWeakRetained(puVar3);
      func_0x00010be96800();
      goto LAB_10795bfc8;
    }
  }
  lVar4 = *(long *)(param_1 + 0x40);
  puVar3 = PTR_PTR_1126d57b8;
  _objc_alloc(PTR_PTR_1126d57b8);
  func_0x00010c008560();
  (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
LAB_10795bfc8:
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10795c778; end: 10795c8ef; -[SCSnapDocThumbnailResolverImpl _retrieveBaseAndOverlayMediaForSnapDoc:snapDocKey:pageInfo:completion:] */

void FUN_10795c778(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bfc90;
  puVar3 = PTR_PTR_1126b1378;
  uVar1 = param_4;
  func_0x00010c0c46a0(param_4);
  func_0x00010c119380(puVar2,param_2,uVar1);
  func_0x00010c291560(puVar3,param_2,puVar2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_10795c8f0;
  puStack_70 = &UNK_1109f19b0;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c13edc0(uVar4,param_2,param_4,param_3,puVar3,&puStack_88);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10795d4fc; end: 10795d4ff;  */

void FUN_10795d4fc(void)

{
  return;
}



/* Entry: 10795d90c; end: 10795d93f;  */

void FUN_10795d90c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113726fd0;
  puRam0000000113726fd0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10795e2a4; end: 10795e2ab; -[SCMemoriesStorySavingLoggingStatus isGroupStory] */

undefined1 FUN_10795e2a4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10795e4a0; end: 10795e4ab;  */

void FUN_10795e4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d57c8;
  _objc_retain(&PTR____CFConstantStringClassReference_110ea6938);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc_init(puVar1);
  func_0x00010c237ee0();
  _objc_release(&PTR____CFConstantStringClassReference_110ea6938);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10795ec30; end: 10795ec33; -[SCDynamicHeightCollectionView intrinsicContentSize] */

void FUN_10795ec30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contentSize_1125b0f20);
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10793ad18; end: 10793ad67;  */

void FUN_10793ad18(undefined8 param_1)

{
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010794656c();
  iVar1 = (int)param_1;
  while (unaff_x22 != 0) {
    func_0x000107946340();
    func_0x000107946974();
    iVar1 = (int)param_1;
  }
  func_0x0001079471f8();
  if ((extraout_x8 & 1) != 0) {
    func_0x000107947044();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x2c) = iVar1;
  return;
}



/* Entry: 10793ae74; end: 10793ae97;  */

undefined8 FUN_10793ae74(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793af78; end: 10793afa3;  */

void FUN_10793af78(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468d4();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10793b11c; end: 10793b127;  */

undefined ** FUN_10793b11c(void)

{
  return &PTR_DAT_1109ef328;
}



/* Entry: 10793b3a0; end: 10793b3b3;  */

void FUN_10793b3a0(void)

{
  func_0x00010793b368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793b6ac; end: 10793b6b7;  */

undefined ** FUN_10793b6ac(void)

{
  return &PTR_DAT_1109ef400;
}



/* Entry: 10793b8b4; end: 10793b913;  */

long FUN_10793b8b4(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x000107947450();
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



/* Entry: 10793ba78; end: 10793ba93;  */

void FUN_10793ba78(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010793b914();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793bc84; end: 10793bd47;  */

void FUN_10793bc84(long param_1,long param_2)

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



/* Entry: 10793be8c; end: 10793bedb;  */

void FUN_10793be8c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107946940();
  func_0x000107946f94();
  func_0x000107946ef0();
  func_0x00010794710c();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010793bab8(*(undefined8 *)(unaff_x19 + 0x38));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x40) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 10793c2d8; end: 10793c2db;  */

long FUN_10793c2d8(long param_1)

{
  func_0x000107946a94();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000681a0();
  }
  return param_1;
}



/* Entry: 10793c404; end: 10793c423;  */

undefined ** FUN_10793c404(void)

{
  return &PTR_DAT_1109ef5a0;
}



/* Entry: 10793c580; end: 10793c58b;  */

undefined ** FUN_10793c580(void)

{
  return &PTR_DAT_1109ef5e8;
}



/* Entry: 10793c7a4; end: 10793c7b7;  */

void FUN_10793c7a4(void)

{
  func_0x00010793c774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793cab8; end: 10793cabb;  */

undefined8 FUN_10793cab8(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793ca04(param_1);
  return param_1;
}



/* Entry: 10793d094; end: 10793d2a3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10793d094(void)

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
        FUN_107945960();
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



/* Entry: 10793d35c; end: 10793d3f3;  */

long * FUN_10793d35c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x000107946414();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10793d3a0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10793d3a0;
  param_4 = (long *)&UNK_10f438eba;
  func_0x000107946aa4();
  func_0x000107946398();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10793d3a0:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x0001079468c8();
    func_0x000107946bd4();
    func_0x000107946a60();
    unaff_x20 = param_1;
  }
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



/* Entry: 10793d578; end: 10793d58b;  */

void FUN_10793d578(void)

{
  func_0x00010793d50c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793d748; end: 10793d753;  */

undefined ** FUN_10793d748(void)

{
  return &PTR_DAT_1109ef7c8;
}



/* Entry: 10793da98; end: 10793dac7;  */

void FUN_10793da98(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107946b20();
  func_0x00010738f244();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10793dc0c; end: 10793dc0f;  */

undefined8 FUN_10793dc0c(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793dd14; end: 10793dd7b;  */

void FUN_10793dd14(void)

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



/* Entry: 10793e0a8; end: 10793e0ab;  */

long FUN_10793e0a8(long param_1)

{
  func_0x000107946a94();
  func_0x000107943a00(param_1 + 0x10);
  return param_1;
}



/* Entry: 10793e1f8; end: 10793e2b7;  */

void FUN_10793e1f8(void)

{
  undefined4 extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  
  func_0x000107946e64();
  switch(extraout_w8) {
  case 2:
    func_0x000107946c3c();
  default:
    goto LAB_10793e288;
  case 6:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10793e288;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x00010793da48();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10793e288;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x00010793dbe8();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10793e288;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x00010793e07c();
    }
  }
  __ZdlPv();
LAB_10793e288:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10793e5c8; end: 10793e5cb;  */

void FUN_10793e5c8(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong extraout_x8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x0001079465bc();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto code_r0x00010793e02c;
  func_0x000107947068();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_10793e1f8();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  bVar2 = iVar1 + -1 == 7;
  switch(iVar1 + -1) {
  case 0:
    *(undefined1 *)(unaff_x21 + 2) = *(undefined1 *)(unaff_x20 + 0x10);
    break;
  case 1:
    func_0x0001079471b8();
    if (!bVar2) {
      unaff_x21[2] = extraout_x8;
    }
    func_0x000107946e78();
    break;
  case 2:
  case 3:
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
    break;
  case 4:
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
    break;
  case 5:
    if (unaff_w24 == iVar1) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x000107946bbc();
      func_0x00010793db9c();
      break;
    }
    func_0x000107946bdc();
    func_0x000107945a8c();
    goto code_r0x00010793e028;
  case 6:
    if (unaff_w24 == iVar1) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x000107946bbc();
      func_0x000107946f24();
      func_0x00010793dbdc();
      break;
    }
    func_0x000107946bdc();
    func_0x000107945adc();
    goto code_r0x00010793e028;
  case 7:
    if (unaff_w24 == iVar1) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x000107946bbc();
      func_0x00010793e1b8();
      break;
    }
    func_0x000107946bdc();
    func_0x000107945b2c();
code_r0x00010793e028:
    unaff_x21[2] = (ulong)param_1;
  }
code_r0x00010793e02c:
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



/* Entry: 10793e694; end: 10793e71f;  */

long * FUN_10793e694(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0001079464c0();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10793e6d8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10793e6d8;
  param_4 = (long *)&UNK_10f438f54;
  func_0x000107946aa4();
  func_0x000107946398();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10793e6d8:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    func_0x0001079466f0();
    unaff_x20 = param_1;
  }
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



/* Entry: 10793e888; end: 10793e8cb;  */

void FUN_10793e888(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468f4();
  if (in_NG == in_OV) {
    func_0x000107946cbc();
  }
  func_0x000107946ef0();
  func_0x00010794710c();
  func_0x00010029b2d4(unaff_x19 + 0x38);
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10793ebc8; end: 10793ebff;  */

void FUN_10793ebc8(void)

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



/* Entry: 10793edd8; end: 10793eddb;  */

long FUN_10793edd8(long param_1)

{
  func_0x000107946a94();
  FUN_107943a50(param_1 + 0x10);
  return param_1;
}



/* Entry: 10793ef30; end: 10793ef57;  */

undefined8 FUN_10793ef30(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 10793f138; end: 10793f13b;  */

long FUN_10793f138(long param_1)

{
  func_0x000107946a94();
  func_0x000107943a78(param_1 + 0x10);
  return param_1;
}



/* Entry: 10793f3a4; end: 10793f3b7;  */

void FUN_10793f3a4(void)

{
  func_0x00010793f34c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793f67c; end: 10793f68f;  */

void FUN_10793f67c(void)

{
  func_0x00010793f648();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793f834; end: 10793f943;  */

long * FUN_10793f834(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  if (param_1[2] != 0) {
    param_1 = unaff_x19;
    func_0x000105991a14();
    param_3 = param_4;
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x1c) == '\x01') {
    func_0x00010794668c();
    func_0x000107946bd4();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x1d) == '\x01') {
    func_0x00010794668c();
    func_0x000107946e70();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010794668c();
    func_0x000107946ef8();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x1e) == '\x01') {
    func_0x00010794668c();
    func_0x00010794703c();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x1f) == '\x01') {
    func_0x00010794668c();
    func_0x000107946f8c();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,(ulong)param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10793fb38; end: 10793fb4b;  */

void FUN_10793fb38(void)

{
  func_0x00010793fb0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793fce4; end: 10793fce7;  */

undefined8 FUN_10793fce4(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}



/* Entry: 10793feb4; end: 10793febf;  */

void FUN_10793feb4(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
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



/* Entry: 10793ffcc; end: 10793ffd7;  */

undefined ** FUN_10793ffcc(void)

{
  return &PTR_DAT_1109efdc0;
}



/* Entry: 107940244; end: 107940257;  */

void FUN_107940244(void)

{
  func_0x000107940218();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107940424; end: 107940427;  */

undefined8 FUN_107940424(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  func_0x000107946c10();
  return param_1;
}



/* Entry: 107940688; end: 1079406af;  */

undefined8 FUN_107940688(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 1079407e8; end: 10794082f;  */

void FUN_1079407e8(ulong *param_1,long param_2)

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



/* Entry: 1079409b0; end: 1079409b3;  */

void FUN_1079409b0(ulong *param_1)

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



/* Entry: 107940ad4; end: 107940ad7;  */

undefined8 FUN_107940ad4(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107940c54; end: 107940c57;  */

undefined8 FUN_107940c54(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}



/* Entry: 107940ddc; end: 107940de7;  */

void FUN_107940ddc(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
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



/* Entry: 107941238; end: 10794124b;  */

void FUN_107941238(long param_1)

{
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x000107946c2c();
  if ((uint)extraout_x8 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x000107940ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_107940ed0 + (ulong)(byte)(&UNK_10dedef8a)[extraout_x8] * 4))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1079418ac; end: 1079418d7;  */

void FUN_1079418ac(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
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



/* Entry: 107941a24; end: 107941a27;  */

undefined8 FUN_107941a24(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  func_0x000107946c10();
  return param_1;
}



/* Entry: 107941cc4; end: 107941cef;  */

undefined8 FUN_107941cc4(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107941cf0(param_1);
  return param_1;
}



/* Entry: 107941f3c; end: 107941f3f;  */

undefined8 FUN_107941f3c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107941f20(param_1);
  return param_1;
}



/* Entry: 107942160; end: 107942163;  */

undefined8 FUN_107942160(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107942140(param_1);
  return param_1;
}



/* Entry: 107942358; end: 107942387;  */

void FUN_107942358(long param_1)

{
  long unaff_x19;
  
  func_0x0001079473cc();
  if (param_1 != 0) {
    func_0x000107931394();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000107931394();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079425ac; end: 1079425d7;  */

void FUN_1079425ac(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
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



/* Entry: 107942718; end: 10794271b;  */

undefined8 FUN_107942718(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 1079428b0; end: 1079428db;  */

undefined8 FUN_1079428b0(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x0001079428dc(param_1);
  return param_1;
}



/* Entry: 107942a68; end: 107942a6b;  */

void FUN_107942a68(ulong *param_1,long param_2)

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



/* Entry: 107942c08; end: 107942d83;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_107942c08(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x000107946664();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    func_0x0001079469d8();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x1c);
    func_0x000107946a38();
    param_4 = param_1;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x28);
    param_4 = (long *)0x4;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x20);
    param_4 = (long *)0x5;
    func_0x000107946a9c();
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



/* Entry: 107942fb4; end: 107942fbf;  */

undefined ** FUN_107942fb4(void)

{
  return &PTR_DAT_1109f0518;
}



/* Entry: 107943248; end: 10794325b;  */

void FUN_107943248(void)

{
  func_0x000107943220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079437bc; end: 1079437e3;  */

void FUN_1079437bc(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 107943920; end: 10794393f;  */

void FUN_107943920(void)

{
  func_0x000107946c78();
  FUN_1079381fc();
  return;
}



/* Entry: 107943a50; end: 107943a77;  */

void FUN_107943a50(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 107944ecc; end: 107944f1b;  */

long FUN_107944ecc(long param_1)

{
  func_0x000107946d30();
  if (param_1 == 0) {
    func_0x00010068f474();
  }
  else {
    func_0x0001079468bc();
  }
  func_0x0001079469c8(&PTR_DAT_1109ed140);
  func_0x000107931f68();
  return param_1;
}



/* Entry: 10794551c; end: 1079455bb;  */

void FUN_10794551c(long param_1)

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
  func_0x000107946d3c(&PTR_DAT_1109edd70);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946778();
  func_0x000107938cc4();
  func_0x000107946dd0();
  return;
}



/* Entry: 107945960; end: 10794598f;  */

long FUN_107945960(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010068f438();
  if (param_1 == 0) {
    func_0x000107946bac();
  }
  else {
    func_0x000107946b78();
  }
  func_0x00010068f4c0();
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109ec830);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946b2c();
  *(long *)(unaff_x19 + 0x10) = param_1;
  lVar1 = unaff_x21 + 0x18;
  func_0x000107946ba4();
  *(long *)(unaff_x19 + 0x18) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  return unaff_x19;
}



/* Entry: 107945c70; end: 107945cbf;  */

long FUN_107945c70(long param_1)

{
  func_0x000107946d30();
  if (param_1 == 0) {
    func_0x00010068f474();
  }
  else {
    func_0x0001079468bc();
  }
  func_0x0001079469c8(&PTR_DAT_1109ecd30);
  FUN_10793feb4();
  return param_1;
}



/* Entry: 107946080; end: 107946177;  */

void FUN_107946080(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010068f438();
  if (param_1 == 0) {
    func_0x000107946bac();
  }
  else {
    func_0x000107946b78();
  }
  func_0x000107946d24();
  func_0x000107946d3c(&PTR_FUN_1109ed1e0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946b48();
  *(long *)(unaff_x21 + 0x10) = param_1;
  lVar1 = unaff_x19 + 0x18;
  func_0x000107946ba4();
  *(long *)(unaff_x21 + 0x18) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x24) = 0;
  *(undefined4 *)(unaff_x21 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 10794754c; end: 10794756f;  */

undefined ** FUN_10794754c(void)

{
  return &PTR_DAT_1109f1040;
}



/* Entry: 107947860; end: 107947e57; -[SCStoryManifest sc_shakeLogFormattedStoryElements] */

/* WARNING: Possible PIC construction at 0x000107947978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010794797c) */
/* WARNING: Removing unreachable block (ram,0x0001079479e4) */

void FUN_107947860(undefined *param_1,undefined **param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf8d2e0(param_1);
  func_0x00010bffc4a0();
  puStack_128 = (undefined8 *)0x0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bf8d2c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &puStack_130;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 == (undefined *)0x0) {
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
    ___stack_chk_fail();
  }
  else {
    if (*plStack_120 != *plStack_120) {
      _objc_enumerationMutation(param_1);
    }
    param_2 = (undefined **)*puStack_128;
    func_0x00010c24cfc0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = PTR_PTR_1126d5160;
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  if (param_2 == (undefined **)0x0) {
    ppuVar6 = (undefined **)0x0;
  }
  else {
    ppuVar3 = param_2;
    func_0x00010c25db00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar3;
    func_0x00010bf529e0();
    _objc_release(ppuVar3);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar10 = param_2;
      func_0x00010bfa03c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c2a4bc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar10;
      ppuVar3 = ppuVar14;
      func_0x00010c25d0a0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      ppuVar6 = param_2;
      func_0x00010c25db00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar6;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (ppuVar3 != (undefined **)0x0) {
        ppuVar14 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(ppuVar6);
          }
          uVar12 = *(undefined8 *)((long)ppuVar14 * 8);
          uVar4 = uVar12;
          func_0x00010c26b700(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c09e1e0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(ppuVar10);
          _objc_release(uVar12);
          _objc_release(uVar4);
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        } while (ppuVar3 != ppuVar14);
        ppuVar3 = ppuVar6;
        func_0x00010bf52a60();
      }
      _objc_release(ppuVar6);
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010c106cc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar14;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (ppuVar5 != (undefined **)0x0) {
        ppuVar13 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(ppuVar14);
          }
          ppuVar6 = *(undefined ***)((long)ppuVar13 * 8);
          func_0x00010c25cfc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar6;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar6);
          ppuVar6 = ppuVar3;
          func_0x00010c0720c0();
          ppuVar9 = ppuVar3;
          if (((ulong)ppuVar6 & 1) == 0) {
            do {
              ppuVar7 = ppuVar10;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSCharacterSet_1126af030;
              func_0x00010c2a4bc0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar6 = ppuVar7;
              ppuVar3 = ppuVar8;
              func_0x00010c25d0a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar8);
              ppuVar8 = ppuVar6;
              func_0x00010c08fa60();
              if (ppuVar8 != (undefined **)0x0) {
                _objc_release(ppuVar7);
                goto LAB_107947db0;
              }
              ppuVar3 = (undefined **)PTR_PTR_1126d5160;
              func_0x00010be639e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar9);
              _objc_release(ppuVar6);
              _objc_release(ppuVar7);
              ppuVar6 = ppuVar3;
              func_0x00010c0720c0();
              ppuVar9 = ppuVar3;
            } while ((int)ppuVar6 == 0);
          }
          _objc_release(ppuVar3);
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while (ppuVar13 != ppuVar5);
        ppuVar5 = ppuVar14;
        func_0x00010bf52a60();
      }
      _objc_release(ppuVar14);
      ppuVar14 = param_2;
      func_0x00010bfa03c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c2a4bc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar14;
      ppuVar3 = ppuVar9;
      func_0x00010c25d0a0(ppuVar14);
      _objc_retainAutoreleasedReturnValue();
LAB_107947db0:
      _objc_release(ppuVar9);
    }
    _objc_release(ppuVar14);
    _objc_release(ppuVar10);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(ppuVar3);
    ppuVar10 = ppuVar3;
    func_0x00010c11f440();
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
    if ((ppuVar10 != (undefined **)0x0) && (ppuVar10 != (undefined **)0x7fffffffffffffff)) {
      ppuVar6 = ppuVar3;
      func_0x00010c260c20(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar3);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 1079489dc; end: 107948a23;  */

undefined8 FUN_1079489dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10794b660; end: 10794b6db;  */

undefined * FUN_10794b660(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113726f60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ea61b8,
                        &UNK_10dee05e0,&UNK_10dee060c,4,&UNK_10794b6dc,0);
    do {
      if (puRam0000000113726f60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113726f60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113726f60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113726f60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113726f60;
}



/* Entry: 10794b958; end: 10794b9bf; +[SCMTInternalGetSnapsRequest descriptor] */

void FUN_10794b958(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113726f98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b64da0,
                        &PTR____CFConstantStringClassReference_110ea6258,
                        &PTR_s_snapchat_map_11323a6d0,&PTR_DAT_11323a7e8,2,0x18,0x1c);
    puRam0000000113726f98 = puVar1;
  }
  return;
}



/* Entry: 10794c178; end: 10794c397; -[SCMemoriesSnapDocSaveManager saveSnap:saveSource:storyMetadata:] */

void FUN_10794c178(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b25b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011280();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  _objc_initWeak(auStack_78,param_1);
  puVar2 = PTR_PTR_1126ae6b8;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  puStack_b8 = &UNK_10794c398;
  puStack_b0 = &UNK_110929018;
  uStack_a8 = uVar6;
  uStack_a0 = uVar4;
  puStack_98 = puVar1;
  uStack_80 = param_4;
  _objc_retain(param_3);
  uStack_90 = param_3;
  uStack_88 = uVar5;
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d8,auStack_78);
  _objc_retain(param_3);
  uStack_d0 = param_4;
  _objc_retain(param_5);
  puVar3 = puVar2;
  func_0x00010bfb26a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar2);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10794c9c4; end: 10794cae7; -[SCMemoriesSnapDocSaveManager _handleSnapDocDataMutatingSave:saveSource:] */

void FUN_10794c9c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  uStack_50 = param_4;
  func_0x00010c0f7fc0(uVar2);
  _objc_retain(puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10794e2d0; end: 10794e2e7;  */

void FUN_10794e2d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10794eb40; end: 10794ecaf;  */

void FUN_10794eb40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 10794f768; end: 10794f87b;  */

void FUN_10794f768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_4);
  func_0x00010bf6ab80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10795025c; end: 107950543;  */

int FUN_10795025c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bfdc7e0();
  if ((int)uVar2 == 0) {
    uVar2 = param_1;
    func_0x00010c27dd80();
    if ((int)uVar2 != 1) {
      iVar5 = -9999;
      if ((int)uVar2 == 0) {
        iVar5 = 0;
      }
      goto LAB_1079504f4;
    }
    uVar2 = param_2;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0fef80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfdc680();
    _objc_release(uVar3);
    _objc_release(uVar2);
    bVar1 = (int)uVar4 == 0;
    iVar5 = 1;
  }
  else {
    uVar2 = param_2;
    func_0x00010c248460();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c298be0();
    _objc_release(uVar2);
    iVar5 = -9999;
    iVar6 = (int)uVar3;
    if (iVar6 < 3) {
      if (iVar6 == 1) {
        uVar2 = param_1;
        func_0x00010c27dd80();
        if ((int)uVar2 == 0) {
          iVar5 = 10;
          goto LAB_1079504f4;
        }
        uVar2 = param_2;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0fef80();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bfdc680();
        _objc_release(uVar3);
        _objc_release(uVar2);
        bVar1 = (int)uVar4 == 0;
        iVar5 = 5;
      }
      else {
        if (iVar6 != 2) goto LAB_1079504f4;
        uVar2 = param_1;
        func_0x00010c27dd80();
        if ((int)uVar2 == 0) {
          iVar5 = 0xb;
          goto LAB_1079504f4;
        }
        uVar2 = param_2;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0fef80();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bfdc680();
        _objc_release(uVar3);
        _objc_release(uVar2);
        bVar1 = (int)uVar4 == 0;
        iVar5 = 0xc;
      }
    }
    else if (iVar6 == 3) {
      uVar2 = param_1;
      func_0x00010c27dd80();
      if ((int)uVar2 == 0) {
        iVar5 = 0x10;
        goto LAB_1079504f4;
      }
      uVar2 = param_2;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0fef80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfdc680();
      _objc_release(uVar3);
      _objc_release(uVar2);
      bVar1 = (int)uVar4 == 0;
      iVar5 = 0x11;
    }
    else if (iVar6 == 4) {
      uVar2 = param_1;
      func_0x00010c27dd80();
      if ((int)uVar2 == 0) {
        iVar5 = 0x15;
        goto LAB_1079504f4;
      }
      uVar2 = param_2;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0fef80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfdc680();
      _objc_release(uVar3);
      _objc_release(uVar2);
      bVar1 = (int)uVar4 == 0;
      iVar5 = 0x16;
    }
    else {
      if (iVar6 != 5) goto LAB_1079504f4;
      uVar2 = param_1;
      func_0x00010c27dd80();
      if ((int)uVar2 == 0) {
        iVar5 = 0x18;
        goto LAB_1079504f4;
      }
      uVar2 = param_2;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0fef80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfdc680();
      _objc_release(uVar3);
      _objc_release(uVar2);
      bVar1 = (int)uVar4 == 0;
      iVar5 = 0x19;
    }
  }
  if (bVar1) {
    iVar5 = iVar5 + 1;
  }
LAB_1079504f4:
  _objc_release(param_2);
  _objc_release(param_1);
  return iVar5;
}



/* Entry: 10795113c; end: 10795116b; -[SCDecryptedContentCache .cxx_destruct] */

void FUN_10795113c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079517dc; end: 10795192f;  */

undefined * FUN_1079517dc(undefined *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined *puVar12;
  long unaff_x23;
  long lVar13;
  undefined *unaff_x24;
  long lVar14;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long unaff_x28;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_348 [128];
  long lStack_2c8;
  long lStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined1 **ppuStack_270;
  undefined *puStack_268;
  undefined *puStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [128];
  long lStack_190;
  undefined1 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar2 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
  if (puVar2 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = (undefined *)0x0;
    unaff_x23 = *plStack_110;
    unaff_x24 = &UNK_10dee0620;
    do {
      unaff_x25 = (undefined *)0x0;
      do {
        if (*plStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        iVar11 = (int)*(undefined8 *)(lStack_118 + (long)unaff_x25 * 8);
        iVar1 = iVar11;
        func_0x00010c067ec0();
        if (iVar1 - 1U < 4) {
          uVar5 = *(ulong *)(&UNK_10dee0620 + (ulong)(iVar1 - 1U) * 8);
        }
        else {
          uVar5 = 0;
        }
        if (puVar8 + -1 < (undefined *)0x4) {
          uVar6 = *(ulong *)(&UNK_10dee0620 + (long)(puVar8 + -1) * 8);
        }
        else {
          uVar6 = 0;
        }
        if (uVar6 < uVar5) {
          func_0x00010c067ec0();
          puVar8 = (undefined *)(long)iVar11;
        }
        unaff_x25 = unaff_x25 + 1;
      } while (puVar2 != unaff_x25);
      puVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puStack_128 = &UNK_107951930;
    lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    puVar8 = param_1;
    func_0x00010bf529e0(param_1);
    func_0x00010bffc4a0(puVar2,param_2,puVar8);
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    _objc_retain(param_1);
    puStack_258 = param_1;
    func_0x00010bf52a60(param_1,param_2,&uStack_250,auStack_210,0x10);
    if (param_1 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = (undefined *)0x0;
      puVar12 = (undefined *)0x0;
      unaff_x28 = *plStack_240;
      do {
        puVar7 = (undefined *)0x0;
        puVar3 = puVar8;
        do {
          if (*plStack_240 != unaff_x28) {
            _objc_enumerationMutation(puStack_258);
          }
          unaff_x24 = *(undefined **)(lStack_248 + (long)puVar7 * 8);
          puVar8 = unaff_x24;
          func_0x00010bfc76a0(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2,param_2,unaff_x24,puVar8);
          _objc_release(puVar8);
          unaff_x25 = unaff_x24;
          func_0x00010bfc4120();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = unaff_x25;
          func_0x00010bfcaaa0();
          if (puVar8 + -1 < (undefined *)0x4) {
            unaff_x26 = *(undefined **)(&UNK_10dee0620 + (long)(puVar8 + -1) * 8);
          }
          else {
            unaff_x26 = (undefined *)0x0;
          }
          if (puVar12 + -1 < (undefined *)0x4) {
            unaff_x27 = *(undefined **)(&UNK_10dee0620 + (long)(puVar12 + -1) * 8);
          }
          else {
            unaff_x27 = (undefined *)0x0;
          }
          _objc_release(unaff_x25);
          puVar8 = puVar3;
          if (unaff_x27 < unaff_x26) {
            puVar8 = unaff_x24;
            func_0x00010bfc4120();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar8;
            func_0x00010bfcaaa0();
            _objc_release(puVar8);
            func_0x00010bfc4120();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x24;
            func_0x00010bfc79a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010bf987e0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = unaff_x26;
            func_0x00010b7f5498();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
            _objc_release(unaff_x24);
            unaff_x27 = puVar8;
          }
          puVar7 = puVar7 + 1;
          puVar3 = puVar8;
        } while (param_1 != puVar7);
        param_1 = puStack_258;
        func_0x00010bf52a60(puStack_258,param_2,&uStack_250,auStack_210,0x10);
      } while (param_1 != (undefined *)0x0);
      unaff_x23 = 0;
    }
    puVar12 = puStack_258;
    _objc_release(puStack_258);
    puVar7 = PTR_PTR_1126d5758;
    _objc_alloc();
    func_0x00010c04c320();
    _objc_release(puVar2);
    _objc_release(puVar8);
    puVar3 = puVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
      ___stack_chk_fail();
      puStack_278 = puVar12;
      puStack_268 = &UNK_107951bd0;
      lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_2c0 = unaff_x28;
      puStack_2b8 = unaff_x27;
      puStack_2b0 = unaff_x26;
      puStack_2a8 = unaff_x25;
      puStack_2a0 = unaff_x24;
      lStack_298 = unaff_x23;
      puStack_290 = puVar7;
      puStack_288 = puVar8;
      puStack_280 = puVar2;
      ppuStack_270 = &puStack_130;
      _objc_retain();
      lStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      plStack_380 = (long *)0x0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      puVar2 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_390,auStack_348,0x10);
      if (puVar2 == (undefined *)0x0) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        lVar10 = 0;
        lVar14 = *plStack_380;
        do {
          puVar8 = (undefined *)0x0;
          do {
            if (*plStack_380 != lVar14) {
              _objc_enumerationMutation(puVar3);
            }
            lVar13 = *(long *)(lStack_388 + (long)puVar8 * 8);
            lVar4 = lVar13;
            func_0x00010c252d60();
            if (lVar4 - 1U < 4) {
              uVar5 = *(ulong *)(&UNK_10dee0620 + (lVar4 - 1U) * 8);
            }
            else {
              uVar5 = 0;
            }
            if (lVar10 - 1U < 4) {
              uVar6 = *(ulong *)(&UNK_10dee0620 + (lVar10 - 1U) * 8);
            }
            else {
              uVar6 = 0;
            }
            if (uVar6 < uVar5) {
              lVar10 = lVar13;
              func_0x00010c252d60();
              func_0x00010bf987e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar9);
              lVar9 = lVar13;
            }
            puVar8 = puVar8 + 1;
          } while (puVar2 != puVar8);
          puVar2 = puVar3;
          func_0x00010bf52a60(puVar3,param_2,&uStack_390,auStack_348,0x10);
        } while (puVar2 != (undefined *)0x0);
      }
      puVar7 = PTR_PTR_1126d5760;
      _objc_alloc(PTR_PTR_1126d5760);
      func_0x00010c04c260();
      _objc_release(lVar9);
      puVar2 = puVar3;
      _objc_release();
      if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) &&
         (___stack_chk_fail(), puVar7 = puVar3, puVar2 < (undefined *)0x2d)) {
        puVar7 = *(undefined **)(&PTR_PTR_1109f12e8)[(long)puVar2];
        _objc_retain(puVar7);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  return puVar8;
}



/* Entry: 1079521d8; end: 107952487;  */

undefined8 ***** FUN_1079521d8(undefined8 *****param_1,long param_2)

{
  long lVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  long lVar4;
  undefined8 *****pppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****in_x5;
  undefined8 ****in_x6;
  long lVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 *****pppppuVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 ****ppppuStack_2e8;
  undefined *puStack_2e0;
  undefined8 **ppuStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 **appuStack_218 [16];
  long lStack_198;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  if ((param_1 == (undefined8 *****)0x0) ||
     (pppppuVar13 = param_1, func_0x00010c0c55e0(), (long)pppppuVar13 < 0)) {
    pppppuVar13 = (undefined8 *****)0x0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1;
    func_0x00010bf52a60();
    lVar16 = lRam0000000000000000;
    while (lVar14 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(lVar1);
        }
        pppppuVar13 = *(undefined8 ******)(lVar15 * 8);
        pppppuVar2 = pppppuVar13;
        func_0x00010c0c55e0();
        pppppuVar3 = param_1;
        func_0x00010c0c55e0();
        if (pppppuVar2 == pppppuVar3) {
          _objc_retain(pppppuVar13);
          goto LAB_1079522ec;
        }
        lVar15 = lVar15 + 1;
      } while (lVar14 != lVar15);
      lVar14 = lVar1;
      func_0x00010bf52a60();
    }
    pppppuVar13 = (undefined8 *****)0x0;
LAB_1079522ec:
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppppuVar13);
    return pppppuVar13;
  }
  ___stack_chk_fail();
  ppppuVar7 = (undefined8 ****)&ppuStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_258 = 0;
  ppuStack_260 = (undefined8 ***)0x0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar8 = (undefined8 ****)appuStack_218;
  ppppuVar9 = (undefined8 ****)0x10;
  lVar10 = lVar4;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar14 = *plStack_250;
    pppppuVar13 = (undefined8 *****)0xffffffffffffffff;
    do {
      lVar16 = 0;
      pppppuVar2 = (undefined8 *****)(lVar10 + (long)pppppuVar13);
      do {
        pppppuVar13 = (undefined8 *****)((long)pppppuVar13 + 1);
        if (*plStack_250 != lVar14) {
          _objc_enumerationMutation(lVar4);
        }
        pppppuVar5 = *(undefined8 ******)(lStack_258 + lVar16 * 8);
        func_0x00010c0c55e0();
        pppppuVar3 = param_1;
        func_0x00010c0c55e0();
        if (pppppuVar5 == pppppuVar3) goto LAB_107952438;
        lVar16 = lVar16 + 1;
      } while (lVar10 != lVar16);
      ppppuVar8 = (undefined8 ****)appuStack_218;
      ppppuVar9 = (undefined8 ****)0x10;
      lVar10 = lVar4;
      ppppuVar7 = (undefined8 ****)&ppuStack_260;
      func_0x00010bf52a60();
      pppppuVar13 = pppppuVar2;
    } while (lVar10 != 0);
  }
  pppppuVar13 = (undefined8 *****)0xffffffffffffffff;
LAB_107952438:
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return pppppuVar13;
  }
  ___stack_chk_fail();
  _objc_retain(ppppuVar7);
  _objc_retain(ppppuVar8);
  _objc_retain(ppppuVar9);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  puStack_2e0 = PTR_PTR_1126f8ee8;
  pppppuVar13 = &ppppuStack_2e8;
  ppppuStack_2e8 = param_1;
  _objc_msgSendSuper2(pppppuVar13,PTR_s_init_1125d9248);
  if (pppppuVar13 != (undefined8 *****)0x0) {
    _objc_retain(ppppuVar7);
    ppppuVar6 = pppppuVar13[1];
    pppppuVar13[1] = ppppuVar7;
    _objc_release(ppppuVar6);
    _objc_retain(ppppuVar8);
    ppppuVar6 = pppppuVar13[2];
    pppppuVar13[2] = ppppuVar8;
    _objc_release(ppppuVar6);
    _objc_retain(ppppuVar9);
    ppppuVar6 = pppppuVar13[3];
    pppppuVar13[3] = ppppuVar9;
    _objc_release(ppppuVar6);
    _objc_retain(in_x5);
    ppppuVar6 = pppppuVar13[9];
    pppppuVar13[9] = in_x5;
    _objc_release(ppppuVar6);
    _objc_retain(in_x6);
    ppppuVar6 = pppppuVar13[0xb];
    pppppuVar13[0xb] = in_x6;
    _objc_release(ppppuVar6);
    ppppuVar6 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    ppppuVar11 = pppppuVar13[4];
    pppppuVar13[4] = ppppuVar6;
    _objc_release(ppppuVar11);
    ppppuVar6 = (undefined8 ****)PTR_PTR_1126d5778;
    _objc_alloc_init();
    ppppuVar11 = pppppuVar13[5];
    pppppuVar13[5] = ppppuVar6;
    _objc_release(ppppuVar11);
    ppppuVar6 = (undefined8 ****)PTR_PTR_1126ae720;
    _objc_retain(in_x5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar11 = pppppuVar13[6];
    pppppuVar13[6] = ppppuVar6;
    _objc_release(ppppuVar11);
    ppppuVar6 = (undefined8 ****)PTR_PTR_1126ae720;
    _objc_retain(in_x5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar11 = pppppuVar13[7];
    pppppuVar13[7] = ppppuVar6;
    _objc_release(ppppuVar11);
    ppppuVar6 = in_x5;
    func_0x00010c0b84a0();
    _objc_retainAutoreleasedReturnValue();
    if (ppppuVar6 == (undefined8 ****)0x0) {
      *(undefined1 *)(pppppuVar13 + 10) = 0;
    }
    else {
      ppppuVar11 = ppppuVar6;
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar12 = ppppuVar11;
      func_0x00010bf1f3c0();
      *(char *)(pppppuVar13 + 10) = (char)ppppuVar12;
      _objc_release(ppppuVar11);
    }
    ppppuVar11 = in_x5;
    func_0x00010bf1f440();
    if ((int)ppppuVar11 != 0) {
      ppppuVar11 = (undefined8 ****)PTR_PTR_1126d5788;
      _objc_alloc();
      func_0x00010c051060();
      ppppuVar12 = pppppuVar13[0xd];
      pppppuVar13[0xd] = ppppuVar11;
      _objc_release(ppppuVar12);
    }
    ppppuVar11 = (undefined8 ****)PTR_PTR_1126ae720;
    _objc_retain(in_x5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar12 = pppppuVar13[8];
    pppppuVar13[8] = ppppuVar11;
    _objc_release(ppppuVar12);
    *(undefined4 *)(pppppuVar13 + 0xc) = 0;
    _objc_release(in_x5);
    _objc_release(ppppuVar6);
    _objc_release(in_x5);
    _objc_release(in_x5);
  }
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(ppppuVar9);
  _objc_release(ppppuVar8);
  _objc_release(ppppuVar7);
  return pppppuVar13;
}



/* Entry: 107952a6c; end: 107952c67; -[SCSnapDocManagerImpl queryPlaybackMediaStatusForKey:snapDoc:completion:] */

void FUN_107952a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

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
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010bde4260(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  else {
    func_0x00010be52ae0(param_1);
    (**(code **)(param_5 + 0x10))(param_5,3);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10795349c; end: 1079534af;  */

void FUN_10795349c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001079534a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107953d30; end: 107953d9b;  */

void FUN_107953d30(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c13e340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10795493c; end: 107954caf; -[SCSnapDocManagerImpl retrieveMediaForId:snapDoc:pageInfo:completion:] */

void FUN_10795493c(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_4;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        puVar10 = *(undefined **)(lStack_128 + lVar8 * 8);
        puVar3 = puVar10;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c071ae0();
        _objc_release(puVar4);
        _objc_release(puVar3);
        if (((ulong)puVar5 & 1) != 0) {
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          if (puVar10 == (undefined *)0x0) goto LAB_107954ac0;
          goto LAB_107954ad8;
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
LAB_107954ac0:
  puVar10 = PTR_PTR_1126b25c8;
  _objc_opt_new(PTR_PTR_1126b25c8);
  func_0x00010c1c4880();
LAB_107954ad8:
  puVar3 = param_3;
  FUN_1079521d8(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126b25b8;
    _objc_alloc(PTR_PTR_1126b25b8);
    func_0x00010c011280();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x000107951db4(puVar4,param_3,0,0,puVar5,3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar5);
    param_1 = 0;
  }
  else {
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    puStack_158 = &UNK_107954cb0;
    puStack_150 = &UNK_1109f1680;
    _objc_retain(param_3);
    puStack_148 = param_3;
    _objc_retain(puVar3);
    puStack_140 = puVar3;
    _objc_retain(param_6);
    ppuVar6 = &puStack_168;
    lStack_138 = param_6;
    _objc_retainBlock(ppuVar6);
    func_0x00010c13eba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    _objc_release(lStack_138);
    _objc_release(puStack_140);
    puVar4 = puStack_148;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107954cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x30) + 0x10))();
  return;
}



/* Entry: 107955200; end: 1079552cf; -[SCSnapDocManagerImpl addMediaReferenceForSnapDoc:mediaReference:error:] */

void FUN_107955200(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0c5600(param_3);
  uVar2 = param_4;
  func_0x00010bf51e00(param_4);
  _objc_release(param_4);
  func_0x00010c1c4aa0(uVar2,param_2,lVar1 + 1);
  func_0x00010c1c4ac0(param_3,param_2,lVar1 + 1);
  lVar1 = param_3;
  func_0x00010c0c6280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010befa120(lVar1,param_2,uVar2);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126bcf20;
  _objc_alloc_init(PTR_PTR_1126bcf20);
  uVar4 = uVar2;
  func_0x00010c0c55e0(uVar2);
  func_0x00010c1c4aa0(puVar3,param_2,uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10795580c; end: 10795583f;  */

void FUN_10795580c(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retainAutorelease(param_2);
    **(long **)(param_1 + 0x30) = param_2;
  }
  return;
}



/* Entry: 1079561b4; end: 10795635f; -[SCSnapDocManagerImpl markClaimAsNonAuthoritativeForKey:mediaReferences:] */

void FUN_1079561b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar2 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_140,auStack_100,0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    lVar6 = *plStack_130;
    do {
      lVar5 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(param_4);
        }
        lVar3 = param_1;
        func_0x00010bde7e60(param_1,param_2,param_3,*(undefined8 *)(lStack_138 + lVar5 * 8));
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puStack_168 = puVar1;
        uStack_160 = 0xc2000000;
        puStack_158 = &UNK_107956360;
        puStack_150 = &UNK_110841f20;
        _objc_retain(param_3);
        uStack_148 = param_3;
        func_0x00010c1285c0(uVar4,param_2,lVar3,&puStack_168);
        _objc_release(uVar4);
        _objc_release(uStack_148);
        _objc_release(lVar3);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_140,auStack_100,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107956a38; end: 107956d2b; -[SCSnapDocManagerImpl addMediaReferenceForKeyWithSnapDocKey:snapDoc:blob:mediaType:onComplete:onError:] */

/* WARNING: Removing unreachable block (ram,0x000107956bdc) */
/* WARNING: Removing unreachable block (ram,0x000107956be0) */
/* WARNING: Removing unreachable block (ram,0x000107956b50) */
/* WARNING: Removing unreachable block (ram,0x000107956b54) */

void FUN_107956a38(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  
  dVar6 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c0c46a0(param_4);
  if ((uint)(int)dVar6 < 0x2d) {
    puVar1 = PTR_PTR_1126b25b8;
    _objc_alloc(PTR_PTR_1126b25b8);
    uVar2 = param_4;
    func_0x00010bf9e140(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0(param_4);
    func_0x00010c011280(puVar1);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b25c0;
    _objc_alloc();
    uVar2 = param_5;
    func_0x00010bf25f00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360();
    _objc_retain(0);
    _objc_release(uVar2);
    if ((uint)(int)param_1 < 0xc) {
      func_0x00010bef9bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      puVar5 = puVar3;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        if (param_8 != 0) {
          (**(code **)(param_8 + 0x10))(param_8,&PTR____CFConstantStringClassReference_110ea66b8);
        }
        puVar5 = (undefined *)0x0;
      }
      else if (param_7 != 0) {
        puVar4 = PTR_PTR_1126bcf68;
        _objc_alloc();
        func_0x00010bffa140();
        uVar2 = param_2;
        func_0x00010c0c55e0();
        func_0x00010af28d88();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_7 + 0x10))(param_7,puVar4,uVar2);
        _objc_release(uVar2);
        _objc_release(puVar4);
      }
      _objc_release(puVar5);
      _objc_release(param_2);
    }
    else if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))(param_8,&PTR____CFConstantStringClassReference_110ea6698);
    }
    _objc_release(puVar3);
    _objc_release(0);
    _objc_release(puVar1);
  }
  else if (param_8 != 0) {
    (**(code **)(param_8 + 0x10))(param_8,&PTR____CFConstantStringClassReference_110ea6658);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107957ad8; end: 107957cbf; -[SCSnapDocManagerImpl _associateRequestForContentKey:completePrefetch:requestContext:completion:] */

void FUN_107957ad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b8010;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0003a0();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x107957c08;
  puStack_50 = &UNK_11097f010;
  uStack_48 = param_6;
  _objc_retain(param_6);
  uVar3 = uVar2;
  func_0x00010bf0bda0(uVar2,param_2,param_3,puVar1,param_5,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1079589b8; end: 107958a13; -[SCSnapDocManagerImpl _headerDataForMediaData:] */

void FUN_1079589b8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (0xb < uVar1) {
    uVar1 = 0xc;
  }
  uVar2 = param_3;
  func_0x00010c25eac0(param_3,param_2,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10795914c; end: 107959237; -[SCSnapDocManagerImpl _decryptContentResultInMemoryOrDegrade:key:iv:totalSize:] */

void FUN_10795914c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain();
  _os_proc_available_memory();
  if ((((long)param_6 < 1) || (uVar1 == 0)) || (param_6 <= uVar1 >> 1)) {
    func_0x00010bdf8a20(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_3;
    func_0x00010bfc40e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8f7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea6738,uVar2);
    _objc_release(uVar2);
    _objc_retain(param_3);
    param_1 = param_3;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107959cc4; end: 10795a04b; -[SCSnapDocManagerImpl _computeAndMergeResultsAsyncForSnapDoc:snapDocKey:apiType:singleResultComputeBlock:mergeResultsBlock:completion:] */

void FUN_107959cc4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b7fc0;
  _objc_alloc_init();
  lVar2 = param_1;
  func_0x00010be5e9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(lVar2);
  func_0x00010bffc4a0();
  puVar4 = PTR_PTR_1126bcb88;
  _objc_alloc();
  func_0x00010bf529e0();
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  puStack_128 = &UNK_10795a04c;
  puStack_120 = &UNK_11097cfb0;
  _objc_retain(param_8);
  uStack_110 = param_8;
  _objc_retain(param_7);
  uStack_108 = param_7;
  _objc_retain(puVar3);
  puStack_118 = puVar3;
  func_0x00010c030440();
  _objc_initWeak(auStack_140,param_1);
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  _objc_retain(lVar2);
  lVar5 = lVar2;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar9 = *plStack_170;
    do {
      lVar10 = 0;
      do {
        if (*plStack_170 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(undefined8 *)(lStack_178 + lVar10 * 8);
        puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1b0 = 0xc2000000;
        puStack_1a8 = &UNK_10795a098;
        puStack_1a0 = &UNK_1108c1458;
        _objc_copyWeak(auStack_188,auStack_140);
        _objc_retain(puVar3);
        puStack_198 = puVar3;
        _objc_retain(puVar4);
        ppuVar6 = &puStack_1b8;
        puStack_190 = puVar4;
        _objc_retainBlock(ppuVar6);
        lVar7 = param_6;
        (**(code **)(param_6 + 0x10))(param_6,uVar8,ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0) {
          func_0x00010bef7460(puVar1);
        }
        _objc_release(lVar7);
        _objc_release(ppuVar6);
        _objc_release(puStack_190);
        _objc_release(puStack_198);
        _objc_destroyWeak(auStack_188);
        lVar10 = lVar10 + 1;
      } while (lVar5 != lVar10);
      lVar5 = lVar2;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_140);
  _objc_release(puVar4);
  _objc_release(puStack_118);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  __Unwind_Resume();
  lVar2 = *(long *)(param_3 + 0x28);
  lVar5 = *(long *)(param_3 + 0x30);
  (**(code **)(lVar5 + 0x10))(lVar5,*(undefined8 *)(param_3 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10795a57c; end: 10795a6d7; -[SCSnapDocManagerImpl _validateAndGetMediaReferenceForKey:snapDoc:mediaId:error:] */

void FUN_10795a57c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  FUN_1079521d8(param_5,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
joined_r0x00010795a634:
    if (param_6 == (undefined8 *)0x0) {
      lVar5 = 0;
    }
    else {
      func_0x00010be3d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      lVar5 = 0;
      *param_6 = param_1;
    }
    goto LAB_10795a6b4;
  }
  lVar5 = param_5;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = param_5;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
LAB_10795a614:
      _objc_release(lVar1);
      goto LAB_10795a61c;
    }
    lVar2 = param_5;
    func_0x00010c09d820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      _objc_release(lVar2);
      goto LAB_10795a614;
    }
    lVar3 = param_5;
    func_0x00010c09d7e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar5);
    if (lVar4 == 0) goto joined_r0x00010795a634;
  }
  else {
LAB_10795a61c:
    _objc_release(lVar5);
  }
  _objc_retain(param_5);
  lVar5 = param_5;
LAB_10795a6b4:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10795b1e8; end: 10795b28b; -[SCSnapDocManagerImpl _addToInMemoryCacheForData:contentKey:] */

void FUN_10795b1e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_4;
  func_0x00010b0ee738(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_3,uVar1);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x60);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10795b624; end: 10795b7bb; -[SCSnapDocManagerImpl _createContentBundle:] */

void FUN_10795b624(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  puVar1 = param_3;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = param_3;
      func_0x00010c09d820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c08fa60();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126c0248;
      if (puVar3 == (undefined *)0x0) {
        func_0x00010c09d7e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf56300(puVar2,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar3 = PTR_PTR_1126b08b8;
        _objc_alloc(PTR_PTR_1126b08b8);
        func_0x00010c09d820(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126bfc90;
        func_0x00010c119380(PTR_PTR_1126bfc90,param_2,0x13);
        func_0x00010c0295e0(puVar3,param_2,puVar1,puVar4);
        func_0x00010bf56320(puVar2,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
    }
    else {
      func_0x00010bf4cce0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010b0eebbc();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010b0eebac();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10795b9a0; end: 10795ba4b; -[SCSnapDocPlaybackMediaResultImpl initWithStatus:mediaResultsMap:error:] */

undefined1 *
FUN_10795b9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f8ef8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10795bfe4; end: 10795bfeb; -[SCSnapDocThumbnailResolverImpl retrieveVideoForKey:snapDoc:pageInfo:thumbnailRequestConfigBuilder:completion:] */

undefined8 FUN_10795bfe4(void)

{
  return 0;
}



/* Entry: 10795c8f0; end: 10795cab3;  */

void FUN_10795c8f0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bfc76e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 0;
  uVar5 = 0x10;
  lVar7 = lVar1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  if (lVar7 == 0) {
    lVar10 = 0;
    lVar8 = 0;
  }
  else {
    lVar10 = 0;
    lVar8 = 0;
    do {
      lVar13 = 0;
      lVar9 = lVar8;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar1);
        }
        lVar12 = *(long *)(lVar13 * 8);
        func_0x000107952344(lVar12,*(undefined8 *)(param_3 + 0x20));
        lVar2 = lVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar2;
        lVar11 = lVar10;
        if ((lVar12 == 0) || (lVar8 = lVar9, lVar11 = lVar2, lVar9 = lVar10, lVar12 == 1)) {
          _objc_retain(lVar2);
          _objc_release(lVar9);
          lVar10 = lVar11;
        }
        _objc_release(lVar2);
        lVar13 = lVar13 + 1;
        lVar9 = lVar8;
      } while (lVar7 != lVar13);
      uVar5 = 0x10;
      lVar7 = lVar1;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  lVar7 = *(long *)(param_3 + 0x30);
  lVar3 = param_4;
  func_0x00010bfcaaa0(param_4);
  uVar4 = (ulong)(lVar3 == 0);
  lVar3 = lVar10;
  (**(code **)(lVar7 + 0x10))(lVar7,lVar8,lVar10,uVar4);
  _objc_release(lVar1);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_retain(lVar3);
    _objc_retain(uVar4);
    _objc_retain(uVar5);
    _objc_retain(in_x5);
    _objc_retain(in_x6);
    _objc_retain(in_x7);
    _objc_initWeak(auStack_198,param_4);
    func_0x00010c09da20(in_x6);
    _objc_copyWeak(auStack_1a0,auStack_198);
    _objc_retain(in_x5);
    _objc_retain(in_x6);
    _objc_retain(in_x7);
    func_0x00010be1c220(uVar14,param_2,param_4);
    _objc_release(in_x7);
    _objc_release(in_x6);
    _objc_release(in_x5);
    _objc_destroyWeak(auStack_1a0);
    _objc_destroyWeak(auStack_198);
    _objc_release(in_x7);
    _objc_release(in_x6);
    _objc_release(in_x5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
    return;
  }
  return;
}



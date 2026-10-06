/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107939800; end: 10793982b;  */

undefined8 FUN_107939800(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793982c(param_1);
  return param_1;
}



/* Entry: 107939ca8; end: 107939cbf;  */

void FUN_107939ca8(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 10793a8cc; end: 10793a8d7;  */

undefined1  [16] FUN_10793a8cc(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0xb0;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10793aa28; end: 10793aa5b;  */

undefined8 FUN_10793aa28(undefined8 param_1)

{
  func_0x0001079473f4();
  func_0x00010793a790();
  return param_1;
}



/* Entry: 10793abc4; end: 10793abeb;  */

undefined8 FUN_10793abc4(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}



/* Entry: 10793ad6c; end: 10793ada3;  */

void FUN_10793ad6c(ulong *param_1)

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



/* Entry: 10793ae9c; end: 10793aeaf;  */

void FUN_10793ae9c(void)

{
  func_0x00010793ae74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793b05c; end: 10793b0ab;  */

void FUN_10793b05c(void)

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



/* Entry: 10793b154; end: 10793b20b;  */

long * FUN_10793b154(long *param_1,long param_2,ulong param_3)

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



/* Entry: 10793b3c0; end: 10793b4eb;  */

void FUN_10793b3c0(long param_1)

{
  ulong *puVar1;
  
  func_0x00010793b28c();
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10793b814; end: 10793b817;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10793b814(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001079465bc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107947080();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107945784();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010793b4f0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000107946e34();
      if (param_1 == (ulong *)0x0) {
        func_0x00010794582c();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10793ad6c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001079470a4();
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
  }
  func_0x000107946584();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 10793b938; end: 10793b93b;  */

undefined8 FUN_10793b938(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793ba98; end: 10793baab;  */

void FUN_10793ba98(void)

{
  func_0x00010793ba4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793bd74; end: 10793be07;  */

void FUN_10793bd74(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000107946c50();
  func_0x000107946d88(&PTR_DAT_1109eddc0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  lVar1 = unaff_x20 + 0x18;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x18) = lVar1;
  lVar1 = unaff_x20 + 0x20;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x20) = lVar1;
  lVar1 = unaff_x20 + 0x28;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x28) = lVar1;
  lVar1 = unaff_x20 + 0x30;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x30) = lVar1;
  if ((*(byte *)(unaff_x19 + 0x10) & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x0001079458d4();
  }
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x21;
  *(undefined1 *)(unaff_x19 + 0x40) = *(undefined1 *)(unaff_x20 + 0x40);
  return;
}



/* Entry: 10793c04c; end: 10793c117;  */

void FUN_10793c04c(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010794678c();
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
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x30));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010793bbd4(*(undefined8 *)(unaff_x19 + 0x38));
    func_0x0001079462c4();
    iVar1 = extraout_w8 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x40) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar2 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 10793c2f0; end: 10793c2fb;  */

undefined ** FUN_10793c2f0(void)

{
  return &PTR_DAT_1109ef560;
}



/* Entry: 10793c484; end: 10793c4d3;  */

long FUN_10793c484(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x000107947474();
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



/* Entry: 10793c5bc; end: 10793c667;  */

long * FUN_10793c5bc(long *param_1,long param_2,ulong param_3,long *param_4)

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
      goto LAB_10793c5ec;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10793c5ec:
      param_4 = (long *)&UNK_10f438cee;
      func_0x000107946aa4();
      func_0x000107946398();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x000107946964();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10793c634;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10793c634;
  param_4 = (long *)&UNK_10f438d35;
  func_0x000107946aa4();
  func_0x000107946498();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10793c634:
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



/* Entry: 10793c7c4; end: 10793c7f3;  */

void FUN_10793c7c4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  func_0x000107946c98();
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



/* Entry: 10793cad0; end: 10793cadb;  */

undefined ** FUN_10793cad0(void)

{
  return &PTR_DAT_1109ef6a8;
}



/* Entry: 10793d2b4; end: 10793d2e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10793d2b4(long param_1,long param_2)

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
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x00010793cadc();
  func_0x000107946c18();
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



/* Entry: 10793d464; end: 10793d467;  */

void FUN_10793d464(ulong *param_1,long param_2)

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



/* Entry: 10793d5ac; end: 10793d65f;  */

long * FUN_10793d5ac(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x00010794668c();
    func_0x000107946a50();
    func_0x000107946ec8();
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010794668c();
    func_0x000107947244();
    func_0x00010794714c();
    func_0x000107946ec8();
  }
  lVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010794668c();
    lVar2 = 0x1d;
    func_0x0001001a59d0(0x1d,param_1);
    func_0x000107946ec8();
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x00010794668c();
    func_0x0001001a59d0(0x25,lVar2);
    func_0x000107946ec8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return param_4;
}



/* Entry: 10793d7c4; end: 10793d967;  */

long * FUN_10793d7c4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x1c);
    func_0x0001079467a0();
    param_4 = param_1;
  }
  func_0x000107947390();
  if ((bool)in_ZR) {
    func_0x00010794668c();
    func_0x000107946bd4();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    func_0x000107946a38();
    param_4 = param_1;
  }
  func_0x000107947384();
  if ((bool)in_ZR) {
    func_0x00010794668c();
    func_0x000107946ef8();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x20);
    param_1 = (long *)0x5;
    func_0x000107946a9c();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x32) == '\x01') {
    func_0x00010794668c();
    func_0x000107946f8c();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return param_4;
}



/* Entry: 10793db30; end: 10793db7f;  */

void FUN_10793db30(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x000107946280();
  while (unaff_x22 != 0) {
    func_0x00010793db80(*unaff_x21);
    func_0x000107946ff0();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946cb0();
  return;
}



/* Entry: 10793dc24; end: 10793dc9f;  */

undefined ** FUN_10793dc24(void)

{
  return &PTR_DAT_1109ef860;
}



/* Entry: 10793de08; end: 10793de6f;  */

void FUN_10793de08(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x00010794678c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x000107947278();
    func_0x000107946ad4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946dc4();
  return;
}



/* Entry: 10793e0c0; end: 10793e0cb;  */

undefined ** FUN_10793e0c0(void)

{
  return &PTR_DAT_1109ef8f0;
}



/* Entry: 10793e360; end: 10793e38b;  */

undefined8 FUN_10793e360(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793e38c(param_1);
  return param_1;
}



/* Entry: 10793e5fc; end: 10793e5ff;  */

void FUN_10793e5fc(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  return;
}



/* Entry: 10793e788; end: 10793e807;  */

void FUN_10793e788(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107946614();
  if ((param_3 & 1) != 0) {
    func_0x000107946e40();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000107946e34();
    if (param_1 == (ulong *)0x0) {
      func_0x000107947294();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      func_0x00010793def4();
    }
  }
  func_0x000107946584();
  if ((extraout_x8_00 & 1) != 0) {
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



/* Entry: 10793eaa8; end: 10793eb53;  */

void FUN_10793eaa8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946b0c();
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107946d58();
  }
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
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x0001001a53d4();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x38);
    func_0x0001001a53d4();
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



/* Entry: 10793ec8c; end: 10793ecf3;  */

void FUN_10793ec8c(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x00010794678c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x000107947278();
    func_0x000107946ad4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946dc4();
  return;
}



/* Entry: 10793edf0; end: 10793edfb;  */

undefined ** FUN_10793edf0(void)

{
  return &PTR_DAT_1109efa60;
}



/* Entry: 10793ef5c; end: 10793ef6f;  */

void FUN_10793ef5c(void)

{
  func_0x00010793ef30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793f150; end: 10793f15b;  */

undefined ** FUN_10793f150(void)

{
  return &PTR_DAT_1109efaf8;
}



/* Entry: 10793f3dc; end: 10793f4c3;  */

long * FUN_10793f3dc(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  lVar2 = param_1;
  if (*(int *)(param_1 + 0x20) == 1) {
    func_0x00010794668c();
    lVar2 = 0xd;
    func_0x0001001a59d0(0xd,param_1);
    func_0x000107946ec8();
  }
  if (*(int *)(unaff_x20 + 0x24) == 2) {
    func_0x00010794668c();
    func_0x00010794739c();
    func_0x00010794714c();
    func_0x000107946ec8();
  }
  if (*(int *)(unaff_x20 + 0x28) == 3) {
    func_0x00010794668c();
    func_0x0001001a59d0(0x1d,lVar2);
    func_0x000107946ec8();
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



/* Entry: 10793f6b0; end: 10793f763;  */

long * FUN_10793f6b0(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  if (*(int *)(param_1 + 0x18) == 2) {
    func_0x00010794668c();
    param_4 = (long *)0x10;
  }
  else {
    if (*(int *)(param_1 + 0x18) != 1) goto LAB_10793f730;
    func_0x00010794668c();
    param_4 = (long *)0x8;
  }
  func_0x0001001a59d0(param_4,param_1);
  func_0x0001079466ac();
LAB_10793f730:
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



/* Entry: 10793fa54; end: 10793fa77;  */

undefined8 FUN_10793fa54(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793fb58; end: 10793fb83;  */

void FUN_10793fb58(void)

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



/* Entry: 10793fcfc; end: 10793fd07;  */

undefined ** FUN_10793fcfc(void)

{
  return &PTR_DAT_1109efcf8;
}



/* Entry: 10793fee4; end: 10793fee7;  */

undefined8 FUN_10793fee4(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107940018; end: 1079400e3;  */

long * FUN_107940018(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x0001079464c0();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_107940048;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_107940048:
      param_4 = (long *)&UNK_10f439113;
      func_0x000107946aa4();
      func_0x000107946398();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_107940094;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_107940094;
  param_4 = (long *)&UNK_10f439165;
  func_0x000107946aa4();
  func_0x000107946498();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_107940094:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x20);
    param_1 = (long *)0x3;
    func_0x0001079467f0();
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



/* Entry: 107940264; end: 107940293;  */

void FUN_107940264(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468d4();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 10794043c; end: 107940447;  */

undefined ** FUN_10794043c(void)

{
  return &PTR_DAT_1109efe80;
}



/* Entry: 1079406b4; end: 1079406c7;  */

void FUN_1079406b4(void)

{
  func_0x000107940688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107940858; end: 10794085b;  */

undefined8 FUN_107940858(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}



/* Entry: 1079409e0; end: 1079409eb;  */

void FUN_1079409e0(long param_1,ulong param_2)

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



/* Entry: 107940aec; end: 107940b73;  */

undefined ** FUN_107940aec(void)

{
  return &PTR_DAT_1109f0020;
}



/* Entry: 107940c6c; end: 107940c77;  */

undefined ** FUN_107940c6c(void)

{
  return &PTR_DAT_1109f00f0;
}



/* Entry: 107940e0c; end: 107940e0f;  */

undefined8 FUN_107940e0c(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107941260; end: 10794126b;  */

undefined ** FUN_107941260(void)

{
  return &PTR_DAT_1109f01b8;
}



/* Entry: 1079418fc; end: 1079418ff;  */

undefined8 FUN_1079418fc(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107941a3c; end: 107941a47;  */

undefined ** FUN_107941a3c(void)

{
  return &PTR_DAT_1109f0260;
}



/* Entry: 107941d04; end: 107941d17;  */

void FUN_107941d04(void)

{
  func_0x000107941cc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107941f54; end: 107941f5f;  */

undefined ** FUN_107941f54(void)

{
  return &PTR_DAT_1109f0310;
}



/* Entry: 107942178; end: 107942183;  */

undefined ** FUN_107942178(void)

{
  return &PTR_DAT_1109f0350;
}



/* Entry: 10794238c; end: 10794239f;  */

void FUN_10794238c(void)

{
  func_0x00010794232c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079425fc; end: 1079425ff;  */

undefined8 FUN_1079425fc(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107942730; end: 10794273b;  */

undefined ** FUN_107942730(void)

{
  return &PTR_DAT_1109f0438;
}



/* Entry: 1079428f8; end: 1079428fb;  */

undefined8 FUN_1079428f8(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x0001079428dc(param_1);
  return param_1;
}



/* Entry: 107942ad4; end: 107942aff;  */

undefined8 FUN_107942ad4(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107942b00(param_1);
  return param_1;
}



/* Entry: 107942de4; end: 107942ef7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_107942de4(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001079465bc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107947080();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001079460e8();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010794251c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000107946e34();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107946178();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x0001079425ac();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001079470a4();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001079461d4();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010794285c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010794517c();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x000107935e54();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946220();
        *(ulong **)(unaff_x21 + 0x38) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x000107942a6c();
      }
    }
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



/* Entry: 107942ff0; end: 1079430fb;  */

long * FUN_107942ff0(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x20;
  long *plVar4;
  long unaff_x21;
  int iVar5;
  long *unaff_x22;
  long *unaff_x23;
  int iVar6;
  long *unaff_x30;
  
  func_0x000107946ffc();
  func_0x000107946704();
  func_0x000107946ac8(param_1[5]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 == 0) goto LAB_107943040;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_107943040;
  unaff_x30 = (long *)&UNK_10f43953c;
  func_0x000107946aa4();
  func_0x000107946398();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_107943040:
  uVar2 = *(uint *)(unaff_x21 + 0x18);
  while ((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x000107946378();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x000107946894();
    cVar3 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar3 < 0) && (func_0x000107946ea4(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x000107946764(), in_NG != in_OV)) {
      func_0x000107946cd0();
      param_3 = unaff_x23;
      func_0x00010b4d5120();
      plVar4 = param_1;
    }
    else {
      func_0x0001079469b8();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x0001079464f0();
      plVar4 = (long *)((long)unaff_x20 + (long)cVar3);
      unaff_x20 = unaff_x30;
    }
    func_0x000107946e98();
    unaff_x30 = unaff_x20;
    unaff_x20 = plVar4;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
  if ((long)(int)param_3 <= *param_1 - (long)unaff_x30) {
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)param_3);
  }
  while( true ) {
    iVar6 = ((int)*param_1 - (int)unaff_x30) + 0x10;
    iVar5 = (int)param_3;
    param_3 = (long *)(ulong)(uint)(iVar5 - iVar6);
    if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)unaff_x30 + (long)iVar6);
    unaff_x30 = param_1;
    func_0x000107c303e4(param_1,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x30 + (long)iVar5);
}



/* Entry: 107943280; end: 107943317;  */

long * FUN_107943280(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
    func_0x00010794668c();
    func_0x000107946a50();
    func_0x000107946ec8();
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010794668c();
    func_0x000107947244();
    func_0x000107946bd4();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010794668c();
    func_0x000107946e70();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return param_4;
}



/* Entry: 10794380c; end: 107943833;  */

long * FUN_10794380c(long *param_1)

{
  func_0x00010006805c(param_1 + 3);
  if (*param_1 != 0) {
    func_0x000100069100(param_1);
  }
  return param_1;
}



/* Entry: 107943968; end: 107943987;  */

void FUN_107943968(void)

{
  func_0x000107946c78();
  func_0x0001079395c4();
  return;
}



/* Entry: 107943aa0; end: 107944da3;  */

void FUN_107943aa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010068f474();
  }
  else {
    func_0x000107946928();
  }
  *puVar1 = &PTR_DAT_1109ec150;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined1 *)((long)puVar1 + 0x12) = 0;
  return;
}



/* Entry: 1079451cc; end: 10794522f;  */

long FUN_1079451cc(long param_1)

{
  int iVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010068f438();
  if (param_1 == 0) {
    func_0x000107946b04();
  }
  else {
    func_0x0001079467e4();
  }
  func_0x00010068f4c0();
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109ed2d0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946b2c();
  *(long *)(unaff_x19 + 0x10) = param_1;
  lVar2 = unaff_x21 + 0x18;
  func_0x000107946ba4();
  *(long *)(unaff_x19 + 0x18) = lVar2;
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  iVar1 = *(int *)(unaff_x21 + 0x2c);
  *(int *)(unaff_x19 + 0x2c) = iVar1;
  if (iVar1 - 1U < 2) {
    lVar2 = unaff_x21 + 0x20;
    func_0x000107946ba4();
    *(long *)(unaff_x19 + 0x20) = lVar2;
  }
  return unaff_x19;
}



/* Entry: 10794561c; end: 10794564b;  */

long FUN_10794561c(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x00010068f438();
  if (param_1 == 0) {
    func_0x000107946b04();
  }
  else {
    func_0x0001079467e4();
  }
  func_0x00010068f4c0();
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109ed820);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946f70();
  FUN_107943968();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return unaff_x19;
}



/* Entry: 107945a2c; end: 107945a8b;  */

undefined8 * FUN_107945a2c(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010068f438();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107946bac();
  }
  else {
    func_0x000107946b78();
  }
  func_0x00010068f4c0();
  *param_1 = &PTR_DAT_1109ec790;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010793d4bc();
  return param_1;
}



/* Entry: 107945e94; end: 107945ee3;  */

long FUN_107945e94(long param_1)

{
  func_0x000107946d30();
  if (param_1 == 0) {
    func_0x00010068f474();
  }
  else {
    func_0x0001079468bc();
  }
  func_0x0001079469c8(&PTR_DAT_1109ecb50);
  FUN_1079409e0();
  return param_1;
}



/* Entry: 1079461d4; end: 10794627f;  */

void FUN_1079461d4(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010068f438();
  if (param_1 == 0) {
    func_0x000107946b38();
  }
  else {
    func_0x000107946a78();
  }
  func_0x000107946d24();
  func_0x000107946d3c(&PTR_DAT_1109ec1f0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946b48();
  func_0x000107947220();
  return;
}



/* Entry: 107947620; end: 107947677;  */

long FUN_107947620(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  lVar2 = (ulong)uVar1 + (ulong)*(byte *)(param_1 + 0x14) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x18) = (int)lVar2;
  return lVar2;
}



/* Entry: 107947ecc; end: 107948213;  */

void FUN_107947ecc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2;
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_alloc();
  func_0x00010c04e820();
  lVar2 = param_2;
  func_0x00010c25db00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar2);
      }
      uVar10 = *(undefined8 *)(lVar11 * 8);
      uVar4 = uVar10;
      func_0x00010c09e1e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ba0(puVar1);
      _objc_release(uVar10);
      _objc_release(uVar4);
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  func_0x00010bfa03c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b1e50;
    _objc_retain(lVar8);
    _objc_alloc();
    lVar3 = lVar8;
    func_0x00010c0b9ce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    lVar5 = lVar8;
    func_0x00010c0bac20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    lVar2 = lVar8;
    func_0x00010c0fd4a0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282760();
    lVar9 = lVar8;
    func_0x00010c247d20(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bc92e28();
    lVar11 = lVar8;
    func_0x00010c29e220(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010baf2e4c();
    lVar6 = lVar8;
    func_0x00010c0b9de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bb01b6c();
    lVar7 = lVar8;
    func_0x00010c0b97e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    func_0x00010c028600(puVar1);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107949200; end: 10794a2bb;  */

void FUN_107949200(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  undefined *puVar30;
  long lVar31;
  undefined8 uVar32;
  undefined *puVar33;
  undefined *puVar34;
  ulong uVar35;
  undefined *puVar36;
  undefined *puVar37;
  long lVar38;
  double dVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined *puStack_218;
  undefined *puStack_180;
  undefined *puStack_170;
  
  lVar31 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf0ea40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_release(lVar2);
  }
  else {
    uVar35 = *(ulong *)(param_1 + 0x20);
    lVar4 = param_2;
    func_0x00010bf0ea40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((uVar35 & 1) != 0) {
      puStack_180 = (undefined *)0x0;
      goto LAB_10794a270;
    }
  }
  lVar2 = *(long *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x38);
  uVar35 = *(ulong *)(param_1 + 0x40);
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(uVar1);
  _objc_retain(lVar3);
  puVar6 = PTR_PTR_1126d5180;
  _objc_alloc();
  func_0x00010c07d060(param_2);
  func_0x00010c070680(param_2);
  func_0x00010c070680(param_2);
  func_0x00010c046240();
  lVar7 = param_2;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    _objc_retain(lVar3);
    lVar5 = lVar3;
  }
  else {
    lVar8 = param_2;
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar8;
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
  }
  _objc_release(lVar4);
  _objc_release(lVar7);
  puVar9 = PTR_PTR_1126d51a0;
  _objc_alloc();
  lVar7 = param_2;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c281680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (lVar4 == 0) {
    puVar36 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar10 == (undefined *)0x0) {
      puVar36 = (undefined *)0x0;
    }
    else {
      puVar34 = PTR_PTR_1126c0328;
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar34 == (undefined *)0x0) ||
         (puVar11 = puVar34, func_0x00010c098340(), puVar36 = PTR__OBJC_CLASS___NSString_1126ae4d0,
         puVar11 == (undefined *)0x0)) {
        puVar36 = (undefined *)0x0;
      }
      else {
        puVar11 = puVar34;
        func_0x00010c098320();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2810a0();
        func_0x00010c14de00(puVar36);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar11);
      }
      _objc_release(puVar34);
    }
    _objc_release(puVar10);
  }
  _objc_release(lVar4);
  func_0x00010c0607c0();
  _objc_release(puVar36);
  puVar10 = PTR_PTR_1126d51a8;
  _objc_alloc();
  dVar39 = 0.0;
  func_0x00010c01fba0(0);
  lVar7 = param_2;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010bfd89a0();
  _objc_release(lVar7);
  puVar36 = PTR_PTR_1126d5160;
  lVar7 = param_2;
  if ((int)lVar4 == 0) {
    lVar4 = param_2;
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar4;
    func_0x00010bfdd6a0();
    _objc_release(lVar4);
    puVar36 = PTR_PTR_1126d5160;
    if ((int)lVar8 != 0) {
      func_0x00010c241660(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar7;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1079495ec;
    }
    puVar36 = (undefined *)0x0;
  }
  else {
    func_0x00010c241660(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010c09e360();
    _objc_retainAutoreleasedReturnValue();
LAB_1079495ec:
    func_0x000107947a48(puVar36,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar7);
  }
  puVar34 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar39 = dVar39 * 1000.0;
  _objc_release(puVar34);
  lVar7 = param_2;
  func_0x00010c06d760();
  if ((int)lVar7 == 0) {
    puVar34 = (undefined *)0x0;
  }
  else {
    puVar34 = PTR_PTR_1126b5b20;
    _objc_alloc();
    lVar7 = param_2;
    func_0x00010bfe5ea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04d920(dVar39,0,0);
    _objc_release(lVar7);
  }
  puVar12 = PTR_PTR_1126ca6f8;
  _objc_alloc();
  func_0x00010c052aa0(dVar39);
  lVar7 = param_2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010bfda7c0();
  _objc_release(lVar7);
  puVar13 = PTR_PTR_1126d5188;
  func_0x00010c0ba0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126d5198;
  _objc_alloc();
  lVar8 = param_2;
  func_0x00010bf0ea40(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar8;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126d5160;
  lVar16 = param_2;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar17;
  func_0x000107947a48(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0068e0();
  _objc_release(puVar11);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar8);
  puStack_170 = PTR_PTR_1126d5160;
  if ((uVar35 & 0xfffffffffffffffe) == 2) {
    lVar4 = lVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x000107947a48();
    _objc_retainAutoreleasedReturnValue();
LAB_1079498c8:
    _objc_release(lVar4);
  }
  else {
    if ((int)lVar4 != 0) {
      lVar4 = param_2;
      func_0x00010c241660();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar8;
      func_0x000107947a48();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      goto LAB_1079498c8;
    }
    puStack_170 = (undefined *)0x0;
  }
  puStack_180 = PTR_PTR_1126b5bc0;
  _objc_alloc();
  lVar4 = param_2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x00010c24cfc0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_2;
  func_0x000107948428();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar16 = param_2;
  func_0x000107948428(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_2;
  func_0x00010c24cfc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x0001079482ac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  _objc_retain(param_2);
  _objc_retain(param_2);
  puVar11 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar17 = param_2;
  func_0x00010c112140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar11;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(lVar17);
  _objc_release(param_2);
  puVar11 = PTR_PTR_1126bfca8;
  if (puVar19 == (undefined *)0x0) {
    puVar37 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_2);
    _objc_alloc(puVar11);
    lVar17 = param_2;
    func_0x00010c241660(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar20 = lVar17;
    func_0x00010c0c54a0(lVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020b60(puVar11);
    _objc_release(lVar20);
    _objc_release(lVar17);
    puVar37 = PTR_PTR_1126c6940;
    _objc_alloc(PTR_PTR_1126c6940);
    func_0x00010c051fe0();
    _objc_release(puVar11);
    _objc_release(puVar19);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  puVar21 = PTR_PTR_1126c3398;
  _objc_alloc();
  func_0x00010bffa8e0();
  _objc_release(puVar37);
  _objc_release(lVar18);
  _objc_release(lVar16);
  puVar19 = PTR_PTR_1126d51b0;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010bf8b160(param_2);
  func_0x00010c0b5720(param_2);
  puVar37 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
  lVar16 = param_2;
  func_0x00010c2709c0(param_2);
  func_0x00010c052380((double)lVar16 / 1000.0 + 15552000.0,puVar37);
  puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
  lVar16 = param_2;
  func_0x00010c2709c0(param_2);
  _objc_release(param_2);
  func_0x00010bf655e0((double)lVar16 / 1000.0,puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00eaa0(dVar39);
  _objc_release(puVar11);
  _objc_release(puVar37);
  puVar11 = PTR_PTR_1126d51b8;
  _objc_alloc();
  func_0x00010c032400();
  _objc_retain(param_2);
  lVar16 = param_2;
  func_0x00010bf313e0(param_2);
  puVar37 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf655e0((double)lVar16 / 1000.0,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_2;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c247520();
  _objc_release(lVar16);
  puVar33 = (undefined *)0x0;
  if ((int)lVar17 - 1U < 3) {
    puVar33 = PTR_PTR_1126d51c0;
    _objc_alloc(PTR_PTR_1126d51c0);
    func_0x00010c006760();
  }
  puVar22 = PTR_PTR_1126d51c8;
  _objc_alloc();
  lVar16 = param_2;
  func_0x00010c241660(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf0d660();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_2;
  func_0x00010c241660(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar18;
  func_0x00010c0efde0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4d60();
  _objc_release(lVar20);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(puVar33);
  _objc_release(puVar37);
  _objc_release(param_2);
  lVar16 = param_2;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_2;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd8600();
  _objc_retain(param_2);
  lVar23 = param_2;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010c281680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar23);
  if (lVar24 == 0) {
    puStack_218 = (undefined *)0x0;
  }
  else {
    puStack_218 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    lVar23 = param_2;
    func_0x00010c241660(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar23;
    func_0x00010c281680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b20();
    _objc_release(lVar24);
    _objc_release(lVar23);
  }
  _objc_release(param_2);
  _objc_retain(param_2);
  puVar37 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_2;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010bfd44e0();
  _objc_release(lVar23);
  if ((int)lVar24 != 0) {
    lVar23 = param_2;
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar23;
    func_0x00010bf0ffe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar23);
    uVar40 = 0;
    lVar26 = lVar25;
    func_0x00010bf10080();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar26;
    func_0x00010bf52a60();
    lVar24 = lRam0000000000000000;
    while (lVar23 != 0) {
      lVar38 = 0;
      do {
        if (lRam0000000000000000 != lVar24) {
          _objc_enumerationMutation(lVar26);
        }
        uVar32 = *(undefined8 *)(lVar38 * 8);
        puVar33 = PTR_PTR_1126d51d0;
        _objc_alloc(PTR_PTR_1126d51d0);
        uVar27 = uVar32;
        func_0x00010c25ece0(uVar32);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c250f20(uVar32);
        uVar41 = uVar40;
        func_0x00010bf95780(uVar32);
        func_0x00010c104340(uVar32);
        func_0x00010c04eec0(uVar40,uVar41,puVar33);
        _objc_release(uVar27);
        func_0x00010befa120(puVar37);
        _objc_release(puVar33);
        lVar38 = lVar38 + 1;
      } while (lVar23 != lVar38);
      lVar23 = lVar26;
      func_0x00010bf52a60();
    }
    _objc_release(lVar26);
    _objc_release(lVar25);
  }
  puVar33 = PTR_PTR_1126d51d8;
  _objc_alloc();
  lVar23 = param_2;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010bf0ffe0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_2;
  func_0x00010c241660(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar26;
  func_0x00010bf0ffe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245860();
  lVar28 = param_2;
  func_0x00010c241660(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010bf0ffe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245820();
  puVar30 = puVar37;
  func_0x00010bf51e00(puVar37);
  func_0x00010bff56a0();
  _objc_release(puVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar38);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(puVar37);
  _objc_release(param_2);
  puVar37 = PTR_PTR_1126d51e0;
  _objc_alloc();
  func_0x00010c04a9a0();
  puVar30 = PTR_PTR_1126d51e8;
  _objc_alloc();
  func_0x00010c04a700();
  func_0x00010c044c40();
  _objc_release(puVar30);
  _objc_release(puVar37);
  _objc_release(puVar33);
  _objc_release(puStack_218);
  _objc_release(lVar20);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(puVar22);
  _objc_release(puVar11);
  _objc_release(puVar19);
  _objc_release(puVar21);
  _objc_release(lVar15);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(puStack_170);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar34);
  _objc_release(puVar36);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar5);
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(lVar2);
LAB_10794a270:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar31) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(lVar7);
    lVar2 = lVar7;
    func_0x00010bf529e0();
    puStack_180 = PTR____NSArray0__struct_11034ab48;
    if (lVar2 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_2);
      _objc_retain(puVar6);
      func_0x00010bf97e80(lVar7);
      puStack_180 = puVar6;
      func_0x00010bf51e00(puVar6);
      _objc_release(puVar6);
      _objc_release(param_2);
      _objc_release(puVar6);
    }
    _objc_release(lVar7);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_180);
  return;
}



/* Entry: 10794b6e8; end: 10794b74f; +[SCMTGetPlaylistRequest descriptor] */

void FUN_10794b6e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113726f68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b64bc0,
                        &PTR____CFConstantStringClassReference_110e0b358,
                        &PTR_s_snapchat_map_11323a6d0,&PTR_DAT_11323a968,7,0x38,0x1c);
    puRam0000000113726f68 = puVar1;
  }
  return;
}



/* Entry: 10794ba28; end: 10794ba8f; +[SCMTInternalGetAllPoisRequest descriptor] */

void FUN_10794ba28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113726fa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b64e40,
                        &PTR____CFConstantStringClassReference_110ea6298,
                        &PTR_s_snapchat_map_11323a6d0,&PTR_DAT_11323a728,1,0x10,0x1c);
    puRam0000000113726fa8 = puVar1;
  }
  return;
}



/* Entry: 10794c544; end: 10794c59f;  */

void FUN_10794c544(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 10794cb98; end: 10794ccbb; -[SCMemoriesSnapDocSaveManager _handleSendOrPostAutoSave:saveSource:] */

void FUN_10794cb98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 10794e41c; end: 10794e42b;  */

void FUN_10794e41c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14c730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_sc_addObjectIfNotNil__112630be8,param_2);
  return;
}



/* Entry: 10794ed20; end: 10794edaf; -[SCMemoriesSnapDocSaveManager .cxx_destruct] */

void FUN_10794ed20(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10794fce8; end: 10794fe0f;  */

void FUN_10794fce8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  puStack_58 = &UNK_10794fe10;
  puStack_50 = &UNK_10794fe20;
  uStack_48 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1079505f0; end: 107950697;  */

void FUN_1079505f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_2;
  func_0x00010794f29c(param_2,7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000107950698(param_1,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107951210; end: 10795128f; -[SCMediaReferenceFactoryImpl createMediaReferenceForUrl:mediaId:] */

void FUN_107951210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b25d8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c21afe0();
  _objc_release(param_3);
  uVar2 = param_4;
  func_0x00010c0c55e0(param_4);
  _objc_release(param_4);
  func_0x00010c1c4aa0(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107951d78; end: 107951db3;  */

void FUN_107951d78(ulong param_1)

{
  undefined8 unaff_x19;
  
  if (param_1 < 0x2d) {
    unaff_x19 = *(undefined8 *)(&PTR_PTR_1109f12e8)[param_1];
    _objc_retain(unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1079527bc; end: 1079527eb;  */

void FUN_1079527bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5780;
  func_0x00010c234b00(PTR_PTR_1126d5780,param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,puVar1);
  return;
}



/* Entry: 107952d38; end: 107952de3;  */

void FUN_107952d38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107953770; end: 1079537db;  */

void FUN_107953770(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdcfc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107953da4; end: 1079541f7; -[SCSnapDocManagerImpl retrieveMediaForKey:mediaMetadata:snapDoc:context:completion:] */

void FUN_107953da4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = param_4;
  func_0x00010c0c5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  lStack_80 = 0;
  lVar3 = param_1;
  func_0x00010bee77e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_80;
  _objc_retain(lStack_80);
  _objc_release(uVar2);
  if (lVar1 == 0) {
    lVar6 = param_1;
    func_0x00010bde7e60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bdf7ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    if (lVar8 == 0) {
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_initWeak(auStack_88,param_1);
      puVar9 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      puStack_c8 = &UNK_1079541f8;
      puStack_c0 = &UNK_1109f1650;
      _objc_copyWeak(auStack_90,auStack_88);
      _objc_retain(param_6);
      uStack_b8 = param_6;
      _objc_retain(param_4);
      uStack_b0 = param_4;
      _objc_retain(lVar3);
      lStack_a8 = lVar3;
      _objc_retain(param_3);
      uStack_a0 = param_3;
      _objc_retain(param_7);
      ppuVar11 = &puStack_d8;
      lStack_98 = param_7;
      _objc_retainBlock(ppuVar11);
      puStack_118 = puVar9;
      uStack_110 = 0xc2000000;
      puStack_108 = &UNK_1079543c8;
      puStack_100 = &UNK_1108465d0;
      _objc_retain(param_3);
      uStack_f8 = param_3;
      _objc_retain(param_4);
      uStack_f0 = param_4;
      _objc_retain(lVar3);
      lStack_e8 = lVar3;
      _objc_retain(param_7);
      ppuVar12 = &puStack_118;
      lStack_e0 = param_7;
      _objc_retainBlock(ppuVar12);
      func_0x00010be5e180(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      _objc_release(lStack_e0);
      _objc_release(lStack_e8);
      _objc_release(uStack_f0);
      _objc_release(uStack_f8);
      _objc_release(ppuVar11);
      _objc_release(lStack_98);
      _objc_release(uStack_a0);
      _objc_release(lStack_a8);
      _objc_release(uStack_b0);
      _objc_release(uStack_b8);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_88);
    }
    else {
      puVar9 = PTR_PTR_1126d5790;
      _objc_alloc();
      func_0x00010c0036a0();
      puVar10 = PTR_PTR_1126d5768;
      _objc_alloc(PTR_PTR_1126d5768);
      uVar2 = param_4;
      func_0x00010c0c5180(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6c20(lVar3);
      func_0x00010bf0b760(param_4);
      func_0x00010c029620(puVar10);
      _objc_release(uVar2);
      (**(code **)(param_7 + 0x10))(param_7,puVar10);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(lVar7);
      _objc_release(lVar6);
      param_1 = 0;
    }
  }
  else {
    func_0x00010be52ae0(param_1);
    uVar2 = param_4;
    func_0x00010c0c5180(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c0c6c20(lVar3);
    uVar4 = param_4;
    func_0x00010bf0b760(param_4);
    uVar5 = param_3;
    func_0x000107951db4(param_3,uVar2,lVar6,uVar4,lVar1,3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_7 + 0x10))(param_7,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar2);
    param_1 = 0;
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107954cbc; end: 107954ec7; -[SCSnapDocManagerImpl retrieveMediaForReference:mediaMetadata:pageInfo:completion:] */

void FUN_107954cbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_78,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_107954ec8;
  puStack_90 = &UNK_1109f16b0;
  _objc_retain(param_4);
  uStack_88 = param_4;
  _objc_retain(param_6);
  ppuVar1 = &puStack_a8;
  uStack_80 = param_6;
  _objc_retainBlock();
  lVar2 = param_1;
  func_0x00010bdec600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_78);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(ppuVar1);
  uVar4 = uVar3;
  func_0x00010c13e640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1079552d4; end: 107955367; -[SCSnapDocManagerImpl cloneAndUpdateMediaReferenceForSnapDoc:contentWriter:mediaListId:error:] */

void FUN_1079552d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bf51e00(param_3);
  func_0x00010bedb600(param_1,param_2,param_3,param_4,0,param_5,param_6);
  _objc_release(param_4);
  uVar1 = param_3;
  if ((int)param_1 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079558ac; end: 107955997; -[SCSnapDocManagerImpl authClaimSingleMediaWithKey:mediaReference:] */

void FUN_1079558ac(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bdd14c0(param_1,param_2,param_3,param_4);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bde7e60(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bdec600(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf39b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107956364; end: 1079563df; -[SCSnapDocManagerImpl removeClaimForKey:snapDoc:completion:] */

void FUN_107956364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0c6280(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b7a0(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107956f50; end: 107957003;  */

void FUN_107956f50(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  code *pcVar4;
  
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 == (undefined **)0x0) ||
     (ppuVar1 = param_2, func_0x00010bfcaaa0(), ppuVar1 != (undefined **)0x0)) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,&PTR____CFConstantStringClassReference_110ea66d8);
    }
    goto LAB_107956ff0;
  }
  ppuVar1 = param_2;
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined **)0x0) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      pcVar4 = *(code **)(lVar2 + 0x10);
      ppuVar3 = &PTR____CFConstantStringClassReference_110ea66f8;
      goto LAB_107956fe4;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      pcVar4 = *(code **)(lVar2 + 0x10);
      ppuVar3 = ppuVar1;
LAB_107956fe4:
      (*pcVar4)(lVar2,ppuVar3);
    }
  }
  _objc_release(ppuVar1);
LAB_107956ff0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107957d64; end: 107957e2f; -[SCSnapDocManagerImpl _retrieveCachedContentForKey:pageInfo:] */

void FUN_107957d64(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010bdf7ce0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar2);
    puVar2 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c13e300();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126d5790;
    _objc_alloc(PTR_PTR_1126d5790);
    func_0x00010c0036a0();
  }
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107958b14; end: 107958bb7; -[SCSnapDocManagerImpl _isPlaintextMediaHeaderData:forMediaType:contentResult:] */

undefined8
FUN_107958b14(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  func_0x00010bfc40e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bec9040(param_1,param_2,param_4);
  if (((int)uVar1 == 0) || (uVar2 = param_3, func_0x00010c08fa60(), uVar2 < 0xc)) {
    param_1 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c105b00(param_3);
    func_0x00010be76aa0(param_1,param_2,uVar2,param_4);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1079593e4; end: 1079596c3; -[SCSnapDocManagerImpl _decryptFileStreaming:outputPath:key:iv:error:] */

undefined **
FUN_1079593e4(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined *param_4,
             undefined **param_5,undefined **param_6,undefined8 *param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_3;
  puVar7 = param_4;
  ppuVar8 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar10 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar1);
  if (((ulong)ppuVar10 & 1) == 0) {
    _objc_retain(param_5);
    ppuVar10 = param_5;
  }
  else {
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    puVar7 = (undefined *)0x1;
    ppuVar6 = param_5;
    func_0x00010bff6b20();
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar2 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar1);
  if (((ulong)ppuVar2 & 1) == 0) {
    _objc_retain(param_6);
    ppuVar2 = param_6;
  }
  else {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    puVar7 = (undefined *)0x1;
    ppuVar6 = param_6;
    func_0x00010bff6b20();
  }
  ppuVar11 = ppuVar10;
  func_0x00010c08fa60();
  if ((ppuVar11 == (undefined **)0x20) &&
     (ppuVar11 = ppuVar2, func_0x00010c08fa60(), ppuVar11 == (undefined **)0x10)) {
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    ppuVar6 = ppuVar5;
    puVar7 = puVar3;
    func_0x00010bcb554c(ppuVar10,ppuVar2,ppuVar5,puVar3);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((param_7 != (undefined8 *)0x0) && (((ulong)ppuVar11 & 1) == 0)) {
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110ea6758;
      puVar7 = (undefined *)0xffffffffffffffff;
      ppuVar8 = ppuVar4;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_7 = puVar1;
      _objc_release(ppuVar4);
    }
    _objc_release(puVar3);
LAB_107959644:
    _objc_release(ppuVar5);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (param_7 != (undefined8 *)0x0) {
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110ea6758;
      puVar7 = (undefined *)0xffffffffffffffff;
      ppuVar8 = ppuVar5;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      ppuVar11 = (undefined **)0x0;
      *param_7 = puVar1;
      goto LAB_107959644;
    }
    ppuVar11 = (undefined **)0x0;
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return ppuVar11;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  _objc_retain(puVar7);
  _objc_retain(ppuVar8);
  if ((ppuVar6 != (undefined **)0x0) &&
     (ppuVar10 = ppuVar6, func_0x00010c08fa60(), ppuVar10 != (undefined **)0x0)) {
    ppuVar10 = ppuVar6;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    if (ppuVar10 != (undefined **)0x0) {
      ppuVar10 = ppuVar6;
      func_0x00010c156ca0(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010795973c;
    }
  }
  ppuVar10 = (undefined **)0x0;
code_r0x00010795973c:
  _objc_release(ppuVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
  return ppuVar10;
}



/* Entry: 10795a098; end: 10795a0eb;  */

void FUN_10795a098(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be304a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10795aa3c; end: 10795ab73; -[SCSnapDocManagerImpl _contentKeyForSnapDocKey:mediaReference:] */

void FUN_10795aa3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = param_4;
  func_0x00010c09d820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126bcf20;
    _objc_alloc_init(PTR_PTR_1126bcf20);
    puVar2 = param_4;
    func_0x00010c0c55e0(param_4);
    _objc_release(param_4);
    func_0x00010c1c4aa0(puVar1,param_2,puVar2);
    puVar2 = PTR_PTR_1126bc860;
    func_0x00010bf4c8c0(PTR_PTR_1126bc860,param_2,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  else {
    puVar2 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    puVar1 = param_4;
    func_0x00010c09d820(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar4 = PTR_PTR_1126bfc90;
    uVar3 = param_3;
    func_0x00010c0c46a0(param_3);
    _objc_release(param_3);
    func_0x00010c119380(puVar4,param_2,uVar3);
    func_0x00010c0295e0(puVar2,param_2,puVar1,puVar4);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



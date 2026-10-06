/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079395d4; end: 107939603;  */

void FUN_1079395d4(ulong *param_1,ulong *param_2)

{
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x00010793949c();
  func_0x000107946c18();
  func_0x0001079464dc();
  func_0x0001079395c4();
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



/* Entry: 107939720; end: 1079397ff;  */

void FUN_107939720(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000107946514();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
  }
  iVar1 = (int)param_1;
  func_0x00010794711c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000107947044();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 107939c74; end: 107939ca7;  */

void FUN_107939c74(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468f4();
  if (in_NG == in_OV) {
    func_0x000107946cbc();
  }
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



/* Entry: 10793a858; end: 10793a8cb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10793a858(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x000107939a00();
  func_0x000107946c18();
  func_0x0001079465bc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x000107946f50();
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    func_0x000107946f80();
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    func_0x0001079472bc();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010598eb08();
        *(ulong **)(unaff_x21 + 0x60) = param_1;
      }
      else {
        func_0x00010bceb748();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb8();
        *(ulong **)(unaff_x21 + 0x68) = param_1;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x70);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb8();
        *(ulong **)(unaff_x21 + 0x70) = param_1;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x78);
      if (param_1 == (ulong *)0x0) {
        func_0x0001079472a4();
        *(ulong **)(unaff_x21 + 0x78) = param_1;
      }
      else {
        func_0x000107934bac();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x80);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb0();
        *(ulong **)(unaff_x21 + 0x80) = param_1;
      }
      else {
        func_0x000107931364();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x88);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107945230();
        *(ulong **)(unaff_x21 + 0x88) = param_1;
      }
      else {
        func_0x00010793863c();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x90);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001079452e0();
        *(ulong **)(unaff_x21 + 0x90) = param_1;
      }
      else {
        FUN_10793692c();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x98);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107945330();
        *(ulong **)(unaff_x21 + 0x98) = param_1;
      }
      else {
        func_0x000107937b50();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xa0);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107945360();
        *(ulong **)(unaff_x21 + 0xa0) = param_1;
      }
      else {
        func_0x0001079381cc();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xa8);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107945390();
        *(ulong **)(unaff_x21 + 0xa8) = param_1;
      }
      else {
        func_0x0001079383c4();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xb0);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001079453dc();
        *(ulong **)(unaff_x21 + 0xb0) = param_1;
      }
      else {
        func_0x00010793a6b0();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xb8);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107945494();
        *(ulong **)(unaff_x21 + 0xb8) = param_1;
      }
      else {
        func_0x00010793a790();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xc0);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0xc0) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 200);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001079454c4();
        *(ulong **)(unaff_x21 + 200) = param_1;
      }
      else {
        func_0x00010793a7d0();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xd0);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010794551c();
        *(ulong **)(unaff_x21 + 0xd0) = param_1;
      }
      else {
        func_0x000107938c94();
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xd8);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010794556c();
        *(ulong **)(unaff_x21 + 0xd8) = param_1;
      }
      else {
        func_0x00010793a7ec();
      }
    }
  }
  if ((uVar1 & 0x3f0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xe0);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0xe0) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xe8);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0xe8) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xf0);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb8();
        *(ulong **)(unaff_x21 + 0xf0) = param_1;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xf8);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_1079455bc();
        *(ulong **)(unaff_x21 + 0xf8) = param_1;
      }
      else {
        func_0x00010793a81c();
      }
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x100);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0x100) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x108);
      if (param_1 == (ulong *)0x0) {
        func_0x00010794561c();
        *(ulong **)(unaff_x21 + 0x108) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x000107939594();
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



/* Entry: 10793aa04; end: 10793aa27;  */

undefined8 FUN_10793aa04(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793aba8; end: 10793abc3;  */

undefined1  [16] FUN_10793aba8(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x000107946da8();
  puVar1 = param_1 + 3;
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



/* Entry: 10793ad68; end: 10793ad6b;  */

void FUN_10793ad68(ulong *param_1)

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



/* Entry: 10793ae98; end: 10793ae9b;  */

undefined8 FUN_10793ae98(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793afa4; end: 10793b05b;  */

long * FUN_10793afa4(long *param_1,long param_2,ulong param_3)

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



/* Entry: 10793b128; end: 10793b153;  */

void FUN_10793b128(void)

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



/* Entry: 10793b3b4; end: 10793b3bf;  */

undefined ** FUN_10793b3b4(void)

{
  return &PTR_DAT_1109ef398;
}



/* Entry: 10793b6b8; end: 10793b813;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10793b6b8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x0001079467a0();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    func_0x0001079469d8();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    func_0x000107946a38();
    param_4 = param_1;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_4 = (long *)0x4;
    func_0x000107946a9c();
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



/* Entry: 10793b914; end: 10793b937;  */

undefined8 FUN_10793b914(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793ba94; end: 10793ba97;  */

undefined8 FUN_10793ba94(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793ba78(param_1);
  return param_1;
}



/* Entry: 10793bd48; end: 10793bd73;  */

void FUN_10793bd48(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_1109eddc0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = &DAT_11383d918;
  param_1[4] = &DAT_11383d918;
  param_1[5] = &DAT_11383d918;
  param_1[6] = &DAT_11383d918;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10793bedc; end: 10793c04b;  */

long * FUN_10793bedc(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
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
      goto LAB_10793bf0c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10793bf0c:
      param_4 = (long *)&UNK_10f438c2d;
      func_0x000107946aa4();
      func_0x000107946398();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10793bf44;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10793bf44:
      param_4 = (long *)&UNK_10f438c57;
      func_0x000107946aa4();
      func_0x000107946498();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    param_2 = 0;
    if (unaff_x22[1] != 0) goto LAB_10793bf7c;
  }
  else if ((int)param_2 != 0) {
LAB_10793bf7c:
    param_4 = (long *)&UNK_10f438c86;
    func_0x000107946aa4();
    param_2 = 3;
    param_1 = unaff_x19;
    func_0x000107946674();
    unaff_x20 = param_1;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x30));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10793bfd8;
  }
  else if ((int)param_2 == 0) goto LAB_10793bfd8;
  param_4 = (long *)&UNK_10f438cba;
  func_0x000107946aa4();
  func_0x000107946674();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10793bfd8:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x38) + 0x14);
    param_1 = (long *)0x5;
    func_0x0001079467f0();
    unaff_x20 = param_1;
  }
  if (*(char *)(unaff_x21 + 0x40) == '\x01') {
    func_0x0001079468c8();
    func_0x000107946f8c();
    func_0x000107946b6c();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
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
  return unaff_x20;
}



/* Entry: 10793c2dc; end: 10793c2ef;  */

void FUN_10793c2dc(void)

{
  func_0x00010793c2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793c424; end: 10793c483;  */

long * FUN_10793c424(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
    func_0x000107946d6c();
    func_0x0001079466ac();
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



/* Entry: 10793c58c; end: 10793c5bb;  */

void FUN_10793c58c(void)

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



/* Entry: 10793c7b8; end: 10793c7c3;  */

undefined ** FUN_10793c7b8(void)

{
  return &PTR_DAT_1109ef648;
}



/* Entry: 10793cabc; end: 10793cacf;  */

void FUN_10793cabc(void)

{
  func_0x00010793c9d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793d2a4; end: 10793d2b3;  */

void FUN_10793d2a4(long *param_1,long param_2)

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



/* Entry: 10793d3f4; end: 10793d463;  */

void FUN_10793d3f4(long param_1)

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



/* Entry: 10793d58c; end: 10793d5ab;  */

undefined ** FUN_10793d58c(void)

{
  return &PTR_DAT_1109ef760;
}



/* Entry: 10793d754; end: 10793d7c3;  */

void FUN_10793d754(void)

{
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x000107947098();
  if ((unaff_w20 & 7) != 0) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010793d330(*(undefined8 *)(unaff_x19 + 0x18));
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010793d598(*(undefined8 *)(unaff_x19 + 0x20));
    }
    if ((unaff_w20 >> 2 & 1) != 0) {
      func_0x000107931420(*(undefined8 *)(unaff_x19 + 0x28));
    }
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x32) = 0;
  *(undefined2 *)(unaff_x19 + 0x30) = 0;
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
  if ((char)*(byte *)((long)puVar1 + 0x17) < '\0') {
    *(undefined1 *)*puVar1 = 0;
    puVar1[1] = 0;
    return;
  }
  *(byte *)puVar1 = 0;
  *(byte *)((long)puVar1 + 0x17) = 0;
  return;
}



/* Entry: 10793dac8; end: 10793db2f;  */

long * FUN_10793dac8(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x0001079463c8();
  while (unaff_w22 != unaff_w21) {
    func_0x00010794635c();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x0001079467a0();
    func_0x000107946d7c();
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



/* Entry: 10793dc10; end: 10793dc23;  */

void FUN_10793dc10(void)

{
  func_0x00010793dbe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793dd7c; end: 10793de07;  */

long * FUN_10793dd7c(long *param_1,long param_2,ulong param_3,long *param_4)

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
    if (unaff_x22[1] == 0) goto LAB_10793ddc0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10793ddc0;
  param_4 = (long *)&UNK_10f438f04;
  func_0x000107946aa4();
  func_0x000107946398();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10793ddc0:
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



/* Entry: 10793e0ac; end: 10793e0bf;  */

void FUN_10793e0ac(void)

{
  func_0x00010793e07c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793e2b8; end: 10793e35f;  */

void FUN_10793e2b8(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109ed4b0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946c64();
  if ((uint)extraout_x8_00 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00010793e300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dedef72)[extraout_x8_00] * 4 + 0x10793e304))();
    return;
  }
  return;
}



/* Entry: 10793e5cc; end: 10793e5fb;  */

void FUN_10793e5cc(ulong *param_1,ulong *param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  ulong extraout_x8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  uVar3 = param_2 == param_1;
  if ((bool)uVar3) {
    return;
  }
  func_0x00010068f438();
  func_0x00010793dd4c();
  func_0x000107946c18();
  func_0x0001079465bc();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto code_r0x00010793e02c;
  func_0x000107947068();
  if (!(bool)uVar3) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      func_0x00010793e1f8();
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



/* Entry: 10793e720; end: 10793e787;  */

void FUN_10793e720(long param_1)

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



/* Entry: 10793e8cc; end: 10793eaa7;  */

long * FUN_10793e8cc(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  undefined8 *puVar4;
  int iVar5;
  
  func_0x000107946704();
  func_0x000107946ac8(param_1[5]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10793e908;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10793e908:
      param_4 = (long *)&UNK_10f438f7f;
      func_0x000107946aa4();
      func_0x000107946398();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x30));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      unaff_x22 = (long *)*unaff_x22;
      goto LAB_10793e940;
    }
  }
  else if ((int)param_2 != 0) {
LAB_10793e940:
    param_4 = (long *)&UNK_10f438fb3;
    func_0x000107946aa4();
    func_0x000107946498();
    param_1 = unaff_x22;
    unaff_x20 = unaff_x22;
  }
  iVar3 = *(int *)(unaff_x21 + 0x18);
  for (puVar4 = (undefined8 *)0x0; iVar3 != (int)puVar4;
      puVar4 = (undefined8 *)(ulong)((int)puVar4 + 1)) {
    func_0x0001079465e4();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_1 = (long *)0x3;
    func_0x0001079467f0();
    unaff_x20 = param_1;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x38));
  if (param_2 < 0) {
    if (puVar4[1] == 0) goto LAB_10793e9c4;
    puVar4 = (undefined8 *)*puVar4;
  }
  else if ((int)param_2 == 0) goto LAB_10793e9c4;
  param_4 = (long *)&UNK_10f438fdf;
  func_0x000107946aa4(puVar4);
  func_0x000107946674();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10793e9c4:
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
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar5);
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
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10793ec00; end: 10793ec8b;  */

long * FUN_10793ec00(long *param_1,long param_2,ulong param_3,long *param_4)

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
    if (unaff_x22[1] == 0) goto LAB_10793ec44;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10793ec44;
  param_4 = (long *)&UNK_10f439009;
  func_0x000107946aa4();
  func_0x000107946398();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10793ec44:
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



/* Entry: 10793eddc; end: 10793edef;  */

void FUN_10793eddc(void)

{
  func_0x00010793edac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793ef58; end: 10793ef5b;  */

undefined8 FUN_10793ef58(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 10793f13c; end: 10793f14f;  */

void FUN_10793f13c(void)

{
  func_0x00010793f10c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793f3b8; end: 10793f3db;  */

undefined ** FUN_10793f3b8(void)

{
  return &PTR_DAT_1109efb48;
}



/* Entry: 10793f690; end: 10793f6af;  */

undefined ** FUN_10793f690(void)

{
  return &PTR_DAT_1109efb90;
}



/* Entry: 10793f944; end: 10793fa53;  */

long FUN_10793f944(long param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  uVar4 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar4 = uVar4 + ((int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = (ushort)(byte)((uint)uVar5 >> 8) * 2;
  lVar2 = ((ulong)CONCAT24(uVar1,(uint)(ushort)((ushort)(byte)uVar5 * 2)) & 0xff) +
          (ulong)(byte)((char)((uint)uVar5 >> 0x10) * '\x02') +
          ((ulong)uVar1 & 0xff) + (ulong)(byte)((char)((uint)uVar5 >> 0x18) * '\x02') + uVar4;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10793fb4c; end: 10793fb57;  */

undefined ** FUN_10793fb4c(void)

{
  return &PTR_DAT_1109efc90;
}



/* Entry: 10793fce8; end: 10793fcfb;  */

void FUN_10793fce8(void)

{
  func_0x00010793fcbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793fec0; end: 10793fee3;  */

undefined8 FUN_10793fec0(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793ffd8; end: 107940017;  */

void FUN_10793ffd8(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000107946940();
  func_0x000107946f94();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x000107931420(unaff_x19[5]);
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



/* Entry: 107940258; end: 107940263;  */

undefined ** FUN_107940258(void)

{
  return &PTR_DAT_1109efe20;
}



/* Entry: 107940428; end: 10794043b;  */

void FUN_107940428(void)

{
  func_0x0001079403f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079406b0; end: 1079406b3;  */

undefined8 FUN_1079406b0(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 107940830; end: 107940857;  */

undefined8 FUN_107940830(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}



/* Entry: 1079409b4; end: 1079409df;  */

void FUN_1079409b4(ulong *param_1)

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



/* Entry: 107940ad8; end: 107940aeb;  */

void FUN_107940ad8(void)

{
  func_0x000107940ab0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107940c58; end: 107940c6b;  */

void FUN_107940c58(void)

{
  func_0x000107940c2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107940de8; end: 107940e0b;  */

undefined8 FUN_107940de8(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10794124c; end: 10794125f;  */

void FUN_10794124c(void)

{
  func_0x00010794120c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079418d8; end: 1079418fb;  */

undefined8 FUN_1079418d8(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107941a28; end: 107941a3b;  */

void FUN_107941a28(void)

{
  func_0x0001079419f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107941cf0; end: 107941d03;  */

void FUN_107941cf0(long param_1)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x000107946e64();
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto code_r0x000107941ca0;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x0001079419f8();
    }
  }
  else {
    if (extraout_w8 != 1) goto code_r0x000107941ca0;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto code_r0x000107941ca0;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1079418d8();
    }
  }
  __ZdlPv();
code_r0x000107941ca0:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 107941f40; end: 107941f53;  */

void FUN_107941f40(void)

{
  func_0x000107941ef4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107942164; end: 107942177;  */

void FUN_107942164(void)

{
  func_0x000107942114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107942388; end: 10794238b;  */

undefined8 FUN_107942388(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107942358(param_1);
  return param_1;
}



/* Entry: 1079425d8; end: 1079425fb;  */

undefined8 FUN_1079425d8(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10794271c; end: 10794272f;  */

void FUN_10794271c(void)

{
  func_0x0001079426f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079428dc; end: 1079428f7;  */

void FUN_1079428dc(void)

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



/* Entry: 107942a6c; end: 107942ad3;  */

void FUN_107942a6c(ulong *param_1,long param_2)

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



/* Entry: 107942d84; end: 107942de3;  */

void FUN_107942d84(void)

{
  func_0x000107942490();
  func_0x0001079462e4();
  return;
}



/* Entry: 107942fc0; end: 107942fef;  */

void FUN_107942fc0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468d4();
  func_0x000107946ef0();
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



/* Entry: 10794325c; end: 10794327f;  */

undefined ** FUN_10794325c(void)

{
  return &PTR_DAT_1109f0560;
}



/* Entry: 1079437e4; end: 10794380b;  */

void FUN_1079437e4(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 107943940; end: 107943967;  */

void FUN_107943940(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 107943a78; end: 107943a9f;  */

void FUN_107943a78(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 107944f1c; end: 1079451cb;  */

void FUN_107944f1c(long param_1)

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
  func_0x000107946d3c(&PTR_DAT_1109edb90);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946778();
  FUN_107932584();
  func_0x000107946dd0();
  return;
}



/* Entry: 1079455bc; end: 10794561b;  */

long FUN_1079455bc(long param_1)

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
  func_0x0001079473a8(&PTR_DAT_1109ed370);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined2 *)(lVar1 + 0x14) = 0;
  func_0x00010793a81c();
  return param_1;
}



/* Entry: 107945990; end: 107945a2b;  */

void FUN_107945990(long param_1)

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
  func_0x000107946d3c(&PTR_DAT_1109ed640);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946778();
  func_0x000107933af0();
  func_0x000107946dd0();
  return;
}



/* Entry: 107945cc0; end: 107945e93;  */

void FUN_107945cc0(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107946b0c();
  if (param_1 == 0) {
    func_0x000107946b04();
  }
  else {
    func_0x0001079466e4();
  }
  func_0x000107946e4c();
  func_0x000107946e58(&PTR_DAT_1109ed8c0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  *(undefined4 *)(unaff_x21 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  lVar1 = unaff_x20 + 0x18;
  func_0x000107946e18();
  *(long *)(unaff_x21 + 0x18) = lVar1;
  lVar1 = unaff_x20 + 0x20;
  func_0x000107946e18();
  *(long *)(unaff_x21 + 0x20) = lVar1;
  if ((*(byte *)(unaff_x21 + 0x10) & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    func_0x000107944dcc();
  }
  *(undefined8 *)(unaff_x21 + 0x28) = unaff_x19;
  return;
}



/* Entry: 107946178; end: 1079461d3;  */

long FUN_107946178(long param_1)

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
  func_0x0001079473a8(&PTR_DAT_1109ec1a0);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  func_0x0001079425ac();
  return param_1;
}



/* Entry: 107947570; end: 10794761f;  */

long * FUN_107947570(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = param_1;
  if ((int)param_1[2] != 0) {
    plVar1 = param_1;
    func_0x00010794772c();
    plVar2 = (long *)0x8;
    func_0x0001001a59d0(8,plVar1);
    func_0x000107947720();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x14) == '\x01') {
    func_0x00010794772c();
    param_2 = (long *)0x10;
    func_0x0001001a59d0(0x10,plVar2);
    func_0x000107947720();
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



/* Entry: 107947e58; end: 107947ecb; +[SCMGLMapLocalizationUtil _nextLocale:] */

void FUN_107947e58(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c11f440(param_3,param_2,&PTR____CFConstantStringClassReference_110db3638,4);
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if ((ppuVar1 != (undefined **)0x0) && (ppuVar1 != (undefined **)0x7fffffffffffffff)) {
    ppuVar2 = param_3;
    func_0x00010c260c20(param_3,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107948a24; end: 1079491ff;  */

void FUN_107948a24(long param_1,undefined8 ****param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined *puVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined *puVar7;
  undefined8 ***pppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined8 ****ppppuVar20;
  undefined8 **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined8 **appuStack_188 [33];
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar14 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    lVar1 = param_1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(param_2);
    ppppuVar5 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar15 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    ppppuVar20 = ppppuVar15;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1b0 = (undefined8 **)PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0xc2000000;
    puStack_1a0 = &UNK_1079489dc;
    puStack_198 = &UNK_1108ddb28;
    _objc_retain(lVar1);
    ppppuVar6 = (undefined8 ****)&ppuStack_1b0;
    ppppuVar2 = ppppuVar20;
    lStack_190 = lVar1;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar20);
    _objc_release(ppppuVar15);
    if (ppppuVar2 == (undefined8 ****)0x0) {
      ppppuVar15 = (undefined8 ****)0x0;
    }
    else {
      ppppuVar15 = (undefined8 ****)PTR_PTR_1126d0918;
      _objc_alloc();
      ppppuVar20 = ppppuVar5;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar3 = ppppuVar5;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_78 = ppppuVar2;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar6 = ppppuVar20;
      param_5 = puVar4;
      func_0x00010c04d8a0();
      _objc_release(puVar4);
      _objc_release(ppppuVar3);
      _objc_release(ppppuVar20);
    }
    _objc_release(ppppuVar2);
    _objc_release(lStack_190);
    _objc_release(ppppuVar5);
    _objc_release(lVar1);
    _objc_release(lVar1);
    if (ppppuVar15 == (undefined8 ****)0x0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      ppppuVar6 = &pppuStack_80;
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_80 = ppppuVar15;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    ppppuVar15 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar5 = ppppuVar15;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar6 = ppppuVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppppuVar6 != (undefined8 ****)0x0) {
      ppppuVar20 = (undefined8 ****)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppppuVar5);
        }
        uVar17 = *(undefined8 *)((long)ppppuVar20 * 8);
        func_0x00010bf3cf60(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar4);
        _objc_release(uVar17);
        ppppuVar20 = (undefined8 ****)((long)ppppuVar20 + 1);
      } while (ppppuVar6 != ppppuVar20);
      ppppuVar6 = ppppuVar5;
      func_0x00010bf52a60();
    }
    _objc_release(ppppuVar5);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        puVar16 = puVar4;
        func_0x00010c0dff20(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa140(puVar7);
        _objc_release(puVar16);
        lVar19 = lVar19 + 1;
      } while (lVar1 != lVar19);
      lVar1 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    pppuVar8 = (undefined8 ***)PTR_PTR_1126d0918;
    _objc_alloc();
    ppppuVar5 = ppppuVar15;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar20 = ppppuVar15;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar6 = ppppuVar5;
    param_5 = puVar7;
    func_0x00010c04d8a0();
    _objc_release(ppppuVar20);
    _objc_release(ppppuVar5);
    puVar16 = puVar7;
    func_0x00010bf529e0();
    if (puVar16 == (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      ppppuVar6 = (undefined8 ****)appuStack_188;
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      appuStack_188[0] = pppuVar8;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(pppuVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
  }
  _objc_release(ppppuVar15);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(ppppuVar14);
  _objc_retain(ppppuVar6);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bf8d2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_1);
  _objc_retain(ppppuVar14);
  _objc_retain(ppppuVar6);
  lVar9 = lVar1;
  func_0x00010bf43280(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar16 = PTR_PTR_1126d0918;
  _objc_alloc(PTR_PTR_1126d0918);
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf8d2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfdd6a0();
  ppuVar18 = (undefined **)PTR_PTR_1126d5160;
  if ((int)lVar1 == 0) {
    lVar1 = lVar19;
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010bfd89a0();
    _objc_release(lVar1);
    ppuVar18 = (undefined **)PTR_PTR_1126d5160;
    lVar1 = lVar19;
    if ((int)lVar10 != 0) {
      func_0x00010c241660(lVar19);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar1;
      func_0x00010c09e360();
      _objc_retainAutoreleasedReturnValue();
LAB_1079490fc:
      func_0x000107947a48(ppuVar18,lVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      goto LAB_107949120;
    }
    lVar10 = lVar19;
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bfdd6a0();
    _objc_release(lVar10);
    ppuVar18 = (undefined **)PTR_PTR_1126d5160;
    if ((int)lVar11 != 0) {
      func_0x00010c241660(lVar19);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar1;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1079490fc;
    }
    ppuVar18 = (undefined **)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c2711a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107947a48(ppuVar18,lVar1);
    _objc_retainAutoreleasedReturnValue();
LAB_107949120:
    _objc_release(lVar1);
  }
  ppuVar12 = ppuVar18;
  func_0x00010c08fa60();
  ppuVar13 = ppuVar18;
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar13 = &PTR____CFConstantStringClassReference_110e2c118;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2c118,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar18);
  }
  _objc_release(lVar19);
  _objc_release(param_1);
  func_0x00010c04d8a0(puVar16);
  _objc_release(ppuVar13);
  _objc_release(lVar9);
  _objc_release(ppppuVar6);
  _objc_release(ppppuVar14);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(ppppuVar6);
  _objc_release(ppppuVar14);
  _objc_release(param_1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 10794b6dc; end: 10794b6e7;  */

bool FUN_10794b6dc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10794b9c0; end: 10794ba27; +[SCMTInternalGetSnapsResponse descriptor] */

void FUN_10794b9c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113726fa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b64df0,
                        &PTR____CFConstantStringClassReference_110ea6278,
                        &PTR_s_snapchat_map_11323a6d0,&PTR_s_snapsArray_11323a708,1,0x10,0x1c);
    puRam0000000113726fa0 = puVar1;
  }
  return;
}



/* Entry: 10794c398; end: 10794c543;  */

void FUN_10794c398(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x48) != 7) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1f440();
    if (iVar1 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c23f220(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf10660(uVar5);
      uVar5 = 0;
      _objc_retain(0);
      _objc_release(uVar2);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(param_2);
      _objc_release(puVar4);
      func_0x00010bf436e0(param_2);
      goto LAB_10794c4fc;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c23f220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010bf10680(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar5 = param_2;
LAB_10794c4fc:
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10794cae8; end: 10794cb97;  */

void FUN_10794cae8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf002e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0e00e0(uVar2,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be30640(lVar1,param_2,*(undefined8 *)(param_1 + 0x28),uVar3,uVar2,
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10794e2e8; end: 10794e41b;  */

void FUN_10794e2e8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0b760();
    if (iVar1 == 5) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      _objc_retain(uVar3);
      uVar2 = *(undefined8 *)(lVar4 + 0x28);
      *(undefined8 *)(lVar4 + 0x28) = uVar3;
      _objc_release(uVar2);
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c0ed100();
      uVar2 = 3;
      if (iVar1 != 1) {
        uVar2 = 0;
      }
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = uVar2;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  func_0x00010c0c0800(param_2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10794ecb0; end: 10794ed1f;  */

void FUN_10794ecb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf97200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010794ee7c(uVar1,uVar2,uVar3,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined1 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10794f87c; end: 10794fce7;  */

void FUN_10794f87c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x00010bf93e60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x20);
    func_0x00010bf93e60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar5);
    if (lVar9 != 0) {
      uVar16 = *(undefined8 *)(param_1 + 0x30);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar3);
      _objc_retain(uVar16);
      _objc_retain(uVar2);
      _objc_retain(uVar1);
      puVar11 = PTR_PTR_1126ae6b8;
      _objc_retain(uVar16);
      _objc_retain(uVar1);
      _objc_retain(uVar3);
      _objc_retain(uVar2);
      func_0x00010bf54280(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar16);
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar16);
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar16 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar16);
      puVar14 = puVar11;
      func_0x00010c0b8600(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar16);
      goto LAB_10794fcc0;
    }
  }
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108020694();
  _objc_release(uVar16);
  iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0b760();
  puVar11 = *(undefined **)(param_1 + 0x28);
  if (iVar4 == 5) {
    func_0x00010794ffd4();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bfc5880();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c08fa60();
    puVar14 = PTR_PTR_1126ae6b8;
    if (puVar13 == (undefined *)0x0) {
      puVar13 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar14);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar13 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_alloc();
      func_0x00010bfee820();
      puVar15 = PTR_PTR_1126d5748;
      puVar14 = PTR_PTR_1126ae6b8;
      if (puVar13 == (undefined *)0x0) {
        puVar15 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0860a0(puVar14);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf0b760(*(undefined8 *)(param_1 + 0x20));
        uVar16 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0c5180(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c55e0();
        func_0x00010c0d84c0(puVar15);
        _objc_release(uVar16);
        puVar14 = PTR_PTR_1126ae6b8;
        puVar10 = PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0860a0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
      }
      _objc_release(puVar15);
    }
  }
  else {
    func_0x00010794f724(puVar11,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126d5748;
    func_0x00010bf0b760(*(undefined8 *)(param_1 + 0x20));
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c5180(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c55e0();
    func_0x00010c0d84c0(puVar12);
    _objc_release(uVar16);
    puVar14 = PTR_PTR_1126ae6b8;
    puVar13 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar14);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar13);
  _objc_release(puVar12);
LAB_10794fcc0:
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 107950544; end: 1079505ef;  */

void FUN_107950544(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c09ea00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b3c0();
  uVar3 = param_2;
  uVar4 = param_1;
  func_0x00010c09ea00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0b55a0(uVar3);
  func_0x00010c021a60(param_1,uVar4,puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10795116c; end: 10795120f; -[SCMediaReferenceFactoryImpl initWithContentDelivery:mediaContextTypeToTTLInDays:] */

undefined1 *
FUN_10795116c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8ee0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107951930; end: 107951d77;  */

void FUN_107951930(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 unaff_x23;
  long lVar11;
  ulong unaff_x24;
  long lVar12;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_228 [128];
  long lStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  puVar4 = param_1;
  func_0x00010bf529e0(param_1);
  func_0x00010bffc4a0(puVar1,param_2,puVar4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  puStack_138 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_f0,0x10);
  if (param_1 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar10 = 0;
    unaff_x28 = *plStack_120;
    do {
      puVar4 = (undefined *)0x0;
      uVar8 = uVar7;
      do {
        if (*plStack_120 != unaff_x28) {
          _objc_enumerationMutation(puStack_138);
        }
        unaff_x24 = *(ulong *)(lStack_128 + (long)puVar4 * 8);
        uVar7 = unaff_x24;
        func_0x00010bfc76a0(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1,param_2,unaff_x24,uVar7);
        _objc_release(uVar7);
        unaff_x25 = unaff_x24;
        func_0x00010bfc4120();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = unaff_x25;
        func_0x00010bfcaaa0();
        if (uVar7 - 1 < 4) {
          unaff_x26 = *(ulong *)(&UNK_10dee0620 + (uVar7 - 1) * 8);
        }
        else {
          unaff_x26 = 0;
        }
        if (uVar10 - 1 < 4) {
          unaff_x27 = *(ulong *)(&UNK_10dee0620 + (uVar10 - 1) * 8);
        }
        else {
          unaff_x27 = 0;
        }
        _objc_release(unaff_x25);
        uVar7 = uVar8;
        if (unaff_x27 < unaff_x26) {
          uVar7 = unaff_x24;
          func_0x00010bfc4120();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar7;
          func_0x00010bfcaaa0();
          _objc_release(uVar7);
          func_0x00010bfc4120();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010bfc79a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010bf987e0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = unaff_x26;
          func_0x00010b7f5498();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          unaff_x27 = uVar7;
        }
        puVar4 = puVar4 + 1;
        uVar8 = uVar7;
      } while (param_1 != puVar4);
      param_1 = puStack_138;
      func_0x00010bf52a60(puStack_138,param_2,&uStack_130,auStack_f0,0x10);
    } while (param_1 != (undefined *)0x0);
    unaff_x23 = 0;
  }
  puVar4 = puStack_138;
  _objc_release(puStack_138);
  puVar5 = PTR_PTR_1126d5758;
  _objc_alloc();
  func_0x00010c04c320();
  _objc_release(puVar1);
  _objc_release(uVar7);
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puStack_158 = puVar4;
    uStack_148 = 0x107951bd0;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_1a0 = unaff_x28;
    uStack_198 = unaff_x27;
    uStack_190 = unaff_x26;
    uStack_188 = unaff_x25;
    uStack_180 = unaff_x24;
    uStack_178 = unaff_x23;
    puStack_170 = puVar5;
    uStack_168 = uVar7;
    puStack_160 = puVar1;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    puVar1 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,&uStack_270,auStack_228,0x10);
    if (puVar1 == (undefined *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      lVar9 = 0;
      lVar12 = *plStack_260;
      do {
        puVar4 = (undefined *)0x0;
        do {
          if (*plStack_260 != lVar12) {
            _objc_enumerationMutation(puVar2);
          }
          lVar11 = *(long *)(lStack_268 + (long)puVar4 * 8);
          lVar3 = lVar11;
          func_0x00010c252d60();
          if (lVar3 - 1U < 4) {
            uVar7 = *(ulong *)(&UNK_10dee0620 + (lVar3 - 1U) * 8);
          }
          else {
            uVar7 = 0;
          }
          if (lVar9 - 1U < 4) {
            uVar10 = *(ulong *)(&UNK_10dee0620 + (lVar9 - 1U) * 8);
          }
          else {
            uVar10 = 0;
          }
          if (uVar10 < uVar7) {
            lVar9 = lVar11;
            func_0x00010c252d60();
            func_0x00010bf987e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar6);
            lVar6 = lVar11;
          }
          puVar4 = puVar4 + 1;
        } while (puVar1 != puVar4);
        puVar1 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_270,auStack_228,0x10);
      } while (puVar1 != (undefined *)0x0);
    }
    puVar5 = PTR_PTR_1126d5760;
    _objc_alloc(PTR_PTR_1126d5760);
    func_0x00010c04c260();
    _objc_release(lVar6);
    puVar1 = puVar2;
    _objc_release();
    if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) &&
       (___stack_chk_fail(), puVar5 = puVar2, puVar1 < (undefined *)0x2d)) {
      puVar5 = *(undefined **)(&PTR_PTR_1109f12e8)[(long)puVar1];
      _objc_retain(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107952488; end: 1079527bb; -[SCSnapDocManagerImpl initWithContentDelivery:mediaContextTypeToTTLInDays:mediaContextTypeToIsFirstFrameRequired:circumstanceEngine:temporaryFileWriter:] */

undefined8 *
FUN_107952488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_80 = PTR_PTR_1126f8ee8;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d5778;
    _objc_alloc_init();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_6);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_6);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    lVar4 = param_6;
    func_0x00010c0b84a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      *(undefined1 *)(puVar1 + 10) = 0;
    }
    else {
      lVar5 = lVar4;
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf1f3c0();
      *(char *)(puVar1 + 10) = (char)lVar6;
      _objc_release(lVar5);
    }
    lVar5 = param_6;
    func_0x00010bf1f440();
    if ((int)lVar5 != 0) {
      puVar3 = PTR_PTR_1126d5788;
      _objc_alloc();
      func_0x00010c051060();
      uVar2 = puVar1[0xd];
      puVar1[0xd] = puVar3;
      _objc_release(uVar2);
    }
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_6);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0xc) = 0;
    _objc_release(param_6);
    _objc_release(lVar4);
    _objc_release(param_6);
    _objc_release(param_6);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107952c68; end: 107952d37;  */

undefined8 FUN_107952c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  _objc_retain(param_3);
  func_0x00010c11d5c0(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_3);
  return 0;
}



/* Entry: 1079534b0; end: 10795376f; -[SCSnapDocManagerImpl associateMediaForKey:mediaMetadata:snapDoc:context:completePrefetch:completion:] */

void FUN_1079534b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined1 uStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  
  ppuVar6 = &puStack_100;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar2 = param_4;
  func_0x00010c0c5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  lStack_80 = 0;
  uVar3 = param_1;
  func_0x00010bee77e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_80;
  _objc_retain(lStack_80);
  _objc_release(uVar2);
  if (lVar1 == 0) {
    _objc_initWeak(auStack_88,param_1);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    puStack_b8 = &UNK_107953770;
    puStack_b0 = &UNK_1109f1560;
    _objc_copyWeak(auStack_98,auStack_88);
    uStack_90 = param_7;
    _objc_retain(param_6);
    uStack_a8 = param_6;
    _objc_retain(param_8);
    ppuVar5 = &puStack_c8;
    lStack_a0 = param_8;
    _objc_retainBlock(ppuVar5);
    puStack_100 = puVar4;
    uStack_f8 = 0xc2000000;
    puStack_f0 = &UNK_1079537dc;
    puStack_e8 = &UNK_11084a9e8;
    _objc_retain(param_3);
    uStack_e0 = param_3;
    _objc_retain(param_4);
    uStack_d8 = param_4;
    _objc_retain(param_8);
    lStack_d0 = param_8;
    _objc_retainBlock(&puStack_100);
    func_0x00010be5e180(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    _objc_release(lStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(ppuVar5);
    _objc_release(lStack_a0);
    _objc_release(uStack_a8);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_88);
  }
  else {
    func_0x00010be52ae0(param_1);
    puVar4 = PTR_PTR_1126d5770;
    _objc_alloc(PTR_PTR_1126d5770);
    func_0x00010c04c260();
    (**(code **)(param_8 + 0x10))(param_8,puVar4);
    _objc_release(puVar4);
    param_1 = 0;
  }
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107953d9c; end: 107953da3;  */

void FUN_107953d9c(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  func_0x00010bf529e0(param_2);
  func_0x00010bffc4a0();
  _objc_retain(param_2);
  puVar12 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (puVar12 == (undefined *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    lVar8 = 0;
    do {
      puVar6 = (undefined *)0x0;
      lVar4 = lVar7;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        lVar10 = *(long *)((long)puVar6 * 8);
        lVar7 = lVar10;
        func_0x00010bfc76a0(lVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(lVar7);
        lVar7 = lVar10;
        func_0x00010bfc4120();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar7;
        func_0x00010bfcaaa0();
        if (lVar9 - 1U < 4) {
          uVar11 = *(ulong *)(&UNK_10dee0620 + (lVar9 - 1U) * 8);
        }
        else {
          uVar11 = 0;
        }
        if (lVar8 - 1U < 4) {
          uVar13 = *(ulong *)(&UNK_10dee0620 + (lVar8 - 1U) * 8);
        }
        else {
          uVar13 = 0;
        }
        _objc_release(lVar7);
        lVar7 = lVar4;
        if (uVar13 < uVar11) {
          lVar7 = lVar10;
          func_0x00010bfc4120();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bfcaaa0();
          _objc_release(lVar7);
          func_0x00010bfc4120();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar10;
          func_0x00010bfc79a0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar9;
          func_0x00010bf987e0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar3;
          func_0x00010b7f5498();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(lVar9);
          _objc_release(lVar10);
        }
        puVar6 = puVar6 + 1;
        lVar4 = lVar7;
      } while (puVar12 != puVar6);
      puVar12 = param_2;
      func_0x00010bf52a60();
    } while (puVar12 != (undefined *)0x0);
  }
  _objc_release(param_2);
  puVar12 = PTR_PTR_1126d5758;
  _objc_alloc();
  func_0x00010c04c320();
  _objc_release(puVar2);
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar2 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (puVar2 == (undefined *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      lVar8 = 0;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_2);
          }
          lVar9 = *(long *)((long)puVar12 * 8);
          lVar4 = lVar9;
          func_0x00010c252d60();
          if (lVar4 - 1U < 4) {
            uVar11 = *(ulong *)(&UNK_10dee0620 + (lVar4 - 1U) * 8);
          }
          else {
            uVar11 = 0;
          }
          if (lVar8 - 1U < 4) {
            uVar13 = *(ulong *)(&UNK_10dee0620 + (lVar8 - 1U) * 8);
          }
          else {
            uVar13 = 0;
          }
          if (uVar13 < uVar11) {
            lVar8 = lVar9;
            func_0x00010c252d60();
            func_0x00010bf987e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar7);
            lVar7 = lVar9;
          }
          puVar12 = puVar12 + 1;
        } while (puVar2 != puVar12);
        puVar2 = param_2;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    puVar12 = PTR_PTR_1126d5760;
    _objc_alloc(PTR_PTR_1126d5760);
    func_0x00010c04c260();
    _objc_release(lVar7);
    puVar2 = param_2;
    _objc_release();
    if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) &&
       (___stack_chk_fail(), puVar12 = param_2, puVar2 < (undefined *)0x2d)) {
      puVar12 = *(undefined **)(&PTR_PTR_1109f12e8)[(long)puVar2];
      _objc_retain(puVar12);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 107954cb0; end: 107954cbb;  */

void FUN_107954cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107954cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  return;
}



/* Entry: 1079552d0; end: 1079552d3; -[SCSnapDocManagerImpl updateMediaReferenceWithKey:snapDoc:contentWriter:mediaId:error:] */

void FUN_1079552d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedb670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateMediaReferenceWithKey_sna_112594740);
  return;
}



/* Entry: 107955840; end: 1079558ab; -[SCSnapDocManagerImpl authClaimMediaWithKey:snapDoc:error:] */

void FUN_107955840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  func_0x00010c0c6280(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf10640(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107956360; end: 107956363;  */

void FUN_107956360(void)

{
  return;
}



/* Entry: 107956d2c; end: 107956f4f; -[SCSnapDocManagerImpl retrieveMediaForIdWithMediaId:snapDoc:requestContext:onComplete:onError:] */

/* WARNING: Removing unreachable block (ram,0x000107956e1c) */
/* WARNING: Removing unreachable block (ram,0x000107956e20) */

void FUN_107956d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126bcf20;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010af28d38(param_3);
  _objc_release(param_3);
  func_0x00010c1c4aa0(puVar1);
  puVar2 = PTR_PTR_1126b25c0;
  _objc_alloc(PTR_PTR_1126b25c0);
  uVar3 = param_4;
  func_0x00010bf25f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c008360(puVar2);
  _objc_retain(0);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  uVar3 = param_5;
  func_0x00010c0f1300(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032f60(puVar4);
  _objc_release(uVar3);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c13eb40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(0);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 107957cc0; end: 107957d63; -[SCSnapDocManagerImpl _retrieveContentResultForContentKey:requestContext:completion:] */

void FUN_107957cc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c13e5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107958a14; end: 107958b13; -[SCSnapDocManagerImpl _headerDataForFilePath:] */

void FUN_107958a14(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lStack_50;
  long lStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  lStack_48 = 0;
  puVar3 = PTR__OBJC_CLASS___NSFileHandle_1126bc690;
  func_0x00010bfacce0(PTR__OBJC_CLASS___NSFileHandle_1126bc690,param_2,puVar2,&lStack_48);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lStack_48;
  _objc_retain(lStack_48);
  if (puVar3 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lStack_50 = 0;
    puVar4 = puVar3;
    func_0x00010c1213e0(puVar3,param_2,0xc,&lStack_50);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_50;
    _objc_retain(lStack_50);
    _objc_release(lVar5);
    func_0x00010bf3da80(puVar3,param_2,0);
    puVar6 = (undefined *)0x0;
    if (lVar1 == 0) {
      _objc_retain(puVar4);
      puVar6 = puVar4;
    }
    _objc_release(puVar4);
    lVar5 = lVar1;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107959238; end: 1079593e3; -[SCSnapDocManagerImpl _decryptContentResultInMemory:key:iv:] */

void FUN_107959238(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = param_3;
    func_0x00010b7f5374();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      _objc_retain(param_3);
      puVar5 = param_3;
    }
    else {
      puVar5 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf18ba0();
      _objc_release(puVar5);
      lVar2 = param_1;
      func_0x00010bdf8ae0(param_1,param_2,puVar1,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95660();
      _objc_release(puVar5);
      lVar3 = lVar2;
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        puVar5 = param_3;
        func_0x00010bfc40e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be8f7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f538,puVar5)
        ;
        _objc_release(puVar5);
      }
      puVar5 = PTR_PTR_1126d5790;
      _objc_alloc(PTR_PTR_1126d5790);
      puVar4 = param_3;
      func_0x00010bfc40e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0036a0(puVar5,param_2,puVar4,lVar2,1);
      _objc_release(puVar4);
      _objc_release(lVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10795a04c; end: 10795a097;  */

void FUN_10795a04c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



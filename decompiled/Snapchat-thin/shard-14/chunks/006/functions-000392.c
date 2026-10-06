/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b500794; end: 10b500797;  */

long FUN_10b500794(long param_1)

{
  func_0x00010b504218();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b500574();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b500798; end: 10b5007ab;  */

void FUN_10b500798(void)

{
  FUN_10b500760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5007ac; end: 10b5007b7;  */

undefined ** FUN_10b5007ac(void)

{
  return &PTR_DAT_110cf67b0;
}



/* Entry: 10b5007b8; end: 10b5007f7;  */

void FUN_10b5007b8(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5045a0();
  if ((extraout_x8 & 1) != 0) {
    FUN_10b5005d0(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 10b5007f8; end: 10b50086f;  */

long * FUN_10b5007f8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b504084();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010b50402c();
    func_0x00010b504368();
    func_0x00010b5040bc();
    param_4 = param_1;
  }
  if ((uVar1 & 1) != 0) {
    func_0x00010b503fc4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504254();
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



/* Entry: 10b500870; end: 10b5008e3;  */

void FUN_10b500870(long param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_w8;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    iVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
      FUN_10b5006a4();
      func_0x00010b503f00();
      iVar2 = iVar2 + extraout_w8 + 1;
    }
    iVar2 = iVar2 + (uVar1 & 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b504268();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10b5008e4; end: 10b5008e7;  */

void FUN_10b5008e4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b504318();
  puVar2 = *(ulong **)(param_1 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar3 = *(ulong **)(unaff_x21 + 0x18);
      if (puVar3 == (ulong *)0x0) {
        func_0x00010b503b20();
        *(ulong **)(unaff_x21 + 0x18) = puVar2;
      }
      else {
        FUN_10b500708();
        puVar2 = puVar3;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x20) = *(undefined1 *)(unaff_x20 + 0x20);
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b50410c();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5008e8; end: 10b500977;  */

void FUN_10b5008e8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b504318();
  puVar2 = *(ulong **)(param_1 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar3 = *(ulong **)(unaff_x21 + 0x18);
      if (puVar3 == (ulong *)0x0) {
        func_0x00010b503b20();
        *(ulong **)(unaff_x21 + 0x18) = puVar2;
      }
      else {
        FUN_10b500708();
        puVar2 = puVar3;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x20) = *(undefined1 *)(unaff_x20 + 0x20);
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b50410c();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b500978; end: 10b5009ff;  */

void FUN_10b500978(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 4) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010b5045b4();
      uVar2 = extraout_x8_00;
    }
    if (uVar2 != 0) goto LAB_10b5009dc;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b4fc7b8();
    }
  }
  else {
    if ((iVar1 != 3) && (iVar1 != 2)) goto LAB_10b5009dc;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010b5045b4();
      uVar2 = extraout_x8;
    }
    if (uVar2 != 0) goto LAB_10b5009dc;
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x000107c316b0();
    }
  }
  __ZdlPv();
LAB_10b5009dc:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 10b500a00; end: 10b500a43;  */

long FUN_10b500a00(long param_1)

{
  func_0x00010b504218();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4fde44();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_10b500978(param_1);
  }
  return param_1;
}



/* Entry: 10b500a44; end: 10b500a47;  */

long FUN_10b500a44(long param_1)

{
  func_0x00010b504218();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4fde44();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_10b500978(param_1);
  }
  return param_1;
}



/* Entry: 10b500a48; end: 10b500a5b;  */

void FUN_10b500a48(void)

{
  FUN_10b500a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b500a5c; end: 10b500a67;  */

undefined ** FUN_10b500a5c(void)

{
  return &PTR_DAT_110cf6808;
}



/* Entry: 10b500a68; end: 10b500ba7;  */

void FUN_10b500a68(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00010b5045a0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5046a4();
  }
  FUN_10b500978();
  func_0x00010b504370();
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



/* Entry: 10b500ba8; end: 10b500ccf;  */

void FUN_10b500ba8(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x00010b504618();
    if (param_1 == (ulong *)0x0) {
      func_0x00010b5045ac();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_10b4fde18();
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x28);
  if (iVar2 == 0) goto LAB_10b500cb4;
  iVar3 = (int)unaff_x21[5];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      param_1 = unaff_x21;
      FUN_10b500978();
    }
    *(int *)(unaff_x21 + 5) = iVar2;
  }
  if (iVar2 == 4) {
    if (iVar3 == 4) {
      func_0x00010b5045f0();
      func_0x00010b4fc778();
      goto LAB_10b500cb4;
    }
    FUN_10b503b94();
    param_1 = unaff_x22;
LAB_10b500cb0:
    unaff_x21[4] = (ulong)param_1;
  }
  else {
    if (iVar2 == 3) {
      if (iVar3 != 3) {
LAB_10b500c70:
        func_0x000107c284d4();
        param_1 = unaff_x22;
        goto LAB_10b500cb0;
      }
      func_0x00010b5045f0();
    }
    else {
      if (iVar2 != 2) goto LAB_10b500cb4;
      if (iVar3 != 2) goto LAB_10b500c70;
      func_0x00010b5045f0();
    }
    func_0x00010bd1b688();
  }
LAB_10b500cb4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b50410c();
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



/* Entry: 10b500cd0; end: 10b500cfb;  */

long FUN_10b500cd0(long param_1)

{
  func_0x00010b504218();
  FUN_10b502b0c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b500cfc; end: 10b500cff;  */

long FUN_10b500cfc(long param_1)

{
  func_0x00010b504218();
  FUN_10b502b0c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b500d00; end: 10b500d13;  */

void FUN_10b500d00(void)

{
  FUN_10b500cd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b500d14; end: 10b500d1f;  */

undefined ** FUN_10b500d14(void)

{
  return &PTR_DAT_110cf6870;
}



/* Entry: 10b500d20; end: 10b500d5f;  */

void FUN_10b500d20(long param_1)

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



/* Entry: 10b500d60; end: 10b500e33;  */

long * FUN_10b500d60(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b504084();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x00010b503fa4();
    func_0x00010b504100();
    func_0x00010b504330();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504254();
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



/* Entry: 10b500e34; end: 10b500e37;  */

void FUN_10b500e34(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x00010b5043e8();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_10b500e70();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504170();
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



/* Entry: 10b500e38; end: 10b500e6f;  */

void FUN_10b500e38(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x00010b5043e8();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_10b500e70();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504170();
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



/* Entry: 10b500e70; end: 10b500e7f;  */

void FUN_10b500e70(long *param_1,long param_2)

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



/* Entry: 10b500e80; end: 10b500eff;  */

void FUN_10b500e80(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00010b5044f0();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5045b4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b500edc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_10b500cd0();
    }
  }
  else {
    if ((extraout_w8 != 2) && (extraout_w8 != 1)) goto LAB_10b500edc;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5045b4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b500edc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107c316b0();
    }
  }
  __ZdlPv();
LAB_10b500edc:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b500f00; end: 10b500f33;  */

long FUN_10b500f00(long param_1)

{
  func_0x00010b504218();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b500e80(param_1);
  }
  return param_1;
}



/* Entry: 10b500f34; end: 10b500f37;  */

long FUN_10b500f34(long param_1)

{
  func_0x00010b504218();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b500e80(param_1);
  }
  return param_1;
}



/* Entry: 10b500f38; end: 10b500f4b;  */

void FUN_10b500f38(void)

{
  FUN_10b500f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b500f4c; end: 10b500f57;  */

undefined ** FUN_10b500f4c(void)

{
  return &PTR_DAT_110cf68c8;
}



/* Entry: 10b500f58; end: 10b50106b;  */

void FUN_10b500f58(long param_1)

{
  ulong *puVar1;
  
  FUN_10b500e80();
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



/* Entry: 10b50106c; end: 10b50106f;  */

void FUN_10b50106c(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b501140;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b500e80();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_10b500e38();
      goto LAB_10b501140;
    }
    FUN_10b503bf0();
    param_1 = unaff_x22;
LAB_10b50113c:
    unaff_x21[2] = (ulong)param_1;
  }
  else {
    if (iVar1 == 2) {
      if (iVar2 != 2) {
LAB_10b5010fc:
        func_0x00010b5046bc();
        goto LAB_10b50113c;
      }
      func_0x00010b5041b4();
    }
    else {
      if (iVar1 != 1) goto LAB_10b501140;
      if (iVar2 != 1) goto LAB_10b5010fc;
      func_0x00010b5041b4();
    }
    func_0x00010bd1b688();
  }
LAB_10b501140:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b50410c();
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



/* Entry: 10b501070; end: 10b50115b;  */

void FUN_10b501070(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b501140;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b500e80();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_10b500e38();
      goto LAB_10b501140;
    }
    FUN_10b503bf0();
    param_1 = unaff_x22;
LAB_10b50113c:
    unaff_x21[2] = (ulong)param_1;
  }
  else {
    if (iVar1 == 2) {
      if (iVar2 != 2) {
LAB_10b5010fc:
        func_0x00010b5046bc();
        goto LAB_10b50113c;
      }
      func_0x00010b5041b4();
    }
    else {
      if (iVar1 != 1) goto LAB_10b501140;
      if (iVar2 != 1) goto LAB_10b5010fc;
      func_0x00010b5041b4();
    }
    func_0x00010bd1b688();
  }
LAB_10b501140:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b50410c();
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



/* Entry: 10b50115c; end: 10b501187;  */

undefined8 FUN_10b50115c(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b501188(param_1);
  return param_1;
}



/* Entry: 10b501188; end: 10b5011df;  */

void FUN_10b501188(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b500760();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b500760();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b500760();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b500f00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5011e0; end: 10b5011e3;  */

undefined8 FUN_10b5011e0(undefined8 param_1)

{
  func_0x00010b504218();
  FUN_10b501188(param_1);
  return param_1;
}



/* Entry: 10b5011e4; end: 10b5011f7;  */

void FUN_10b5011e4(void)

{
  FUN_10b50115c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5011f8; end: 10b501203;  */

undefined ** FUN_10b5011f8(void)

{
  return &PTR_DAT_110cf6920;
}



/* Entry: 10b501204; end: 10b50134b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b501204(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  func_0x00010b503fd4();
  if ((unaff_w21 & 1) != 0) {
    func_0x00010b5040ac();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010b503fc4();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 2 & 1) != 0) {
    func_0x00010b504150();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x18);
    param_4 = (long *)0x4;
    func_0x00010b5041e8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504254();
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



/* Entry: 10b50134c; end: 10b501363;  */

void FUN_10b50134c(void)

{
  FUN_10b500870();
  FUN_10b503ee4();
  return;
}



/* Entry: 10b501364; end: 10b501393;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b501364(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b504618();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5046f4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b5008e8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b504760();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5046f4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b5008e8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5046f4();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10b5008e8();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b503cbc();
        *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b501070();
      }
    }
  }
  func_0x00010b504018();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b50410c();
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



/* Entry: 10b501394; end: 10b5013b7;  */

undefined8 FUN_10b501394(undefined8 param_1)

{
  func_0x00010b504218();
  return param_1;
}



/* Entry: 10b5013b8; end: 10b5013bb;  */

undefined8 FUN_10b5013b8(undefined8 param_1)

{
  func_0x00010b504218();
  return param_1;
}



/* Entry: 10b5013bc; end: 10b5013cf;  */

void FUN_10b5013bc(void)

{
  FUN_10b501394();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5013d0; end: 10b5013f3;  */

undefined ** FUN_10b5013d0(void)

{
  return &PTR_DAT_110cf6970;
}



/* Entry: 10b5013f4; end: 10b50145b;  */

long * FUN_10b5013f4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b504084();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x00010b50402c();
    func_0x00010b504368();
    func_0x00010b5040c8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b504254();
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



/* Entry: 10b50145c; end: 10b5014a7;  */

long FUN_10b50145c(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010b5040e8((long)*(int *)(param_1 + 0x18));
    lVar1 = extraout_x8 + 1;
  }
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



/* Entry: 10b5014a8; end: 10b501527;  */

long FUN_10b5014a8(long param_1)

{
  func_0x00010b504218();
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b501394();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b501394();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b5017c4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b502538();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b501394();
  }
  __ZdlPv();
  func_0x00010b5046c8();
  return param_1;
}



/* Entry: 10b501528; end: 10b50152b;  */

long FUN_10b501528(long param_1)

{
  func_0x00010b504218();
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b501394();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b501394();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b5017c4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b502538();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b501394();
  }
  __ZdlPv();
  func_0x00010b5046c8();
  return param_1;
}



/* Entry: 10b50152c; end: 10b50153f;  */

void FUN_10b50152c(void)

{
  FUN_10b5014a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b501540; end: 10b501553;  */

undefined ** FUN_10b501540(void)

{
  return &PTR_DAT_110cf69c8;
}



/* Entry: 10b501554; end: 10b50166b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b501554(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar5;
  int iVar6;
  
  func_0x00010b503fd4();
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010b5040ac();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 2 & 1) != 0) {
    func_0x00010b503fc4();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 3 & 1) != 0) {
    func_0x00010b504150();
    param_4 = param_1;
  }
  if ((unaff_w21 & 1) != 0) {
    func_0x00010b5042f8(*(undefined8 *)(unaff_x20 + 0x30));
    func_0x000107c280a0();
    param_4 = param_1;
  }
  iVar6 = *(int *)(unaff_x20 + 0x20);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    uVar4 = *(ulong *)(unaff_x20 + 0x18);
    puVar1 = (ulong *)(unaff_x20 + 0x18);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar5 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar1 + 0x14);
    param_4 = (long *)0x5;
    func_0x00010b5041e8();
  }
  if ((unaff_w21 >> 4 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x14);
    param_4 = (long *)0x6;
    func_0x00010b5041e8();
  }
  if ((unaff_w21 >> 5 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x14);
    param_4 = (long *)0x7;
    func_0x00010b5041e8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504254();
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
        uVar2 = iVar5 - iVar6;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar5 < iVar6) break;
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



/* Entry: 10b50166c; end: 10b50173f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b50166c(void)

{
  uint uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b503f38();
  while (unaff_x22 != 0) {
    FUN_10b501740(*unaff_x21);
    func_0x00010b5043fc();
    unaff_x21 = unaff_x21 + 1;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b50444c(*(undefined8 *)(unaff_x19 + 0x30));
      func_0x00010b5042dc();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b501758(*(undefined8 *)(unaff_x19 + 0x38));
      func_0x00010b5042dc();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b501758(*(undefined8 *)(unaff_x19 + 0x40));
      func_0x00010b5042dc();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b4fd7a0(*(undefined8 *)(unaff_x19 + 0x48));
      func_0x00010b5042dc();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10b4fff38(*(undefined8 *)(unaff_x19 + 0x50));
      func_0x00010b5042dc();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x00010b501758(*(undefined8 *)(unaff_x19 + 0x58));
      func_0x00010b5042dc();
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b504268();
  }
  func_0x00010b504324();
  return;
}



/* Entry: 10b501740; end: 10b50176f;  */

void FUN_10b501740(void)

{
  FUN_10b5004b4();
  FUN_10b503ee4();
  return;
}



/* Entry: 10b501770; end: 10b501783;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b501770(ulong *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  func_0x00010b50451c();
  FUN_10b501770();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5042b4(*(undefined8 *)(unaff_x20 + 0x30));
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      param_1 = (ulong *)(unaff_x21 + 0x30);
      func_0x00010b504260();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b50470c();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        func_0x00010b501368();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b50470c();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        func_0x00010b501368();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b504714();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5046ec();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_10b4fd988();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        FUN_10b503ab8();
        *(ulong **)(unaff_x21 + 0x50) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b500120();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x58);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b50470c();
        *(ulong **)(unaff_x21 + 0x58) = param_1;
      }
      else {
        FUN_10b501364();
      }
    }
  }
  func_0x00010b504018();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b50410c();
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



/* Entry: 10b501784; end: 10b5017c3;  */

bool FUN_10b501784(ulong param_1)

{
  int unaff_w21;
  
  func_0x00010b504284();
  do {
    unaff_w21 = unaff_w21 + -1;
    if (unaff_w21 < 1) break;
    func_0x00010b5044ac();
    func_0x00010b50041c();
  } while ((param_1 & 1) != 0);
  return unaff_w21 < 1;
}



/* Entry: 10b5017c4; end: 10b5017eb;  */

undefined8 FUN_10b5017c4(undefined8 param_1)

{
  func_0x00010b504218();
  func_0x00010b504508();
  return param_1;
}



/* Entry: 10b5017ec; end: 10b5017ef;  */

undefined8 FUN_10b5017ec(undefined8 param_1)

{
  func_0x00010b504218();
  func_0x00010b504508();
  return param_1;
}



/* Entry: 10b5017f0; end: 10b501803;  */

void FUN_10b5017f0(void)

{
  FUN_10b5017c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b501804; end: 10b50180f;  */

undefined ** FUN_10b501804(void)

{
  return &PTR_DAT_110cf6a10;
}



/* Entry: 10b501810; end: 10b501877;  */

long * FUN_10b501810(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  func_0x00010b503fd4();
  if ((unaff_w21 & 1) != 0) {
    func_0x00010b504038();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010b50402c();
    func_0x00010b504548();
    func_0x00010b5040c8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504254();
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



/* Entry: 10b501878; end: 10b5018e7;  */

void FUN_10b501878(int param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  uint unaff_w20;
  
  func_0x00010b5041a4();
  if ((bool)in_ZR) {
    param_1 = 0;
  }
  else {
    if ((unaff_w20 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010b50444c(*(undefined8 *)(unaff_x19 + 0x18));
      param_1 = param_1 + 1;
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010b5040e8((long)*(int *)(unaff_x19 + 0x20));
      func_0x00010b504734();
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b504268();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 10b5018e8; end: 10b5018eb;  */

void FUN_10b5018e8(ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  uint unaff_w21;
  
  func_0x00010b5041cc();
  if (!(bool)in_ZR) {
    if ((unaff_w21 & 1) != 0) {
      func_0x00010b50406c();
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      func_0x00010b504198();
    }
    if ((unaff_w21 >> 1 & 1) != 0) {
      func_0x00010b504754();
    }
  }
  func_0x00010b504130();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b504170();
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



/* Entry: 10b5018ec; end: 10b50192f;  */

long FUN_10b5018ec(long param_1)

{
  func_0x00010b504218();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4fdc6c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4fdc6c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b501930; end: 10b501933;  */

long FUN_10b501930(long param_1)

{
  func_0x00010b504218();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4fdc6c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b4fdc6c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b501934; end: 10b501947;  */

void FUN_10b501934(void)

{
  FUN_10b5018ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b501948; end: 10b501953;  */

undefined ** FUN_10b501948(void)

{
  return &PTR_DAT_110cf6a58;
}



/* Entry: 10b501954; end: 10b50199b;  */

void FUN_10b501954(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x00010b5041a4();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      FUN_10b4fdcb8(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_10b4fdcb8(unaff_x19[4]);
    }
  }
  func_0x00010b504370();
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



/* Entry: 10b50199c; end: 10b501a77;  */

long * FUN_10b50199c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  func_0x00010b503fd4();
  if ((unaff_w21 & 1) != 0) {
    func_0x00010b5040ac();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010b503fc4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504254();
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



/* Entry: 10b501a78; end: 10b501a8f;  */

void FUN_10b501a78(void)

{
  FUN_10b4fdd54();
  FUN_10b503ee4();
  return;
}



/* Entry: 10b501a90; end: 10b501a93;  */

void FUN_10b501a90(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  func_0x00010b5047ac();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b504618();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b503da4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b4fddc8();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b504760();
      if (param_1 == (ulong *)0x0) {
        FUN_10b503da4();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b4fddc8();
      }
    }
  }
  func_0x00010b504018();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b50410c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b501a94; end: 10b501b1b;  */

void FUN_10b501a94(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  func_0x00010b5047ac();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b504618();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b503da4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b4fddc8();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b504760();
      if (param_1 == (ulong *)0x0) {
        FUN_10b503da4();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b4fddc8();
      }
    }
  }
  func_0x00010b504018();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b50410c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b501b1c; end: 10b501b7f;  */

long FUN_10b501b1c(long param_1)

{
  func_0x00010b504218();
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b4ff2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b4ff2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b5018ec();
  }
  __ZdlPv();
  FUN_10b502b7c(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b501b80; end: 10b501b83;  */

long FUN_10b501b80(long param_1)

{
  func_0x00010b504218();
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b4ff2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b4ff2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b5018ec();
  }
  __ZdlPv();
  FUN_10b502b7c(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b501b84; end: 10b501b97;  */

void FUN_10b501b84(void)

{
  FUN_10b501b1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b501b98; end: 10b501ba3;  */

undefined ** FUN_10b501b98(void)

{
  return &PTR_DAT_110cf6aa0;
}



/* Entry: 10b501ba4; end: 10b501d6b;  */

void FUN_10b501ba4(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  int iVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x18);
  iVar6 = *(uint *)(param_1 + 0x20) + 1;
  puVar4 = (ulong *)(uVar5 + (ulong)*(uint *)(param_1 + 0x20) * 8 + -1);
  while (iVar6 = iVar6 + -1, 0 < iVar6) {
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar5 & 1) != 0) {
      puVar1 = puVar4;
    }
    uVar3 = *puVar1;
    func_0x00010b4ff1dc();
    puVar4 = puVar4 + -1;
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 1 & 1) != 0) {
    iVar6 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x00010b4ff354();
    if (iVar6 == 0) {
      return;
    }
  }
  if ((uVar2 >> 2 & 1) == 0) {
    return;
  }
  func_0x00010b4ff354();
  return;
}



/* Entry: 10b501d6c; end: 10b501e67;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b501d6c(void)

{
  uint uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b503f38();
  while (unaff_x22 != 0) {
    FUN_10b4ff08c(*unaff_x21);
    func_0x00010b5043fc();
    unaff_x21 = unaff_x21 + 1;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b504310(*(undefined8 *)(unaff_x19 + 0x30));
      func_0x00010b5042dc();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b4ff0a4(*(undefined8 *)(unaff_x19 + 0x38));
      func_0x00010b5042dc();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b4ff0a4(*(undefined8 *)(unaff_x19 + 0x40));
      func_0x00010b5042dc();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b501e68(*(undefined8 *)(unaff_x19 + 0x48));
      func_0x00010b5042dc();
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b504268();
  }
  func_0x00010b504324();
  return;
}



/* Entry: 10b501e68; end: 10b501e7f;  */

void FUN_10b501e68(void)

{
  func_0x00010b501a04();
  FUN_10b503ee4();
  return;
}



/* Entry: 10b501e80; end: 10b501e93;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b501e80(ulong *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b503fe8();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  func_0x00010b50451c();
  FUN_10b501e80();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5042b4(*(undefined8 *)(unaff_x20 + 0x30));
      if ((param_3 & 1) != 0) {
        func_0x00010b504304();
      }
      param_1 = (ulong *)(unaff_x21 + 0x30);
      func_0x00010b504260();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5046fc();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        func_0x00010b4ff130();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5046fc();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        func_0x00010b4ff130();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b504714();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b504704();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_10b501a94();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(unaff_x21 + 0x50) = *(undefined1 *)(unaff_x20 + 0x50);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x54) = *(undefined4 *)(unaff_x20 + 0x54);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x58) = *(undefined4 *)(unaff_x20 + 0x58);
    }
  }
  func_0x00010b504018();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b50410c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b501e94; end: 10b501ed7;  */

long FUN_10b501e94(long param_1)

{
  func_0x00010b504218();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4fde44();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5018ec();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b501ed8; end: 10b501edb;  */

long FUN_10b501ed8(long param_1)

{
  func_0x00010b504218();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b4fde44();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5018ec();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b501edc; end: 10b501eef;  */

void FUN_10b501edc(void)

{
  FUN_10b501e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b501ef0; end: 10b501efb;  */

undefined ** FUN_10b501ef0(void)

{
  return &PTR_DAT_110cf6af0;
}



/* Entry: 10b501efc; end: 10b501f3f;  */

void FUN_10b501efc(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x00010b5041a4();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010b5046a4();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_10b501954(unaff_x19[4]);
    }
  }
  func_0x00010b504370();
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



/* Entry: 10b501f40; end: 10b502017;  */

long * FUN_10b501f40(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  func_0x00010b503fd4();
  if ((unaff_w21 & 1) != 0) {
    func_0x00010b5040ac();
    param_4 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010b503fc4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504254();
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



/* Entry: 10b502018; end: 10b502097;  */

void FUN_10b502018(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x00010b503fe8();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  func_0x00010b5047ac();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b504618();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5045ac();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b4fde18();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b504760();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b504704();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b501a94();
      }
    }
  }
  func_0x00010b504018();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b50410c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b502098; end: 10b5020ff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b502098(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b502100; end: 10b502123;  */

undefined8 FUN_10b502100(undefined8 param_1)

{
  func_0x00010b504218();
  return param_1;
}



/* Entry: 10b502124; end: 10b502127;  */

undefined8 FUN_10b502124(undefined8 param_1)

{
  func_0x00010b504218();
  return param_1;
}



/* Entry: 10b502128; end: 10b50213b;  */

void FUN_10b502128(void)

{
  FUN_10b502100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50213c; end: 10b50216b;  */

undefined ** FUN_10b50213c(void)

{
  return &PTR_DAT_110cf6b40;
}



/* Entry: 10b50216c; end: 10b502237;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b50216c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b504084();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x00010b50402c();
    func_0x00010b504368();
    func_0x00010b5040bc();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010b50402c();
    func_0x00010b504538();
    func_0x00010b5040bc();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    func_0x00010b50402c();
    param_4 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x00010b5040bc();
    param_1 = param_4;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    func_0x00010b50402c();
    param_4 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x00010b5040bc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504254();
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



/* Entry: 10b502238; end: 10b502303;  */

ulong FUN_10b502238(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = uVar2 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x1c)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = uVar2 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = uVar2 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x24)) * -9 + 0x1a0U >> 6);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x14) = (int)uVar2;
  return uVar2;
}



/* Entry: 10b502304; end: 10b50235f;  */

long FUN_10b502304(long param_1)

{
  func_0x00010b504218();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b502100();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b5018ec();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c303ac();
  }
  func_0x00010b5046c8();
  return param_1;
}



/* Entry: 10b502360; end: 10b502363;  */

long FUN_10b502360(long param_1)

{
  func_0x00010b504218();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b502100();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b5018ec();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c303ac();
  }
  func_0x00010b5046c8();
  return param_1;
}



/* Entry: 10b502364; end: 10b502377;  */

void FUN_10b502364(void)

{
  FUN_10b502304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b502378; end: 10b50238b;  */

undefined ** FUN_10b502378(void)

{
  return &PTR_DAT_110cf6b98;
}



/* Entry: 10b50238c; end: 10b502523;  */

long * FUN_10b50238c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w23;
  int iVar4;
  
  func_0x00010b504084();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 >> 2 & 1) != 0) {
    func_0x00010b50402c();
    unaff_w21 = *(int *)(unaff_x20 + 0x58);
    func_0x00010b504368();
    func_0x00010b5040c8();
    param_4 = param_1;
  }
  func_0x00010b504358();
  while (unaff_w23 != unaff_w21) {
    func_0x00010b503f18();
    func_0x00010b504100();
    func_0x00010b504330();
  }
  if ((uVar1 & 1) != 0) {
    func_0x00010b504150();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x14);
    param_4 = (long *)0x4;
    func_0x00010b5041e8();
  }
  iVar3 = *(int *)(unaff_x20 + 0x38);
  while (iVar3 != 0) {
    func_0x00010b503fa4();
    func_0x00010b5041e8(5);
    func_0x00010b504330();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b504254();
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



/* Entry: 10b502524; end: 10b502537;  */

void FUN_10b502524(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b503fe8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5043dc();
  }
  func_0x00010b50451c();
  FUN_10b501770();
  func_0x00010b5047a0();
  FUN_10b502524();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b504714();
      if (param_1 == (ulong *)0x0) {
        FUN_10b503e84();
        *(ulong **)(unaff_x21 + 0x48) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b502098();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b504704();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_10b501a94();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x58) = *(undefined4 *)(unaff_x20 + 0x58);
    }
  }
  func_0x00010b504018();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b50410c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b502538; end: 10b502563;  */

long FUN_10b502538(long param_1)

{
  func_0x00010b504218();
  FUN_10b502a4c(param_1 + 0x18);
  return param_1;
}



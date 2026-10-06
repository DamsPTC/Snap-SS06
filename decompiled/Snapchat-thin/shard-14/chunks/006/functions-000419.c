/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b543e04; end: 10b543f67;  */

long * FUN_10b543e04(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b547ee8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x1c);
    param_1 = (long *)0x1;
    func_0x00010b547fac();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    func_0x00010b547da4();
    func_0x00010b5480e0();
    func_0x00010b547e28();
    param_4 = param_1;
  }
  plVar2 = param_4;
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c282ac();
    param_3 = param_4;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    plVar2 = (long *)0x4;
    func_0x00010b547fac();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b548024();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)plVar2 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)plVar2) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        plVar2 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar4);
    }
    _memcpy(plVar2,lVar3,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)param_3);
  }
  return plVar2;
}



/* Entry: 10b543f68; end: 10b543f83;  */

long FUN_10b543f68(long param_1)

{
  long extraout_x8;
  
  FUN_10b53a968();
  func_0x00010b547cec();
  return param_1 + extraout_x8;
}



/* Entry: 10b543f84; end: 10b543f87;  */

void FUN_10b543f84(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b547e14();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b548228();
  }
  func_0x00010b5483dc();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b547284();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b543cf4();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b5484dc();
      if (param_1 == (ulong *)0x0) {
        FUN_10b5472e0();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b53aa10();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x28) = 1;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x21 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  func_0x00010b547e6c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b547eb0();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b543f88; end: 10b54402f;  */

void FUN_10b543f88(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b547e14();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b548228();
  }
  func_0x00010b5483dc();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b547284();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b543cf4();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b5484dc();
      if (param_1 == (ulong *)0x0) {
        FUN_10b5472e0();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b53aa10();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x28) = 1;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x21 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  func_0x00010b547e6c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b547eb0();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b544030; end: 10b544067;  */

void FUN_10b544030(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
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



/* Entry: 10b544068; end: 10b54408b;  */

undefined8 FUN_10b544068(undefined8 param_1)

{
  func_0x00010b547fb4();
  return param_1;
}



/* Entry: 10b54408c; end: 10b54408f;  */

undefined8 FUN_10b54408c(undefined8 param_1)

{
  func_0x00010b547fb4();
  return param_1;
}



/* Entry: 10b544090; end: 10b5440a3;  */

void FUN_10b544090(void)

{
  FUN_10b544068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5440a4; end: 10b5440c7;  */

undefined ** FUN_10b5440a4(void)

{
  return &PTR_DAT_110d03e18;
}



/* Entry: 10b5440c8; end: 10b54416b;  */

long * FUN_10b5440c8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b547ee8();
  if ((int)param_1[2] != 0) {
    func_0x00010b547da4();
    func_0x00010b5480f8();
    func_0x00010b547e54();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b547da4();
    func_0x00010b5480e0();
    func_0x00010b547e54();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    func_0x00010b547da4();
    func_0x00010b5481d0();
    func_0x00010b547e28();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b548024();
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



/* Entry: 10b54416c; end: 10b5441e3;  */

long FUN_10b54416c(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x9;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  iVar1 = -9;
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010b548234();
    lVar2 = extraout_x9 + 1;
    iVar1 = extraout_w8;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * iVar1 + 0x280U >> 6) + 1;
  }
  lVar2 = lVar2 + (ulong)*(byte *)(param_1 + 0x18) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5441e4; end: 10b54420f;  */

undefined8 FUN_10b5441e4(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  func_0x00010b548150();
  return param_1;
}



/* Entry: 10b544210; end: 10b544213;  */

undefined8 FUN_10b544210(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  func_0x00010b548150();
  return param_1;
}



/* Entry: 10b544214; end: 10b544227;  */

void FUN_10b544214(void)

{
  FUN_10b5441e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b544228; end: 10b544233;  */

undefined ** FUN_10b544228(void)

{
  return &PTR_DAT_110d03e78;
}



/* Entry: 10b544234; end: 10b544267;  */

void FUN_10b544234(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b547dbc();
  func_0x00010b548214();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10b544268; end: 10b54436b;  */

long * FUN_10b544268(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b547f8c();
  if ((int)param_1[4] != 0) {
    func_0x00010b547db0();
    param_2 = param_1;
    func_0x00010b548110();
    func_0x00010b547e54();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010b547db0();
    param_2 = param_1;
    func_0x00010b5480e0();
    func_0x00010b547e54();
    unaff_x21 = param_1;
  }
  func_0x00010b548038(*(undefined8 *)(unaff_x20 + 0x10));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_10b5442e0;
  }
  else if ((int)param_2 != 0) {
LAB_10b5442e0:
    param_4 = (long *)&UNK_10f778bf3;
    func_0x00010b547fe4();
    param_2 = (long *)0x3;
    func_0x00010b547e08();
    param_1 = unaff_x19;
    unaff_x21 = unaff_x19;
  }
  func_0x00010b548038(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b544338;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b544338;
  param_4 = (long *)&UNK_10f778c49;
  func_0x00010b547fe4();
  func_0x00010b548430();
  func_0x00010b547e08();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_10b544338:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b548024();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b548254();
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



/* Entry: 10b54436c; end: 10b544407;  */

long FUN_10b54436c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b547d4c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5480ac();
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x00010b548234(0xfffffff7);
    lVar2 = lVar2 + extraout_x9 + 1;
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    func_0x00010b548064();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9_00 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x28) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b544408; end: 10b54440b;  */

void FUN_10b544408(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  func_0x00010b547f44();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54820c();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
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



/* Entry: 10b54440c; end: 10b54448b;  */

void FUN_10b54440c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  func_0x00010b547f44();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54820c();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
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



/* Entry: 10b54448c; end: 10b5444b3;  */

undefined8 FUN_10b54448c(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b5444b4; end: 10b5444b7;  */

undefined8 FUN_10b5444b4(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b5444b8; end: 10b5444cb;  */

void FUN_10b5444b8(void)

{
  FUN_10b54448c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5444cc; end: 10b5444d7;  */

undefined ** FUN_10b5444cc(void)

{
  return &PTR_DAT_110d03ee0;
}



/* Entry: 10b5444d8; end: 10b544507;  */

void FUN_10b5444d8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b547dbc();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10b544508; end: 10b5445a3;  */

long * FUN_10b544508(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b547d1c();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b54454c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b54454c;
  param_4 = (long *)&UNK_10f778c95;
  func_0x00010b547fe4();
  func_0x00010b547d38();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b54454c:
  if (*(char *)(unaff_x21 + 0x18) == '\x01') {
    func_0x00010b547e94();
    func_0x00010b5480e0();
    func_0x00010b548194();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b548024();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b548118();
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



/* Entry: 10b5445a4; end: 10b5445f7;  */

void FUN_10b5445a4(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b547d4c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  iVar1 = 0;
  if (lVar2 != 0) {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x18) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b5445f8; end: 10b5445fb;  */

void FUN_10b5445f8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x18) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
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



/* Entry: 10b5445fc; end: 10b5446d3;  */

void FUN_10b5445fc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x18) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
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



/* Entry: 10b5446d4; end: 10b544707;  */

long FUN_10b5446d4(long param_1)

{
  func_0x00010b547fb4();
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x00010b544654(param_1);
  }
  return param_1;
}



/* Entry: 10b544708; end: 10b54470b;  */

long FUN_10b544708(long param_1)

{
  func_0x00010b547fb4();
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x00010b544654(param_1);
  }
  return param_1;
}



/* Entry: 10b54470c; end: 10b54471f;  */

void FUN_10b54470c(void)

{
  FUN_10b5446d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b544720; end: 10b54472b;  */

undefined ** FUN_10b544720(void)

{
  return &PTR_DAT_110d03f48;
}



/* Entry: 10b54472c; end: 10b54475f;  */

void FUN_10b54472c(long param_1)

{
  ulong *puVar1;
  
  *(undefined2 *)(param_1 + 0x10) = 0;
  func_0x00010b544654();
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



/* Entry: 10b544760; end: 10b54481b;  */

long * FUN_10b544760(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b547ee8();
  uVar2 = (char)param_1[2] == '\x01';
  if ((bool)uVar2) {
    func_0x00010b547da4();
    func_0x00010b548110();
    func_0x00010b547e28();
    param_4 = param_1;
  }
  func_0x00010b548514();
  if ((bool)uVar2) {
    func_0x00010b547da4();
    func_0x00010b5480e0();
    func_0x00010b547e28();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x24);
  plVar3 = (long *)(ulong)uVar1;
  if (uVar1 == 3) {
    lVar4 = 0x28;
  }
  else {
    if (uVar1 != 4) goto LAB_10b5447e8;
    lVar4 = 0x1c;
  }
  param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + lVar4);
  func_0x00010b547fac();
  param_4 = plVar3;
LAB_10b5447e8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b548024();
  if ((long)param_3 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
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
  _memcpy(param_4,lVar4,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b54481c; end: 10b54488b;  */

long FUN_10b54481c(void)

{
  long lVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b548350();
  if (extraout_w8 == 4) {
    lVar1 = *(long *)(unaff_x19 + 0x18);
    FUN_10b5445a4();
  }
  else {
    if (extraout_w8 != 3) goto LAB_10b544860;
    lVar1 = *(long *)(unaff_x19 + 0x18);
    FUN_10b54436c();
  }
  func_0x00010b547cec();
  unaff_x20 = lVar1 + unaff_x20 + extraout_x8 + 1;
LAB_10b544860:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x20) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b54488c; end: 10b54488f;  */

void FUN_10b54488c(ulong *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 extraout_w8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b547e14();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b548228();
  }
  bVar3 = *(char *)(unaff_x20 + 0x10) == '\x01';
  if (bVar3) {
    *(undefined1 *)(unaff_x21 + 2) = 1;
  }
  func_0x00010b548514();
  if (bVar3) {
    *(undefined1 *)((long)unaff_x21 + 0x11) = extraout_w8;
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 == 0) goto LAB_10b544960;
  iVar2 = *(int *)((long)unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x00010b544654();
    }
    *(int *)((long)unaff_x21 + 0x24) = iVar1;
  }
  if (iVar1 == 4) {
    if (iVar2 == 4) {
      func_0x00010b548054();
      func_0x00010b5445fc();
      goto LAB_10b544960;
    }
    func_0x00010b548260();
    func_0x00010b547360();
  }
  else {
    if (iVar1 != 3) goto LAB_10b544960;
    if (iVar2 == 3) {
      func_0x00010b548054();
      FUN_10b54440c();
      goto LAB_10b544960;
    }
    func_0x00010b548260();
    FUN_10b547310();
  }
  unaff_x21[3] = (ulong)param_1;
LAB_10b544960:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547eb0();
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



/* Entry: 10b544890; end: 10b54497b;  */

void FUN_10b544890(ulong *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 extraout_w8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b547e14();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b548228();
  }
  bVar3 = *(char *)(unaff_x20 + 0x10) == '\x01';
  if (bVar3) {
    *(undefined1 *)(unaff_x21 + 2) = 1;
  }
  func_0x00010b548514();
  if (bVar3) {
    *(undefined1 *)((long)unaff_x21 + 0x11) = extraout_w8;
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 == 0) goto LAB_10b544960;
  iVar2 = *(int *)((long)unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x00010b544654();
    }
    *(int *)((long)unaff_x21 + 0x24) = iVar1;
  }
  if (iVar1 == 4) {
    if (iVar2 == 4) {
      func_0x00010b548054();
      func_0x00010b5445fc();
      goto LAB_10b544960;
    }
    func_0x00010b548260();
    func_0x00010b547360();
  }
  else {
    if (iVar1 != 3) goto LAB_10b544960;
    if (iVar2 == 3) {
      func_0x00010b548054();
      FUN_10b54440c();
      goto LAB_10b544960;
    }
    func_0x00010b548260();
    FUN_10b547310();
  }
  unaff_x21[3] = (ulong)param_1;
LAB_10b544960:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547eb0();
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



/* Entry: 10b54497c; end: 10b5449a3;  */

undefined8 FUN_10b54497c(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b5449a4; end: 10b5449a7;  */

undefined8 FUN_10b5449a4(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b5449a8; end: 10b5449bb;  */

void FUN_10b5449a8(void)

{
  FUN_10b54497c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5449bc; end: 10b5449c7;  */

undefined ** FUN_10b5449bc(void)

{
  return &PTR_DAT_110d03fa0;
}



/* Entry: 10b5449c8; end: 10b5449f3;  */

void FUN_10b5449c8(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010b547dbc();
  func_0x00010b548418();
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



/* Entry: 10b5449f4; end: 10b544a7f;  */

long * FUN_10b5449f4(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b547d1c();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b544a38;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b544a38;
  param_4 = (long *)&UNK_10f778ce0;
  func_0x00010b547fe4();
  func_0x00010b547d38();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b544a38:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x00010b548248();
    func_0x00010598f43c();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b548024();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b548118();
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



/* Entry: 10b544a80; end: 10b544af7;  */

void FUN_10b544a80(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b547d4c();
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
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x18)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b544af8; end: 10b544afb;  */

void FUN_10b544af8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
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



/* Entry: 10b544afc; end: 10b544b4f;  */

void FUN_10b544afc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
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



/* Entry: 10b544b50; end: 10b544b77;  */

undefined8 FUN_10b544b50(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b544b78; end: 10b544b7b;  */

undefined8 FUN_10b544b78(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b544b7c; end: 10b544b8f;  */

void FUN_10b544b7c(void)

{
  FUN_10b544b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b544b90; end: 10b544b9b;  */

undefined ** FUN_10b544b90(void)

{
  return &PTR_DAT_110d03ff0;
}



/* Entry: 10b544b9c; end: 10b544bcb;  */

void FUN_10b544b9c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b547dbc();
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



/* Entry: 10b544bcc; end: 10b544c93;  */

long * FUN_10b544bcc(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b547d1c();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b544c10;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b544c10;
  param_4 = (long *)&UNK_10f778d1f;
  func_0x00010b547fe4();
  func_0x00010b547d38();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b544c10:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x00010b547e94();
    func_0x00010b547f7c();
    func_0x00010b547fd8();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x1c) != 0) {
    func_0x00010b5481e8();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x20) != 0) {
    func_0x00010b548248();
    func_0x0001088bdd44();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x24) != 0) {
    func_0x00010b548248();
    func_0x0001088b96ec();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b548024();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010b548118();
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



/* Entry: 10b544c94; end: 10b544d33;  */

void FUN_10b544c94(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b547d4c();
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
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x00010b548234(0xfffffff7);
    iVar1 = iVar1 + extraout_w9 + 1;
  }
  if (*(int *)(unaff_x19 + 0x1c) != 0) {
    func_0x00010b547e80();
    iVar1 = extraout_w9_00 + iVar1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x00010b547e80();
    iVar1 = extraout_w9_01 + iVar1;
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    func_0x00010b548500();
    iVar1 = extraout_w8 + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x28) = iVar1;
  return;
}



/* Entry: 10b544d34; end: 10b544d37;  */

void FUN_10b544d34(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x20 + 0x1c);
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
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



/* Entry: 10b544d38; end: 10b544daf;  */

void FUN_10b544d38(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b547d04();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54808c();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x20 + 0x1c);
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
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



/* Entry: 10b544db0; end: 10b544dcb;  */

void FUN_10b544db0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
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



/* Entry: 10b544dcc; end: 10b544def;  */

undefined8 FUN_10b544dcc(undefined8 param_1)

{
  func_0x00010b547fb4();
  return param_1;
}



/* Entry: 10b544df0; end: 10b544df3;  */

undefined8 FUN_10b544df0(undefined8 param_1)

{
  func_0x00010b547fb4();
  return param_1;
}



/* Entry: 10b544df4; end: 10b544e07;  */

void FUN_10b544df4(void)

{
  FUN_10b544dcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b544e08; end: 10b544e27;  */

undefined ** FUN_10b544e08(void)

{
  return &PTR_DAT_110d04048;
}



/* Entry: 10b544e28; end: 10b544e87;  */

long * FUN_10b544e28(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b547ee8();
  if ((int)param_1[2] != 0) {
    func_0x00010b547da4();
    func_0x00010b5480f8();
    func_0x00010b547e54();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b548024();
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



/* Entry: 10b544e88; end: 10b544ed7;  */

long FUN_10b544e88(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00010b5485b8();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b544ed8; end: 10b544efb;  */

undefined8 FUN_10b544ed8(undefined8 param_1)

{
  func_0x00010b547fb4();
  return param_1;
}



/* Entry: 10b544efc; end: 10b544eff;  */

undefined8 FUN_10b544efc(undefined8 param_1)

{
  func_0x00010b547fb4();
  return param_1;
}



/* Entry: 10b544f00; end: 10b544f13;  */

void FUN_10b544f00(void)

{
  FUN_10b544ed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b544f14; end: 10b544f33;  */

undefined ** FUN_10b544f14(void)

{
  return &PTR_DAT_110d040b0;
}



/* Entry: 10b544f34; end: 10b544f93;  */

long * FUN_10b544f34(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b547ee8();
  if ((int)param_1[2] != 0) {
    func_0x00010b547da4();
    func_0x00010b5480f8();
    func_0x00010b547e54();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b548024();
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



/* Entry: 10b544f94; end: 10b544fc7;  */

long FUN_10b544f94(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00010b5485b8();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b544fc8; end: 10b545047;  */

void FUN_10b544fc8(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b548174();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b545024;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b544ed8();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_10b545024;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b548174();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b545024;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b544dcc();
    }
  }
  __ZdlPv();
LAB_10b545024:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b545048; end: 10b54507b;  */

long FUN_10b545048(long param_1)

{
  func_0x00010b547fb4();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b544fc8(param_1);
  }
  return param_1;
}



/* Entry: 10b54507c; end: 10b54507f;  */

long FUN_10b54507c(long param_1)

{
  func_0x00010b547fb4();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b544fc8(param_1);
  }
  return param_1;
}



/* Entry: 10b545080; end: 10b545093;  */

void FUN_10b545080(void)

{
  FUN_10b545048();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b545094; end: 10b54509f;  */

undefined ** FUN_10b545094(void)

{
  return &PTR_DAT_110d04118;
}



/* Entry: 10b5450a0; end: 10b5451a7;  */

void FUN_10b5450a0(long param_1)

{
  ulong *puVar1;
  
  FUN_10b544fc8();
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



/* Entry: 10b5451a8; end: 10b5451ab;  */

void FUN_10b5451a8(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b547e14();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b548228();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b545278;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b544fc8();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x00010b544ebc();
      goto LAB_10b545278;
    }
    FUN_10b547404();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 1) goto LAB_10b545278;
    if (iVar2 == 1) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_10b544db0();
      goto LAB_10b545278;
    }
    FUN_10b5473ac();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b545278:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547eb0();
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



/* Entry: 10b5451ac; end: 10b545293;  */

void FUN_10b5451ac(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b547e14();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b548228();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_10b545278;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_10b544fc8();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x00010b544ebc();
      goto LAB_10b545278;
    }
    FUN_10b547404();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 1) goto LAB_10b545278;
    if (iVar2 == 1) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_10b544db0();
      goto LAB_10b545278;
    }
    FUN_10b5473ac();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_10b545278:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547eb0();
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



/* Entry: 10b545294; end: 10b5454fb;  */

undefined8 * FUN_10b545294(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d03318;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b547d8c();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b54745c(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b547504(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b5475f8(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b547688(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5476e0(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b547738(param_2,*(undefined8 *)(param_3 + 0x48));
  }
  param_1[9] = uVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5477d4(param_2,*(undefined8 *)(param_3 + 0x50));
  }
  param_1[10] = uVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b54785c(param_2,*(undefined8 *)(param_3 + 0x58));
  }
  param_1[0xb] = uVar3;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5478a8(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  param_1[0xc] = uVar3;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b547960(param_2,*(undefined8 *)(param_3 + 0x68));
  }
  param_1[0xd] = uVar3;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b5479f0(param_2,*(undefined8 *)(param_3 + 0x70));
  }
  param_1[0xe] = uVar3;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b547a58(param_2,*(undefined8 *)(param_3 + 0x78));
  }
  param_1[0xf] = uVar3;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b547ae0(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  param_1[0x10] = uVar3;
  if ((uVar1 >> 0xd & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b547b2c(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  param_1[0x11] = uVar3;
  if ((uVar1 >> 0xe & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b547088(param_2,*(undefined8 *)(param_3 + 0x90));
  }
  param_1[0x12] = uVar3;
  if ((uVar1 >> 0xf & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b547b88(param_2,*(undefined8 *)(param_3 + 0x98));
  }
  param_1[0x13] = uVar3;
  if ((uVar1 >> 0x10 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b547c24(param_2,*(undefined8 *)(param_3 + 0xa0));
  }
  param_1[0x14] = uVar3;
  if ((uVar1 >> 0x11 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0xa8));
  }
  param_1[0x15] = param_2;
  uVar4 = *(undefined8 *)(param_3 + 0xb8);
  uVar3 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)((long)param_1 + 0xbd) = *(undefined8 *)(param_3 + 0xbd);
  param_1[0x17] = uVar4;
  param_1[0x16] = uVar3;
  return param_1;
}



/* Entry: 10b5454fc; end: 10b545527;  */

undefined8 FUN_10b5454fc(undefined8 param_1)

{
  func_0x00010b547fb4();
  FUN_10b545528(param_1);
  return param_1;
}



/* Entry: 10b545528; end: 10b545667;  */

void FUN_10b545528(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b53f064();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b53f688();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b53fc0c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b53ff20();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b53ffe8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b542254();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b542a38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b5433b8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b54382c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b543d4c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b544068();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10b5446d4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_10b54497c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_10b544b50();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_10b542d1c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_10b542ea8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_10b545048();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b545668; end: 10b54566b;  */

undefined8 FUN_10b545668(undefined8 param_1)

{
  func_0x00010b547fb4();
  FUN_10b545528(param_1);
  return param_1;
}



/* Entry: 10b54566c; end: 10b54567f;  */

void FUN_10b54566c(void)

{
  FUN_10b5454fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b545680; end: 10b54568b;  */

undefined ** FUN_10b545680(void)

{
  return &PTR_DAT_110d04178;
}



/* Entry: 10b54568c; end: 10b5457f7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b54568c(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x00010b54821c();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b53f0d4(*(undefined8 *)(unaff_x19 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b53f700(*(undefined8 *)(unaff_x19 + 0x28));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b53fc64(*(undefined8 *)(unaff_x19 + 0x30));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b53ff68(*(undefined8 *)(unaff_x19 + 0x38));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10b540034(*(undefined8 *)(unaff_x19 + 0x40));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_10b5422d0(*(undefined8 *)(unaff_x19 + 0x48));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x00010b542aa0(*(undefined8 *)(unaff_x19 + 0x50));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_10b543404(*(undefined8 *)(unaff_x19 + 0x58));
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      FUN_10b543888(*(undefined8 *)(unaff_x19 + 0x60));
    }
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_10b543db4(*(undefined8 *)(unaff_x19 + 0x68));
    }
    if ((uVar1 >> 10 & 1) != 0) {
      func_0x00010b5440b0(*(undefined8 *)(unaff_x19 + 0x70));
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      FUN_10b54472c(*(undefined8 *)(unaff_x19 + 0x78));
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      FUN_10b5449c8(*(undefined8 *)(unaff_x19 + 0x80));
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      FUN_10b544b9c(*(undefined8 *)(unaff_x19 + 0x88));
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      func_0x00010b542ae8(*(undefined8 *)(unaff_x19 + 0x90));
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      FUN_10b542f20(*(undefined8 *)(unaff_x19 + 0x98));
    }
  }
  if ((uVar1 & 0x30000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      FUN_10b5450a0(*(undefined8 *)(unaff_x19 + 0xa0));
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      func_0x00010b535efc(*(undefined8 *)(unaff_x19 + 0xa8));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xbd) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) != 0) {
    if ((*puVar2 & 1) == 0) {
      FUN_10b4c3590();
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
  return;
}



/* Entry: 10b5457f8; end: 10b545d1f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b5457f8(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  long *plVar4;
  int iVar5;
  int iVar6;
  
  func_0x00010b547ee8();
  plVar4 = param_1;
  if (param_1[0x16] != 0) {
    func_0x00010b547da4();
    plVar4 = *(long **)(unaff_x20 + 0xb0);
    func_0x00010b548110();
    func_0x000107c280ac(plVar4,param_1);
    param_4 = plVar4;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    plVar4 = (long *)0x2;
    func_0x00010b547fac();
    param_4 = plVar4;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    plVar4 = (long *)0x3;
    func_0x00010b547fac();
    param_4 = plVar4;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x40);
    plVar4 = (long *)0x4;
    func_0x00010b547fac();
    param_4 = plVar4;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    plVar4 = (long *)0x5;
    func_0x00010b547fac();
    param_4 = plVar4;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x18);
    plVar4 = (long *)0x6;
    func_0x00010b547fac();
    param_4 = plVar4;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x48) + 0x14);
    plVar4 = (long *)0x7;
    func_0x00010b547fac();
    param_4 = plVar4;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x14);
    plVar4 = (long *)0x8;
    func_0x00010b547fac();
    param_4 = plVar4;
  }
  if ((uVar1 >> 7 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x1c);
    plVar4 = (long *)0x9;
    func_0x00010b547fac();
    param_4 = plVar4;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x20);
    plVar4 = (long *)0xa;
    func_0x00010b547fac();
    param_4 = plVar4;
  }
  if ((uVar1 >> 9 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x14);
    plVar4 = (long *)0xb;
    func_0x00010b547fac();
    param_4 = plVar4;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x70) + 0x1c);
    plVar4 = (long *)0xc;
    func_0x00010b547fac();
    param_4 = plVar4;
  }
  if (*(long *)(unaff_x20 + 0xb8) != 0) {
    plVar4 = unaff_x19;
    func_0x000106af6948();
    param_3 = param_4;
    param_4 = plVar4;
  }
  plVar2 = plVar4;
  if (*(int *)(unaff_x20 + 0xc0) != 0) {
    func_0x00010b547da4();
    plVar2 = (long *)0x70;
    func_0x000107c280a8(0x70,plVar4);
    func_0x00010b547e54();
    param_4 = plVar2;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x78) + 0x20);
    plVar2 = (long *)0xf;
    func_0x00010b547fac();
    param_4 = plVar2;
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x80) + 0x1c);
    plVar2 = (long *)0x10;
    func_0x00010b547fac();
    param_4 = plVar2;
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x88) + 0x28);
    plVar2 = (long *)0x11;
    func_0x00010b547fac();
    param_4 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0xc4) == '\x01') {
    func_0x00010b547da4();
    param_4 = (long *)0x90;
    func_0x000107c280a8(0x90,plVar2);
    func_0x00010b547e28();
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x90) + 0x20);
    param_4 = (long *)0x13;
    func_0x00010b547fac();
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x98) + 0x54);
    param_4 = (long *)0x14;
    func_0x00010b547fac();
  }
  func_0x00010b548138(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = param_3[1];
  }
  if (lVar3 != 0) {
    param_4 = unaff_x19;
    func_0x000107c280a0();
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0xa0) + 0x18);
    param_4 = (long *)0x16;
    func_0x00010b547fac();
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0xa8) + 0x20);
    param_4 = (long *)0x17;
    func_0x00010b547fac();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b548024();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(long **)(extraout_x8_00 + 0x10);
    }
    else {
      lVar3 = extraout_x8_00 + 8;
    }
    if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
      _memcpy(param_4,lVar3,(ulong)param_3 & 0xffffffff);
      return (long *)((long)param_4 + (long)(int)param_3);
    }
    while( true ) {
      iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      uVar1 = iVar5 - iVar6;
      param_3 = (long *)(ulong)uVar1;
      if (uVar1 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  return param_4;
}



/* Entry: 10b545d20; end: 10b545d23;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b545d20(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b547ed8();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010b548560();
    puVar2 = unaff_x22;
  }
  func_0x00010b547f44();
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b548480();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5484dc();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b54745c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b53f384();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b547504();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10b53fb78();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b548540();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b5475f8();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_10b53feb4();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b5484f4();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b547688();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_10b53ff08();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b5476e0();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_10b540150();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b547738();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_10b54248c();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b5477d4();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_10b542c30();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x58);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b54785c();
        *(ulong **)(unaff_x21 + 0x58) = param_1;
      }
      else {
        FUN_10b543528();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b5478a8();
        *(ulong **)(unaff_x21 + 0x60) = param_1;
      }
      else {
        FUN_10b543a1c();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b547960();
        *(ulong **)(unaff_x21 + 0x68) = param_1;
      }
      else {
        FUN_10b543f88();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x70);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b5479f0();
        *(ulong **)(unaff_x21 + 0x70) = param_1;
      }
      else {
        FUN_10b544030();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x78);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b547a58();
        *(ulong **)(unaff_x21 + 0x78) = param_1;
      }
      else {
        FUN_10b544890();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x80);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b547ae0();
        *(ulong **)(unaff_x21 + 0x80) = param_1;
      }
      else {
        FUN_10b544afc();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x88);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b547b2c();
        *(ulong **)(unaff_x21 + 0x88) = param_1;
      }
      else {
        FUN_10b544d38();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x90);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b547088();
        *(ulong **)(unaff_x21 + 0x90) = param_1;
      }
      else {
        FUN_10b542cbc();
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x98);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b547b88();
        *(ulong **)(unaff_x21 + 0x98) = param_1;
      }
      else {
        FUN_10b543258();
      }
    }
  }
  if ((uVar1 & 0x30000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xa0);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b547c24();
        *(ulong **)(unaff_x21 + 0xa0) = param_1;
      }
      else {
        FUN_10b5451ac();
      }
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xa8);
      if (param_1 == (ulong *)0x0) {
        func_0x000108c6f470();
        *(ulong **)(unaff_x21 + 0xa8) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0xb0) != 0) {
    *(long *)(unaff_x21 + 0xb0) = *(long *)(unaff_x20 + 0xb0);
  }
  if (*(long *)(unaff_x20 + 0xb8) != 0) {
    *(long *)(unaff_x21 + 0xb8) = *(long *)(unaff_x20 + 0xb8);
  }
  if (*(int *)(unaff_x20 + 0xc0) != 0) {
    *(int *)(unaff_x21 + 0xc0) = *(int *)(unaff_x20 + 0xc0);
  }
  if (*(char *)(unaff_x20 + 0xc4) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xc4) = 1;
  }
  func_0x00010b547e6c();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b547eb0();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b545d24; end: 10b5460d3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b545d24(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b547ed8();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010b548560();
    puVar2 = unaff_x22;
  }
  func_0x00010b547f44();
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b548480();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5484dc();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b54745c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b53f384();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b547504();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10b53fb78();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b548540();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b5475f8();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_10b53feb4();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b5484f4();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b547688();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_10b53ff08();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b5476e0();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_10b540150();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b547738();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_10b54248c();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b5477d4();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_10b542c30();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x58);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b54785c();
        *(ulong **)(unaff_x21 + 0x58) = param_1;
      }
      else {
        FUN_10b543528();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b5478a8();
        *(ulong **)(unaff_x21 + 0x60) = param_1;
      }
      else {
        FUN_10b543a1c();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b547960();
        *(ulong **)(unaff_x21 + 0x68) = param_1;
      }
      else {
        FUN_10b543f88();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x70);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b5479f0();
        *(ulong **)(unaff_x21 + 0x70) = param_1;
      }
      else {
        FUN_10b544030();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x78);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b547a58();
        *(ulong **)(unaff_x21 + 0x78) = param_1;
      }
      else {
        FUN_10b544890();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x80);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b547ae0();
        *(ulong **)(unaff_x21 + 0x80) = param_1;
      }
      else {
        FUN_10b544afc();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x88);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b547b2c();
        *(ulong **)(unaff_x21 + 0x88) = param_1;
      }
      else {
        FUN_10b544d38();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x90);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b547088();
        *(ulong **)(unaff_x21 + 0x90) = param_1;
      }
      else {
        FUN_10b542cbc();
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x98);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b547b88();
        *(ulong **)(unaff_x21 + 0x98) = param_1;
      }
      else {
        FUN_10b543258();
      }
    }
  }
  if ((uVar1 & 0x30000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xa0);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b547c24();
        *(ulong **)(unaff_x21 + 0xa0) = param_1;
      }
      else {
        FUN_10b5451ac();
      }
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xa8);
      if (param_1 == (ulong *)0x0) {
        func_0x000108c6f470();
        *(ulong **)(unaff_x21 + 0xa8) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0xb0) != 0) {
    *(long *)(unaff_x21 + 0xb0) = *(long *)(unaff_x20 + 0xb0);
  }
  if (*(long *)(unaff_x20 + 0xb8) != 0) {
    *(long *)(unaff_x21 + 0xb8) = *(long *)(unaff_x20 + 0xb8);
  }
  if (*(int *)(unaff_x20 + 0xc0) != 0) {
    *(int *)(unaff_x21 + 0xc0) = *(int *)(unaff_x20 + 0xc0);
  }
  if (*(char *)(unaff_x20 + 0xc4) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xc4) = 1;
  }
  func_0x00010b547e6c();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b547eb0();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5460d4; end: 10b5461fb;  */

void FUN_10b5460d4(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 == 0) {
    func_0x00010b548030();
  }
  else {
    func_0x00010b547e60();
  }
  func_0x00010b547ea0(&PTR_FUN_110d027d8);
  *(undefined8 *)(param_2 + 0x10) = extraout_x8;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 10b5461fc; end: 10b54622b;  */

long * FUN_10b5461fc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b54622c; end: 10b546beb;  */

void FUN_10b54622c(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    func_0x00010b548030();
  }
  else {
    func_0x00010b547e60();
  }
  func_0x00010b547ea0(&PTR_FUN_110d027d8);
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10b546bec; end: 10b546c6b;  */

void FUN_10b546bec(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b548080();
  if (param_1 == 0) {
    func_0x00010b548338();
  }
  else {
    func_0x00010b548200();
  }
  func_0x00010b54832c();
  func_0x00010b5482e4(&PTR_FUN_110d03228);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b547d8c();
  }
  *(undefined8 *)(unaff_x21 + 0x10) = 0;
  *(undefined8 *)(unaff_x21 + 0x18) = 0;
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x19;
  FUN_10b53f678((undefined8 *)(unaff_x21 + 0x10),unaff_x20 + 0x10);
  lVar1 = unaff_x20 + 0x28;
  func_0x00010b548180();
  *(long *)(unaff_x21 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x30) = 0;
  return;
}



/* Entry: 10b546c6c; end: 10b546dbb;  */

void FUN_10b546c6c(long param_1)

{
  undefined4 uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b548094();
  if (param_1 == 0) {
    func_0x00010b5480b8();
  }
  else {
    func_0x00010b5480c0();
    param_1 = unaff_x20;
  }
  func_0x00010b5480d4();
  func_0x00010b5480c8(&PTR_FUN_110d02af8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b547d8c();
  }
  func_0x00010b547dd4();
  *(long *)(unaff_x21 + 0x10) = param_1;
  *(undefined4 *)(unaff_x21 + 0x24) = 0;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x21 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x21 + 0x20) = uVar1;
  return;
}



/* Entry: 10b546dbc; end: 10b546e23;  */

undefined8 * FUN_10b546dbc(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5482f0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b548108();
  }
  else {
    param_1 = unaff_x21;
    FUN_10b4d80e0();
  }
  *param_1 = &PTR_FUN_110d02aa8;
  param_1[1] = unaff_x21;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_10b540198();
  return param_1;
}



/* Entry: 10b546e24; end: 10b547003;  */

void FUN_10b546e24(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b548080();
  if (param_1 == 0) {
    __Znwm(0x68);
  }
  else {
    func_0x00010b5484c0();
  }
  func_0x00010b54832c();
  func_0x00010b5482e4(&PTR_FUN_110d02ff8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b547d8c();
  }
  *(undefined4 *)(unaff_x21 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  lVar2 = unaff_x20 + 0x18;
  func_0x00010b548180();
  *(long *)(unaff_x21 + 0x18) = lVar2;
  lVar2 = unaff_x20 + 0x20;
  func_0x00010b548180();
  *(long *)(unaff_x21 + 0x20) = lVar2;
  lVar2 = unaff_x20 + 0x28;
  func_0x00010b548180();
  *(long *)(unaff_x21 + 0x28) = lVar2;
  *(undefined4 *)(unaff_x21 + 0x60) = *(undefined4 *)(unaff_x20 + 0x60);
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = unaff_x19;
    func_0x00010b546c6c();
  }
  *(long *)(unaff_x21 + 0x30) = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = unaff_x19;
    func_0x00010b546cd4();
  }
  *(long *)(unaff_x21 + 0x38) = lVar2;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined4 *)(unaff_x21 + 0x50) = *(undefined4 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x21 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x21 + 0x40) = uVar3;
  if (*(int *)(unaff_x21 + 0x60) == 9) {
    func_0x00010b546d20();
  }
  else {
    if (*(int *)(unaff_x21 + 0x60) != 8) {
      return;
    }
    unaff_x19 = unaff_x20 + 0x58;
    func_0x00010b548180();
  }
  *(long *)(unaff_x21 + 0x58) = unaff_x19;
  return;
}



/* Entry: 10b547004; end: 10b547087;  */

void FUN_10b547004(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010b548094();
  if (param_1 == 0) {
    func_0x00010b54830c();
  }
  else {
    func_0x00010b548314();
  }
  func_0x00010b5480d4();
  func_0x00010b5480c8(&PTR_FUN_110d02fa8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b547d8c();
  }
  func_0x000105991a48(unaff_x21 + 0x10);
  *(undefined8 *)(unaff_x21 + 0x30) = 0;
  *(undefined8 *)(unaff_x21 + 0x38) = 0;
  *(undefined8 *)(unaff_x21 + 0x40) = unaff_x20;
  FUN_10b542244((undefined8 *)(unaff_x21 + 0x30),unaff_x19 + 0x30);
  *(undefined4 *)(unaff_x21 + 0x48) = 0;
  return;
}



/* Entry: 10b547088; end: 10b5471cf;  */

void FUN_10b547088(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b548094();
  if (param_1 == 0) {
    func_0x00010b5480b8();
  }
  else {
    func_0x00010b5480c0();
    param_1 = unaff_x20;
  }
  func_0x00010b5480d4();
  func_0x00010b5480c8(&PTR_FUN_110d028c8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b547d8c();
  }
  func_0x00010b547dd4();
  *(long *)(unaff_x21 + 0x10) = param_1;
  *(undefined4 *)(unaff_x21 + 0x20) = 0;
  *(undefined8 *)(unaff_x21 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b5471d0; end: 10b547283;  */

undefined8 * FUN_10b5471d0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010b548094();
  if (param_1 == 0) {
    unaff_x20 = (undefined8 *)0xf8;
    __Znwm();
  }
  else {
    param_2 = 0xf8;
    FUN_10b4d80e0();
  }
  func_0x00010b548400();
  unaff_x20[1] = param_2;
  *unaff_x20 = &PTR_FUN_110cf3b38;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(unaff_x20 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(unaff_x20 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)unaff_x20 + 0x1c) = 0;
  *(undefined8 *)((long)unaff_x20 + 0x14) = 0;
  *(undefined4 *)((long)unaff_x20 + 0x24) = 0;
  unaff_x20[5] = param_2;
  FUN_10b4f0580(unaff_x20 + 3,param_3 + 0x18);
  lVar2 = param_3 + 0x30;
  func_0x00010b4f093c();
  unaff_x20[6] = lVar2;
  lVar2 = param_3 + 0x38;
  func_0x00010b4f093c();
  unaff_x20[7] = lVar2;
  lVar2 = param_3 + 0x40;
  func_0x00010b4f093c();
  unaff_x20[8] = lVar2;
  lVar2 = param_3 + 0x48;
  func_0x00010b4f093c();
  unaff_x20[9] = lVar2;
  *(undefined4 *)(unaff_x20 + 0x1e) = *(undefined4 *)(param_3 + 0xf0);
  *(undefined4 *)((long)unaff_x20 + 0xf4) = *(undefined4 *)(param_3 + 0xf4);
  uVar1 = *(uint *)(unaff_x20 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f0638(param_2,*(undefined8 *)(param_3 + 0x50));
  }
  unaff_x20[10] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f066c(param_2,*(undefined8 *)(param_3 + 0x58));
  }
  unaff_x20[0xb] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000105992a50(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  unaff_x20[0xc] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f06a8(param_2,*(undefined8 *)(param_3 + 0x68));
  }
  unaff_x20[0xd] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b4f0978();
  }
  unaff_x20[0xe] = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000106af67c0(param_2,*(undefined8 *)(param_3 + 0x78));
  }
  unaff_x20[0xf] = uVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f06e4(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  unaff_x20[0x10] = uVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f0714(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  unaff_x20[0x11] = uVar3;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4e532c(param_2,*(undefined8 *)(param_3 + 0x90));
  }
  unaff_x20[0x12] = uVar3;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f0744(param_2,*(undefined8 *)(param_3 + 0x98));
  }
  unaff_x20[0x13] = uVar3;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f0780(param_2,*(undefined8 *)(param_3 + 0xa0));
  }
  unaff_x20[0x14] = uVar3;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b4f0978();
  }
  unaff_x20[0x15] = uVar3;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b4f0978();
  }
  unaff_x20[0x16] = uVar3;
  if ((uVar1 >> 0xd & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f07b4(param_2,*(undefined8 *)(param_3 + 0xb8));
  }
  unaff_x20[0x17] = uVar3;
  uVar4 = *(undefined8 *)(param_3 + 200);
  uVar3 = *(undefined8 *)(param_3 + 0xc0);
  uVar5 = *(undefined8 *)(param_3 + 0xc9);
  *(undefined8 *)((long)unaff_x20 + 0xd1) = *(undefined8 *)(param_3 + 0xd1);
  *(undefined8 *)((long)unaff_x20 + 0xc9) = uVar5;
  unaff_x20[0x19] = uVar4;
  unaff_x20[0x18] = uVar3;
  if (*(int *)(unaff_x20 + 0x1e) == 6) {
    uVar3 = param_2;
    func_0x00010b4f07e8(param_2,*(undefined8 *)(param_3 + 0xe0));
    unaff_x20[0x1c] = uVar3;
  }
  if (*(int *)((long)unaff_x20 + 0xf4) == 0x1a) {
    func_0x00010b4f0854(param_2,*(undefined8 *)(param_3 + 0xe8));
  }
  else {
    if (*(int *)((long)unaff_x20 + 0xf4) != 0x17) {
      return unaff_x20;
    }
    func_0x00010b4f0818(param_2,*(undefined8 *)(param_3 + 0xe8));
  }
  unaff_x20[0x1d] = param_2;
  return unaff_x20;
}



/* Entry: 10b547284; end: 10b5472df;  */

void FUN_10b547284(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010b548094();
  if (param_1 == 0) {
    func_0x00010b548030();
  }
  else {
    func_0x00010b547ec0();
  }
  func_0x00010b5480d4();
  func_0x00010b5480c8(&PTR_FUN_110d02c88);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b547d8c();
  }
  func_0x00010b547dd4();
  *(long *)(unaff_x21 + 0x10) = param_1;
  *(undefined4 *)(unaff_x21 + 0x1c) = 0;
  *(undefined4 *)(unaff_x21 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b5472e0; end: 10b54730f;  */

undefined8 * FUN_10b5472e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  func_0x00010b548094();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b548108();
  }
  else {
    func_0x00010b547fcc();
  }
  func_0x00010b548400();
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d01c80;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b53aa7c(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b547310; end: 10b5473ab;  */

void FUN_10b547310(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010b548094();
  if (param_1 == 0) {
    func_0x00010b548108();
  }
  else {
    func_0x00010b547fcc();
  }
  func_0x00010b5480d4();
  func_0x00010b5480c8(&PTR_FUN_110d02e68);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b547d8c();
  }
  func_0x00010b547dd4();
  func_0x00010b547f04();
  func_0x00010b5483c4();
  return;
}



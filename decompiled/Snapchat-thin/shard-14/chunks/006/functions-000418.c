/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b541cec; end: 10b541cff;  */

void FUN_10b541cec(void)

{
  FUN_10b541cbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b541d00; end: 10b541d0b;  */

undefined ** FUN_10b541d00(void)

{
  return &PTR_DAT_110d039b0;
}



/* Entry: 10b541d0c; end: 10b541d3f;  */

void FUN_10b541d0c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b547dbc();
  func_0x00010b548214();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 10b541d40; end: 10b541e23;  */

long * FUN_10b541d40(long *param_1,long *param_2,ulong param_3,long *param_4)

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
  
  func_0x00010b547e44();
  if ((int)param_1[4] != 0) {
    func_0x00010b547e94();
    param_2 = param_1;
    func_0x00010b548110();
    func_0x00010b547fd8();
    unaff_x20 = param_1;
  }
  func_0x00010b548038(*(undefined8 *)(unaff_x21 + 0x10));
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10b541d98;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b541d98:
      param_4 = (long *)&UNK_10f77887c;
      func_0x00010b547fe4();
      func_0x00010b54843c();
      func_0x00010b547dc8();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010b548038(*(undefined8 *)(unaff_x21 + 0x18));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b541df0;
  }
  else if ((int)param_2 == 0) goto LAB_10b541df0;
  param_4 = (long *)&UNK_10f7788d7;
  func_0x00010b547fe4();
  func_0x00010b547dc8();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10b541df0:
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



/* Entry: 10b541e24; end: 10b541f23;  */

long FUN_10b541e24(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
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
    func_0x00010b547de0();
    lVar2 = lVar2 + extraout_x8_01 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar1 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x24) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b541f24; end: 10b541f63;  */

long FUN_10b541f24(long param_1)

{
  func_0x00010b547fb4();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c303ac();
  }
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b541f64; end: 10b541f67;  */

long FUN_10b541f64(long param_1)

{
  func_0x00010b547fb4();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c303ac();
  }
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b541f68; end: 10b541f7b;  */

void FUN_10b541f68(void)

{
  FUN_10b541f24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b541f7c; end: 10b541f87;  */

undefined ** FUN_10b541f7c(void)

{
  return &PTR_DAT_110d03a20;
}



/* Entry: 10b541f88; end: 10b541fcf;  */

void FUN_10b541f88(long param_1)

{
  ulong *puVar1;
  
  func_0x000105991b74(param_1 + 0x10);
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
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



/* Entry: 10b541fd0; end: 10b542147;  */

undefined8 * FUN_10b541fd0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lStack_78;
  undefined8 *puStack_70;
  
  func_0x00010b547e44();
  if (*(int *)(param_1 + 2) != 0) {
    if ((*(int *)(param_1 + 2) == 1) || ((*(byte *)(unaff_x19 + 0x3a) & 1) == 0)) {
      func_0x00010b548324();
      while (lStack_78 != 0) {
        lVar6 = lStack_78 + 8;
        param_1 = (undefined8 *)(lStack_78 + 0x20);
        unaff_x20 = (undefined8 *)0x1;
        func_0x00010b547f24(1);
        lVar3 = (long)*(char *)(lStack_78 + 0x1f);
        if (lVar3 < 0) {
          lVar6 = *(long *)(lStack_78 + 8);
          lVar3 = *(long *)(lStack_78 + 0x10);
        }
        func_0x00010b547ecc(lVar6,lVar3);
        if (*(char *)(lStack_78 + 0x37) < '\0') {
          param_1 = *(undefined8 **)(lStack_78 + 0x20);
        }
        func_0x00010b547ecc(param_1);
        func_0x00010b54831c();
      }
    }
    else {
      func_0x00010b5484b4();
      for (lVar6 = lStack_78 << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
        puVar5 = (undefined8 *)*puStack_70;
        param_1 = puVar5 + 3;
        unaff_x20 = (undefined8 *)0x1;
        func_0x00010b547f24(1);
        lVar3 = (long)*(char *)((long)puVar5 + 0x17);
        puVar2 = puVar5;
        if (lVar3 < 0) {
          lVar3 = puVar5[1];
          puVar2 = (undefined8 *)*puVar5;
        }
        func_0x00010b547ecc(puVar2,lVar3);
        if (*(char *)((long)puVar5 + 0x2f) < '\0') {
          param_1 = (undefined8 *)puVar5[3];
        }
        func_0x00010b547ecc(param_1);
        puStack_70 = puStack_70 + 1;
      }
      func_0x00010b548304();
    }
  }
  iVar1 = *(int *)(unaff_x21 + 0x38);
  for (iVar4 = 0; iVar1 != iVar4; iVar4 = iVar4 + 1) {
    func_0x00010b5482b8();
    param_1 = (undefined8 *)0x2;
    func_0x00010b547fac(2);
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b548024();
    func_0x00010b548118();
    func_0x0001053930c4();
    unaff_x20 = param_1;
  }
  return unaff_x20;
}



/* Entry: 10b542148; end: 10b5421fb;  */

long FUN_10b542148(long param_1)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong uVar5;
  long extraout_x9;
  ulong uVar6;
  long lStack_58;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x10);
  lVar3 = param_1;
  func_0x00010b548324();
  while (lStack_58 != 0) {
    func_0x00010b5484a0();
    uVar6 = lVar3 + uVar6;
    func_0x00010b54831c();
  }
  uVar5 = *(ulong *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x38);
  lVar3 = uVar6 + (long)iVar2;
  puVar1 = (ulong *)(param_1 + 0x30);
  if ((uVar5 & 1) != 0) {
    puVar1 = (ulong *)(uVar5 + 7);
  }
  while (((long)iVar2 & 0x1fffffffffffffffU) != 0) {
    FUN_10b541e24(*puVar1);
    func_0x00010b54826c();
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar4 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x48) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5421fc; end: 10b5421ff;  */

void FUN_10b5421fc(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b548080();
  func_0x0001059929d4(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (ulong *)(unaff_x19 + 0x30);
  FUN_10b542244();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
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



/* Entry: 10b542200; end: 10b542243;  */

void FUN_10b542200(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b548080();
  func_0x0001059929d4(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (ulong *)(unaff_x19 + 0x30);
  FUN_10b542244();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b547df8();
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



/* Entry: 10b542244; end: 10b542253;  */

void FUN_10b542244(long *param_1,long param_2)

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



/* Entry: 10b542254; end: 10b5422ab;  */

long FUN_10b542254(long param_1)

{
  func_0x00010b547fb4();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b541964();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b541f24();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5422ac; end: 10b5422af;  */

long FUN_10b5422ac(long param_1)

{
  func_0x00010b547fb4();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b541964();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b541f24();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5422b0; end: 10b5422c3;  */

void FUN_10b5422b0(void)

{
  FUN_10b542254();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5422c4; end: 10b5422cf;  */

undefined ** FUN_10b5422c4(void)

{
  return &PTR_DAT_110d03a80;
}



/* Entry: 10b5422d0; end: 10b542333;  */

void FUN_10b5422d0(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  if (0 < (int)param_1[4]) {
    func_0x0001053936e4(param_1 + 3);
  }
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5419b4(param_1[6]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b541f88(param_1[7]);
    }
  }
  func_0x00010b54856c();
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



/* Entry: 10b542334; end: 10b542487;  */

long * FUN_10b542334(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b547ee8();
  iVar6 = *(int *)(param_1 + 0x20);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar5 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar1 + 0x14);
    param_4 = (long *)0x1;
    func_0x00010b547fac();
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x34);
    param_4 = (long *)0x2;
    func_0x00010b547fac();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x48);
    param_4 = (long *)0x3;
    func_0x00010b547fac();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b548024();
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



/* Entry: 10b542488; end: 10b54248b;  */

void FUN_10b542488(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b547e14();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b548228();
  }
  func_0x00010b548474();
  func_0x00010b5483dc();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b548540();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010b546f94();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_10b541c04();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b5484f4();
      if (param_1 == (ulong *)0x0) {
        FUN_10b547004();
        *(ulong **)(unaff_x21 + 0x38) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b542200();
      }
    }
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



/* Entry: 10b54248c; end: 10b542517;  */

void FUN_10b54248c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b547e14();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b548228();
  }
  func_0x00010b548474();
  func_0x00010b5483dc();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b548540();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010b546f94();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_10b541c04();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b5484f4();
      if (param_1 == (ulong *)0x0) {
        FUN_10b547004();
        *(ulong **)(unaff_x21 + 0x38) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b542200();
      }
    }
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



/* Entry: 10b542518; end: 10b542527;  */

void FUN_10b542518(long *param_1,long param_2)

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



/* Entry: 10b542528; end: 10b54257b;  */

long FUN_10b542528(long param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  func_0x00010b548150();
  func_0x00010b5484cc();
  func_0x00010b5482d4();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  return param_1;
}



/* Entry: 10b54257c; end: 10b54257f;  */

long FUN_10b54257c(long param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  func_0x00010b548150();
  func_0x00010b5484cc();
  func_0x00010b5482d4();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  return param_1;
}



/* Entry: 10b542580; end: 10b542593;  */

void FUN_10b542580(void)

{
  FUN_10b542528();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b542594; end: 10b54259f;  */

undefined ** FUN_10b542594(void)

{
  return &PTR_DAT_110d03ad8;
}



/* Entry: 10b5425a0; end: 10b5425fb;  */

void FUN_10b5425a0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b547dbc();
  func_0x00010b548214();
  func_0x00010b5484d4();
  func_0x00010b5482dc();
  func_0x000107c3025c(unaff_x19 + 0x30);
  func_0x000107c3025c(unaff_x19 + 0x38);
  func_0x000107c3025c(unaff_x19 + 0x40);
  func_0x000107c3025c(unaff_x19 + 0x48);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x50) = 0;
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



/* Entry: 10b5425fc; end: 10b5427af;  */

long * FUN_10b5425fc(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  func_0x00010b547f8c();
  func_0x00010b547e34();
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b542630;
  }
  else if ((int)param_2 != 0) {
LAB_10b542630:
    param_4 = (long *)&UNK_10f778983;
    func_0x00010b547fe4();
    param_2 = (long *)0x1;
    param_1 = unaff_x19;
    func_0x00010b547e08();
    unaff_x21 = param_1;
  }
  func_0x00010b548138(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x00010b54843c();
    func_0x00010b54801c();
    unaff_x21 = param_1;
  }
  func_0x00010b548534();
  if ((bool)in_ZR) {
    func_0x00010b547db0();
    param_2 = param_1;
    func_0x00010b5481d0();
    func_0x00010b547e28();
    unaff_x21 = param_1;
  }
  func_0x00010b548138(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x00010b548430();
    func_0x00010b54801c();
    unaff_x21 = param_1;
  }
  func_0x00010b548038(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5426ec;
  }
  else if ((int)param_2 == 0) goto LAB_10b5426ec;
  param_4 = (long *)&UNK_10f7789da;
  func_0x00010b547fe4();
  param_1 = unaff_x19;
  func_0x00010b547e08();
  unaff_x21 = param_1;
LAB_10b5426ec:
  func_0x00010b548138(*(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    param_1 = unaff_x19;
    func_0x00010b54801c();
    unaff_x21 = param_1;
  }
  func_0x00010b548138(*(undefined8 *)(unaff_x20 + 0x38));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    param_1 = unaff_x19;
    func_0x00010b54801c();
    unaff_x21 = param_1;
  }
  func_0x00010b548138(*(undefined8 *)(unaff_x20 + 0x40));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    param_1 = unaff_x19;
    func_0x00010b54801c();
    unaff_x21 = param_1;
  }
  func_0x00010b548138(*(undefined8 *)(unaff_x20 + 0x48));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x00010b54801c();
    param_1 = unaff_x19;
    unaff_x21 = unaff_x19;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b548024();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8_05 + 0x10);
    }
    func_0x00010b548254();
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
  return unaff_x21;
}



/* Entry: 10b5427b0; end: 10b5428d3;  */

void FUN_10b5427b0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
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
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b5480ac();
  }
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b5480ac();
  }
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b5480ac();
  }
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x30));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b5480ac();
  }
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x38));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b5480ac();
  }
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x40));
  lVar2 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b5480ac();
  }
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x48));
  lVar2 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b5480ac();
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x50) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar2 = extraout_x8_07;
    if (extraout_x8_07 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x54) = iVar1;
  return;
}



/* Entry: 10b5428d4; end: 10b5428d7;  */

void FUN_10b5428d4(ulong *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 extraout_w8;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
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
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54846c();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x38);
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x40));
  lVar1 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x40);
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x48));
  lVar1 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x48);
    func_0x000107c30248();
  }
  func_0x00010b548534();
  if ((bool)in_ZR) {
    *(undefined1 *)(unaff_x19 + 0x50) = extraout_w8;
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



/* Entry: 10b5428d8; end: 10b542a37;  */

void FUN_10b5428d8(ulong *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 extraout_w8;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
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
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54846c();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x38);
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x40));
  lVar1 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x40);
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x48));
  lVar1 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x48);
    func_0x000107c30248();
  }
  func_0x00010b548534();
  if ((bool)in_ZR) {
    *(undefined1 *)(unaff_x19 + 0x50) = extraout_w8;
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



/* Entry: 10b542a38; end: 10b542a7b;  */

long FUN_10b542a38(long param_1)

{
  func_0x00010b547fb4();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b542d1c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b542528();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b542a7c; end: 10b542a7f;  */

long FUN_10b542a7c(long param_1)

{
  func_0x00010b547fb4();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b542d1c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b542528();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b542a80; end: 10b542a93;  */

void FUN_10b542a80(void)

{
  FUN_10b542a38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b542a94; end: 10b542a9f;  */

undefined ** FUN_10b542a94(void)

{
  return &PTR_DAT_110d03b40;
}



/* Entry: 10b542aa0; end: 10b542b17;  */

void FUN_10b542aa0(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x00010b54836c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010b542ae8(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_10b5425a0(unaff_x19[4]);
    }
  }
  func_0x00010b54856c();
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



/* Entry: 10b542b18; end: 10b542c0f;  */

long * FUN_10b542b18(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b547ee8();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    param_4 = (long *)0x1;
    func_0x00010b547fac();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x54);
    param_4 = (long *)0x2;
    func_0x00010b547fac();
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



/* Entry: 10b542c10; end: 10b542c2b;  */

long FUN_10b542c10(long param_1)

{
  long extraout_x8;
  
  FUN_10b542e2c();
  func_0x00010b547cec();
  return param_1 + extraout_x8;
}



/* Entry: 10b542c2c; end: 10b542c2f;  */

void FUN_10b542c2c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
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
        func_0x00010b547088();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b542cbc();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b5484dc();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5470e8();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b5428d8();
      }
    }
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



/* Entry: 10b542c30; end: 10b542cbb;  */

void FUN_10b542c30(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
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
        func_0x00010b547088();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b542cbc();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x00010b5484dc();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5470e8();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b5428d8();
      }
    }
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



/* Entry: 10b542cbc; end: 10b542d1b;  */

void FUN_10b542cbc(ulong *param_1,long param_2)

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



/* Entry: 10b542d1c; end: 10b542d43;  */

undefined8 FUN_10b542d1c(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b542d44; end: 10b542d47;  */

undefined8 FUN_10b542d44(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b542d48; end: 10b542d5b;  */

void FUN_10b542d48(void)

{
  FUN_10b542d1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b542d5c; end: 10b542d67;  */

undefined ** FUN_10b542d5c(void)

{
  return &PTR_DAT_110d03ba0;
}



/* Entry: 10b542d68; end: 10b542e2b;  */

long * FUN_10b542d68(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar2;
  long unaff_x22;
  int iVar3;
  
  func_0x00010b547f8c();
  func_0x00010b547e34();
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b542db8;
  }
  else if ((int)param_2 == 0) goto LAB_10b542db8;
  param_4 = (long *)&UNK_10f778a28;
  func_0x00010b547fe4();
  func_0x00010b547e08();
  param_1 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_10b542db8:
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b547db0();
    func_0x00010b5480e0();
    func_0x00010b547e28();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x00010b547db0();
    func_0x00010b5481d0();
    func_0x00010b547e54();
    unaff_x21 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return unaff_x21;
}



/* Entry: 10b542e2c; end: 10b542ea3;  */

void FUN_10b542e2c(long param_1)

{
  int iVar1;
  int extraout_w8;
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
    func_0x00010b548394();
    iVar1 = iVar1 + extraout_w8;
  }
  if (*(int *)(unaff_x19 + 0x1c) != 0) {
    func_0x00010b547de0();
    func_0x00010b54837c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x20) = iVar1;
  return;
}



/* Entry: 10b542ea4; end: 10b542ea7;  */

void FUN_10b542ea4(ulong *param_1,long param_2)

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



/* Entry: 10b542ea8; end: 10b542efb;  */

long FUN_10b542ea8(long param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  func_0x00010b548150();
  func_0x00010b5484cc();
  func_0x00010b5482d4();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  return param_1;
}



/* Entry: 10b542efc; end: 10b542eff;  */

long FUN_10b542efc(long param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  func_0x00010b548150();
  func_0x00010b5484cc();
  func_0x00010b5482d4();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  return param_1;
}



/* Entry: 10b542f00; end: 10b542f13;  */

void FUN_10b542f00(void)

{
  FUN_10b542ea8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b542f14; end: 10b542f1f;  */

undefined ** FUN_10b542f14(void)

{
  return &PTR_DAT_110d03bf8;
}



/* Entry: 10b542f20; end: 10b542f7b;  */

void FUN_10b542f20(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b547dbc();
  func_0x00010b548214();
  func_0x00010b5484d4();
  func_0x00010b5482dc();
  func_0x000107c3025c(unaff_x19 + 0x30);
  func_0x000107c3025c(unaff_x19 + 0x38);
  func_0x000107c3025c(unaff_x19 + 0x40);
  func_0x000107c3025c(unaff_x19 + 0x48);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x50) = 0;
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



/* Entry: 10b542f7c; end: 10b54312f;  */

long * FUN_10b542f7c(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  func_0x00010b547f8c();
  func_0x00010b547e34();
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b542fb0;
  }
  else if ((int)param_2 != 0) {
LAB_10b542fb0:
    param_4 = (long *)&UNK_10f778a60;
    func_0x00010b547fe4();
    param_2 = (long *)0x1;
    param_1 = unaff_x19;
    func_0x00010b547e08();
    unaff_x21 = param_1;
  }
  func_0x00010b548138(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x00010b54843c();
    func_0x00010b54801c();
    unaff_x21 = param_1;
  }
  func_0x00010b548534();
  if ((bool)in_ZR) {
    func_0x00010b547db0();
    param_2 = param_1;
    func_0x00010b5481d0();
    func_0x00010b547e28();
    unaff_x21 = param_1;
  }
  func_0x00010b548138(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x00010b548430();
    func_0x00010b54801c();
    unaff_x21 = param_1;
  }
  func_0x00010b548038(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b54306c;
  }
  else if ((int)param_2 == 0) goto LAB_10b54306c;
  param_4 = (long *)&UNK_10f778aac;
  func_0x00010b547fe4();
  param_1 = unaff_x19;
  func_0x00010b547e08();
  unaff_x21 = param_1;
LAB_10b54306c:
  func_0x00010b548138(*(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    param_1 = unaff_x19;
    func_0x00010b54801c();
    unaff_x21 = param_1;
  }
  func_0x00010b548138(*(undefined8 *)(unaff_x20 + 0x38));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    param_1 = unaff_x19;
    func_0x00010b54801c();
    unaff_x21 = param_1;
  }
  func_0x00010b548138(*(undefined8 *)(unaff_x20 + 0x40));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    param_1 = unaff_x19;
    func_0x00010b54801c();
    unaff_x21 = param_1;
  }
  func_0x00010b548138(*(undefined8 *)(unaff_x20 + 0x48));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x00010b54801c();
    param_1 = unaff_x19;
    unaff_x21 = unaff_x19;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b548024();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8_05 + 0x10);
    }
    func_0x00010b548254();
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
  return unaff_x21;
}



/* Entry: 10b543130; end: 10b543253;  */

void FUN_10b543130(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
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
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b5480ac();
  }
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b5480ac();
  }
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b5480ac();
  }
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x30));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b5480ac();
  }
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x38));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b5480ac();
  }
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x40));
  lVar2 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b5480ac();
  }
  func_0x00010b548010(*(undefined8 *)(unaff_x19 + 0x48));
  lVar2 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b5480ac();
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x50) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar2 = extraout_x8_07;
    if (extraout_x8_07 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x54) = iVar1;
  return;
}



/* Entry: 10b543254; end: 10b543257;  */

void FUN_10b543254(ulong *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 extraout_w8;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
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
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54846c();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x38);
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x40));
  lVar1 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x40);
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x48));
  lVar1 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x48);
    func_0x000107c30248();
  }
  func_0x00010b548534();
  if ((bool)in_ZR) {
    *(undefined1 *)(unaff_x19 + 0x50) = extraout_w8;
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



/* Entry: 10b543258; end: 10b5433b7;  */

void FUN_10b543258(ulong *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 extraout_w8;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
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
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    func_0x00010b54846c();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x38);
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x40));
  lVar1 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x40);
    func_0x000107c30248();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x48));
  lVar1 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x48);
    func_0x000107c30248();
  }
  func_0x00010b548534();
  if ((bool)in_ZR) {
    *(undefined1 *)(unaff_x19 + 0x50) = extraout_w8;
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



/* Entry: 10b5433b8; end: 10b5433df;  */

undefined8 FUN_10b5433b8(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b5433e0; end: 10b5433e3;  */

undefined8 FUN_10b5433e0(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b5433e4; end: 10b5433f7;  */

void FUN_10b5433e4(void)

{
  FUN_10b5433b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5433f8; end: 10b543403;  */

undefined ** FUN_10b5433f8(void)

{
  return &PTR_DAT_110d03c50;
}



/* Entry: 10b543404; end: 10b543433;  */

void FUN_10b543404(void)

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



/* Entry: 10b543434; end: 10b5434cf;  */

long * FUN_10b543434(long *param_1,long param_2,ulong param_3,long *param_4)

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
    if (unaff_x22[1] == 0) goto LAB_10b543478;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b543478;
  param_4 = (long *)&UNK_10f778aef;
  func_0x00010b547fe4();
  func_0x00010b547d38();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b543478:
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



/* Entry: 10b5434d0; end: 10b543523;  */

void FUN_10b5434d0(long param_1)

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



/* Entry: 10b543524; end: 10b543527;  */

void FUN_10b543524(ulong *param_1,long param_2)

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



/* Entry: 10b543528; end: 10b54357f;  */

void FUN_10b543528(ulong *param_1,long param_2)

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



/* Entry: 10b543580; end: 10b5435a7;  */

undefined8 FUN_10b543580(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b5435a8; end: 10b5435ab;  */

undefined8 FUN_10b5435a8(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b5435ac; end: 10b5435bf;  */

void FUN_10b5435ac(void)

{
  FUN_10b543580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5435c0; end: 10b5435cb;  */

undefined ** FUN_10b5435c0(void)

{
  return &PTR_DAT_110d03ca0;
}



/* Entry: 10b5435cc; end: 10b5435f7;  */

void FUN_10b5435cc(void)

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



/* Entry: 10b5435f8; end: 10b543687;  */

long * FUN_10b5435f8(long *param_1,long param_2,ulong param_3,long *param_4)

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
    if (unaff_x22[1] == 0) goto LAB_10b54363c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b54363c;
  param_4 = (long *)&UNK_10f778b1e;
  func_0x00010b547fe4();
  func_0x00010b547d38();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b54363c:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x00010b547e94();
    func_0x00010b547f7c();
    func_0x00010b547fd8();
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



/* Entry: 10b543688; end: 10b5436ef;  */

void FUN_10b543688(long param_1)

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
    func_0x00010b547de0();
    func_0x00010b54837c();
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



/* Entry: 10b5436f0; end: 10b5436f3;  */

void FUN_10b5436f0(ulong *param_1,long param_2)

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



/* Entry: 10b5436f4; end: 10b54382b;  */

void FUN_10b5436f4(ulong *param_1,long param_2)

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



/* Entry: 10b54382c; end: 10b543863;  */

long FUN_10b54382c(long param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x00010b543748(param_1);
  }
  return param_1;
}



/* Entry: 10b543864; end: 10b543867;  */

long FUN_10b543864(long param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x00010b543748(param_1);
  }
  return param_1;
}



/* Entry: 10b543868; end: 10b54387b;  */

void FUN_10b543868(void)

{
  FUN_10b54382c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54387c; end: 10b543887;  */

undefined ** FUN_10b54387c(void)

{
  return &PTR_DAT_110d03d00;
}



/* Entry: 10b543888; end: 10b5438bb;  */

void FUN_10b543888(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b547dbc();
  func_0x00010b543748();
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



/* Entry: 10b5438bc; end: 10b543963;  */

long * FUN_10b5438bc(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  func_0x00010b547d1c();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b543900;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b543900;
  param_4 = (long *)&UNK_10f778b65;
  func_0x00010b547fe4();
  func_0x00010b547d38();
  unaff_x20 = unaff_x22;
LAB_10b543900:
  plVar3 = (long *)(ulong)*(uint *)(unaff_x21 + 0x24);
  uVar2 = *(uint *)(unaff_x21 + 0x24) - 2;
  if (uVar2 < 4) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x18) +
                              *(long *)(&UNK_10e5bcec0 + (ulong)uVar2 * 8));
    func_0x00010b547fac();
    param_4 = unaff_x20;
    unaff_x20 = plVar3;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b548024();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b548118();
  if (*plVar3 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*plVar3 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      param_3 = (ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = plVar3;
      func_0x000107c303e4(plVar3,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b543964; end: 10b543a17;  */

long FUN_10b543964(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b547d4c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  switch(*(undefined4 *)(unaff_x19 + 0x24)) {
  case 2:
    FUN_10b543688(*(undefined8 *)(unaff_x19 + 0x18));
    break;
  case 3:
    FUN_10b4efc40(*(undefined8 *)(unaff_x19 + 0x18));
    break;
  case 4:
    FUN_10b4e5fac(*(undefined8 *)(unaff_x19 + 0x18));
    break;
  case 5:
    FUN_10b4e9b68(*(undefined8 *)(unaff_x19 + 0x18));
    break;
  default:
    goto LAB_10b5439ec;
  }
  func_0x00010b547ca8();
LAB_10b5439ec:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b54812c();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x20) = (int)param_1;
  return param_1;
}



/* Entry: 10b543a18; end: 10b543a1b;  */

void FUN_10b543a18(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b547ed8();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  if ((uVar3 & 1) != 0) {
    func_0x00010b548560();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        func_0x00010b543748();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    switch(iVar1) {
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010b548054();
        func_0x00010b5436f4();
        goto LAB_10b543b6c;
      }
      func_0x00010b548260();
      func_0x00010b547184();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010b548054();
        FUN_10b4f0000();
        goto LAB_10b543b6c;
      }
      func_0x00010b548260();
      func_0x00010b5471d0();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b548054();
        FUN_10b4e63fc();
        goto LAB_10b543b6c;
      }
      func_0x00010b548260();
      func_0x00010b54720c();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x00010b548054();
        FUN_10b4e9f8c();
        goto LAB_10b543b6c;
      }
      func_0x00010b548260();
      func_0x00010b547248();
      break;
    default:
      goto LAB_10b543b6c;
    }
    unaff_x21[3] = (ulong)param_1;
  }
LAB_10b543b6c:
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



/* Entry: 10b543a1c; end: 10b543b8f;  */

void FUN_10b543a1c(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b547ed8();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  if ((uVar3 & 1) != 0) {
    func_0x00010b548560();
  }
  func_0x00010b548004(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b547ff8();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        func_0x00010b543748();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    switch(iVar1) {
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010b548054();
        func_0x00010b5436f4();
        goto LAB_10b543b6c;
      }
      func_0x00010b548260();
      func_0x00010b547184();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010b548054();
        FUN_10b4f0000();
        goto LAB_10b543b6c;
      }
      func_0x00010b548260();
      func_0x00010b5471d0();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b548054();
        FUN_10b4e63fc();
        goto LAB_10b543b6c;
      }
      func_0x00010b548260();
      func_0x00010b54720c();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x00010b548054();
        FUN_10b4e9f8c();
        goto LAB_10b543b6c;
      }
      func_0x00010b548260();
      func_0x00010b547248();
      break;
    default:
      goto LAB_10b543b6c;
    }
    unaff_x21[3] = (ulong)param_1;
  }
LAB_10b543b6c:
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



/* Entry: 10b543b90; end: 10b543bb7;  */

undefined8 FUN_10b543b90(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b543bb8; end: 10b543bbb;  */

undefined8 FUN_10b543bb8(undefined8 param_1)

{
  func_0x00010b547fb4();
  func_0x00010b54804c();
  return param_1;
}



/* Entry: 10b543bbc; end: 10b543bcf;  */

void FUN_10b543bbc(void)

{
  FUN_10b543b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b543bd0; end: 10b543bdb;  */

undefined ** FUN_10b543bd0(void)

{
  return &PTR_DAT_110d03d50;
}



/* Entry: 10b543bdc; end: 10b543c07;  */

void FUN_10b543bdc(void)

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



/* Entry: 10b543c08; end: 10b543c9f;  */

long * FUN_10b543c08(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010b547d1c();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b543c4c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b543c4c;
  param_4 = (long *)&UNK_10f778b9e;
  func_0x00010b547fe4();
  func_0x00010b547d38();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b543c4c:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x00010b547e94();
    uVar2 = *(undefined4 *)(unaff_x21 + 0x18);
    func_0x00010b548498();
    unaff_x20 = (long *)((long)param_1 + 4);
    *(undefined4 *)param_1 = uVar2;
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



/* Entry: 10b543ca0; end: 10b543cef;  */

void FUN_10b543ca0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b547d4c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
  }
  iVar1 = (int)param_1;
  func_0x00010b548520();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b54812c();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b543cf0; end: 10b543cf3;  */

void FUN_10b543cf0(ulong *param_1,long param_2)

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



/* Entry: 10b543cf4; end: 10b543d4b;  */

void FUN_10b543cf4(ulong *param_1,long param_2)

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



/* Entry: 10b543d4c; end: 10b543d8f;  */

long FUN_10b543d4c(long param_1)

{
  func_0x00010b547fb4();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b543b90();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b53a814();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b543d90; end: 10b543d93;  */

long FUN_10b543d90(long param_1)

{
  func_0x00010b547fb4();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b543b90();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b53a814();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b543d94; end: 10b543da7;  */

void FUN_10b543d94(void)

{
  FUN_10b543d4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b543da8; end: 10b543db3;  */

undefined ** FUN_10b543da8(void)

{
  return &PTR_DAT_110d03dc0;
}



/* Entry: 10b543db4; end: 10b543e03;  */

void FUN_10b543db4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x00010b54836c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      FUN_10b543bdc(*(undefined8 *)(unaff_x19 + 0x18));
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_10b53a868(*(undefined8 *)(unaff_x19 + 0x20));
    }
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
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



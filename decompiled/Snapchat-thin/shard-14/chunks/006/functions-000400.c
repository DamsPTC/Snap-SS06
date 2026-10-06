/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b515b64; end: 10b515b67;  */

long FUN_10b515b64(long param_1)

{
  func_0x000107c39d80();
  FUN_10b515f2c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b515b68; end: 10b515b7b;  */

void FUN_10b515b68(void)

{
  FUN_10b515b38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b515b7c; end: 10b515b87;  */

undefined ** FUN_10b515b7c(void)

{
  return &PTR_DAT_110cfa170;
}



/* Entry: 10b515b88; end: 10b515bcb;  */

void FUN_10b515b88(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b515bcc; end: 10b515d27;  */

long * FUN_10b515bcc(long param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x00010b51616c();
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010b516154();
    param_4 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010b5161e4();
  }
  iVar6 = *(int *)(unaff_x20 + 0x18);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    uVar4 = *(ulong *)(unaff_x20 + 0x10);
    puVar1 = (ulong *)(unaff_x20 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar5 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar1 + 0x14);
    param_4 = (long *)0x2;
    func_0x00010b516204();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b516234();
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



/* Entry: 10b515d28; end: 10b515d2b;  */

void FUN_10b515d28(long param_1,long param_2)

{
  FUN_10b515d84(param_1 + 0x10,param_2 + 0x10);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 1;
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



/* Entry: 10b515d2c; end: 10b515d83;  */

void FUN_10b515d2c(long param_1,long param_2)

{
  FUN_10b515d84(param_1 + 0x10,param_2 + 0x10);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 1;
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



/* Entry: 10b515d84; end: 10b515d97;  */

void FUN_10b515d84(long *param_1,long param_2)

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



/* Entry: 10b515d98; end: 10b515dab;  */

void FUN_10b515d98(void)

{
  func_0x000107c304d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b515dac; end: 10b515e63;  */

long * FUN_10b515dac(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b51616c();
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x2c);
    param_4 = (long *)0x1;
    func_0x00010b516204();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b516234();
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



/* Entry: 10b515e64; end: 10b515e67;  */

void FUN_10b515e64(ulong param_1)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b516220();
  if ((param_1 & 1) != 0) {
    param_1 = *(ulong *)(param_1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      FUN_10b5160d8();
      *(ulong *)(unaff_x21 + 0x18) = param_1;
    }
    else {
      FUN_10b515d2c(*(long *)(unaff_x21 + 0x18));
    }
  }
  func_0x00010b51620c();
  if ((extraout_x8 & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b515e68; end: 10b515ed3;  */

void FUN_10b515e68(ulong param_1)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b516220();
  if ((param_1 & 1) != 0) {
    param_1 = *(ulong *)(param_1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      FUN_10b5160d8();
      *(ulong *)(unaff_x21 + 0x18) = param_1;
    }
    else {
      FUN_10b515d2c(*(long *)(unaff_x21 + 0x18));
    }
  }
  func_0x00010b51620c();
  if ((extraout_x8 & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b515ed4; end: 10b515f0b;  */

void FUN_10b515ed4(ulong param_1,ulong param_2)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c304d4();
  func_0x00010b516220(param_1,param_2);
  if ((param_1 & 1) != 0) {
    param_1 = *(ulong *)(param_1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      FUN_10b5160d8();
      *(ulong *)(unaff_x21 + 0x18) = param_1;
    }
    else {
      FUN_10b515d2c(*(long *)(unaff_x21 + 0x18));
    }
  }
  func_0x00010b51620c();
  if ((extraout_x8 & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 10b515f0c; end: 10b515f2b;  */

void FUN_10b515f0c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x18);
  }
  *puVar1 = &PTR_FUN_110cf9f58;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b515f2c; end: 10b515f5b;  */

long * FUN_10b515f2c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b515f5c; end: 10b516067;  */

void FUN_10b515f5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110cf9f58;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b516068; end: 10b5160d7;  */

undefined8 * FUN_10b516068(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110cf9f58;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  func_0x00010b515744();
  return puVar1;
}



/* Entry: 10b5160d8; end: 10b516153;  */

undefined8 * FUN_10b5160d8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5161f0();
  }
  else {
    FUN_10b4d80e0(param_1,0x30);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110cf9ff8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5161f8();
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  FUN_10b515d84(puVar1 + 2,param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x2c) = 0;
  *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_2 + 0x28);
  return puVar1;
}



/* Entry: 10b516154; end: 10b516243;  */

ulong * FUN_10b516154(void)

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



/* Entry: 10b516244; end: 10b516257;  */

void FUN_10b516244(void)

{
  func_0x000107c304e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b516258; end: 10b5164d3;  */

long * FUN_10b516258(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lStack_68;
  long alStack_60 [2];
  
  plVar1 = param_1;
  if (*(char *)((long)param_1 + 0x4c) == '\x01') {
    plVar2 = param_1;
    FUN_10b516750();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b51675c();
    param_2 = plVar1;
  }
  if ((int)param_1[2] != 0) {
    if (((int)param_1[2] == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      plVar2 = &lStack_68;
      func_0x00010564c19c(plVar2);
      while (plVar1 = plVar2, lStack_68 != 0) {
        func_0x00010b516768();
        func_0x00010b516798();
        plVar2 = &lStack_68;
        func_0x000107c27d54(plVar2);
        param_2 = plVar1;
      }
    }
    else {
      plVar1 = &lStack_68;
      func_0x000109c6a3ac(plVar1);
      for (lStack_68 = lStack_68 << 3; plVar2 = plVar1, lStack_68 != 0; lStack_68 = lStack_68 + -8)
      {
        func_0x00010b516768();
        plVar1 = plVar2;
        func_0x00010b516798();
        param_2 = plVar2;
      }
      plVar1 = alStack_60;
      func_0x000105991ac8(plVar1);
    }
  }
  if ((int)param_1[6] != 0) {
    func_0x00010b5167a8();
    func_0x000107c282ac();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x34) != 0) {
    func_0x00010b5167a8();
    func_0x0001088bdd44();
    param_2 = plVar1;
  }
  if ((int)param_1[9] != 0) {
    func_0x00010b5167a8();
    func_0x0001088b96ec();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (param_1[7] != 0) {
    FUN_10b516750();
    lVar5 = param_1[7];
    plVar2 = (long *)0x31;
    func_0x000107c280a8(0x31,plVar1);
    param_2 = plVar2 + 1;
    *plVar2 = lVar5;
  }
  plVar1 = plVar2;
  if (param_1[8] != 0) {
    FUN_10b516750();
    lVar5 = param_1[8];
    plVar1 = (long *)0x39;
    func_0x000107c280a8(0x39,plVar2);
    param_2 = plVar1 + 1;
    *plVar1 = lVar5;
  }
  if ((int)param_1[10] != 0) {
    func_0x00010b5167a8();
    func_0x000108b32050();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x4d) == '\x01') {
    FUN_10b516750();
    plVar2 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar1);
    func_0x00010b51675c();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x4e) == '\x01') {
    FUN_10b516750();
    plVar1 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar2);
    func_0x00010b51675c();
    param_2 = plVar1;
  }
  if (*(char *)((long)param_1 + 0x4f) == '\x01') {
    FUN_10b516750();
    param_2 = (long *)0x58;
    func_0x000107c280a8(0x58,plVar1);
    func_0x00010b51675c();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar4 = param_1[1] & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar3 = *(long *)(uVar4 + 8);
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    else {
      lVar3 = uVar4 + 8;
    }
    func_0x0001053930c4(param_3,lVar3,lVar5,param_2);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10b5164d4; end: 10b51662f;  */

void FUN_10b5164d4(long param_1)

{
  int iVar1;
  long lVar2;
  int extraout_w8;
  long lVar3;
  int extraout_w9;
  int extraout_w10;
  ulong uVar4;
  undefined4 uVar5;
  long alStack_58 [3];
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x10);
  func_0x00010564c19c(alStack_58);
  while (lVar3 = alStack_58[0], alStack_58[0] != 0) {
    lVar2 = alStack_58[0] + 8;
    func_0x000107c282a0(lVar2);
    iVar1 = (int)lVar2 + ((int)LZCOUNT(*(undefined8 *)(lVar3 + 0x20)) * -9 + 0x280U >> 6) + 2;
    lVar3 = uVar4 + (long)iVar1;
    uVar4 = lVar3 + (ulong)((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6);
    func_0x000107c27d54(lVar3,alStack_58);
  }
  func_0x00010b51677c(0xfffffff7);
  func_0x00010b51677c();
  uVar5 = *(undefined4 *)(param_1 + 0x4c);
  iVar1 = ((ushort)((ushort)(byte)uVar5 * 2) & 0xff) +
          (uint)(byte)((char)((uint)uVar5 >> 0x10) * '\x02') +
          ((ushort)((ushort)(byte)((uint)uVar5 >> 8) * 2) & 0xff) +
          (uint)(byte)((char)((uint)uVar5 >> 0x18) * '\x02') + extraout_w10;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = ((uint)(extraout_w9 + (int)LZCOUNT((long)*(int *)(param_1 + 0x50)) * extraout_w8) >> 6)
            + iVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x54) = iVar1;
  return;
}



/* Entry: 10b516630; end: 10b51670b;  */

void FUN_10b516630(long param_1,long param_2)

{
  func_0x000107c2af40(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  if (*(char *)(param_2 + 0x4d) == '\x01') {
    *(undefined1 *)(param_1 + 0x4d) = 1;
  }
  if (*(char *)(param_2 + 0x4e) == '\x01') {
    *(undefined1 *)(param_1 + 0x4e) = 1;
  }
  if (*(char *)(param_2 + 0x4f) == '\x01') {
    *(undefined1 *)(param_1 + 0x4f) = 1;
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
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



/* Entry: 10b51670c; end: 10b516713;  */

void FUN_10b51670c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x58);
  }
  *puVar1 = &PTR_DAT_110cfa2b0;
  puVar1[1] = param_2;
  puVar1[3] = 0x100000000;
  puVar1[2] = 0x100000000;
  puVar1[4] = &DAT_10e5b4a18;
  puVar1[5] = param_2;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  return;
}



/* Entry: 10b516714; end: 10b51674f;  */

void FUN_10b516714(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x58);
  }
  *puVar1 = &PTR_DAT_110cfa2b0;
  puVar1[1] = param_1;
  puVar1[3] = 0x100000000;
  puVar1[2] = 0x100000000;
  puVar1[4] = &DAT_10e5b4a18;
  puVar1[5] = param_1;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  return;
}



/* Entry: 10b516750; end: 10b5167b3;  */

ulong * FUN_10b516750(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}



/* Entry: 10b5167b4; end: 10b516833;  */

undefined8 * FUN_10b5167b4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cfa370;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c(lVar1,param_2);
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  *(undefined4 *)(param_1 + 7) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  param_1[5] = *(undefined8 *)(param_3 + 0x28);
  param_1[4] = uVar3;
  param_1[6] = uVar2;
  return param_1;
}



/* Entry: 10b516834; end: 10b516863;  */

long FUN_10b516834(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b516864(param_1);
  return param_1;
}



/* Entry: 10b516864; end: 10b51688b;  */

/* WARNING: Possible PIC construction at 0x00010b516878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b51687c) */

void FUN_10b516864(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
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



/* Entry: 10b51688c; end: 10b51688f;  */

long FUN_10b51688c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b516864(param_1);
  return param_1;
}



/* Entry: 10b516890; end: 10b5168a3;  */

void FUN_10b516890(void)

{
  FUN_10b516834();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5168a4; end: 10b5168af;  */

undefined ** FUN_10b5168a4(void)

{
  return &PTR_DAT_110cfa3b0;
}



/* Entry: 10b5168b0; end: 10b5168fb;  */

void FUN_10b5168b0(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 10b5168fc; end: 10b516acf;  */

long * FUN_10b5168fc(long *param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  puVar8 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  plVar2 = param_1;
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 != 0) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_10b516940;
    }
  }
  else if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_10b516940:
    func_0x000107c303d4(puVar8,lVar3,1,&UNK_10f776920);
    param_2 = param_3;
    func_0x00010b516d64(param_3,1);
    plVar2 = param_2;
  }
  plVar6 = plVar2;
  if ((int)param_1[4] != 0) {
    func_0x00010b516d40();
    plVar6 = (long *)(ulong)*(uint *)(param_1 + 4);
    uVar1 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280b8(plVar6,uVar1);
    param_2 = plVar6;
  }
  puVar8 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 == 0) goto LAB_10b5169d4;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b5169d4;
  func_0x000107c303d4(puVar8,lVar3,1,&UNK_10f776958);
  plVar6 = param_3;
  func_0x00010b516d64(param_3,3);
  param_2 = plVar6;
LAB_10b5169d4:
  plVar2 = plVar6;
  if (*(int *)((long)param_1 + 0x24) != 0) {
    func_0x00010b516d40();
    plVar2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar6);
    func_0x00010b516d4c();
    param_2 = plVar2;
  }
  plVar6 = plVar2;
  if ((char)param_1[5] == '\x01') {
    func_0x00010b516d40();
    plVar6 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x00010b516d4c();
    param_2 = plVar6;
  }
  plVar2 = plVar6;
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    func_0x00010b516d40();
    plVar2 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar6);
    func_0x00010b516d4c();
    param_2 = plVar2;
  }
  plVar6 = plVar2;
  if ((int)param_1[6] != 0) {
    func_0x00010b516d40();
    plVar6 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar2);
    func_0x00010b516d4c();
    param_2 = plVar6;
  }
  if (*(int *)((long)param_1 + 0x34) != 0) {
    func_0x00010b516d40();
    param_2 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar6);
    func_0x00010b516d4c();
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
        iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar9);
        if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar9;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b516ad0; end: 10b516bef;  */

void FUN_10b516ad0(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  int extraout_w8;
  long lVar4;
  long extraout_x8;
  long lVar5;
  int extraout_w10;
  long extraout_x10;
  int extraout_w11;
  
  uVar3 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar3 + 0x17) < '\0') {
    if (*(long *)(uVar3 + 8) == 0) goto LAB_10b516b08;
  }
  else if (*(char *)(uVar3 + 0x17) == '\0') {
LAB_10b516b08:
    lVar5 = 0;
    goto LAB_10b516b0c;
  }
  func_0x000107c282a0();
  lVar5 = uVar3 + 1;
LAB_10b516b0c:
  uVar3 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    lVar5 = lVar5 + uVar3 + 1;
  }
  bVar1 = *(int *)(param_1 + 0x20) == 0;
  if (!bVar1) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  func_0x00010b516d78(lVar5);
  lVar5 = extraout_x8;
  if (!bVar1) {
    lVar5 = extraout_x10;
  }
  lVar5 = lVar5 + (ulong)*(byte *)(param_1 + 0x28) * 2;
  if (*(int *)(param_1 + 0x2c) != 0) {
    lVar5 = lVar5 + (ulong)((uint)(extraout_w11 + (int)LZCOUNT(*(int *)(param_1 + 0x2c)) * -9) >> 6)
    ;
  }
  bVar1 = *(int *)(param_1 + 0x30) == 0;
  if (!bVar1) {
    lVar5 = lVar5 + (ulong)((uint)(extraout_w11 + (int)LZCOUNT(*(int *)(param_1 + 0x30)) * -9) >> 6)
    ;
  }
  func_0x00010b516d78(lVar5);
  iVar2 = extraout_w8;
  if (!bVar1) {
    iVar2 = extraout_w10;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar3 + 0x10);
    }
    iVar2 = (int)lVar5 + iVar2;
  }
  *(int *)(param_1 + 0x38) = iVar2;
  return;
}



/* Entry: 10b516bf0; end: 10b516bf3;  */

void FUN_10b516bf0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
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



/* Entry: 10b516bf4; end: 10b516cdf;  */

void FUN_10b516bf4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
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



/* Entry: 10b516ce0; end: 10b516ce7;  */

void FUN_10b516ce0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x40);
  }
  *puVar1 = &PTR_FUN_110cfa370;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 10b516ce8; end: 10b516d3f;  */

void FUN_10b516ce8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x40);
  }
  *puVar1 = &PTR_FUN_110cfa370;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 10b516d40; end: 10b516d8b;  */

ulong * FUN_10b516d40(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}



/* Entry: 10b516d8c; end: 10b516dbb;  */

long FUN_10b516d8c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5170f4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b516dbc; end: 10b516dbf;  */

long FUN_10b516dbc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5170f4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b516dc0; end: 10b516dd3;  */

void FUN_10b516dc0(void)

{
  FUN_10b516d8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b516dd4; end: 10b516ddf;  */

undefined ** FUN_10b516dd4(void)

{
  return &PTR_DAT_110cfa468;
}



/* Entry: 10b516de0; end: 10b516e2b;  */

void FUN_10b516de0(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b516e2c; end: 10b516ff7;  */

long * FUN_10b516e2c(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x18);
  for (iVar8 = 0; iVar9 != iVar8; iVar8 = iVar8 + 1) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + (long)iVar8 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
    param_2 = plVar2;
  }
  plVar2 = param_2;
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar2 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x28),param_2);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    plVar3 = param_3;
    func_0x000107c28094(param_3,plVar2);
    plVar2 = (long *)(ulong)*(uint *)(param_1 + 0x2c);
    uVar4 = 0x18;
    func_0x000107c280a8(0x18,plVar3);
    func_0x000107c280a8(plVar2,uVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)uVar6) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar8 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar5 = (long)plVar2 + (long)iVar9;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar8);
    }
    _memcpy(plVar2,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar6);
  }
  return plVar2;
}



/* Entry: 10b516ff8; end: 10b516ffb;  */

void FUN_10b516ff8(long param_1,long param_2)

{
  FUN_10b517060(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
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



/* Entry: 10b516ffc; end: 10b51705f;  */

void FUN_10b516ffc(long param_1,long param_2)

{
  FUN_10b517060(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
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



/* Entry: 10b517060; end: 10b51706f;  */

void FUN_10b517060(long *param_1,long param_2)

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



/* Entry: 10b517070; end: 10b5170eb;  */

void FUN_10b517070(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  FUN_10b516de0();
  FUN_10b517060(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
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



/* Entry: 10b5170ec; end: 10b5170f3;  */

void FUN_10b5170ec(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x38);
  }
  *puVar1 = &PTR_FUN_110cfa428;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[4] = param_2;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b5170f4; end: 10b517123;  */

long * FUN_10b5170f4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b517124; end: 10b51716f;  */

void FUN_10b517124(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110cfa428;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b517170; end: 10b517187;  */

void FUN_10b517170(void)

{
  return;
}



/* Entry: 10b517188; end: 10b5171c7;  */

long FUN_10b517188(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b516834();
  }
  __ZdlPv();
  func_0x000107c282dc(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5171c8; end: 10b5171cb;  */

long FUN_10b5171c8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b516834();
  }
  __ZdlPv();
  func_0x000107c282dc(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5171cc; end: 10b5171df;  */

void FUN_10b5171cc(void)

{
  FUN_10b517188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5171e0; end: 10b5171eb;  */

undefined ** FUN_10b5171e0(void)

{
  return &PTR_DAT_110cfa528;
}



/* Entry: 10b5171ec; end: 10b517237;  */

void FUN_10b5171ec(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5168b0(*(undefined8 *)(param_1 + 0x30));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 10b517238; end: 10b517337;  */

byte * FUN_10b517238(byte *param_1,byte *param_2,byte *param_3)

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
  
  pbVar2 = param_1;
  if ((param_1[0x10] & 1) != 0) {
    pbVar2 = (byte *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x38),param_2,param_3);
    param_2 = pbVar2;
  }
  uVar7 = *(uint *)(param_1 + 0x28);
  if (uVar7 != 0) {
    func_0x00010b517574();
    pbVar4 = pbVar2 + 2;
    *pbVar2 = 0x12;
    for (; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
      pbVar4[-1] = (byte)uVar7 | 0x80;
      pbVar4 = pbVar4 + 1;
    }
    pbVar4[-1] = (byte)uVar7;
    piVar8 = *(int **)(param_1 + 0x20);
    piVar1 = piVar8 + *(int *)(param_1 + 0x18);
    do {
      func_0x00010b517574();
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
        pbVar2 = param_2 + iVar10;
        param_2 = param_3;
        func_0x000107c303e4(param_3,pbVar2);
      }
      func_0x00010b4d5738();
      return param_2 + iVar9;
    }
    _memcpy(param_2,lVar3,uVar5 & 0xffffffff);
    return param_2 + (int)uVar5;
  }
  return param_2;
}



/* Entry: 10b517338; end: 10b5173f7;  */

long FUN_10b517338(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = 0;
  lVar1 = 0;
  for (lVar4 = (long)*(int *)(param_1 + 0x18); lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x20) + (lVar3 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar1;
    lVar3 = lVar3 + 0x100000000;
  }
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar3 = lVar1 + (ulong)((int)LZCOUNT((long)(int)lVar1) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar1;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    FUN_10b5173f8();
    lVar3 = lVar3 + lVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar1 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5173f8; end: 10b517423;  */

long FUN_10b5173f8(long param_1)

{
  FUN_10b516ad0();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b517424; end: 10b5174cf;  */

void FUN_10b517424(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x000107c282d0(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      func_0x00010b517528(uVar2,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar2;
    }
    else {
      FUN_10b516bf4();
    }
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



/* Entry: 10b5174d0; end: 10b5174d7;  */

void FUN_10b5174d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x38);
  }
  *puVar1 = &PTR_FUN_110cfa4e8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 10b5174d8; end: 10b51756b;  */

void FUN_10b5174d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110cfa4e8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 10b51756c; end: 10b517583;  */

void FUN_10b51756c(void)

{
  return;
}



/* Entry: 10b517584; end: 10b517597;  */

void FUN_10b517584(void)

{
  func_0x000107c304e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b517598; end: 10b517677;  */

byte * FUN_10b517598(byte *param_1,byte *param_2,byte *param_3)

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
    FUN_10b5177b4();
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
      FUN_10b5177b4();
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



/* Entry: 10b517678; end: 10b51770b;  */

long FUN_10b517678(long param_1)

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



/* Entry: 10b51770c; end: 10b517757;  */

void FUN_10b51770c(long param_1,long param_2)

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



/* Entry: 10b517758; end: 10b51775f;  */

void FUN_10b517758(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_DAT_110cfa5a8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b517760; end: 10b5177b3;  */

void FUN_10b517760(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110cfa5a8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b5177b4; end: 10b5177c3;  */

ulong * FUN_10b5177b4(void)

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



/* Entry: 10b5177c4; end: 10b5177d7;  */

void FUN_10b5177c4(void)

{
  func_0x000107c304ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5177d8; end: 10b5177f7;  */

undefined ** FUN_10b5177d8(void)

{
  return &PTR_DAT_110cfa750;
}



/* Entry: 10b5177f8; end: 10b5178cb;  */

byte * FUN_10b5177f8(byte *param_1,byte *param_2,byte *param_3)

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
  if (0 < (int)uVar7) {
    pbVar2 = param_1;
    FUN_10b518398();
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
      FUN_10b518398();
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



/* Entry: 10b5178cc; end: 10b517937;  */

void FUN_10b5178cc(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_1 + 0x10;
  FUN_10b4d3e0c();
  iVar1 = (int)lVar3;
  *(int *)(param_1 + 0x20) = iVar1;
  iVar2 = 0;
  if (lVar3 != 0) {
    iVar2 = ((int)LZCOUNT((long)iVar1) * -9 + 0x280U >> 6) + 1;
  }
  iVar2 = iVar2 + iVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x24) = iVar2;
  return;
}



/* Entry: 10b517938; end: 10b51793b;  */

void FUN_10b517938(long param_1,long param_2)

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



/* Entry: 10b51793c; end: 10b517983;  */

void FUN_10b51793c(long param_1,long param_2)

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



/* Entry: 10b517984; end: 10b5179fb;  */

undefined8 * FUN_10b517984(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cfa6c0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b51842c();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b5181f8(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  param_1[6] = *(undefined8 *)(param_3 + 0x30);
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 10b5179fc; end: 10b5179ff;  */

undefined8 FUN_10b5179fc(undefined8 param_1)

{
  func_0x0001002a9910();
  func_0x0001002a9970(param_1);
  return param_1;
}



/* Entry: 10b517a00; end: 10b517a13;  */

void FUN_10b517a00(void)

{
  func_0x000107c304f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b517a14; end: 10b517a5f;  */

void FUN_10b517a14(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b5177e4(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 10b517a60; end: 10b517b7f;  */

long * FUN_10b517a60(long *param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = param_1;
  if ((int)param_1[4] != 0) {
    func_0x00010b518450();
    func_0x000107c282e4();
    param_2 = plVar6;
  }
  if (*(int *)((long)param_1 + 0x24) != 0) {
    func_0x00010b518450();
    func_0x00010598f43c();
    param_2 = plVar6;
  }
  plVar5 = plVar6;
  if ((int)param_1[5] != 0) {
    func_0x00010b518398();
    plVar5 = (long *)(ulong)*(uint *)(param_1 + 5);
    uVar1 = 0x18;
    func_0x000107c280a8(0x18,plVar6);
    func_0x000107c280b8(plVar5,uVar1);
    param_2 = plVar5;
  }
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    func_0x00010b518450();
    func_0x0001088bdd44();
    param_2 = plVar5;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar5 = (long *)0x5;
    func_0x000107c303cc(5,param_1[3],*(undefined4 *)(param_1[3] + 0x24),param_2,param_3);
    param_2 = plVar5;
  }
  plVar6 = plVar5;
  if ((char)param_1[6] == '\x01') {
    func_0x00010b518398();
    plVar6 = (long *)(ulong)*(byte *)(param_1 + 6);
    uVar1 = 0x30;
    func_0x000107c280a8(0x30,plVar5);
    func_0x000107c280a8(plVar6,uVar1);
    param_2 = plVar6;
  }
  if (*(int *)((long)param_1 + 0x34) != 0) {
    func_0x00010b518450();
    func_0x0001089f53f0();
    param_2 = plVar6;
  }
  if ((param_1[1] & 1U) != 0) {
    uVar4 = param_1[1] & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 10b517b80; end: 10b517c4f;  */

void FUN_10b517b80(long param_1)

{
  int iVar1;
  int extraout_w8;
  long lVar2;
  int extraout_w9;
  ulong uVar3;
  int extraout_w13;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5178cc(*(undefined8 *)(param_1 + 0x18));
    func_0x00010b518408();
  }
  func_0x00010b5183ec(0xfffffff7);
  func_0x00010b5183ec();
  iVar1 = extraout_w9 + (uint)*(byte *)(param_1 + 0x30) * 2;
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar1 = ((uint)(extraout_w13 + (int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * extraout_w8) >> 6)
            + iVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10b517c50; end: 10b517c53;  */

void FUN_10b517c50(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b51845c();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      FUN_10b5181f8(uVar2,*(undefined8 *)(unaff_x20 + 0x18));
      *(ulong *)(unaff_x21 + 0x18) = uVar2;
    }
    else {
      FUN_10b51793c(*(long *)(unaff_x21 + 0x18));
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x21 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x30) = 1;
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    *(int *)(unaff_x21 + 0x34) = *(int *)(unaff_x20 + 0x34);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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



/* Entry: 10b517c54; end: 10b517d2f;  */

void FUN_10b517c54(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b51845c();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      FUN_10b5181f8(uVar2,*(undefined8 *)(unaff_x20 + 0x18));
      *(ulong *)(unaff_x21 + 0x18) = uVar2;
    }
    else {
      FUN_10b51793c(*(long *)(unaff_x21 + 0x18));
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x21 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x30) = 1;
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    *(int *)(unaff_x21 + 0x34) = *(int *)(unaff_x20 + 0x34);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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



/* Entry: 10b517d30; end: 10b517d63;  */

void FUN_10b517d30(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c39da0();
  FUN_10b517a14();
  lVar2 = unaff_x20;
  func_0x00010b51845c();
  uVar3 = *(ulong *)(lVar2 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      FUN_10b5181f8(uVar3,*(undefined8 *)(unaff_x20 + 0x18));
      *(ulong *)(unaff_x21 + 0x18) = uVar3;
    }
    else {
      FUN_10b51793c(*(long *)(unaff_x21 + 0x18));
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x21 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x30) = 1;
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    *(int *)(unaff_x21 + 0x34) = *(int *)(unaff_x20 + 0x34);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(lVar2 + 8) & 1) == 0) {
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



/* Entry: 10b517d64; end: 10b517d77;  */

undefined1  [16] FUN_10b517d64(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x000107c39d94();
  puVar1 = param_1 + 0x20;
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



/* Entry: 10b517d78; end: 10b517d8b;  */

void FUN_10b517d78(void)

{
  func_0x000107c304fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b517d8c; end: 10b517f2f;  */

long * FUN_10b517d8c(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  long *plStack_70;
  long alStack_68 [3];
  
  func_0x00010b51845c();
  uVar1 = *(uint *)(param_1 + 3);
  uVar6 = (ulong)uVar1;
  if (uVar1 != 0) {
    if ((uVar1 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x00010b518444();
      while (plVar2 = param_1, alStack_68[0] != 0) {
        func_0x00010b5183cc();
        func_0x00010b5183dc();
        param_1 = alStack_68;
        func_0x000107c27d54(param_1);
        unaff_x20 = plVar2;
      }
    }
    else {
      plVar2 = (long *)(uVar6 << 3);
      __Znam();
      plStack_70 = plVar2;
      func_0x00010b518444();
      while (alStack_68[0] != 0) {
        *plVar2 = alStack_68[0] + 8;
        func_0x000107c27d54(alStack_68);
        plVar2 = plVar2 + 1;
      }
      plVar2 = plStack_70;
      func_0x000105991c2c(plStack_70,plStack_70 + uVar6);
      uVar7 = uVar6 << 3;
      while (plVar3 = plVar2, uVar6 != 0) {
        func_0x00010b5183cc();
        plVar2 = plVar3;
        func_0x00010b5183dc();
        uVar7 = uVar7 - 8;
        unaff_x20 = plVar3;
        uVar6 = uVar7;
      }
      func_0x000105991ac8(&plStack_70);
    }
  }
  plVar2 = unaff_x20;
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(unaff_x21 + 0x38),
                        *(undefined4 *)(*(long *)(unaff_x21 + 0x38) + 0x14),unaff_x20,param_3);
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(unaff_x21 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    func_0x0001053930c4(param_3,lVar4,lVar5,plVar2);
    plVar2 = param_3;
  }
  return plVar2;
}



/* Entry: 10b517f30; end: 10b517fd7;  */

void FUN_10b517f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  int unaff_w21;
  
  uVar2 = param_4;
  func_0x00010b51845c();
  func_0x000107c28094(uVar2,param_3);
  uVar3 = 10;
  func_0x000107c280a8(10,uVar2);
  func_0x000107c282a0();
  func_0x000107c280a8(unaff_w21 + *(int *)((long)unaff_x20 + 0x14) +
                      ((int)LZCOUNT(*(int *)((long)unaff_x20 + 0x14)) * -9 + 0x160U >> 6) + 2,uVar3)
  ;
  uVar3 = 1;
  func_0x0001059928f0(1);
  uVar2 = param_4;
  func_0x000107c28094(param_4,uVar3);
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0x14);
  func_0x0001001a597c(param_4,uVar2);
  uVar2 = 0x12;
  func_0x0001001a59d0(0x12,param_4);
  func_0x0001001a59d0(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x38))();
  return;
}



/* Entry: 10b517fd8; end: 10b5180b7;  */

ulong FUN_10b517fd8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long alStack_58 [3];
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  func_0x00010564c19c(alStack_58);
  while (lVar2 = alStack_58[0], alStack_58[0] != 0) {
    iVar1 = (int)alStack_58[0] + 8;
    func_0x000107c282a0();
    lVar2 = lVar2 + 0x20;
    FUN_10b517b80();
    lVar2 = lVar2 + (iVar1 + 2) + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6);
    uVar4 = lVar2 + uVar4 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6);
    func_0x000107c27d54(alStack_58);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    FUN_10b5180b8();
    uVar4 = uVar4 + lVar2 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar4 = lVar2 + uVar4;
  }
  *(int *)(param_1 + 0x14) = (int)uVar4;
  return uVar4;
}



/* Entry: 10b5180b8; end: 10b5180d3;  */

long FUN_10b5180b8(long param_1)

{
  long extraout_x8;
  
  FUN_10b517b80();
  func_0x00010b518408();
  return param_1 + extraout_x8;
}



/* Entry: 10b5180d4; end: 10b5180d7;  */

void FUN_10b5180d4(long param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  ulong uVar2;
  
  func_0x00010b51845c();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  FUN_10b5182a4(unaff_x21 + 0x18,unaff_x20 + 0x18);
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x38) == 0) {
      FUN_10b518264(uVar2,*(undefined8 *)(unaff_x20 + 0x38));
      *(ulong *)(unaff_x21 + 0x38) = uVar2;
    }
    else {
      FUN_10b517c54();
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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



/* Entry: 10b5180d8; end: 10b51817f;  */

void FUN_10b5180d8(long param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  ulong uVar2;
  
  func_0x00010b51845c();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  FUN_10b5182a4(unaff_x21 + 0x18,unaff_x20 + 0x18);
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x38) == 0) {
      FUN_10b518264(uVar2,*(undefined8 *)(unaff_x20 + 0x38));
      *(ulong *)(unaff_x21 + 0x38) = uVar2;
    }
    else {
      FUN_10b517c54();
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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



/* Entry: 10b518180; end: 10b5181b3;  */

void FUN_10b518180(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  ulong uVar3;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c39da0();
  func_0x000107c30500();
  lVar2 = unaff_x20;
  func_0x00010b51845c();
  uVar3 = *(ulong *)(lVar2 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  FUN_10b5182a4(unaff_x21 + 0x18,unaff_x20 + 0x18);
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x38) == 0) {
      FUN_10b518264(uVar3,*(undefined8 *)(unaff_x20 + 0x38));
      *(ulong *)(unaff_x21 + 0x38) = uVar3;
    }
    else {
      FUN_10b517c54();
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(lVar2 + 8) & 1) == 0) {
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



/* Entry: 10b5181b4; end: 10b5181bb;  */

undefined8 * FUN_10b5181b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x40);
  }
  *puVar1 = &PTR_DAT_110cfa710;
  puVar1[1] = param_2;
  func_0x00010055d9f0();
  return puVar1;
}



/* Entry: 10b5181bc; end: 10b5181f7;  */

undefined8 * FUN_10b5181bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x40);
  }
  *puVar1 = &PTR_DAT_110cfa710;
  puVar1[1] = param_1;
  func_0x00010055d9f0();
  return puVar1;
}



/* Entry: 10b5181f8; end: 10b518263;  */

undefined8 * FUN_10b5181f8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b518420();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_DAT_110cfa670;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b51842c();
  }
  func_0x000107c282d4(puVar1 + 2,param_1,param_2 + 0x10);
  puVar1[4] = 0;
  return puVar1;
}



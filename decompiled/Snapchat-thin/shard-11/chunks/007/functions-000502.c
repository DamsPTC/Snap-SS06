/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088cdd88; end: 1088cddc3;  */

long FUN_1088cdd88(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd448();
  func_0x0001088dd4fc();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1088ce020();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088cddc4; end: 1088cddd7;  */

void FUN_1088cddc4(void)

{
  FUN_1088cdd88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cddd8; end: 1088cdde3;  */

undefined ** FUN_1088cddd8(void)

{
  return &PTR_DAT_110a864a8;
}



/* Entry: 1088cdde4; end: 1088cde2b;  */

void FUN_1088cdde4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd058();
  func_0x0001088dd504();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_1088cde2c(*(undefined8 *)(unaff_x19 + 0x28));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
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



/* Entry: 1088cde2c; end: 1088cde3b;  */

void FUN_1088cde2c(long param_1)

{
  ulong *puVar1;
  
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



/* Entry: 1088cde3c; end: 1088cdf5b;  */

long * FUN_1088cde3c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x0001088dd4ec();
  func_0x0001088dd33c(param_1[3]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088cde74;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088cde74:
      param_4 = (long *)&UNK_10f4eaa5e;
      func_0x0001088dd2ec();
      func_0x0001088dd51c();
      func_0x0001088dd008();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  func_0x0001088dd33c(*(undefined8 *)(unaff_x20 + 0x20));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088cdec8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088cdec8;
  param_4 = (long *)&UNK_10f4eaa85;
  func_0x0001088dd2ec();
  func_0x0001088dd528();
  func_0x0001088dd008();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_1088cdec8:
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    func_0x0001088dd0bc();
    func_0x0001088dd6dc();
    func_0x0001088dd164();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    func_0x0001088dd0bc();
    func_0x0001088dd99c();
    func_0x0001088dd088();
    unaff_x21 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x10);
    param_1 = (long *)0x5;
    func_0x0001088dd254();
    unaff_x21 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd348();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x0001088dda00();
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



/* Entry: 1088cdf5c; end: 1088ce00b;  */

void FUN_1088cdf5c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088dce1c();
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
  func_0x0001088dd0c8();
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001088ce098(*(undefined8 *)(unaff_x19 + 0x28));
    func_0x0001088dcca4();
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x30) * 2;
  if (*(int *)(unaff_x19 + 0x34) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x34)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 1088ce00c; end: 1088ce01f;  */

void FUN_1088ce00c(ulong *param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088dcdd0();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x0001088dd5b0();
    puVar1 = unaff_x22;
  }
  func_0x0001088dd020();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b8();
  }
  func_0x0001088dd0d8();
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd6a0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd6d0();
    if (param_1 == (ulong *)0x0) {
      FUN_1088dc0e8();
      *(ulong **)(unaff_x21 + 0x28) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_1088ce00c();
    }
  }
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x30) = 1;
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    *(int *)(unaff_x21 + 0x34) = *(int *)(unaff_x20 + 0x34);
  }
  func_0x0001088dcd84();
  if ((extraout_x8_01 & 1) != 0) {
    func_0x0001088dcf5c();
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



/* Entry: 1088ce020; end: 1088ce043;  */

undefined8 FUN_1088ce020(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088ce044; end: 1088ce047;  */

undefined8 FUN_1088ce044(undefined8 param_1)

{
  func_0x0001088dd2fc();
  return param_1;
}



/* Entry: 1088ce048; end: 1088ce05b;  */

void FUN_1088ce048(void)

{
  FUN_1088ce020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ce05c; end: 1088ce0c7;  */

undefined ** FUN_1088ce05c(void)

{
  return &PTR_DAT_110a864e8;
}



/* Entry: 1088ce0c8; end: 1088ce10b;  */

long FUN_1088ce0c8(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b59cae8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010b5c3924();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088ce10c; end: 1088ce11f;  */

void FUN_1088ce10c(void)

{
  FUN_1088ce0c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ce120; end: 1088ce12b;  */

undefined ** FUN_1088ce120(void)

{
  return &PTR_DAT_110a86538;
}



/* Entry: 1088ce12c; end: 1088ce16f;  */

void FUN_1088ce12c(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0001088dd288();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010b59cb3c(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0001088ddba4();
    }
  }
  func_0x0001088dda68();
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



/* Entry: 1088ce170; end: 1088ce27b;  */

long * FUN_1088ce170(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x24);
    func_0x0001088dcfa8();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x0001088dd014();
    func_0x0001088dd670();
    func_0x0001088dd088();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001088dd114();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd348();
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



/* Entry: 1088ce27c; end: 1088ce27f;  */

void FUN_1088ce27c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088dd654();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd6c4();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088ddbb4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b59cd28();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088dd560();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd6f4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b5c4808();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x0001088dcd84();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088dcf5c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088ce280; end: 1088ce2af;  */

long FUN_1088ce280(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd6fc();
  FUN_10879b6fc(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088ce2b0; end: 1088ce2c3;  */

void FUN_1088ce2b0(void)

{
  FUN_1088ce280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ce2c4; end: 1088ce2cf;  */

undefined ** FUN_1088ce2c4(void)

{
  return &PTR_DAT_110a86580;
}



/* Entry: 1088ce2d0; end: 1088ce303;  */

void FUN_1088ce2d0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd48c();
  func_0x00010879b6e8();
  func_0x0001088dd614();
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



/* Entry: 1088ce304; end: 1088ce3b3;  */

long * FUN_1088ce304(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0001088dcfe8();
  func_0x0001088dd33c(param_1[5]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 == 0) goto LAB_1088ce354;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088ce354;
  param_4 = (long *)&UNK_10f4eaaae;
  func_0x0001088dd2ec();
  func_0x0001088dcce0();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088ce354:
  iVar2 = *(int *)(unaff_x21 + 0x18);
  while (iVar2 != 0) {
    func_0x0001088dd094();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_1 = (long *)0x3;
    func_0x0001088dcfb4();
    func_0x0001088ddb2c();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0001088dd348();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x0001088dd474();
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



/* Entry: 1088ce3b4; end: 1088ce427;  */

void FUN_1088ce3b4(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x0001088dd8a4();
  func_0x0001088dcf1c();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    param_1 = *unaff_x21;
    func_0x0001088c5ca8();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x0001088dd1bc();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
  }
  func_0x0001088ddaf0();
  return;
}



/* Entry: 1088ce428; end: 1088ce42b;  */

void FUN_1088ce428(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088dd2c8();
  FUN_1088c9edc();
  func_0x0001088dd1ac();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd828();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd03c();
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



/* Entry: 1088ce42c; end: 1088ce457;  */

undefined8 FUN_1088ce42c(undefined8 param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd46c();
  func_0x0001088dd448();
  return param_1;
}



/* Entry: 1088ce458; end: 1088ce46b;  */

void FUN_1088ce458(void)

{
  FUN_1088ce42c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ce46c; end: 1088ce477;  */

undefined ** FUN_1088ce46c(void)

{
  return &PTR_DAT_110a865c8;
}



/* Entry: 1088ce478; end: 1088ce4a7;  */

void FUN_1088ce478(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd030();
  func_0x0001088dd5a8();
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



/* Entry: 1088ce4a8; end: 1088ce553;  */

long * FUN_1088ce4a8(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x0001088dccf4();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1088ce4d8;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1088ce4d8:
      param_4 = (long *)&UNK_10f4eaadb;
      func_0x0001088dd2ec();
      func_0x0001088dcd10();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001088dd0f4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088ce520;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088ce520;
  param_4 = (long *)&UNK_10f4eab07;
  func_0x0001088dd2ec();
  func_0x0001088dcce0();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088ce520:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088dd348();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088dd474();
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



/* Entry: 1088ce554; end: 1088ce5c7;  */

long FUN_1088ce554(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x0001088dcdac();
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
  func_0x0001088dd148();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088dd30c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 1088ce5c8; end: 1088ce5cb;  */

void FUN_1088ce5c8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088dcd38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b0();
  }
  func_0x0001088dd020();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd61c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd03c();
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



/* Entry: 1088ce5cc; end: 1088ce60f;  */

long FUN_1088ce5cc(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088cef3c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088cf088();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088ce610; end: 1088ce623;  */

void FUN_1088ce610(void)

{
  FUN_1088ce5cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ce624; end: 1088ce62f;  */

undefined ** FUN_1088ce624(void)

{
  return &PTR_DAT_110a86610;
}



/* Entry: 1088ce630; end: 1088ce6f3;  */

void FUN_1088ce630(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x0001088dd288();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x0001088ddb84();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0001088ce6c0(*(undefined8 *)(unaff_x19 + 0x20));
    }
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 1088ce6f4; end: 1088ce7eb;  */

long * FUN_1088ce6f4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0001088dce30();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x0001088dd014();
    func_0x0001088dd670();
    func_0x0001088dd3f0();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001088dd114();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd348();
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



/* Entry: 1088ce7ec; end: 1088ce81b;  */

void FUN_1088ce7ec(void)

{
  func_0x0001088cf014();
  FUN_1088dcc88();
  return;
}



/* Entry: 1088ce81c; end: 1088ce81f;  */

void FUN_1088ce81c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcd98();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088dd654();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd6c4();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088ddbbc();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088ce820();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088dd560();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dc1ac();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088ce8a0();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x0001088dcd84();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088dcf5c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088ce820; end: 1088ce89f;  */

void FUN_1088ce820(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088dd654();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd6c4();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088ddbb4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b59cd28();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088dd560();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd4e4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  func_0x0001088dcd84();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088dcf5c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088ce8a0; end: 1088ce8f7;  */

void FUN_1088ce8a0(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dce6c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001088dd630();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd624();
    if (extraout_x8 == 0) {
      func_0x0001088c723c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0001088dd994();
    }
  }
  func_0x0001088dce58();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dcf5c();
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



/* Entry: 1088ce8f8; end: 1088ce93f;  */

long FUN_1088ce8f8(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd448();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010b5c3924();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088ce940; end: 1088ce953;  */

void FUN_1088ce940(void)

{
  FUN_1088ce8f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ce954; end: 1088ce95f;  */

undefined ** FUN_1088ce954(void)

{
  return &PTR_DAT_110a86658;
}



/* Entry: 1088ce960; end: 1088ce9a7;  */

void FUN_1088ce960(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0001088dd058();
  func_0x0001088dd904();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x0001088dd660();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010b5c3b8c(unaff_x19[5]);
    }
  }
  func_0x0001088dd43c();
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



/* Entry: 1088ce9a8; end: 1088ceacf;  */

long * FUN_1088ce9a8(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *plVar4;
  int iVar5;
  
  func_0x0001088dcfe8();
  uVar2 = *(uint *)(param_1 + 2);
  plVar4 = (long *)(ulong)uVar2;
  if ((uVar2 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x0001088dcf7c();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x28);
    func_0x0001088dd790();
    func_0x0001088dcfb4();
    unaff_x20 = param_1;
  }
  func_0x0001088dd0f4();
  if (param_2 < 0) {
    if (plVar4[1] == 0) goto LAB_1088cea1c;
    plVar4 = (long *)*plVar4;
  }
  else if ((int)param_2 == 0) goto LAB_1088cea1c;
  param_4 = (long *)&UNK_10f4eab33;
  func_0x0001088dd2ec();
  func_0x0001088dcd24();
  param_1 = plVar4;
  unaff_x20 = plVar4;
LAB_1088cea1c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088dd348();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088dd474();
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



/* Entry: 1088cead0; end: 1088cead3;  */

void FUN_1088cead0(ulong *param_1,long param_2,ulong param_3)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x21;
  uint unaff_w23;
  
  func_0x0001088dcdd0();
  if ((param_3 & 1) != 0) {
    func_0x0001088dd5b0();
  }
  func_0x0001088dd020();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b8();
  }
  func_0x0001088dd654();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd560();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd4e4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088dd6d0();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd6f4();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010b5c4808();
      }
    }
  }
  func_0x0001088dcd84();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x0001088dcf5c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088cead4; end: 1088ceb07;  */

long FUN_1088cead4(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088ceb08; end: 1088ceb1b;  */

void FUN_1088ceb08(void)

{
  FUN_1088cead4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ceb1c; end: 1088ceb27;  */

undefined ** FUN_1088ceb1c(void)

{
  return &PTR_DAT_110a86698;
}



/* Entry: 1088ceb28; end: 1088cebf7;  */

void FUN_1088ceb28(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088dd450();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dd588();
  }
  func_0x0001088dd43c();
  if ((extraout_x8_00 & 1) == 0) {
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



/* Entry: 1088cebf8; end: 1088cebfb;  */

void FUN_1088cebf8(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dce6c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001088dd630();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd624();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0001088dd6a8();
    }
  }
  func_0x0001088dce58();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dcf5c();
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



/* Entry: 1088cebfc; end: 1088cec33;  */

long FUN_1088cebfc(long param_1)

{
  func_0x0001088dd2fc();
  func_0x0001088dd448();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088cec34; end: 1088cec47;  */

void FUN_1088cec34(void)

{
  FUN_1088cebfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cec48; end: 1088cec53;  */

undefined ** FUN_1088cec48(void)

{
  return &PTR_DAT_110a866e0;
}



/* Entry: 1088cec54; end: 1088cec93;  */

void FUN_1088cec54(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088dd058();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001088dd660();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 1088cec94; end: 1088ced4b;  */

long * FUN_1088cec94(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0001088dcfe8();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x0001088dcf7c();
    unaff_x20 = param_1;
  }
  func_0x0001088dd0f4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088cecf4;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088cecf4;
  param_4 = (long *)&UNK_10f4eab5f;
  func_0x0001088dd2ec();
  func_0x0001088dcce0();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088cecf4:
  if (*(char *)(unaff_x21 + 0x28) == '\x01') {
    func_0x0001088dd130();
    func_0x0001088dd6dc();
    func_0x0001088dd808();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088dd348();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088dd474();
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



/* Entry: 1088ced4c; end: 1088cedbb;  */

void FUN_1088ced4c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088dce1c();
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
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001088dd668();
    func_0x0001088dd30c();
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x28) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088dd730();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 1088cedbc; end: 1088cedbf;  */

void FUN_1088cedbc(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dcdd0();
  if ((param_3 & 1) != 0) {
    func_0x0001088dd5b0();
  }
  func_0x0001088dd020();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x0001088dd318();
    }
    func_0x0001088dd4b8();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd560();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088dd4e4();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x28) = 1;
  }
  func_0x0001088dcd84();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dcf5c();
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



/* Entry: 1088cedc0; end: 1088cee03;  */

long FUN_1088cedc0(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088cef3c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088cee04; end: 1088cee17;  */

void FUN_1088cee04(void)

{
  FUN_1088cedc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cee18; end: 1088cee23;  */

undefined ** FUN_1088cee18(void)

{
  return &PTR_DAT_110a86728;
}



/* Entry: 1088cee24; end: 1088cee63;  */

void FUN_1088cee24(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0001088dd288();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x0001088ddb84();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0001088dd660();
    }
  }
  func_0x0001088dd43c();
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



/* Entry: 1088cee64; end: 1088cef37;  */

long * FUN_1088cee64(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0001088dce30();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001088dcff8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd348();
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



/* Entry: 1088cef38; end: 1088cef3b;  */

void FUN_1088cef38(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088dd654();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd6c4();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088ddbbc();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088ce820();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088dd560();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd4e4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  func_0x0001088dcd84();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088dcf5c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088cef3c; end: 1088cef7f;  */

long FUN_1088cef3c(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b59cae8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088cef80; end: 1088cef83;  */

long FUN_1088cef80(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b59cae8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088cef84; end: 1088cef97;  */

void FUN_1088cef84(void)

{
  FUN_1088cef3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cef98; end: 1088cefa3;  */

undefined ** FUN_1088cef98(void)

{
  return &PTR_DAT_110a86778;
}



/* Entry: 1088cefa4; end: 1088cf083;  */

long * FUN_1088cefa4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x24);
    func_0x0001088dcfa8();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0001088dcff8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dd348();
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



/* Entry: 1088cf084; end: 1088cf087;  */

void FUN_1088cf084(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088dd654();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd6c4();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088ddbb4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b59cd28();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088dd560();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd4e4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  func_0x0001088dcd84();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088dcf5c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088cf088; end: 1088cf0bb;  */

long FUN_1088cf088(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c7e0c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088cf0bc; end: 1088cf0bf;  */

long FUN_1088cf0bc(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088c7e0c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088cf0c0; end: 1088cf0d3;  */

void FUN_1088cf0c0(void)

{
  FUN_1088cf088();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cf0d4; end: 1088cf0df;  */

undefined ** FUN_1088cf0d4(void)

{
  return &PTR_DAT_110a867c0;
}



/* Entry: 1088cf0e0; end: 1088cf17b;  */

long * FUN_1088cf0e0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dce08();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dce30();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088dd348();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8_00 + 8);
    param_3 = *(ulong *)(extraout_x8_00 + 0x10);
  }
  else {
    lVar2 = extraout_x8_00 + 8;
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



/* Entry: 1088cf17c; end: 1088cf17f;  */

void FUN_1088cf17c(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dce6c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001088dd630();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd624();
    if (extraout_x8 == 0) {
      func_0x0001088c723c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0001088dd994();
    }
  }
  func_0x0001088dce58();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dcf5c();
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



/* Entry: 1088cf180; end: 1088cf1d3;  */

long FUN_1088cf180(long param_1)

{
  func_0x0001088dd2fc();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010b4fc4f4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010b5c3924();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088cf1d4; end: 1088cf1e7;  */

void FUN_1088cf1d4(void)

{
  FUN_1088cf180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cf1e8; end: 1088cf1f3;  */

undefined ** FUN_1088cf1e8(void)

{
  return &PTR_DAT_110a86808;
}



/* Entry: 1088cf1f4; end: 1088cf24f;  */

void FUN_1088cf1f4(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0001088dda88();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x0001088dd588();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010b4fc58c(unaff_x19[4]);
    }
    if ((unaff_w20 >> 2 & 1) != 0) {
      func_0x00010b5c3b8c(unaff_x19[5]);
    }
  }
  func_0x0001088dd43c();
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



/* Entry: 1088cf250; end: 1088cf357;  */

long * FUN_1088cf250(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088dcf6c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0001088dcd70();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    func_0x0001088dd0e8();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    func_0x0001088dd114();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088dd348();
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



/* Entry: 1088cf358; end: 1088cf35b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088cf358(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0001088dcd98();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  func_0x0001088ddc54();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0001088dd6c4();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd4e4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001088dd560();
      if (param_1 == (ulong *)0x0) {
        FUN_1088dc20c();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x00010b4fc4b4();
      }
    }
    if ((unaff_w23 >> 2 & 1) != 0) {
      func_0x0001088dd6d0();
      if (param_1 == (ulong *)0x0) {
        func_0x0001088dd6f4();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010b5c4808();
      }
    }
  }
  func_0x0001088dcd84();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088dcf5c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088cf35c; end: 1088cf3d3;  */

void FUN_1088cf35c(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x0001088dd50c();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088cf3b0;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088cf950();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_1088cf3b0;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088cf3b0;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088cf770();
    }
  }
  __ZdlPv();
LAB_1088cf3b0:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088cf3d4; end: 1088cf433;  */

void FUN_1088cf3d4(undefined8 param_1)

{
  int extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x0001088dcef0();
  func_0x0001088dd608(&PTR_DAT_110a859b8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088dcf04();
  }
  func_0x0001088dda38();
  if (extraout_w8 == 2) {
    func_0x0001088ddc04();
    func_0x0001088dc2a4();
  }
  else {
    if (extraout_w8 != 1) {
      return;
    }
    func_0x0001088ddc04();
    FUN_1088dc23c();
  }
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 1088cf434; end: 1088cf45f;  */

undefined8 FUN_1088cf434(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088cf460(param_1);
  return param_1;
}



/* Entry: 1088cf460; end: 1088cf473;  */

void FUN_1088cf460(long param_1)

{
  undefined1 in_ZR;
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x0001088dd50c();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088cf3b0;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088cf950();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_1088cf3b0;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088dd370();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088cf3b0;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088cf770();
    }
  }
  __ZdlPv();
LAB_1088cf3b0:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088cf474; end: 1088cf487;  */

void FUN_1088cf474(void)

{
  FUN_1088cf434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cf488; end: 1088cf49b;  */

undefined8 FUN_1088cf488(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088cf79c(param_1);
  return param_1;
}



/* Entry: 1088cf49c; end: 1088cf593;  */

void FUN_1088cf49c(long param_1)

{
  ulong *puVar1;
  
  FUN_1088cf35c();
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



/* Entry: 1088cf594; end: 1088cf5c3;  */

void FUN_1088cf594(void)

{
  FUN_1088cf8d0();
  FUN_1088dcc88();
  return;
}



/* Entry: 1088cf5c4; end: 1088cf5c7;  */

void FUN_1088cf5c4(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_1088cf670;
  func_0x0001088ddc9c();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_1088cf35c();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x0001088dd7d8();
      func_0x0001088dd968();
      FUN_1088cf718();
      goto LAB_1088cf670;
    }
    func_0x0001088dd898();
    func_0x0001088dc2a4();
  }
  else {
    if (iVar1 != 1) goto LAB_1088cf670;
    if (unaff_w24 == 1) {
      func_0x0001088dd7d8();
      func_0x0001088ddb08();
      func_0x0001088cf68c();
      goto LAB_1088cf670;
    }
    func_0x0001088dd898();
    FUN_1088dc23c();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_1088cf670:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dcf5c();
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



/* Entry: 1088cf5c8; end: 1088cf717;  */

void FUN_1088cf5c8(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x0001088dcd98();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088dd534();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_1088cf670;
  func_0x0001088ddc9c();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_1088cf35c();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x0001088dd7d8();
      func_0x0001088dd968();
      FUN_1088cf718();
      goto LAB_1088cf670;
    }
    func_0x0001088dd898();
    func_0x0001088dc2a4();
  }
  else {
    if (iVar1 != 1) goto LAB_1088cf670;
    if (unaff_w24 == 1) {
      func_0x0001088dd7d8();
      func_0x0001088ddb08();
      func_0x0001088cf68c();
      goto LAB_1088cf670;
    }
    func_0x0001088dd898();
    FUN_1088dc23c();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_1088cf670:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088dcf5c();
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



/* Entry: 1088cf718; end: 1088cf76f;  */

void FUN_1088cf718(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088dce6c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001088dd630();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088dd624();
    if (extraout_x8 == 0) {
      func_0x0001088c723c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0001088dd994();
    }
  }
  func_0x0001088dce58();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088dcf5c();
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



/* Entry: 1088cf770; end: 1088cf79b;  */

undefined8 FUN_1088cf770(undefined8 param_1)

{
  func_0x0001088dd2fc();
  FUN_1088cf79c(param_1);
  return param_1;
}



/* Entry: 1088cf79c; end: 1088cf7bf;  */

void FUN_1088cf79c(void)

{
  long unaff_x19;
  
  func_0x0001088dd2ac();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_1088c7e0c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cf7c0; end: 1088cf7d3;  */

void FUN_1088cf7c0(void)

{
  FUN_1088cf770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088cf7d4; end: 1088cf7df;  */

undefined ** FUN_1088cf7d4(void)

{
  return &PTR_DAT_110a86888;
}



/* Entry: 1088cf7e0; end: 1088cf81b;  */

void FUN_1088cf7e0(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x0001088dd058();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_1088c7efc(unaff_x19[4]);
  }
  func_0x0001088dda68();
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



/* Entry: 1088cf81c; end: 1088cf8cf;  */

long * FUN_1088cf81c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0001088dcfe8();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x0001088dcf7c();
    unaff_x20 = param_1;
  }
  func_0x0001088dd0f4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088cf87c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088cf87c;
  param_4 = (long *)&UNK_10f4eab8b;
  func_0x0001088dd2ec();
  func_0x0001088dcd24();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088cf87c:
  if (*(int *)(unaff_x21 + 0x28) != 0) {
    func_0x0001088dd130();
    func_0x0001088dd99c();
    func_0x0001088dd23c();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088dd348();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088dd474();
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



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b537b24; end: 10b537b2b;  */

void FUN_10b537b24(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x48);
  }
  *puVar1 = &PTR_FUN_110d01640;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 10b537b2c; end: 10b537b8b;  */

void FUN_10b537b2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x48);
  }
  *puVar1 = &PTR_FUN_110d01640;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 10b537b8c; end: 10b537be3;  */

void FUN_10b537b8c(void)

{
  return;
}



/* Entry: 10b537be4; end: 10b537c2f;  */

long FUN_10b537be4(long param_1)

{
  func_0x00010b53a43c();
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  FUN_10b539b70(param_1 + 0x48);
  FUN_10b539b70(param_1 + 0x30);
  func_0x000107c282b4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b537c30; end: 10b537c33;  */

long FUN_10b537c30(long param_1)

{
  func_0x00010b53a43c();
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  FUN_10b539b70(param_1 + 0x48);
  FUN_10b539b70(param_1 + 0x30);
  func_0x000107c282b4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b537c34; end: 10b537c47;  */

void FUN_10b537c34(void)

{
  FUN_10b537be4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b537c48; end: 10b537c53;  */

undefined ** FUN_10b537c48(void)

{
  return &PTR_DAT_110d01918;
}



/* Entry: 10b537c54; end: 10b537caf;  */

void FUN_10b537c54(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x18);
  FUN_10b539e18(param_1 + 0x30);
  FUN_10b539e18(param_1 + 0x48);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010bceb514(*(undefined8 *)(param_1 + 0x60));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x68) = 0;
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



/* Entry: 10b537cb0; end: 10b537e9b;  */

long * FUN_10b537cb0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  
  func_0x00010b53a50c();
  puVar1 = (ulong *)(param_1 + 3);
  lVar12 = 8;
  for (uVar11 = (ulong)(*(uint *)(param_1 + 4) & ((int)*(uint *)(param_1 + 4) >> 0x1f ^ 0xffffffffU)
                       ); uVar11 != 0; uVar11 = uVar11 - 1) {
    uVar6 = *puVar1;
    puVar2 = puVar1;
    if ((uVar6 & 1) != 0) {
      puVar2 = (ulong *)(uVar6 + lVar12 + -1);
    }
    param_3 = (undefined8 *)*puVar2;
    lVar5 = (long)*(char *)((long)param_3 + 0x17);
    puVar10 = param_3;
    if (lVar5 < 0) {
      lVar5 = param_3[1];
      puVar10 = (undefined8 *)*param_3;
    }
    func_0x000107c303d4(puVar10,lVar5,1,&UNK_10f777f3a);
    puVar10 = (undefined8 *)(long)*(char *)((long)param_3 + 0x17);
    if ((((long)puVar10 < 0) && (puVar10 = (undefined8 *)param_3[1], 0x7f < (long)puVar10)) ||
       ((*unaff_x19 - (long)unaff_x21) + 0xe < (long)puVar10)) {
      param_1 = unaff_x19;
      func_0x00010b4d5120();
      unaff_x21 = param_1;
    }
    else {
      *(undefined1 *)unaff_x21 = 10;
      *(char *)((long)unaff_x21 + 1) = (char)puVar10;
      puVar8 = param_3;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        puVar8 = (undefined8 *)*param_3;
      }
      plVar4 = (long *)((long)unaff_x21 + 2);
      param_1 = plVar4;
      param_3 = puVar10;
      _memcpy(plVar4,puVar8);
      unaff_x21 = (long *)((long)plVar4 + (long)puVar10);
    }
    lVar12 = lVar12 + 8;
  }
  iVar9 = *(int *)(unaff_x20 + 0x38);
  for (iVar7 = 0; iVar9 != iVar7; iVar7 = iVar7 + 1) {
    func_0x00010b53a454();
    param_1 = (long *)0x2;
    func_0x00010b53a32c();
    unaff_x21 = param_1;
  }
  plVar4 = param_1;
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    func_0x00010b53a390();
    plVar4 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x00010b53a3c0();
    unaff_x21 = plVar4;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010b53a548();
    func_0x00010b53a32c();
    unaff_x21 = plVar4;
  }
  iVar9 = *(int *)(unaff_x20 + 0x50);
  for (iVar7 = 0; iVar9 != iVar7; iVar7 = iVar7 + 1) {
    func_0x00010b53a454();
    unaff_x21 = (long *)0x5;
    func_0x00010b53a32c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010b53a474();
  if ((long)param_3 < 0) {
    lVar12 = *(long *)(extraout_x8 + 8);
    param_3 = *(undefined8 **)(extraout_x8 + 0x10);
  }
  else {
    lVar12 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)unaff_x21) {
    _memcpy(unaff_x21,lVar12,(ulong)param_3 & 0xffffffff);
    return (long *)((long)unaff_x21 + (long)(int)param_3);
  }
  while( true ) {
    iVar9 = ((int)*unaff_x19 - (int)unaff_x21) + 0x10;
    iVar7 = (int)param_3;
    uVar3 = iVar7 - iVar9;
    param_3 = (undefined8 *)(ulong)uVar3;
    if (uVar3 == 0 || iVar7 < iVar9) break;
    func_0x00010b4d5738();
    unaff_x21 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x21 + (long)iVar7);
}



/* Entry: 10b537e9c; end: 10b537f93;  */

/* WARNING: Removing unreachable block (ram,0x00010b537f04) */
/* WARNING: Removing unreachable block (ram,0x00010b537f24) */

void FUN_10b537e9c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = 8;
  for (uVar3 = (ulong)(*(uint *)(param_1 + 0x20) &
                      ((int)*(uint *)(param_1 + 0x20) >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
      uVar3 = uVar3 - 1) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar2 & 1) != 0) {
      puVar1 = (ulong *)(uVar2 + lVar4 + -1);
    }
    func_0x000107c282a0(*puVar1);
    lVar4 = lVar4 + 8;
  }
  func_0x00010b53a4a4();
  func_0x00010b53a4a4();
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000106af6804(*(undefined8 *)(param_1 + 0x60));
    func_0x00010b53a404();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b53a480();
  }
  func_0x00010b53a5f4();
  return;
}



/* Entry: 10b537f94; end: 10b537f97;  */

void FUN_10b537f94(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53a3ec();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b53a5e8();
  }
  func_0x00010598fce8(unaff_x21 + 0x18,unaff_x20 + 0x18);
  FUN_10b53802c(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar1 = (ulong *)(unaff_x21 + 0x48);
  FUN_10b53802c();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x60);
    if (puVar1 == (ulong *)0x0) {
      func_0x00010b53a3fc();
      *(ulong **)(unaff_x21 + 0x60) = puVar1;
    }
    else {
      func_0x00010bceb4f4();
    }
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  func_0x00010b53a37c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b53a3dc();
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



/* Entry: 10b537f98; end: 10b53802b;  */

void FUN_10b537f98(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53a3ec();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b53a5e8();
  }
  func_0x00010598fce8(unaff_x21 + 0x18,unaff_x20 + 0x18);
  FUN_10b53802c(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar1 = (ulong *)(unaff_x21 + 0x48);
  FUN_10b53802c();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x60);
    if (puVar1 == (ulong *)0x0) {
      func_0x00010b53a3fc();
      *(ulong **)(unaff_x21 + 0x60) = puVar1;
    }
    else {
      func_0x00010bceb4f4();
    }
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  func_0x00010b53a37c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b53a3dc();
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



/* Entry: 10b53802c; end: 10b538043;  */

void FUN_10b53802c(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000107c39c98();
  plVar2 = param_1;
  func_0x000107c39ca8();
  func_0x000107c39cb0();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x00010b4d38f4();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    (*(code *)&SUB_106af6830)(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b538044; end: 10b5380a7;  */

long FUN_10b538044(long param_1)

{
  func_0x00010b53a43c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b537be4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5380a8; end: 10b5380ab;  */

long FUN_10b5380a8(long param_1)

{
  func_0x00010b53a43c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b537be4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5380ac; end: 10b5380bf;  */

void FUN_10b5380ac(void)

{
  FUN_10b538044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5380c0; end: 10b5380cb;  */

undefined ** FUN_10b5380c0(void)

{
  return &PTR_DAT_110d01970;
}



/* Entry: 10b5380cc; end: 10b538143;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5380cc(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b537c54(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b53a56c();
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
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



/* Entry: 10b538144; end: 10b538293;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b538144(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b53a51c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x00010b53a59c();
    func_0x00010b53a3cc();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_1 = (long *)0x2;
    func_0x00010b53a3cc();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    func_0x00010b53a53c();
    func_0x00010b53a3cc();
    param_4 = param_1;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    func_0x00010b53a548();
    func_0x00010b53a3cc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b53a474();
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



/* Entry: 10b538294; end: 10b5382af;  */

long FUN_10b538294(long param_1)

{
  long extraout_x8;
  
  FUN_10b537e9c();
  func_0x00010b53a344();
  return param_1 + extraout_x8;
}



/* Entry: 10b5382b0; end: 10b5382b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5382b0(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53a3ec();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b53a5e8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a4c0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b537f98();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b53a5b4();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
  }
  func_0x00010b53a37c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b53a3dc();
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



/* Entry: 10b5382b4; end: 10b538397;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5382b4(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53a3ec();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b53a5e8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a4c0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b537f98();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b53a5b4();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
  }
  func_0x00010b53a37c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b53a3dc();
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



/* Entry: 10b538398; end: 10b5383fb;  */

long FUN_10b538398(long param_1)

{
  func_0x00010b53a43c();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5383fc; end: 10b5383ff;  */

long FUN_10b5383fc(long param_1)

{
  func_0x00010b53a43c();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b538400; end: 10b538413;  */

void FUN_10b538400(void)

{
  FUN_10b538398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b538414; end: 10b53841f;  */

undefined ** FUN_10b538414(void)

{
  return &PTR_DAT_110d019c8;
}



/* Entry: 10b538420; end: 10b538497;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b538420(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b53a56c();
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
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



/* Entry: 10b538498; end: 10b5385e7;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b538498(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b53a51c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x00010b53a59c();
    func_0x00010b53a3cc();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_1 = (long *)0x2;
    func_0x00010b53a3cc();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    func_0x00010b53a53c();
    func_0x00010b53a3cc();
    param_4 = param_1;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    func_0x00010b53a548();
    func_0x00010b53a3cc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b53a474();
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



/* Entry: 10b5385e8; end: 10b5385eb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5385e8(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53a3ec();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b53a5e8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b53a5b4();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
  }
  func_0x00010b53a37c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b53a3dc();
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



/* Entry: 10b5385ec; end: 10b5386cf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5385ec(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53a3ec();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b53a5e8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b53a5b4();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
  }
  func_0x00010b53a37c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b53a3dc();
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



/* Entry: 10b5386d0; end: 10b5387ab;  */

long FUN_10b5386d0(long param_1)

{
  func_0x00010b53a43c();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b537be4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b537be4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b538398();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_10b54a368();
  }
  __ZdlPv();
  FUN_10b539b9c(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5387ac; end: 10b5387af;  */

long FUN_10b5387ac(long param_1)

{
  func_0x00010b53a43c();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b537be4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b537be4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b538398();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_10b54a368();
  }
  __ZdlPv();
  FUN_10b539b9c(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5387b0; end: 10b5387c3;  */

void FUN_10b5387b0(void)

{
  FUN_10b5386d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5387c4; end: 10b5387cf;  */

undefined ** FUN_10b5387c4(void)

{
  return &PTR_DAT_110d01a20;
}



/* Entry: 10b5387d0; end: 10b5388d7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5387d0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b537c54(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b537c54(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_10b538420(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x78));
    }
  }
  if ((uVar1 & 0x300) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x80));
    }
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_10b54a3f4(*(undefined8 *)(param_1 + 0x88));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
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



/* Entry: 10b5388d8; end: 10b538b8f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b5388d8(long *param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar7;
  long unaff_x22;
  int iVar8;
  
  func_0x00010b53a50c();
  func_0x00010b53a4f0(param_1[6]);
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b538918;
  }
  else if ((int)param_2 != 0) {
LAB_10b538918:
    func_0x00010b53a444();
    param_2 = 1;
    param_1 = unaff_x19;
    func_0x00010b53a3a8();
    unaff_x21 = param_1;
  }
  func_0x00010b53a4f0(*(undefined8 *)(unaff_x20 + 0x38));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b538974;
  }
  else if ((int)param_2 == 0) goto LAB_10b538974;
  func_0x00010b53a444();
  param_1 = unaff_x19;
  func_0x00010b53a3a8();
  unaff_x21 = param_1;
LAB_10b538974:
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    func_0x00010b53a53c();
    func_0x00010b53a32c();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    func_0x00010b53a548();
    func_0x00010b53a32c();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x14);
    param_1 = (long *)0x5;
    func_0x00010b53a32c();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x14);
    param_1 = (long *)0x6;
    func_0x00010b53a32c();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x14);
    param_1 = (long *)0x7;
    func_0x00010b53a32c();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x14);
    param_1 = (long *)0x8;
    func_0x00010b53a32c();
    unaff_x21 = param_1;
  }
  plVar3 = param_1;
  if (*(int *)(unaff_x20 + 0x90) != 0) {
    func_0x00010b53a390();
    plVar3 = (long *)0x48;
    func_0x000107c280a8(0x48,param_1);
    func_0x00010b53a3c0();
    unaff_x21 = plVar3;
  }
  iVar8 = *(int *)(unaff_x20 + 0x20);
  for (iVar7 = 0; iVar8 != iVar7; iVar7 = iVar7 + 1) {
    uVar6 = *(ulong *)(unaff_x20 + 0x18);
    puVar1 = (ulong *)(unaff_x20 + 0x18);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + (long)iVar7 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar1 + 0x14);
    plVar3 = (long *)0xa;
    func_0x00010b53a32c();
    unaff_x21 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)(unaff_x20 + 0x94) != 0) {
    func_0x00010b53a390();
    plVar4 = (long *)0x58;
    func_0x000107c280a8(0x58,plVar3);
    func_0x00010b53a3c0();
    unaff_x21 = plVar4;
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    func_0x00010b53a390();
    unaff_x21 = (long *)0x60;
    func_0x000107c280a8(0x60,plVar4);
    func_0x00010b53a3c0();
  }
  if ((uVar2 >> 6 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x70) + 0x14);
    unaff_x21 = (long *)0xd;
    func_0x00010b53a32c();
  }
  if ((uVar2 >> 7 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x78) + 0x14);
    unaff_x21 = (long *)0xe;
    func_0x00010b53a32c();
  }
  if ((uVar2 >> 8 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x80) + 0x14);
    unaff_x21 = (long *)0xf;
    func_0x00010b53a32c();
  }
  if ((uVar2 >> 9 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x88) + 0x30);
    unaff_x21 = (long *)0x10;
    func_0x00010b53a32c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b53a474();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)unaff_x21 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)unaff_x21) + 0x10;
        iVar7 = (int)param_3;
        uVar2 = iVar7 - iVar8;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        unaff_x21 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)unaff_x21 + (long)iVar7);
    }
    _memcpy(unaff_x21,lVar5,param_3 & 0xffffffff);
    return (long *)((long)unaff_x21 + (long)(int)param_3);
  }
  return unaff_x21;
}



/* Entry: 10b538b90; end: 10b538d3b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b538b90(long param_1)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long *unaff_x21;
  long unaff_x22;
  
  lVar2 = param_1;
  func_0x00010b53a554();
  while (unaff_x22 != 0) {
    lVar2 = *unaff_x21;
    FUN_10b538d3c();
    func_0x00010b53a5a8();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010b53a4e4(*(undefined8 *)(param_1 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b53a404();
  }
  func_0x00010b53a4e4(*(undefined8 *)(param_1 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b53a404();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b538294(*(undefined8 *)(param_1 + 0x40));
      func_0x00010b53a404();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b538294(*(undefined8 *)(param_1 + 0x48));
      func_0x00010b53a404();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000106af6804(*(undefined8 *)(param_1 + 0x50));
      func_0x00010b53a404();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000106af6804(*(undefined8 *)(param_1 + 0x58));
      func_0x00010b53a404();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x000106af6804(*(undefined8 *)(param_1 + 0x60));
      func_0x00010b53a404();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x000106af6804(*(undefined8 *)(param_1 + 0x68));
      func_0x00010b53a404();
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x00010b538548(*(undefined8 *)(param_1 + 0x70));
      func_0x00010b53a344();
      func_0x00010b53a52c();
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x000106af6804(*(undefined8 *)(param_1 + 0x78));
      func_0x00010b53a404();
    }
  }
  if ((uVar1 & 0x300) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      func_0x000106af6804(*(undefined8 *)(param_1 + 0x80));
      func_0x00010b53a404();
    }
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_10b5371f0(*(undefined8 *)(param_1 + 0x88));
    }
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    func_0x00010b53a4c8(0xfffffff7);
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    func_0x00010b53a4c8();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b53a480();
  }
  func_0x00010b53a5f4();
  return;
}



/* Entry: 10b538d3c; end: 10b538d57;  */

long FUN_10b538d3c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b5381f4();
  func_0x00010b53a344();
  return param_1 + extraout_x8;
}



/* Entry: 10b538d58; end: 10b538d5b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b538d58(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00010b53a3ec();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    func_0x00010b53a5e8();
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_10b538fb8();
  func_0x00010b53a498(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53a48c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b53a498(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53a48c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b53a4c0();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        FUN_10b537f98();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b53a4c0();
        *(ulong **)(unaff_x21 + 0x48) = puVar2;
      }
      else {
        FUN_10b537f98();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x50);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x58);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x58) = puVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10b539f0c();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        FUN_10b5385ec();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
  }
  if ((uVar1 & 0x300) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x80) = puVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x88);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b537450();
        *(ulong **)(unaff_x21 + 0x88) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_10b54a65c();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x90) != 0) {
    *(int *)(unaff_x21 + 0x90) = *(int *)(unaff_x20 + 0x90);
  }
  if (*(int *)(unaff_x20 + 0x94) != 0) {
    *(int *)(unaff_x21 + 0x94) = *(int *)(unaff_x20 + 0x94);
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    *(int *)(unaff_x21 + 0x98) = *(int *)(unaff_x20 + 0x98);
  }
  func_0x00010b53a37c();
  if ((extraout_x8_01 & 1) == 0) {
    return;
  }
  func_0x00010b53a3dc();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b538d5c; end: 10b538fb7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b538d5c(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00010b53a3ec();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    func_0x00010b53a5e8();
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_10b538fb8();
  func_0x00010b53a498(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53a48c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b53a498(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53a48c();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x38);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b53a4c0();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        FUN_10b537f98();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b53a4c0();
        *(ulong **)(unaff_x21 + 0x48) = puVar2;
      }
      else {
        FUN_10b537f98();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x50);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x58);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x58) = puVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x68) = puVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x70);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10b539f0c();
        *(ulong **)(unaff_x21 + 0x70) = puVar2;
      }
      else {
        FUN_10b5385ec();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x78);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x78) = puVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
  }
  if ((uVar1 & 0x300) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x80);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x80) = puVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x88);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b537450();
        *(ulong **)(unaff_x21 + 0x88) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_10b54a65c();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x90) != 0) {
    *(int *)(unaff_x21 + 0x90) = *(int *)(unaff_x20 + 0x90);
  }
  if (*(int *)(unaff_x20 + 0x94) != 0) {
    *(int *)(unaff_x21 + 0x94) = *(int *)(unaff_x20 + 0x94);
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    *(int *)(unaff_x21 + 0x98) = *(int *)(unaff_x20 + 0x98);
  }
  func_0x00010b53a37c();
  if ((extraout_x8_01 & 1) == 0) {
    return;
  }
  func_0x00010b53a3dc();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b538fb8; end: 10b538fc7;  */

void FUN_10b538fb8(long *param_1,long param_2)

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



/* Entry: 10b538fc8; end: 10b539023;  */

long FUN_10b538fc8(long param_1)

{
  func_0x00010b53a43c();
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b537be4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b538044();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b539024; end: 10b539027;  */

long FUN_10b539024(long param_1)

{
  func_0x00010b53a43c();
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b537be4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b538044();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b539028; end: 10b53903b;  */

void FUN_10b539028(void)

{
  FUN_10b538fc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53903c; end: 10b539047;  */

undefined ** FUN_10b53903c(void)

{
  return &PTR_DAT_110d01a78;
}



/* Entry: 10b539048; end: 10b5390b3;  */

void FUN_10b539048(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x00010b53a584();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b537c54(*(undefined8 *)(unaff_x19 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5380cc(*(undefined8 *)(unaff_x19 + 0x28));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b53a56c();
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x38) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
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



/* Entry: 10b5390b4; end: 10b539293;  */

long * FUN_10b5390b4(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  int iVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  
  uVar1 = *(uint *)(param_1 + 2);
  plVar7 = (long *)(ulong)uVar1;
  plVar2 = param_1;
  plVar4 = param_2;
  plVar8 = param_3;
  if ((uVar1 & 1) != 0) {
    plVar4 = (long *)param_1[4];
    param_2 = param_1;
    func_0x00010b53a59c();
    func_0x00010b53a3cc();
    plVar2 = param_2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar4 = (long *)param_1[5];
    plVar8 = (long *)(ulong)*(uint *)((long)plVar4 + 0x14);
    plVar2 = (long *)0x2;
    func_0x00010b53a3cc();
    param_2 = plVar2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar4 = (long *)param_1[6];
    func_0x00010b53a53c();
    func_0x00010b53a3cc();
    param_2 = plVar2;
  }
  func_0x00010b53a4f0(param_1[3]);
  if ((long)plVar4 < 0) {
    if (plVar7[1] == 0) goto LAB_10b539174;
    plVar2 = (long *)*plVar7;
  }
  else {
    plVar2 = plVar7;
    if ((int)plVar4 == 0) goto LAB_10b539174;
  }
  func_0x00010b53a444(plVar2);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,4,plVar7,param_2);
  plVar8 = plVar7;
  param_2 = plVar2;
LAB_10b539174:
  if ((char)param_1[7] == '\x01') {
    plVar2 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(byte *)(param_1 + 7);
    uVar3 = 0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x000107c280a8(param_2,uVar3);
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x00010b53a474();
  if ((long)plVar8 < 0) {
    lVar5 = *(long *)(extraout_x8 + 8);
    plVar8 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar5 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar8) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)plVar8;
      plVar8 = (long *)(ulong)(uint)(iVar6 - iVar9);
      if (iVar6 - iVar9 == 0 || iVar6 < iVar9) break;
      func_0x00010b4d5738();
      lVar5 = (long)param_2 + (long)iVar9;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar5);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar5,(ulong)plVar8 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar8);
}



/* Entry: 10b539294; end: 10b539297;  */

void FUN_10b539294(ulong *param_1,long param_2)

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
  
  func_0x00010b53a3ec();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b53a498(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010b53a48c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a4c0();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b537f98();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b539fc8();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b5382b4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b53a5b4();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  func_0x00010b53a37c();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b53a3dc();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b539298; end: 10b539397;  */

void FUN_10b539298(ulong *param_1,long param_2)

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
  
  func_0x00010b53a3ec();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b53a498(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010b53a48c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a4c0();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b537f98();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b539fc8();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b5382b4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b53a5b4();
      if (param_1 == (ulong *)0x0) {
        func_0x00010b53a3fc();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  func_0x00010b53a37c();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x00010b53a3dc();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b539398; end: 10b5393f3;  */

long FUN_10b539398(long param_1)

{
  func_0x00010b53a43c();
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5386d0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b538fc8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5393f4; end: 10b5393f7;  */

long FUN_10b5393f4(long param_1)

{
  func_0x00010b53a43c();
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5386d0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b538fc8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5393f8; end: 10b53940b;  */

void FUN_10b5393f8(void)

{
  FUN_10b539398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53940c; end: 10b539417;  */

undefined ** FUN_10b53940c(void)

{
  return &PTR_DAT_110d01ad8;
}



/* Entry: 10b539418; end: 10b53947f;  */

void FUN_10b539418(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x00010b53a584();
  func_0x000107c3025c(unaff_x19 + 0x20);
  func_0x000107c3025c(unaff_x19 + 0x28);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5387d0(*(undefined8 *)(unaff_x19 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b539048(*(undefined8 *)(unaff_x19 + 0x38));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b539480; end: 10b53972f;  */

long * FUN_10b539480(long *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar5;
  long unaff_x22;
  undefined8 *puVar6;
  int iVar7;
  
  func_0x00010b53a50c();
  func_0x00010b53a4f0(param_1[3]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5394b8;
  }
  else if ((int)param_2 != 0) {
LAB_10b5394b8:
    func_0x00010b53a444();
    param_2 = (long *)0x1;
    param_1 = unaff_x19;
    func_0x00010b53a3a8();
    unaff_x21 = param_1;
  }
  func_0x00010b53a4f0(*(undefined8 *)(unaff_x20 + 0x20));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5394f8;
  }
  else if ((int)param_2 != 0) {
LAB_10b5394f8:
    func_0x00010b53a444();
    param_2 = (long *)0x2;
    param_1 = unaff_x19;
    func_0x00010b53a3a8();
    unaff_x21 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  puVar6 = (undefined8 *)(ulong)uVar1;
  if ((uVar1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x30);
    func_0x00010b53a53c();
    func_0x00010b53a32c();
    unaff_x21 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x38);
    func_0x00010b53a548();
    func_0x00010b53a32c();
    unaff_x21 = param_1;
  }
  plVar2 = param_1;
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    func_0x00010b53a390();
    plVar2 = (long *)0x28;
    func_0x000107c280a8();
    func_0x00010b53a590();
    param_2 = param_1;
    unaff_x21 = plVar2;
  }
  func_0x00010b53a4f0(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)param_2 < 0) {
    if (puVar6[1] == 0) goto LAB_10b5395a8;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if ((int)param_2 == 0) goto LAB_10b5395a8;
  func_0x00010b53a444(puVar6);
  plVar2 = unaff_x19;
  func_0x00010b53a3a8();
  unaff_x21 = plVar2;
LAB_10b5395a8:
  plVar3 = plVar2;
  if (*(char *)(unaff_x20 + 0x41) == '\x01') {
    func_0x00010b53a390();
    plVar3 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar2);
    func_0x00010b53a590();
    unaff_x21 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    func_0x00010b53a390();
    unaff_x21 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar3);
    func_0x00010b53a3c0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b53a474();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)unaff_x21 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)unaff_x21) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar7;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar7) break;
        func_0x00010b4d5738();
        unaff_x21 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)unaff_x21 + (long)iVar5);
    }
    _memcpy(unaff_x21,lVar4,param_3 & 0xffffffff);
    return (long *)((long)unaff_x21 + (long)(int)param_3);
  }
  return unaff_x21;
}



/* Entry: 10b539730; end: 10b53986f;  */

void FUN_10b539730(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b53a3ec();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b53a498(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010b53a48c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010b53a498(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53a48c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010b53a498(*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53a48c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b53a5b4();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b53a088();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_10b538d5c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        FUN_10b53a254();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b539298();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x40) = 1;
  }
  if (*(char *)(unaff_x20 + 0x41) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x41) = 1;
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x21 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  func_0x00010b53a37c();
  if ((extraout_x8_02 & 1) == 0) {
    return;
  }
  func_0x00010b53a3dc();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b539870; end: 10b5398cf;  */

undefined8 * FUN_10b539870(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d018d8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b53a39c();
  }
  FUN_10b539bc8(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = *(undefined8 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b5398d0; end: 10b5398fb;  */

long FUN_10b5398d0(long param_1)

{
  func_0x00010b53a43c();
  FUN_10b539be8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5398fc; end: 10b5398ff;  */

long FUN_10b5398fc(long param_1)

{
  func_0x00010b53a43c();
  FUN_10b539be8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b539900; end: 10b539913;  */

void FUN_10b539900(void)

{
  FUN_10b5398d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b539914; end: 10b53991f;  */

undefined ** FUN_10b539914(void)

{
  return &PTR_DAT_110d01b28;
}



/* Entry: 10b539920; end: 10b539963;  */

void FUN_10b539920(long param_1)

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



/* Entry: 10b539964; end: 10b539a13;  */

long * FUN_10b539964(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b53a51c();
  lVar3 = param_1[3];
  for (iVar4 = 0; (int)lVar3 != iVar4; iVar4 = iVar4 + 1) {
    func_0x00010b53a59c();
    func_0x00010b53a3cc();
    param_4 = param_1;
  }
  plVar2 = param_4;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c282cc();
    param_3 = param_4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return plVar2;
  }
  func_0x00010b53a474();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)plVar2) {
    _memcpy(plVar2,lVar3,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)param_3);
  }
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



/* Entry: 10b539a14; end: 10b539a93;  */

long FUN_10b539a14(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b53a554();
  while (unaff_x22 != 0) {
    FUN_10b539a94(*unaff_x21);
    func_0x00010b53a5a8();
    unaff_x21 = unaff_x21 + 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    unaff_x20 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + unaff_x20;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b53a480();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b539a94; end: 10b539aaf;  */

long FUN_10b539a94(long param_1)

{
  long extraout_x8;
  
  func_0x00010b53962c();
  func_0x00010b53a344();
  return param_1 + extraout_x8;
}



/* Entry: 10b539ab0; end: 10b539ab3;  */

void FUN_10b539ab0(long param_1,long param_2)

{
  FUN_10b539b08(param_1 + 0x10,param_2 + 0x10);
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
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



/* Entry: 10b539ab4; end: 10b539b07;  */

void FUN_10b539ab4(long param_1,long param_2)

{
  FUN_10b539b08(param_1 + 0x10,param_2 + 0x10);
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
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



/* Entry: 10b539b08; end: 10b539b4f;  */

void FUN_10b539b08(long *param_1,long param_2)

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



/* Entry: 10b539b50; end: 10b539b6f;  */

void FUN_10b539b50(void)

{
  func_0x00010b53a600();
  FUN_10b53802c();
  return;
}



/* Entry: 10b539b70; end: 10b539b9b;  */

long * FUN_10b539b70(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b53a57c();
  }
  return param_1;
}



/* Entry: 10b539b9c; end: 10b539bc7;  */

long * FUN_10b539b9c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b53a57c();
  }
  return param_1;
}



/* Entry: 10b539bc8; end: 10b539be7;  */

void FUN_10b539bc8(void)

{
  func_0x00010b53a600();
  FUN_10b539b08();
  return;
}



/* Entry: 10b539be8; end: 10b539c13;  */

long * FUN_10b539be8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b53a57c();
  }
  return param_1;
}



/* Entry: 10b539c14; end: 10b539e17;  */

void FUN_10b539c14(long param_1)

{
  if (param_1 == 0) {
    func_0x00010b53a44c();
  }
  else {
    func_0x00010b53a3b4();
  }
  func_0x00010b53a5c0(&PTR_FUN_110d016f8);
  return;
}



/* Entry: 10b539e18; end: 10b539e2b;  */

void FUN_10b539e18(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b539e2c; end: 10b539f0b;  */

undefined8 * FUN_10b539e2c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x70;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x70);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d01748;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b53a39c();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  func_0x00010598fd00(puVar1 + 3,param_1,param_2 + 0x18);
  FUN_10b539b50(puVar1 + 6,param_1,param_2 + 0x30);
  puVar2 = puVar1 + 9;
  FUN_10b539b50(puVar2,param_1,param_2 + 0x48);
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b53a424();
  }
  puVar1[0xc] = puVar2;
  *(undefined4 *)(puVar1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  return puVar1;
}



/* Entry: 10b539f0c; end: 10b53a087;  */

undefined8 * FUN_10b539f0c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b53a44c();
  }
  else {
    func_0x00010b53a3b4();
  }
  puVar3 = puVar2 + 1;
  *puVar3 = param_1;
  *puVar2 = &PTR_FUN_110d016f8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b53a39c();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b53a434();
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b53a434();
  }
  puVar2[4] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b53a434();
  }
  puVar2[5] = puVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b53a434();
  }
  puVar2[6] = puVar3;
  return puVar2;
}



/* Entry: 10b53a088; end: 10b53a253;  */

undefined8 * FUN_10b53a088(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0xa0;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0xa0);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d017e8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b53a39c();
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar2 + 0x1c) = 0;
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined4 *)((long)puVar2 + 0x24) = 0;
  puVar2[5] = param_1;
  FUN_10b538fb8(puVar2 + 3,param_2 + 0x18);
  lVar3 = param_2 + 0x30;
  func_0x000107c2809c(lVar3,param_1);
  puVar2[6] = lVar3;
  lVar3 = param_2 + 0x38;
  func_0x000107c2809c(lVar3,param_1);
  puVar2[7] = lVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    FUN_10b539e2c(param_1,*(undefined8 *)(param_2 + 0x40));
  }
  puVar2[8] = puVar4;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    FUN_10b539e2c(param_1,*(undefined8 *)(param_2 + 0x48));
  }
  puVar2[9] = puVar4;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b53a424();
  }
  puVar2[10] = puVar4;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b53a424();
  }
  puVar2[0xb] = puVar4;
  if ((uVar1 >> 4 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b53a424();
  }
  puVar2[0xc] = puVar4;
  if ((uVar1 >> 5 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b53a424();
  }
  puVar2[0xd] = puVar4;
  if ((uVar1 >> 6 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    FUN_10b539f0c(param_1,*(undefined8 *)(param_2 + 0x70));
  }
  puVar2[0xe] = puVar4;
  if ((uVar1 >> 7 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b53a424();
  }
  puVar2[0xf] = puVar4;
  if ((uVar1 >> 8 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b53a424();
  }
  puVar2[0x10] = puVar4;
  if ((uVar1 >> 9 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b537450(param_1,*(undefined8 *)(param_2 + 0x88));
  }
  puVar2[0x11] = param_1;
  uVar5 = *(undefined8 *)(param_2 + 0x90);
  *(undefined4 *)(puVar2 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  puVar2[0x12] = uVar5;
  return puVar2;
}



/* Entry: 10b53a254; end: 10b53a32b;  */

undefined8 * FUN_10b53a254(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x40);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d01838;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b53a39c();
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  lVar3 = param_2 + 0x18;
  func_0x000107c2809c(lVar3,param_1);
  puVar2[3] = lVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    FUN_10b539e2c(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar2[4] = puVar4;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = param_1;
    func_0x00010b539fc8(param_1,*(undefined8 *)(param_2 + 0x28));
  }
  puVar2[5] = puVar4;
  if ((uVar1 >> 2 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x000106af6830(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar2[6] = param_1;
  *(undefined1 *)(puVar2 + 7) = *(undefined1 *)(param_2 + 0x38);
  return puVar2;
}



/* Entry: 10b53a32c; end: 10b53a613;  */

void FUN_10b53a32c(int param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 unaff_x19;
  
  func_0x0001001a597c();
  uVar1 = (ulong)(param_1 << 3 | 2);
  func_0x0001001a59d0(uVar1,unaff_x19);
  func_0x0001001a59d0(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_3);
  return;
}



/* Entry: 10b53a614; end: 10b53a63b;  */

long FUN_10b53a614(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b53a63c; end: 10b53a63f;  */

long FUN_10b53a63c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b53a640; end: 10b53a653;  */

void FUN_10b53a640(void)

{
  FUN_10b53a614();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53a654; end: 10b53a673;  */

undefined ** FUN_10b53a654(void)

{
  return &PTR_DAT_110d01cc0;
}



/* Entry: 10b53a674; end: 10b53a71f;  */

long * FUN_10b53a674(long *param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  
  plVar8 = param_1;
  if ((int)param_1[2] != 0) {
    plVar2 = param_1;
    func_0x00010b53ab80();
    plVar8 = (long *)(ulong)*(uint *)(param_1 + 2);
    uVar3 = 8;
    func_0x000107c280a8(8,plVar2);
    func_0x000107c280b8(plVar8,uVar3);
    param_2 = plVar8;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b53ab80();
    uVar1 = *(undefined4 *)((long)param_1 + 0x14);
    puVar4 = (undefined4 *)0x15;
    func_0x000107c280a8(0x15,plVar8);
    param_2 = (long *)(puVar4 + 1);
    *puVar4 = uVar1;
  }
  if ((param_1[1] & 1U) != 0) {
    uVar7 = param_1[1] & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar6) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar9 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar9 - iVar10);
        if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
        func_0x00010b4d5738();
        lVar5 = (long)param_2 + (long)iVar10;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar9);
    }
    _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar6);
  }
  return param_2;
}



/* Entry: 10b53a720; end: 10b53a7b3;  */

long FUN_10b53a720(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
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



/* Entry: 10b53a7b4; end: 10b53a813;  */

undefined8 * FUN_10b53a7b4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d01c80;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b53aa7c(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b53a814; end: 10b53a843;  */

long FUN_10b53a814(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53aaa8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b53a844; end: 10b53a847;  */

long FUN_10b53a844(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b53aaa8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b53a848; end: 10b53a85b;  */

void FUN_10b53a848(void)

{
  FUN_10b53a814();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b53a85c; end: 10b53a867;  */

undefined ** FUN_10b53a85c(void)

{
  return &PTR_DAT_110d01d18;
}



/* Entry: 10b53a868; end: 10b53a8af;  */

void FUN_10b53a868(long param_1)

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



/* Entry: 10b53a8b0; end: 10b53a967;  */

long * FUN_10b53a8b0(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x18),param_2,param_3);
    param_2 = plVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
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



/* Entry: 10b53a968; end: 10b53a9df;  */

long FUN_10b53a968(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    FUN_10b53a9e0();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b53a9e0; end: 10b53aa0b;  */

long FUN_10b53a9e0(long param_1)

{
  FUN_10b53a720();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b53aa0c; end: 10b53aa0f;  */

void FUN_10b53aa0c(long param_1,long param_2)

{
  FUN_10b53aa5c(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b53aa10; end: 10b53aa5b;  */

void FUN_10b53aa10(long param_1,long param_2)

{
  FUN_10b53aa5c(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b53aa5c; end: 10b53aa7b;  */

void FUN_10b53aa5c(long *param_1,long param_2)

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



/* Entry: 10b53aa7c; end: 10b53aaa7;  */

undefined8 * FUN_10b53aa7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b53aa5c(param_1,param_3);
  return param_1;
}



/* Entry: 10b53aaa8; end: 10b53aad7;  */

long * FUN_10b53aaa8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



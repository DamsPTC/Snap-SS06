/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b52dce4; end: 10b52dcef;  */

undefined ** FUN_10b52dce4(void)

{
  return &PTR_DAT_110d00208;
}



/* Entry: 10b52dcf0; end: 10b52dd4b;  */

void FUN_10b52dcf0(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x00010b534360();
  func_0x00010b534838();
  func_0x00010b534900();
  func_0x00010b534a94();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010b535c6c(*(undefined8 *)(unaff_x19 + 0x30));
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010b535c6c(*(undefined8 *)(unaff_x19 + 0x38));
    }
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
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



/* Entry: 10b52dd4c; end: 10b52dfd3;  */

long * FUN_10b52dd4c(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar7;
  long *unaff_x22;
  int iVar8;
  
  func_0x00010b534738();
  func_0x00010b534580(param_1[3]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar5 = (long *)*unaff_x22;
      goto LAB_10b52dd84;
    }
  }
  else {
    plVar5 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b52dd84:
      param_4 = (long *)&UNK_10f777add;
      func_0x00010b534528();
      func_0x00010b534310();
      func_0x00010b534790();
      param_1 = plVar5;
      unaff_x21 = plVar5;
    }
  }
  plVar5 = (long *)(*(ulong *)(unaff_x20 + 0x20) & 0xfffffffffffffffc);
  lVar6 = (long)*(char *)((long)plVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = plVar5[1];
  }
  if (lVar6 != 0) {
    param_2 = 2;
    param_1 = unaff_x19;
    func_0x00010b534790();
    unaff_x21 = param_1;
  }
  func_0x00010b534580(*(undefined8 *)(unaff_x20 + 0x28));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52de04;
  }
  else if ((int)param_2 == 0) goto LAB_10b52de04;
  param_4 = (long *)&UNK_10f777b1f;
  func_0x00010b534528();
  param_1 = unaff_x19;
  func_0x00010b5344b0();
  unaff_x21 = param_1;
LAB_10b52de04:
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    func_0x0001088bdd44();
    param_1 = unaff_x19;
    plVar5 = unaff_x21;
    unaff_x21 = unaff_x19;
  }
  plVar3 = param_1;
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    func_0x00010b5342f4();
    plVar3 = (long *)0x28;
    func_0x000107c280a8(0x28,param_1);
    func_0x00010b5343b4();
    unaff_x21 = plVar3;
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x20);
    plVar3 = (long *)0x6;
    func_0x00010b534164();
    unaff_x21 = plVar3;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x20);
    plVar3 = (long *)0x7;
    func_0x00010b534164();
    unaff_x21 = plVar3;
  }
  plVar4 = plVar3;
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x00010b5342f4();
    plVar4 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar3);
    func_0x00010b534af8();
    unaff_x21 = plVar4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b534550();
    if ((long)plVar5 < 0) {
      plVar5 = *(long **)(extraout_x8 + 0x10);
    }
    func_0x00010b534aa0();
    if (*plVar4 - (long)param_4 < (long)(int)plVar5) {
      while( true ) {
        iVar8 = ((int)*plVar4 - (int)param_4) + 0x10;
        iVar7 = (int)plVar5;
        plVar5 = (long *)(ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar8);
        param_4 = plVar4;
        func_0x000107c303e4(plVar4,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)plVar5);
  }
  return unaff_x21;
}



/* Entry: 10b52dfd4; end: 10b52dfef;  */

long FUN_10b52dfd4(long param_1)

{
  long extraout_x8;
  
  FUN_10b535d24();
  func_0x00010b534014();
  return param_1 + extraout_x8;
}



/* Entry: 10b52dff0; end: 10b52dff3;  */

void FUN_10b52dff0(ulong *param_1,long param_2,ulong *param_3)

{
  undefined1 in_ZR;
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b534170();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x00010b534784();
    puVar1 = unaff_x22;
  }
  func_0x00010b534344();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534b10();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x000107c30248();
  }
  func_0x00010b534914();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b534b78();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar1;
        FUN_10b5332cc();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010b535b88();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        FUN_10b5332cc();
        *(ulong **)(unaff_x21 + 0x38) = puVar1;
        param_1 = puVar1;
      }
      else {
        func_0x00010b535b88();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x21 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x21 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  func_0x00010b5340f4();
  if ((extraout_x8_02 & 1) == 0) {
    return;
  }
  func_0x00010b53423c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b52dff4; end: 10b52e113;  */

void FUN_10b52dff4(ulong *param_1,long param_2,ulong *param_3)

{
  undefined1 in_ZR;
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010b534170();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x00010b534784();
    puVar1 = unaff_x22;
  }
  func_0x00010b534344();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534700();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534b10();
  }
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x000107c30248();
  }
  func_0x00010b534914();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010b534b78();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar1;
        FUN_10b5332cc();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010b535b88();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        FUN_10b5332cc();
        *(ulong **)(unaff_x21 + 0x38) = puVar1;
        param_1 = puVar1;
      }
      else {
        func_0x00010b535b88();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x21 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x21 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    *(long *)(unaff_x21 + 0x48) = *(long *)(unaff_x20 + 0x48);
  }
  func_0x00010b5340f4();
  if ((extraout_x8_02 & 1) == 0) {
    return;
  }
  func_0x00010b53423c();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b52e114; end: 10b52e123;  */

void FUN_10b52e114(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
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



/* Entry: 10b52e124; end: 10b52e147;  */

undefined8 FUN_10b52e124(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b52e148; end: 10b52e14b;  */

undefined8 FUN_10b52e148(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b52e14c; end: 10b52e15f;  */

void FUN_10b52e14c(void)

{
  FUN_10b52e124();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52e160; end: 10b52e1f7;  */

undefined ** FUN_10b52e160(void)

{
  return &PTR_DAT_110d00268;
}



/* Entry: 10b52e1f8; end: 10b52e21b;  */

undefined8 FUN_10b52e1f8(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b52e21c; end: 10b52e21f;  */

undefined8 FUN_10b52e21c(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b52e220; end: 10b52e233;  */

void FUN_10b52e220(void)

{
  FUN_10b52e1f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52e234; end: 10b52e253;  */

undefined ** FUN_10b52e234(void)

{
  return &PTR_DAT_110d002c0;
}



/* Entry: 10b52e254; end: 10b52e2b3;  */

long * FUN_10b52e254(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5342b4();
  if ((int)param_1[2] != 0) {
    func_0x00010b53425c();
    func_0x00010b5346a0();
    func_0x00010b5343b4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b534550();
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



/* Entry: 10b52e2b4; end: 10b52e2f7;  */

long FUN_10b52e2b4(long param_1)

{
  int extraout_w8;
  long lVar1;
  long extraout_x9;
  long lVar2;
  ulong uVar3;
  
  func_0x00010b534ac4((long)*(int *)(param_1 + 0x10));
  lVar1 = 0;
  if (extraout_w8 != 0) {
    lVar1 = extraout_x9 + 1;
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



/* Entry: 10b52e2f8; end: 10b52e31f;  */

undefined8 FUN_10b52e2f8(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52e320; end: 10b52e323;  */

undefined8 FUN_10b52e320(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52e324; end: 10b52e337;  */

void FUN_10b52e324(void)

{
  FUN_10b52e2f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52e338; end: 10b52e343;  */

undefined ** FUN_10b52e338(void)

{
  return &PTR_DAT_110d00320;
}



/* Entry: 10b52e344; end: 10b52e36f;  */

void FUN_10b52e344(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
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



/* Entry: 10b52e370; end: 10b52e3ef;  */

long * FUN_10b52e370(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  plVar2 = param_2;
  func_0x00010b534118();
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52e3bc;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_10b52e3bc;
  param_4 = (long *)&UNK_10f777b66;
  func_0x00010b534528();
  func_0x00010b5341cc();
  param_1 = unaff_x22;
  param_2 = unaff_x22;
LAB_10b52e3bc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5349b0();
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



/* Entry: 10b52e3f0; end: 10b52e447;  */

void FUN_10b52e3f0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5340e0();
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
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b52e448; end: 10b52e44b;  */

void FUN_10b52e448(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
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



/* Entry: 10b52e44c; end: 10b52e493;  */

void FUN_10b52e44c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
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



/* Entry: 10b52e494; end: 10b52e4bb;  */

undefined8 FUN_10b52e494(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52e4bc; end: 10b52e4bf;  */

undefined8 FUN_10b52e4bc(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52e4c0; end: 10b52e4d3;  */

void FUN_10b52e4c0(void)

{
  FUN_10b52e494();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52e4d4; end: 10b52e4df;  */

undefined ** FUN_10b52e4d4(void)

{
  return &PTR_DAT_110d00380;
}



/* Entry: 10b52e4e0; end: 10b52e50f;  */

void FUN_10b52e4e0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10b52e510; end: 10b52e5a7;  */

long * FUN_10b52e510(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b534088();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52e554;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b52e554;
  param_4 = (long *)&UNK_10f777bb7;
  func_0x00010b534528();
  func_0x00010b53402c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52e554:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x00010b534320();
    func_0x00010b5346f8();
    func_0x00010b534480();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
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



/* Entry: 10b52e5a8; end: 10b52e60f;  */

void FUN_10b52e5a8(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5340e0();
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
    func_0x00010b53414c();
    func_0x00010b534964();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b52e610; end: 10b52e613;  */

void FUN_10b52e610(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
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



/* Entry: 10b52e614; end: 10b52e667;  */

void FUN_10b52e614(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
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



/* Entry: 10b52e668; end: 10b52e683;  */

void FUN_10b52e668(long param_1,long param_2)

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



/* Entry: 10b52e684; end: 10b52e6a7;  */

undefined8 FUN_10b52e684(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b52e6a8; end: 10b52e6ab;  */

undefined8 FUN_10b52e6a8(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b52e6ac; end: 10b52e6bf;  */

void FUN_10b52e6ac(void)

{
  FUN_10b52e684();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52e6c0; end: 10b52e6df;  */

undefined ** FUN_10b52e6c0(void)

{
  return &PTR_DAT_110d003d8;
}



/* Entry: 10b52e6e0; end: 10b52e73f;  */

long * FUN_10b52e6e0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5342b4();
  if ((int)param_1[2] != 0) {
    func_0x00010b53425c();
    func_0x00010b5346a0();
    func_0x00010b5343b4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b534550();
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



/* Entry: 10b52e740; end: 10b52e793;  */

long FUN_10b52e740(long param_1)

{
  int extraout_w8;
  long lVar1;
  long extraout_x9;
  long lVar2;
  ulong uVar3;
  
  func_0x00010b534ac4((long)*(int *)(param_1 + 0x10));
  lVar1 = 0;
  if (extraout_w8 != 0) {
    lVar1 = extraout_x9 + 1;
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



/* Entry: 10b52e794; end: 10b52e7b7;  */

undefined8 FUN_10b52e794(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b52e7b8; end: 10b52e7bb;  */

undefined8 FUN_10b52e7b8(undefined8 param_1)

{
  func_0x00010b534518();
  return param_1;
}



/* Entry: 10b52e7bc; end: 10b52e7cf;  */

void FUN_10b52e7bc(void)

{
  FUN_10b52e794();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52e7d0; end: 10b52e84b;  */

undefined ** FUN_10b52e7d0(void)

{
  return &PTR_DAT_110d00430;
}



/* Entry: 10b52e84c; end: 10b52e873;  */

undefined8 FUN_10b52e84c(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52e874; end: 10b52e877;  */

undefined8 FUN_10b52e874(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52e878; end: 10b52e88b;  */

void FUN_10b52e878(void)

{
  FUN_10b52e84c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52e88c; end: 10b52e897;  */

undefined ** FUN_10b52e88c(void)

{
  return &PTR_DAT_110d00488;
}



/* Entry: 10b52e898; end: 10b52e8cb;  */

void FUN_10b52e898(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10b52e8cc; end: 10b52e98f;  */

long * FUN_10b52e8cc(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  long lVar4;
  int iVar5;
  
  func_0x00010b534274();
  if ((int)param_1[4] != 0) {
    func_0x00010b534320();
    param_2 = param_1;
    func_0x00010b53477c();
    func_0x00010b534480();
    unaff_x20 = param_1;
  }
  func_0x00010b534580(*(undefined8 *)(unaff_x21 + 0x10));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52e938;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b52e938;
  param_4 = (long *)&UNK_10f777bf6;
  func_0x00010b534528();
  func_0x00010b534074();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52e938:
  plVar2 = param_1;
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    func_0x00010b534320();
    lVar4 = *(long *)(unaff_x21 + 0x18);
    plVar2 = (long *)0x19;
    func_0x000107c280a8(0x19,param_1);
    unaff_x20 = plVar2 + 1;
    *plVar2 = lVar4;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
  if (*plVar2 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*plVar2 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = plVar2;
      func_0x000107c303e4(plVar2,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b52e990; end: 10b52ea73;  */

void FUN_10b52e990(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5340e0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  iVar1 = 0;
  if (lVar2 != 0) {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    iVar1 = iVar1 + 9;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x24) = iVar1;
  return;
}



/* Entry: 10b52ea74; end: 10b52ea9b;  */

undefined8 FUN_10b52ea74(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52ea9c; end: 10b52ea9f;  */

undefined8 FUN_10b52ea9c(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52eaa0; end: 10b52eab3;  */

void FUN_10b52eaa0(void)

{
  FUN_10b52ea74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52eab4; end: 10b52eabf;  */

undefined ** FUN_10b52eab4(void)

{
  return &PTR_DAT_110d004e0;
}



/* Entry: 10b52eac0; end: 10b52eaef;  */

void FUN_10b52eac0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10b52eaf0; end: 10b52eb87;  */

long * FUN_10b52eaf0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010b534088();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52eb34;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b52eb34;
  param_4 = (long *)&UNK_10f777c37;
  func_0x00010b534528();
  func_0x00010b53402c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b52eb34:
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    func_0x00010b534320();
    func_0x00010b5346f8();
    func_0x00010b534820();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
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



/* Entry: 10b52eb88; end: 10b52ebef;  */

void FUN_10b52eb88(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5340e0();
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
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    func_0x00010b534720();
    iVar1 = extraout_w8 + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x20) = iVar1;
  return;
}



/* Entry: 10b52ebf0; end: 10b52ebf3;  */

void FUN_10b52ebf0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
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



/* Entry: 10b52ebf4; end: 10b52ec47;  */

void FUN_10b52ebf4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
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



/* Entry: 10b52ec48; end: 10b52ec6f;  */

undefined8 FUN_10b52ec48(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52ec70; end: 10b52ec73;  */

undefined8 FUN_10b52ec70(undefined8 param_1)

{
  func_0x00010b534518();
  func_0x00010b534628();
  return param_1;
}



/* Entry: 10b52ec74; end: 10b52ec87;  */

void FUN_10b52ec74(void)

{
  FUN_10b52ec48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52ec88; end: 10b52ec93;  */

undefined ** FUN_10b52ec88(void)

{
  return &PTR_DAT_110d00538;
}



/* Entry: 10b52ec94; end: 10b52ecbf;  */

void FUN_10b52ec94(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534268();
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



/* Entry: 10b52ecc0; end: 10b52ed3f;  */

long * FUN_10b52ecc0(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  plVar2 = param_2;
  func_0x00010b534118();
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b52ed0c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar2 == 0) goto LAB_10b52ed0c;
  param_4 = (long *)&UNK_10f777c74;
  func_0x00010b534528();
  func_0x00010b5341cc();
  param_1 = unaff_x22;
  param_2 = unaff_x22;
LAB_10b52ed0c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5349b0();
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



/* Entry: 10b52ed40; end: 10b52ed97;  */

void FUN_10b52ed40(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5340e0();
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
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b52ed98; end: 10b52ed9b;  */

void FUN_10b52ed98(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
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



/* Entry: 10b52ed9c; end: 10b52ede3;  */

void FUN_10b52ed9c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b534040();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534640();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
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



/* Entry: 10b52ede4; end: 10b52f3f7;  */

void FUN_10b52ede4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010b534b64();
  *unaff_x19 = &PTR_FUN_110cfefe8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5341ac();
  }
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  func_0x00010598fd00(unaff_x19 + 3);
  func_0x000108c6ef28(unaff_x19 + 6);
  unaff_x19[9] = 0;
  unaff_x19[10] = 0;
  unaff_x19[0xb] = unaff_x21;
  FUN_10b531000(unaff_x19 + 9,unaff_x20 + 0x48);
  unaff_x19[0xc] = 0;
  unaff_x19[0xd] = 0;
  unaff_x19[0xe] = unaff_x21;
  func_0x00010b531010(unaff_x19 + 0xc,unaff_x20 + 0x60);
  func_0x000108c6ef28(unaff_x19 + 0xf);
  unaff_x19[0x12] = 0;
  unaff_x19[0x13] = 0;
  unaff_x19[0x14] = unaff_x21;
  func_0x00010b531020(unaff_x19 + 0x12,unaff_x20 + 0x90);
  unaff_x19[0x15] = 0;
  unaff_x19[0x16] = 0;
  unaff_x19[0x17] = unaff_x21;
  func_0x00010b531030(unaff_x19 + 0x15,unaff_x20 + 0xa8);
  func_0x000107c282d4(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x1a) = 0;
  FUN_10b531908(unaff_x19 + 0x1b);
  unaff_x19[0x1e] = 0;
  unaff_x19[0x1f] = 0;
  unaff_x19[0x20] = unaff_x21;
  func_0x00010b531040(unaff_x19 + 0x1e,unaff_x20 + 0xf0);
  unaff_x19[0x21] = 0;
  unaff_x19[0x22] = 0;
  unaff_x19[0x23] = unaff_x21;
  func_0x00010b531050(unaff_x19 + 0x21,unaff_x20 + 0x108);
  unaff_x19[0x24] = 0;
  unaff_x19[0x25] = 0;
  unaff_x19[0x26] = unaff_x21;
  func_0x00010b531060(unaff_x19 + 0x24,unaff_x20 + 0x120);
  unaff_x19[0x27] = 0;
  unaff_x19[0x28] = 0;
  unaff_x19[0x29] = unaff_x21;
  func_0x00010b531070(unaff_x19 + 0x27,unaff_x20 + 0x138);
  unaff_x19[0x2a] = 0;
  unaff_x19[0x2b] = 0;
  unaff_x19[0x2c] = unaff_x21;
  func_0x00010b531080(unaff_x19 + 0x2a,unaff_x20 + 0x150);
  FUN_10b5319a0(unaff_x19 + 0x2d);
  unaff_x19[0x30] = 0;
  unaff_x19[0x31] = 0;
  unaff_x19[0x32] = unaff_x21;
  func_0x00010b5310a0(unaff_x19 + 0x30,unaff_x20 + 0x180);
  unaff_x19[0x33] = 0;
  unaff_x19[0x34] = 0;
  unaff_x19[0x35] = unaff_x21;
  func_0x00010b5310b0(unaff_x19 + 0x33,unaff_x20 + 0x198);
  uVar1 = *(uint *)(unaff_x19 + 2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533310();
  }
  unaff_x19[0x36] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b533368();
  }
  unaff_x19[0x37] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b5333e4();
  }
  unaff_x19[0x38] = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b533498();
  }
  unaff_x19[0x39] = uVar2;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b53350c();
  }
  unaff_x19[0x3a] = uVar2;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b5335e4();
  }
  unaff_x19[0x3b] = uVar2;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533644();
  }
  unaff_x19[0x3c] = uVar2;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b53369c();
  }
  unaff_x19[0x3d] = uVar2;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b5336cc();
  }
  unaff_x19[0x3e] = uVar2;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b533774();
  }
  unaff_x19[0x3f] = uVar2;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b5337c0();
  }
  unaff_x19[0x40] = uVar2;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b53389c();
  }
  unaff_x19[0x41] = uVar2;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b5338f8();
  }
  unaff_x19[0x42] = uVar2;
  if ((uVar1 >> 0xd & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b533958();
  }
  unaff_x19[0x43] = uVar2;
  if ((uVar1 >> 0xe & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b5339a4();
  }
  unaff_x19[0x44] = uVar2;
  if ((uVar1 >> 0xf & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b5339f0();
  }
  unaff_x19[0x45] = uVar2;
  if ((uVar1 >> 0x10 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b533a3c();
  }
  unaff_x19[0x46] = uVar2;
  if ((uVar1 >> 0x11 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533a9c();
  }
  unaff_x19[0x47] = uVar2;
  if ((uVar1 >> 0x12 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533ad8();
  }
  unaff_x19[0x48] = uVar2;
  if ((uVar1 >> 0x13 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533b28();
  }
  unaff_x19[0x49] = uVar2;
  if ((uVar1 >> 0x14 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533b78();
  }
  unaff_x19[0x4a] = uVar2;
  if ((uVar1 >> 0x15 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533c34();
  }
  unaff_x19[0x4b] = uVar2;
  if ((uVar1 >> 0x16 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533c84();
  }
  unaff_x19[0x4c] = uVar2;
  if ((uVar1 >> 0x17 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b533cdc();
  }
  unaff_x19[0x4d] = uVar2;
  if ((uVar1 >> 0x18 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b533d28();
  }
  unaff_x19[0x4e] = uVar2;
  if ((uVar1 >> 0x19 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533d78();
  }
  unaff_x19[0x4f] = uVar2;
  if ((uVar1 >> 0x1a & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533dd0();
  }
  unaff_x19[0x50] = uVar2;
  if ((uVar1 >> 0x1b & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533e20();
  }
  unaff_x19[0x51] = uVar2;
  if ((uVar1 >> 0x1c & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_10b533e6c();
  }
  unaff_x19[0x52] = uVar2;
  if ((uVar1 >> 0x1d & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x00010b533ee4();
  }
  unaff_x19[0x53] = uVar2;
  if ((uVar1 >> 0x1e & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x00010b533f48();
  }
  unaff_x19[0x54] = unaff_x21;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x2a8);
  *(undefined2 *)(unaff_x19 + 0x56) = *(undefined2 *)(unaff_x20 + 0x2b0);
  unaff_x19[0x55] = uVar2;
  return;
}



/* Entry: 10b52f3f8; end: 10b52f423;  */

undefined8 FUN_10b52f3f8(undefined8 param_1)

{
  func_0x00010b534518();
  FUN_10b52f424(param_1);
  return param_1;
}



/* Entry: 10b52f424; end: 10b52f6bf;  */

long * FUN_10b52f424(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x1b0) != 0) {
    FUN_10b528a1c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x1b8) != 0) {
    FUN_10b5287b0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x1c0) != 0) {
    FUN_10b528ee4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x1c8) != 0) {
    FUN_10b529eb0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x1d0) != 0) {
    FUN_10b52a66c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x1d8) != 0) {
    FUN_10b52aa34();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x1e0) != 0) {
    FUN_10b52acf0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x1e8) != 0) {
    FUN_10b534c5c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x1f0) != 0) {
    FUN_10b52b530();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x1f8) != 0) {
    FUN_10b52bb00();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x200) != 0) {
    FUN_10b52bcd4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x208) != 0) {
    FUN_10b52c120();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x210) != 0) {
    FUN_10b52c314();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x218) != 0) {
    FUN_10b52c4a8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x220) != 0) {
    FUN_10b52c644();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x228) != 0) {
    FUN_10b52c7e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x230) != 0) {
    FUN_10b52c968();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x238) != 0) {
    FUN_10b52d4c0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x240) != 0) {
    FUN_10b52dafc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x248) != 0) {
    FUN_10b52dbc4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x250) != 0) {
    FUN_10b52dc7c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 600) != 0) {
    FUN_10b52e124();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x260) != 0) {
    FUN_10b52e1f8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x268) != 0) {
    FUN_10b52e2f8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x270) != 0) {
    FUN_10b52e494();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x278) != 0) {
    FUN_10b52e684();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x280) != 0) {
    FUN_10b52e794();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x288) != 0) {
    FUN_10b52ea74();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x290) != 0) {
    FUN_10b531178();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x298) != 0) {
    FUN_10b5315a0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x2a0) != 0) {
    FUN_10b52ec48();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x198) != 0) {
    func_0x000107c303ac(param_1 + 0x198);
  }
  FUN_10b5319c0(param_1 + 0x180);
  FUN_10b5319e8(param_1 + 0x168);
  FUN_10b531a10(param_1 + 0x150);
  FUN_10b531a38(param_1 + 0x138);
  FUN_10b531a60(param_1 + 0x120);
  FUN_10b531a88(param_1 + 0x108);
  FUN_10b531ab0(param_1 + 0xf0);
  FUN_10b531928(param_1 + 0xd8);
  func_0x000107c282dc(param_1 + 0xc0);
  FUN_10b531ad8(param_1 + 0xa8);
  FUN_10b531b00(param_1 + 0x90);
  func_0x000108c6ef48(param_1 + 0x78);
  FUN_10b531b28(param_1 + 0x60);
  FUN_10b531b50(param_1 + 0x48);
  func_0x000108c6ef48(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000100069100(plVar1);
  }
  return plVar1;
}



/* Entry: 10b52f6c0; end: 10b52f6c3;  */

undefined8 FUN_10b52f6c0(undefined8 param_1)

{
  func_0x00010b534518();
  FUN_10b52f424(param_1);
  return param_1;
}



/* Entry: 10b52f6c4; end: 10b52f6d7;  */

void FUN_10b52f6c4(void)

{
  FUN_10b52f3f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52f6d8; end: 10b52f6e3;  */

undefined ** FUN_10b52f6d8(void)

{
  return &PTR_DAT_110d00598;
}



/* Entry: 10b52f6e4; end: 10b52faa3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b52f6e4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c282c0(param_1 + 0x18);
  func_0x000108c6f45c(param_1 + 0x30);
  if (0 < *(int *)(param_1 + 0x50)) {
    func_0x0001053936e4(param_1 + 0x48);
  }
  if (0 < *(int *)(param_1 + 0x68)) {
    func_0x0001053936e4(param_1 + 0x60);
  }
  func_0x000108c6f45c(param_1 + 0x78);
  if (0 < *(int *)(param_1 + 0x98)) {
    func_0x0001053936e4(param_1 + 0x90);
  }
  if (0 < *(int *)(param_1 + 0xb0)) {
    func_0x0001053936e4(param_1 + 0xa8);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  FUN_10b532a50(param_1 + 0xd8);
  if (0 < *(int *)(param_1 + 0xf8)) {
    func_0x0001053936e4(param_1 + 0xf0);
  }
  if (0 < *(int *)(param_1 + 0x110)) {
    func_0x0001053936e4(param_1 + 0x108);
  }
  if (0 < *(int *)(param_1 + 0x128)) {
    func_0x0001053936e4(param_1 + 0x120);
  }
  if (0 < *(int *)(param_1 + 0x140)) {
    func_0x0001053936e4(param_1 + 0x138);
  }
  if (0 < *(int *)(param_1 + 0x158)) {
    func_0x0001053936e4(param_1 + 0x150);
  }
  FUN_10b5332fc(param_1 + 0x168);
  if (0 < *(int *)(param_1 + 0x188)) {
    func_0x0001053936e4(param_1 + 0x180);
  }
  if (0 < *(int *)(param_1 + 0x1a0)) {
    func_0x0001053936e4(param_1 + 0x198);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b528a64(*(undefined8 *)(param_1 + 0x1b0));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b528810(*(undefined8 *)(param_1 + 0x1b8));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b528f50(*(undefined8 *)(param_1 + 0x1c0));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b529f08(*(undefined8 *)(param_1 + 0x1c8));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10b52a6d8(*(undefined8 *)(param_1 + 0x1d0));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_10b52aa88(*(undefined8 *)(param_1 + 0x1d8));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x00010b52ad38(*(undefined8 *)(param_1 + 0x1e0));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x00010b534ce0(*(undefined8 *)(param_1 + 0x1e8));
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      FUN_10b52b5a4(*(undefined8 *)(param_1 + 0x1f0));
    }
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_10b52bb4c(*(undefined8 *)(param_1 + 0x1f8));
    }
    if ((uVar1 >> 10 & 1) != 0) {
      FUN_10b52bd6c(*(undefined8 *)(param_1 + 0x200));
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      FUN_10b52c170(*(undefined8 *)(param_1 + 0x208));
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      FUN_10b52c36c(*(undefined8 *)(param_1 + 0x210));
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      FUN_10b52c4f4(*(undefined8 *)(param_1 + 0x218));
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      FUN_10b52c690(*(undefined8 *)(param_1 + 0x220));
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      FUN_10b52c82c(*(undefined8 *)(param_1 + 0x228));
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      FUN_10b52c9bc(*(undefined8 *)(param_1 + 0x230));
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      FUN_10b52d588(*(undefined8 *)(param_1 + 0x238));
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      func_0x00010b52db44(*(undefined8 *)(param_1 + 0x240));
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      func_0x00010b52dc0c(*(undefined8 *)(param_1 + 0x248));
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      FUN_10b52dcf0(*(undefined8 *)(param_1 + 0x250));
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      func_0x00010b52e16c(*(undefined8 *)(param_1 + 600));
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      func_0x00010b52e240(*(undefined8 *)(param_1 + 0x260));
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      FUN_10b52e344(*(undefined8 *)(param_1 + 0x268));
    }
  }
  if ((uVar1 & 0x7f000000) != 0) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      FUN_10b52e4e0(*(undefined8 *)(param_1 + 0x270));
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      func_0x00010b52e6cc(*(undefined8 *)(param_1 + 0x278));
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      func_0x00010b52e7dc(*(undefined8 *)(param_1 + 0x280));
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      FUN_10b52eac0(*(undefined8 *)(param_1 + 0x288));
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      func_0x00010b52fa38(*(undefined8 *)(param_1 + 0x290));
    }
    if ((uVar1 >> 0x1d & 1) != 0) {
      func_0x00010b52fa70(*(undefined8 *)(param_1 + 0x298));
    }
    if ((uVar1 >> 0x1e & 1) != 0) {
      FUN_10b52ec94(*(undefined8 *)(param_1 + 0x2a0));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
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



/* Entry: 10b52faa4; end: 10b530277;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_10b52faa4(byte *param_1,long param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  long extraout_x8;
  byte *unaff_x19;
  long unaff_x20;
  byte *unaff_x21;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  byte *unaff_x23;
  int iVar8;
  long lVar9;
  ulong uVar10;
  
  func_0x00010b534738();
  for (uVar10 = (ulong)(*(uint *)(param_1 + 0x20) &
                       ((int)*(uint *)(param_1 + 0x20) >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    func_0x00010b534530();
    pbVar3 = unaff_x23;
    if (param_2 < 0) {
      param_2 = *(long *)(unaff_x23 + 8);
      pbVar3 = *(byte **)unaff_x23;
    }
    func_0x00010b534858(pbVar3);
    lVar9 = (long)(char)unaff_x23[0x17];
    if (((lVar9 < 0) && (lVar9 = *(long *)(unaff_x23 + 8), 0x7f < lVar9)) ||
       ((*(long *)unaff_x19 - (long)unaff_x21) + 0xe < lVar9)) {
      param_2 = 1;
      param_1 = unaff_x19;
      param_3 = unaff_x23;
      func_0x00010b4d5120();
      pbVar3 = param_1;
    }
    else {
      *unaff_x21 = 10;
      unaff_x21[1] = (byte)lVar9;
      if ((char)unaff_x23[0x17] < '\0') {
        unaff_x23 = *(byte **)unaff_x23;
      }
      pbVar3 = unaff_x21 + 2;
      param_1 = pbVar3;
      func_0x00010b534864();
      unaff_x21 = param_4;
      pbVar3 = pbVar3 + lVar9;
    }
    param_4 = unaff_x21;
    unaff_x21 = pbVar3;
  }
  iVar5 = *(int *)(unaff_x20 + 0x38);
  while (iVar5 != 0) {
    func_0x00010b534058();
    func_0x00010b534a88();
    func_0x00010b534164();
    func_0x00010b5348c4();
  }
  iVar5 = *(int *)(unaff_x20 + 0x50);
  while (iVar5 != 0) {
    func_0x00010b534058();
    param_3 = (byte *)(ulong)*(uint *)(param_2 + 0x14);
    param_1 = (byte *)0x3;
    func_0x00010b534164();
    func_0x00010b5348c4();
  }
  iVar5 = *(int *)(unaff_x20 + 0x68);
  while (iVar5 != 0) {
    func_0x00010b534058();
    param_3 = (byte *)(ulong)*(uint *)(param_2 + 0x14);
    param_1 = (byte *)0x4;
    func_0x00010b534164();
    func_0x00010b5348c4();
  }
  iVar5 = *(int *)(unaff_x20 + 0x80);
  while (iVar5 != 0) {
    func_0x00010b534058();
    param_3 = (byte *)(ulong)*(uint *)(param_2 + 0x20);
    param_1 = (byte *)0x5;
    func_0x00010b534164();
    func_0x00010b5348c4();
  }
  iVar5 = *(int *)(unaff_x20 + 0x98);
  while (iVar5 != 0) {
    func_0x00010b534058();
    param_3 = (byte *)(ulong)*(uint *)(param_2 + 0x14);
    param_1 = (byte *)0x6;
    func_0x00010b534164();
    func_0x00010b5348c4();
  }
  pbVar3 = *(byte **)(unaff_x20 + 0x2a8);
  if (pbVar3 != (byte *)0x0) {
    func_0x000106af6880();
    param_1 = unaff_x19;
    param_3 = unaff_x21;
    unaff_x21 = unaff_x19;
  }
  iVar5 = *(int *)(unaff_x20 + 0xb0);
  while (iVar5 != 0) {
    func_0x00010b534058();
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    param_1 = (byte *)0x8;
    func_0x00010b534164();
    func_0x00010b5348c4();
  }
  uVar6 = *(uint *)(unaff_x20 + 0xd0);
  if (uVar6 != 0) {
    func_0x00010b5342f4();
    pbVar4 = param_1 + 2;
    *param_1 = 0x4a;
    for (; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
      pbVar4[-1] = (byte)uVar6 | 0x80;
      pbVar4 = pbVar4 + 1;
    }
    pbVar4[-1] = (byte)uVar6;
    piVar7 = *(int **)(unaff_x20 + 200);
    piVar1 = piVar7 + *(int *)(unaff_x20 + 0xc0);
    do {
      func_0x00010b5342f4();
      uVar10 = (ulong)*piVar7;
      pbVar4 = param_1;
      while( true ) {
        unaff_x21 = pbVar4 + 1;
        if (uVar10 < 0x80) break;
        *pbVar4 = (byte)uVar10 | 0x80;
        uVar10 = uVar10 >> 7;
        pbVar4 = unaff_x21;
      }
      piVar7 = piVar7 + 1;
      *pbVar4 = (byte)uVar10;
    } while (piVar7 < piVar1);
  }
  iVar5 = *(int *)(unaff_x20 + 0xe0);
  while (iVar5 != 0) {
    func_0x00010b534058();
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    param_1 = (byte *)0xa;
    func_0x00010b534164();
    func_0x00010b5348c4();
  }
  uVar6 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar6 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x1b0);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    param_1 = (byte *)0xb;
    func_0x00010b534164();
    unaff_x21 = param_1;
  }
  iVar5 = *(int *)(unaff_x20 + 0xf8);
  while (iVar5 != 0) {
    func_0x00010b5340c4();
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    param_1 = (byte *)0xc;
    func_0x00010b534164();
    func_0x00010b5348b8();
  }
  if ((uVar6 >> 1 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x1b8);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    param_1 = (byte *)0xd;
    func_0x00010b534164();
    unaff_x21 = param_1;
  }
  iVar5 = *(int *)(unaff_x20 + 0x110);
  while (iVar5 != 0) {
    func_0x00010b5340c4();
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x18);
    param_1 = (byte *)0xe;
    func_0x00010b534164();
    func_0x00010b5348b8();
  }
  if ((uVar6 >> 2 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x1c0);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    param_1 = (byte *)0xf;
    func_0x00010b534164();
    unaff_x21 = param_1;
  }
  iVar5 = *(int *)(unaff_x20 + 0x128);
  while (iVar5 != 0) {
    func_0x00010b5340c4();
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    param_1 = (byte *)0x10;
    func_0x00010b534164();
    func_0x00010b5348b8();
  }
  iVar5 = *(int *)(unaff_x20 + 0x140);
  while (iVar5 != 0) {
    func_0x00010b5340c4();
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x20);
    param_1 = (byte *)0x11;
    func_0x00010b534164();
    func_0x00010b5348b8();
  }
  if ((uVar6 >> 3 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x1c8);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x18);
    param_1 = (byte *)0x12;
    func_0x00010b534164();
    unaff_x21 = param_1;
  }
  if ((uVar6 >> 4 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x1d0);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    param_1 = (byte *)0x13;
    func_0x00010b534164();
    unaff_x21 = param_1;
  }
  if ((uVar6 >> 5 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x1d8);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x28);
    param_1 = (byte *)0x14;
    func_0x00010b534164();
    unaff_x21 = param_1;
  }
  if ((uVar6 >> 6 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x1e0);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    param_1 = (byte *)0x15;
    func_0x00010b534164();
    unaff_x21 = param_1;
  }
  if ((uVar6 >> 7 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x1e8);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x10);
    param_1 = (byte *)0x16;
    func_0x00010b534164();
    unaff_x21 = param_1;
  }
  if ((uVar6 >> 8 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x1f0);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    param_1 = (byte *)0x17;
    func_0x00010b534164();
    unaff_x21 = param_1;
  }
  iVar5 = *(int *)(unaff_x20 + 0x158);
  while (iVar5 != 0) {
    func_0x00010b5340c4();
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    param_1 = (byte *)0x18;
    func_0x00010b534164();
    func_0x00010b5348b8();
  }
  pbVar4 = param_1;
  if ((*(byte *)(unaff_x20 + 0x2b0) & 1) != 0) {
    func_0x00010b5342f4();
    unaff_x21 = (byte *)0xc8;
    func_0x000107c280a8();
    func_0x00010b534354();
    pbVar4 = unaff_x21;
    pbVar3 = param_1;
  }
  if ((uVar6 >> 9 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x1f8);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x20);
    pbVar4 = (byte *)0x1a;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  if ((uVar6 >> 10 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x200);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    pbVar4 = (byte *)0x1b;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  if ((uVar6 >> 0xb & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x208);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x28);
    pbVar4 = (byte *)0x1f;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  iVar5 = *(int *)(unaff_x20 + 0x170);
  while (iVar5 != 0) {
    func_0x00010b5340c4();
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    pbVar4 = (byte *)0x20;
    func_0x00010b534164();
    func_0x00010b5348b8();
  }
  if ((uVar6 >> 0xc & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x210);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    pbVar4 = (byte *)0x21;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  if ((uVar6 >> 0xd & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x218);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x18);
    pbVar4 = (byte *)0x22;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  if ((uVar6 >> 0xe & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x220);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x18);
    pbVar4 = (byte *)0x23;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  if ((uVar6 >> 0xf & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x228);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x18);
    pbVar4 = (byte *)0x24;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  if ((uVar6 >> 0x10 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x230);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x28);
    pbVar4 = (byte *)0x25;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  if ((uVar6 >> 0x11 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x238);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    pbVar4 = (byte *)0x26;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  if ((uVar6 >> 0x12 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x240);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x10);
    pbVar4 = (byte *)0x27;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  if ((uVar6 >> 0x13 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x248);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x10);
    pbVar4 = (byte *)0x28;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  if ((uVar6 >> 0x14 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x250);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    pbVar4 = (byte *)0x29;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  if ((uVar6 >> 0x15 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 600);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x10);
    pbVar4 = (byte *)0x2a;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  if ((uVar6 >> 0x16 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x260);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    pbVar4 = (byte *)0x2b;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  if ((uVar6 >> 0x17 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x268);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x18);
    pbVar4 = (byte *)0x2c;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  if ((uVar6 >> 0x18 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x270);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x1c);
    pbVar4 = (byte *)0x2d;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  if ((uVar6 >> 0x19 & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x278);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x14);
    pbVar4 = (byte *)0x2e;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  if ((uVar6 >> 0x1a & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x280);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x10);
    pbVar4 = (byte *)0x2f;
    func_0x00010b534164();
    unaff_x21 = pbVar4;
  }
  iVar5 = *(int *)(unaff_x20 + 0x188);
  while (iVar5 != 0) {
    func_0x00010b5340c4();
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x24);
    pbVar4 = (byte *)0x30;
    func_0x00010b534164();
    func_0x00010b5348b8();
  }
  pbVar2 = pbVar4;
  if ((*(byte *)(unaff_x20 + 0x2b1) & 1) != 0) {
    func_0x00010b5342f4();
    unaff_x21 = (byte *)0x188;
    func_0x000107c280a8();
    func_0x00010b534354();
    pbVar2 = unaff_x21;
    pbVar3 = pbVar4;
  }
  if ((uVar6 >> 0x1b & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x288);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x20);
    pbVar2 = (byte *)0x32;
    func_0x00010b534164();
    unaff_x21 = pbVar2;
  }
  if ((uVar6 >> 0x1c & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x290);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x38);
    pbVar2 = (byte *)0x33;
    func_0x00010b534164();
    unaff_x21 = pbVar2;
  }
  if ((uVar6 >> 0x1d & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x298);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x2c);
    pbVar2 = (byte *)0x34;
    func_0x00010b534164();
    unaff_x21 = pbVar2;
  }
  if ((uVar6 >> 0x1e & 1) != 0) {
    pbVar3 = *(byte **)(unaff_x20 + 0x2a0);
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x18);
    pbVar2 = (byte *)0x35;
    func_0x00010b534164();
    unaff_x21 = pbVar2;
  }
  iVar5 = *(int *)(unaff_x20 + 0x1a0);
  while (iVar5 != 0) {
    func_0x00010b534058();
    param_3 = (byte *)(ulong)*(uint *)(pbVar3 + 0x18);
    pbVar2 = (byte *)0x36;
    func_0x00010b534164();
    func_0x00010b5348c4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b534550();
    if ((long)param_3 < 0) {
      param_3 = *(byte **)(extraout_x8 + 0x10);
    }
    func_0x00010b534aa0();
    if (*(long *)pbVar2 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*(undefined8 *)pbVar2 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        param_3 = (byte *)(ulong)(uint)(iVar5 - iVar8);
        if (iVar5 - iVar8 == 0 || iVar5 < iVar8) break;
        func_0x00010b4d5738();
        pbVar3 = param_4 + iVar8;
        param_4 = pbVar2;
        func_0x000107c303e4(pbVar2,pbVar3);
      }
      func_0x00010b4d5738();
      return param_4 + iVar5;
    }
    _memcpy(param_4);
    return param_4 + (int)param_3;
  }
  return unaff_x21;
}



/* Entry: 10b530278; end: 10b5308a7;  */

/* WARNING: Removing unreachable block (ram,0x00010b530560) */
/* WARNING: Removing unreachable block (ram,0x00010b53050c) */
/* WARNING: Removing unreachable block (ram,0x00010b5304b4) */
/* WARNING: Removing unreachable block (ram,0x00010b53033c) */
/* WARNING: Removing unreachable block (ram,0x00010b530300) */
/* WARNING: Removing unreachable block (ram,0x00010b5302c0) */
/* WARNING: Removing unreachable block (ram,0x00010b5302e0) */
/* WARNING: Removing unreachable block (ram,0x00010b530320) */
/* WARNING: Removing unreachable block (ram,0x00010b53048c) */
/* WARNING: Removing unreachable block (ram,0x00010b5304e0) */
/* WARNING: Removing unreachable block (ram,0x00010b530534) */
/* WARNING: Removing unreachable block (ram,0x00010b53058c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b530278(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  long extraout_x8;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long extraout_x9;
  long lVar15;
  long lVar16;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  while ((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x00010b534438();
    func_0x00010b5349fc();
  }
  func_0x00010b534190();
  func_0x00010b534190();
  func_0x00010b534190();
  func_0x00010b534190();
  func_0x00010b534190();
  uVar13 = *(ulong *)(param_1 + 0xa8);
  lVar12 = (ulong)uVar2 + (long)*(int *)(param_1 + 0xb0);
  puVar1 = (ulong *)(param_1 + 0xa8);
  if ((uVar13 & 1) != 0) {
    puVar1 = (ulong *)(uVar13 + 7);
  }
  for (lVar16 = (long)*(int *)(param_1 + 0xb0) << 3; lVar16 != 0; lVar16 = lVar16 + -8) {
    uVar13 = *puVar1;
    func_0x00010b5279e4();
    lVar12 = uVar13 + lVar12 + (ulong)((int)LZCOUNT((int)uVar13) * -9 + 0x160U >> 6);
    puVar1 = puVar1 + 1;
  }
  lVar14 = 0;
  lVar16 = 0;
  for (lVar15 = (long)*(int *)(param_1 + 0xc0); lVar15 != 0; lVar15 = lVar15 + -1) {
    lVar16 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 200) + (lVar14 >> 0x1e))) * -9
                     + 0x280U >> 6) + lVar16;
    lVar14 = lVar14 + 0x100000000;
  }
  iVar11 = (int)lVar16;
  iVar10 = iVar11 + (int)lVar12;
  if (lVar16 != 0) {
    iVar10 = iVar10 + ((int)LZCOUNT((long)iVar11) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0xd0) = iVar11;
  uVar13 = *(ulong *)(param_1 + 0xd8);
  iVar11 = *(int *)(param_1 + 0xe0);
  puVar1 = (ulong *)(param_1 + 0xd8);
  if ((uVar13 & 1) != 0) {
    puVar1 = (ulong *)(uVar13 + 7);
  }
  while (((long)iVar11 & 0x1fffffffffffffffU) != 0) {
    FUN_10b528950(*puVar1);
    func_0x00010b534b84();
    puVar1 = puVar1 + 1;
  }
  uVar13 = *(ulong *)(param_1 + 0xf0);
  iVar3 = *(int *)(param_1 + 0xf8);
  puVar1 = (ulong *)(param_1 + 0xf0);
  if ((uVar13 & 1) != 0) {
    puVar1 = (ulong *)(uVar13 + 7);
  }
  while (((long)iVar3 & 0x1fffffffffffffffU) != 0) {
    FUN_10b5294b8(*puVar1);
    func_0x00010b534b84();
    puVar1 = puVar1 + 1;
  }
  iVar4 = *(int *)(param_1 + 0x110);
  func_0x00010b53436c();
  iVar5 = *(int *)(param_1 + 0x128);
  func_0x00010b53436c();
  iVar6 = *(int *)(param_1 + 0x140);
  func_0x00010b53436c();
  iVar7 = *(int *)(param_1 + 0x158);
  func_0x00010b53436c();
  iVar8 = *(int *)(param_1 + 0x170);
  func_0x00010b53436c();
  iVar9 = *(int *)(param_1 + 0x188);
  func_0x00010b53436c();
  iVar10 = iVar10 + iVar11 + iVar3 + iVar4 + iVar5 * 2 + iVar6 * 2 + iVar7 * 2 + iVar8 * 2 +
           iVar9 * 2 + *(int *)(param_1 + 0x1a0) * 2;
  func_0x00010b53436c();
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0xff) != 0) {
    if ((uVar2 & 1) != 0) {
      FUN_10b528b08(*(undefined8 *)(param_1 + 0x1b0));
      func_0x00010b533ff4();
      iVar10 = extraout_w8 + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      FUN_10b5288e0(*(undefined8 *)(param_1 + 0x1b8));
      func_0x00010b533ff4();
      iVar10 = extraout_w8_00 + 1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      FUN_10b5290f4(*(undefined8 *)(param_1 + 0x1c0));
      func_0x00010b533ff4();
      iVar10 = extraout_w8_01 + 1;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      func_0x00010b529f9c(*(undefined8 *)(param_1 + 0x1c8));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 4 & 1) != 0) {
      FUN_10b52a804(*(undefined8 *)(param_1 + 0x1d0));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 5 & 1) != 0) {
      FUN_10b52aba0(*(undefined8 *)(param_1 + 0x1d8));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 6 & 1) != 0) {
      FUN_10b52addc(*(undefined8 *)(param_1 + 0x1e0));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 7 & 1) != 0) {
      iVar11 = (int)*(undefined8 *)(param_1 + 0x1e8);
      func_0x00010b5308fc();
      iVar10 = iVar10 + iVar11 + 2;
    }
  }
  if ((uVar2 & 0xff00) != 0) {
    if ((uVar2 >> 8 & 1) != 0) {
      func_0x00010b52b6c0(*(undefined8 *)(param_1 + 0x1f0));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 9 & 1) != 0) {
      FUN_10b52bc14(*(undefined8 *)(param_1 + 0x1f8));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 10 & 1) != 0) {
      func_0x00010b52bec4(*(undefined8 *)(param_1 + 0x200));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 0xb & 1) != 0) {
      FUN_10b52c290(*(undefined8 *)(param_1 + 0x208));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 0xc & 1) != 0) {
      func_0x00010b52c3fc(*(undefined8 *)(param_1 + 0x210));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 0xd & 1) != 0) {
      FUN_10b52c5a0(*(undefined8 *)(param_1 + 0x218));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 0xe & 1) != 0) {
      FUN_10b52c73c(*(undefined8 *)(param_1 + 0x220));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 0xf & 1) != 0) {
      func_0x00010b52c8c4(*(undefined8 *)(param_1 + 0x228));
      func_0x00010b533fd0();
    }
  }
  if ((uVar2 & 0xff0000) != 0) {
    if ((uVar2 >> 0x10 & 1) != 0) {
      FUN_10b52cad4(*(undefined8 *)(param_1 + 0x230));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 0x11 & 1) != 0) {
      iVar11 = (int)*(undefined8 *)(param_1 + 0x238);
      func_0x00010b530918();
      iVar10 = iVar10 + iVar11 + 2;
    }
    if ((uVar2 >> 0x12 & 1) != 0) {
      func_0x00010b52db84(*(undefined8 *)(param_1 + 0x240));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 0x13 & 1) != 0) {
      func_0x00010b52dc4c(*(undefined8 *)(param_1 + 0x248));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 0x14 & 1) != 0) {
      func_0x00010b52decc(*(undefined8 *)(param_1 + 0x250));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 0x15 & 1) != 0) {
      func_0x00010b52e1ac(*(undefined8 *)(param_1 + 600));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 0x16 & 1) != 0) {
      FUN_10b52e2b4(*(undefined8 *)(param_1 + 0x260));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 0x17 & 1) != 0) {
      FUN_10b52e3f0(*(undefined8 *)(param_1 + 0x268));
      func_0x00010b533fd0();
    }
  }
  if ((uVar2 & 0x7f000000) != 0) {
    if ((uVar2 >> 0x18 & 1) != 0) {
      FUN_10b52e5a8(*(undefined8 *)(param_1 + 0x270));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 0x19 & 1) != 0) {
      FUN_10b52e740(*(undefined8 *)(param_1 + 0x278));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 0x1a & 1) != 0) {
      func_0x00010b52e81c(*(undefined8 *)(param_1 + 0x280));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 0x1b & 1) != 0) {
      FUN_10b52eb88(*(undefined8 *)(param_1 + 0x288));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 0x1c & 1) != 0) {
      iVar11 = (int)*(undefined8 *)(param_1 + 0x290);
      func_0x00010b530934();
      iVar10 = iVar10 + iVar11 + 2;
    }
    if ((uVar2 >> 0x1d & 1) != 0) {
      FUN_10b531684(*(undefined8 *)(param_1 + 0x298));
      func_0x00010b533fd0();
    }
    if ((uVar2 >> 0x1e & 1) != 0) {
      FUN_10b52ed40(*(undefined8 *)(param_1 + 0x2a0));
      func_0x00010b533fd0();
    }
  }
  if (*(long *)(param_1 + 0x2a8) != 0) {
    iVar10 = ((int)LZCOUNT(*(long *)(param_1 + 0x2a8)) * -9 + 0x2c0U >> 6) + iVar10;
  }
  iVar11 = iVar10 + 3;
  if (*(char *)(param_1 + 0x2b0) == '\0') {
    iVar11 = iVar10;
  }
  iVar10 = iVar11 + 3;
  if (*(char *)(param_1 + 0x2b1) == '\0') {
    iVar10 = iVar11;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar12 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar12 = *(long *)(extraout_x9 + 0x10);
    }
    iVar10 = (int)lVar12 + iVar10;
  }
  *(int *)(param_1 + 0x14) = iVar10;
  return;
}



/* Entry: 10b5308a8; end: 10b53094f;  */

long FUN_10b5308a8(long param_1)

{
  long extraout_x8;
  
  func_0x00010b527514();
  func_0x00010b534014();
  return param_1 + extraout_x8;
}



/* Entry: 10b530950; end: 10b530953;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b530950(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x00010b53424c();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010b5347ec();
  }
  func_0x00010b534c08();
  func_0x00010598fce8();
  func_0x000108c6cd6c(unaff_x21 + 0x30,unaff_x20 + 0x30);
  FUN_10b531000(unaff_x21 + 0x48,unaff_x20 + 0x48);
  func_0x00010b531010(unaff_x21 + 0x60,unaff_x20 + 0x60);
  func_0x000108c6cd6c(unaff_x21 + 0x78,unaff_x20 + 0x78);
  func_0x00010b531020(unaff_x21 + 0x90,unaff_x20 + 0x90);
  func_0x00010b531030(unaff_x21 + 0xa8,unaff_x20 + 0xa8);
  func_0x000107c282d0(unaff_x21 + 0xc0,unaff_x20 + 0xc0);
  FUN_10b5289dc(unaff_x21 + 0xd8,unaff_x20 + 0xd8);
  func_0x00010b531040(unaff_x21 + 0xf0,unaff_x20 + 0xf0);
  func_0x00010b531050(unaff_x21 + 0x108,unaff_x20 + 0x108);
  func_0x00010b531060(unaff_x21 + 0x120,unaff_x20 + 0x120);
  func_0x00010b531070(unaff_x21 + 0x138,unaff_x20 + 0x138);
  func_0x00010b531080(unaff_x21 + 0x150,unaff_x20 + 0x150);
  func_0x00010b531090(unaff_x21 + 0x168,unaff_x20 + 0x168);
  func_0x00010b5310a0(unaff_x21 + 0x180,unaff_x20 + 0x180);
  puVar2 = (ulong *)(unaff_x21 + 0x198);
  func_0x00010b5310b0();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1b0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533310();
        *(ulong **)(unaff_x21 + 0x1b0) = puVar2;
      }
      else {
        func_0x00010b5289ec();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1b8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b533368();
        *(ulong **)(unaff_x21 + 0x1b8) = puVar2;
      }
      else {
        FUN_10b528970();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1c0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b5333e4();
        *(ulong **)(unaff_x21 + 0x1c0) = puVar2;
      }
      else {
        FUN_10b52920c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1c8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b533498();
        *(ulong **)(unaff_x21 + 0x1c8) = puVar2;
      }
      else {
        FUN_10b52a008();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1d0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b53350c();
        *(ulong **)(unaff_x21 + 0x1d0) = puVar2;
      }
      else {
        FUN_10b52a8bc();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1d8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b5335e4();
        *(ulong **)(unaff_x21 + 0x1d8) = puVar2;
      }
      else {
        FUN_10b52ac34();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1e0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533644();
        *(ulong **)(unaff_x21 + 0x1e0) = puVar2;
      }
      else {
        FUN_10b52acc0();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1e8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b53369c();
        *(ulong **)(unaff_x21 + 0x1e8) = puVar2;
      }
      else {
        func_0x00010b534c4c();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1f0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b5336cc();
        *(ulong **)(unaff_x21 + 0x1f0) = puVar2;
      }
      else {
        FUN_10b52b760();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1f8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b533774();
        *(ulong **)(unaff_x21 + 0x1f8) = puVar2;
      }
      else {
        FUN_10b52bc80();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x200);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b5337c0();
        *(ulong **)(unaff_x21 + 0x200) = puVar2;
      }
      else {
        FUN_10b52c00c();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x208);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b53389c();
        *(ulong **)(unaff_x21 + 0x208) = puVar2;
      }
      else {
        FUN_10b52c2e4();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x210);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b5338f8();
        *(ulong **)(unaff_x21 + 0x210) = puVar2;
      }
      else {
        FUN_10b52c44c();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x218);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b533958();
        *(ulong **)(unaff_x21 + 0x218) = puVar2;
      }
      else {
        FUN_10b52c5fc();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x220);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b5339a4();
        *(ulong **)(unaff_x21 + 0x220) = puVar2;
      }
      else {
        FUN_10b52c798();
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x228);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b5339f0();
        *(ulong **)(unaff_x21 + 0x228) = puVar2;
      }
      else {
        FUN_10b52c920();
      }
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x230);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b533a3c();
        *(ulong **)(unaff_x21 + 0x230) = puVar2;
      }
      else {
        FUN_10b52cb68();
      }
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x238);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533a9c();
        *(ulong **)(unaff_x21 + 0x238) = puVar2;
      }
      else {
        FUN_10b52d950();
      }
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x240);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533ad8();
        *(ulong **)(unaff_x21 + 0x240) = puVar2;
      }
      else {
        func_0x00010b52daec();
      }
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x248);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533b28();
        *(ulong **)(unaff_x21 + 0x248) = puVar2;
      }
      else {
        func_0x00010b52dbb4();
      }
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x250);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533b78();
        *(ulong **)(unaff_x21 + 0x250) = puVar2;
      }
      else {
        FUN_10b52dff4();
      }
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 600);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533c34();
        *(ulong **)(unaff_x21 + 600) = puVar2;
      }
      else {
        FUN_10b52e114();
      }
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x260);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533c84();
        *(ulong **)(unaff_x21 + 0x260) = puVar2;
      }
      else {
        func_0x00010b52e1dc();
      }
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x268);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b533cdc();
        *(ulong **)(unaff_x21 + 0x268) = puVar2;
      }
      else {
        FUN_10b52e44c();
      }
    }
  }
  if ((uVar1 & 0x7f000000) != 0) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x270);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b533d28();
        *(ulong **)(unaff_x21 + 0x270) = puVar2;
      }
      else {
        FUN_10b52e614();
      }
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x278);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533d78();
        *(ulong **)(unaff_x21 + 0x278) = puVar2;
      }
      else {
        FUN_10b52e668();
      }
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x280);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533dd0();
        *(ulong **)(unaff_x21 + 0x280) = puVar2;
      }
      else {
        func_0x00010b52e784();
      }
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x288);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533e20();
        *(ulong **)(unaff_x21 + 0x288) = puVar2;
      }
      else {
        FUN_10b52ebf4();
      }
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x290);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533e6c();
        *(ulong **)(unaff_x21 + 0x290) = puVar2;
      }
      else {
        func_0x00010b5310c0();
      }
    }
    if ((uVar1 >> 0x1d & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x298);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b533ee4();
        *(ulong **)(unaff_x21 + 0x298) = puVar2;
      }
      else {
        func_0x00010b531120();
      }
    }
    if ((uVar1 >> 0x1e & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x2a0);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b533f48();
        *(ulong **)(unaff_x21 + 0x2a0) = puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_10b52ed9c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x2a8) != 0) {
    *(long *)(unaff_x21 + 0x2a8) = *(long *)(unaff_x20 + 0x2a8);
  }
  if (*(char *)(unaff_x20 + 0x2b0) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x2b0) = 1;
  }
  if (*(char *)(unaff_x20 + 0x2b1) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x2b1) = 1;
  }
  func_0x00010b5340f4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b53423c();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 10b530954; end: 10b530fff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b530954(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  func_0x00010b53424c();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x00010b5347ec();
  }
  func_0x00010b534c08();
  func_0x00010598fce8();
  func_0x000108c6cd6c(unaff_x21 + 0x30,unaff_x20 + 0x30);
  FUN_10b531000(unaff_x21 + 0x48,unaff_x20 + 0x48);
  func_0x00010b531010(unaff_x21 + 0x60,unaff_x20 + 0x60);
  func_0x000108c6cd6c(unaff_x21 + 0x78,unaff_x20 + 0x78);
  func_0x00010b531020(unaff_x21 + 0x90,unaff_x20 + 0x90);
  func_0x00010b531030(unaff_x21 + 0xa8,unaff_x20 + 0xa8);
  func_0x000107c282d0(unaff_x21 + 0xc0,unaff_x20 + 0xc0);
  FUN_10b5289dc(unaff_x21 + 0xd8,unaff_x20 + 0xd8);
  func_0x00010b531040(unaff_x21 + 0xf0,unaff_x20 + 0xf0);
  func_0x00010b531050(unaff_x21 + 0x108,unaff_x20 + 0x108);
  func_0x00010b531060(unaff_x21 + 0x120,unaff_x20 + 0x120);
  func_0x00010b531070(unaff_x21 + 0x138,unaff_x20 + 0x138);
  func_0x00010b531080(unaff_x21 + 0x150,unaff_x20 + 0x150);
  func_0x00010b531090(unaff_x21 + 0x168,unaff_x20 + 0x168);
  func_0x00010b5310a0(unaff_x21 + 0x180,unaff_x20 + 0x180);
  puVar2 = (ulong *)(unaff_x21 + 0x198);
  func_0x00010b5310b0();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1b0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533310();
        *(ulong **)(unaff_x21 + 0x1b0) = puVar2;
      }
      else {
        func_0x00010b5289ec();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1b8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b533368();
        *(ulong **)(unaff_x21 + 0x1b8) = puVar2;
      }
      else {
        FUN_10b528970();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1c0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b5333e4();
        *(ulong **)(unaff_x21 + 0x1c0) = puVar2;
      }
      else {
        FUN_10b52920c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1c8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b533498();
        *(ulong **)(unaff_x21 + 0x1c8) = puVar2;
      }
      else {
        FUN_10b52a008();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1d0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b53350c();
        *(ulong **)(unaff_x21 + 0x1d0) = puVar2;
      }
      else {
        FUN_10b52a8bc();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1d8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b5335e4();
        *(ulong **)(unaff_x21 + 0x1d8) = puVar2;
      }
      else {
        FUN_10b52ac34();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1e0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533644();
        *(ulong **)(unaff_x21 + 0x1e0) = puVar2;
      }
      else {
        FUN_10b52acc0();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1e8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b53369c();
        *(ulong **)(unaff_x21 + 0x1e8) = puVar2;
      }
      else {
        func_0x00010b534c4c();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1f0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b5336cc();
        *(ulong **)(unaff_x21 + 0x1f0) = puVar2;
      }
      else {
        FUN_10b52b760();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x1f8);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b533774();
        *(ulong **)(unaff_x21 + 0x1f8) = puVar2;
      }
      else {
        FUN_10b52bc80();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x200);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b5337c0();
        *(ulong **)(unaff_x21 + 0x200) = puVar2;
      }
      else {
        FUN_10b52c00c();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x208);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b53389c();
        *(ulong **)(unaff_x21 + 0x208) = puVar2;
      }
      else {
        FUN_10b52c2e4();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x210);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b5338f8();
        *(ulong **)(unaff_x21 + 0x210) = puVar2;
      }
      else {
        FUN_10b52c44c();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x218);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b533958();
        *(ulong **)(unaff_x21 + 0x218) = puVar2;
      }
      else {
        FUN_10b52c5fc();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x220);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b5339a4();
        *(ulong **)(unaff_x21 + 0x220) = puVar2;
      }
      else {
        FUN_10b52c798();
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x228);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b5339f0();
        *(ulong **)(unaff_x21 + 0x228) = puVar2;
      }
      else {
        FUN_10b52c920();
      }
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x230);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b533a3c();
        *(ulong **)(unaff_x21 + 0x230) = puVar2;
      }
      else {
        FUN_10b52cb68();
      }
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x238);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533a9c();
        *(ulong **)(unaff_x21 + 0x238) = puVar2;
      }
      else {
        FUN_10b52d950();
      }
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x240);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533ad8();
        *(ulong **)(unaff_x21 + 0x240) = puVar2;
      }
      else {
        func_0x00010b52daec();
      }
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x248);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533b28();
        *(ulong **)(unaff_x21 + 0x248) = puVar2;
      }
      else {
        func_0x00010b52dbb4();
      }
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x250);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533b78();
        *(ulong **)(unaff_x21 + 0x250) = puVar2;
      }
      else {
        FUN_10b52dff4();
      }
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 600);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533c34();
        *(ulong **)(unaff_x21 + 600) = puVar2;
      }
      else {
        FUN_10b52e114();
      }
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x260);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533c84();
        *(ulong **)(unaff_x21 + 0x260) = puVar2;
      }
      else {
        func_0x00010b52e1dc();
      }
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x268);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b533cdc();
        *(ulong **)(unaff_x21 + 0x268) = puVar2;
      }
      else {
        FUN_10b52e44c();
      }
    }
  }
  if ((uVar1 & 0x7f000000) != 0) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x270);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b533d28();
        *(ulong **)(unaff_x21 + 0x270) = puVar2;
      }
      else {
        FUN_10b52e614();
      }
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x278);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533d78();
        *(ulong **)(unaff_x21 + 0x278) = puVar2;
      }
      else {
        FUN_10b52e668();
      }
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x280);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533dd0();
        *(ulong **)(unaff_x21 + 0x280) = puVar2;
      }
      else {
        func_0x00010b52e784();
      }
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x288);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533e20();
        *(ulong **)(unaff_x21 + 0x288) = puVar2;
      }
      else {
        FUN_10b52ebf4();
      }
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x290);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10b533e6c();
        *(ulong **)(unaff_x21 + 0x290) = puVar2;
      }
      else {
        func_0x00010b5310c0();
      }
    }
    if ((uVar1 >> 0x1d & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x298);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        func_0x00010b533ee4();
        *(ulong **)(unaff_x21 + 0x298) = puVar2;
      }
      else {
        func_0x00010b531120();
      }
    }
    if ((uVar1 >> 0x1e & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x2a0);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010b533f48();
        *(ulong **)(unaff_x21 + 0x2a0) = puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_10b52ed9c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x2a8) != 0) {
    *(long *)(unaff_x21 + 0x2a8) = *(long *)(unaff_x20 + 0x2a8);
  }
  if (*(char *)(unaff_x20 + 0x2b0) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x2b0) = 1;
  }
  if (*(char *)(unaff_x20 + 0x2b1) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x2b1) = 1;
  }
  func_0x00010b5340f4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b53423c();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 10b531000; end: 10b5310bf;  */

void FUN_10b531000(long *param_1,long param_2)

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



/* Entry: 10b5310c0; end: 10b53115b;  */

void FUN_10b5310c0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5344bc();
  func_0x00010598fce8();
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534b18();
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
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



/* Entry: 10b53115c; end: 10b531177;  */

long FUN_10b53115c(long param_1)

{
  long extraout_x8;
  
  FUN_10b54c72c();
  func_0x00010b534014();
  return param_1 + extraout_x8;
}



/* Entry: 10b531178; end: 10b5311a7;  */

long FUN_10b531178(long param_1)

{
  func_0x00010b534518();
  func_0x00010b5349a8();
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5311a8; end: 10b5311ab;  */

long FUN_10b5311a8(long param_1)

{
  func_0x00010b534518();
  func_0x00010b5349a8();
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5311ac; end: 10b5311bf;  */

void FUN_10b5311ac(void)

{
  FUN_10b531178();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5311c0; end: 10b5311cb;  */

undefined ** FUN_10b5311c0(void)

{
  return &PTR_DAT_110d005e0;
}



/* Entry: 10b5311cc; end: 10b531313;  */

long * FUN_10b5311cc(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  char in_NG;
  char in_OV;
  undefined8 *puVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  undefined8 *unaff_x23;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  func_0x00010b534274();
  func_0x00010b534580(param_1[5]);
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 == (long *)0x0) goto LAB_10b531224;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b531224;
  param_4 = (long *)&UNK_10f777cf6;
  func_0x00010b534528();
  func_0x00010b53402c();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10b531224:
  if (*(long *)(unaff_x21 + 0x30) != 0) {
    func_0x00010b534320();
    param_2 = param_1;
    func_0x00010b5346f8();
    func_0x00010b534820();
    unaff_x20 = param_1;
  }
  uVar6 = (ulong)(*(uint *)(unaff_x21 + 0x18) &
                 ((int)*(uint *)(unaff_x21 + 0x18) >> 0x1f ^ 0xffffffffU));
  do {
    if (uVar6 == 0) {
      if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
        return unaff_x20;
      }
      func_0x00010b534550();
      if ((long)param_3 < 0) {
        param_3 = *(ulong *)(extraout_x8 + 0x10);
      }
      func_0x00010b534648();
      if ((long)(int)param_3 <= *param_1 - (long)param_4) {
        _memcpy(param_4);
        return (long *)((long)param_4 + (long)(int)param_3);
      }
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
    func_0x00010b534530();
    puVar2 = unaff_x23;
    if ((long)param_2 < 0) {
      param_2 = (long *)unaff_x23[1];
      puVar2 = (undefined8 *)*unaff_x23;
    }
    func_0x00010b534858(puVar2);
    lVar5 = (long)*(char *)((long)unaff_x23 + 0x17);
    if (lVar5 < 0) {
      lVar5 = unaff_x23[1];
      in_OV = SBORROW8(lVar5,0x7f);
      in_NG = lVar5 + -0x7f < 0;
      if (lVar5 < 0x80) goto LAB_10b531290;
LAB_10b5312cc:
      param_2 = (long *)0x3;
      param_1 = unaff_x19;
      func_0x00010b534b3c();
      unaff_x20 = param_1;
    }
    else {
LAB_10b531290:
      func_0x00010b534c2c();
      if (in_NG != in_OV) goto LAB_10b5312cc;
      *(undefined1 *)unaff_x20 = 0x1a;
      *(char *)((long)unaff_x20 + 1) = (char)lVar5;
      if (*(char *)((long)unaff_x23 + 0x17) < '\0') {
        unaff_x23 = (undefined8 *)*unaff_x23;
      }
      param_1 = (long *)((long)unaff_x20 + 2);
      func_0x00010b534864();
      unaff_x20 = (long *)((long)unaff_x20 + 2 + lVar5);
    }
    uVar6 = uVar6 - 1;
  } while( true );
}



/* Entry: 10b531314; end: 10b531393;  */

long FUN_10b531314(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00010b534aac();
  while (unaff_x22 != 0) {
    func_0x00010b534438();
    func_0x00010b5349fc();
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    func_0x00010b534720();
    unaff_x20 = extraout_x8_00 + unaff_x20;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x38) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b531394; end: 10b531397;  */

void FUN_10b531394(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5344bc();
  func_0x00010598fce8();
  func_0x00010b534568(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b53455c();
    }
    func_0x00010b534b18();
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5342a4();
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



/* Entry: 10b531398; end: 10b5313c7;  */

long FUN_10b531398(long param_1)

{
  func_0x00010b534518();
  func_0x00010b5349a8();
  func_0x0001098cc270(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5313c8; end: 10b5313cb;  */

long FUN_10b5313c8(long param_1)

{
  func_0x00010b534518();
  func_0x00010b5349a8();
  func_0x0001098cc270(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5313cc; end: 10b5313df;  */

void FUN_10b5313cc(void)

{
  FUN_10b531398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5313e0; end: 10b5313eb;  */

undefined ** FUN_10b5313e0(void)

{
  return &PTR_DAT_110d00628;
}



/* Entry: 10b5313ec; end: 10b53141f;  */

void FUN_10b5313ec(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b534610();
  func_0x0001098ccad4();
  func_0x00010b534900();
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



/* Entry: 10b531420; end: 10b5314d3;  */

long * FUN_10b531420(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *plVar4;
  int iVar5;
  
  func_0x00010b534274();
  lVar2 = param_1[3];
  for (plVar4 = (long *)0x0; (int)lVar2 != (int)plVar4; plVar4 = (long *)(ulong)((int)plVar4 + 1)) {
    func_0x00010b534058();
    param_3 = (ulong)*(uint *)(param_2 + 0x34);
    param_1 = (long *)0x1;
    func_0x00010b5342c4();
    unaff_x20 = param_1;
  }
  func_0x00010b534580(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    if (plVar4[1] == 0) goto LAB_10b5314a0;
    plVar4 = (long *)*plVar4;
  }
  else if ((int)param_2 == 0) goto LAB_10b5314a0;
  param_4 = (long *)&UNK_10f777d59;
  func_0x00010b534528();
  func_0x00010b534074();
  param_1 = plVar4;
  unaff_x20 = plVar4;
LAB_10b5314a0:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b534550();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b534648();
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



/* Entry: 10b5314d4; end: 10b53154b;  */

long FUN_10b5314d4(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b5349e0();
  func_0x00010b5342d0();
  while (unaff_x22 != 0) {
    param_1 = *unaff_x21;
    func_0x0001098cbe50();
    func_0x00010b5348a0();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010b534574(*(undefined8 *)(unaff_x19 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5345d4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5348d0();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



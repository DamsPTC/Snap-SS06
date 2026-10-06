/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10064e1b8; end: 10064e20b;  */

void FUN_10064e1b8(uint param_1)

{
  func_0x00010011a790();
  FUN_10011a800();
  func_0x00010011a808();
  FUN_10011a89c();
  func_0x00010011a8a4();
  FUN_10060f43c();
  func_0x00010060f44c();
  if ((param_1 >> 8 & 1) != 0) {
    uRam000000011383a6d0 = (undefined1)param_1;
  }
  func_0x00010011b634();
  return;
}



/* Entry: 10064e20c; end: 10064e3bb;  */

void FUN_10064e20c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined4 *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  *(undefined8 *)(param_1 + 0x28) = param_5;
  uVar9 = *param_6;
  *param_6 = 0;
  plVar2 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  lVar5 = param_2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puVar3 = (undefined8 *)(param_1 + 0x10);
  func_0x0001001b4d98();
  if (((ulong)puVar3 & 1) == 0) {
    FUN_1001317d0();
    uVar9 = *puVar3;
    puVar6 = &UNK_10f501357;
    puVar8 = &UNK_10f75a59a;
    FUN_10012dd4c(&uStack_70,&UNK_10f501357,&UNK_10f75a59a,0x46);
    func_0x00010064e3b4();
    puVar7 = &UNK_10b3e13e0;
    puStack_88 = puVar6;
    puStack_80 = puVar8;
    func_0x000107c2e6a8(&UNK_10b3e13e0,0,&puStack_88,0xffffff9c);
    puStack_78 = puVar7;
    func_0x00010013fa70(uVar9,&uStack_70,&puStack_78);
    func_0x000100140e00(&puStack_78);
    FUN_10014f860(&puStack_88);
  }
  else {
    *(long *)(param_1 + 0x20) = param_2;
    uVar1 = *(undefined4 *)(param_2 + 0x94);
    func_0x00010064e3b4();
    puVar4 = (undefined4 *)0x40;
    lStack_68 = lVar5;
    func_0x000107c60e20();
    *puVar4 = 1;
    *(undefined **)(puVar4 + 2) = &UNK_10b3e16cc;
    *(undefined8 *)(puVar4 + 4) = 0x10065235c;
    *(undefined **)(puVar4 + 6) = &UNK_10b3e1748;
    *(undefined8 *)(puVar4 + 8) = 0x1006523a4;
    *(undefined8 *)(puVar4 + 10) = 0;
    *(undefined8 **)(puVar4 + 0xc) = puVar3;
    uStack_70 = 0;
    *(long *)(puVar4 + 0xe) = lVar5;
    lVar5 = param_1 + 0x38;
    puStack_90 = puVar4;
    FUN_100650f78(lVar5,0,param_1 + 0x10,param_2,0,uVar1,param_2 + 0x98,param_3,&puStack_90,param_7,
                  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xb9));
    func_0x000100140e00(&puStack_90);
    FUN_10014f860(&uStack_70);
    if ((int)lVar5 != -1) {
      func_0x0001006523a4(param_1,lVar5);
    }
  }
  return;
}



/* Entry: 10064e3bc; end: 10064e6cb; -[SCCameraRollStickerInjectorServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064e3bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar12 = (long)_DAT_1127257e0;
  lVar1 = param_1 + lVar12;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4e6e8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar12 = param_1 + lVar12;
  func_0x000107c61148();
  lVar3 = lVar12;
  func_0x000107c407b4();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  lVar1 = param_1 + _DAT_1127257e4;
  func_0x000107c61148();
  lVar12 = lVar1;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127257e8;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c42294();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127257ec;
  func_0x000107c61148();
  lVar5 = lVar1;
  func_0x000107c3eba8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127257f0;
  func_0x000107c61148();
  lVar6 = lVar1;
  func_0x000107c3dfac();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127257f4;
  func_0x000107c61148();
  lVar7 = lVar1;
  func_0x000107c5c800();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  param_1 = param_1 + _DAT_1127257f8;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c4cb88();
  func_0x000107c61180();
  lVar8 = lVar1;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  puVar9 = PTR_PTR_1126ae720;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  puStack_b0 = &UNK_1055420b0;
  puStack_a8 = &UNK_110896700;
  lStack_a0 = lVar2;
  lStack_98 = lVar3;
  lStack_90 = lVar12;
  lStack_88 = lVar4;
  lStack_80 = lVar6;
  lStack_78 = lVar5;
  lStack_70 = lVar7;
  lStack_68 = lVar8;
  func_0x000107c61174(lVar7);
  func_0x000107c61174(lVar5);
  func_0x000107c61174(lVar6);
  func_0x000107c61174(lVar4);
  func_0x000107c61174(lVar12);
  func_0x000107c61174(lVar3);
  func_0x000107c61174(lVar2);
  func_0x000107c3e4fc(puVar9,param_2,&puStack_c0);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ba8e8;
  func_0x000107c610f4(PTR_PTR_1126ba8e8);
  func_0x000107c46298();
  puVar11 = PTR_PTR_1126ba998;
  func_0x000107c610f4(PTR_PTR_1126ba998);
  func_0x000107c489f8();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lStack_70);
  func_0x000107c61170(lStack_78);
  func_0x000107c61170(lStack_80);
  func_0x000107c61170(lStack_88);
  func_0x000107c61170(lStack_90);
  func_0x000107c61170(lStack_98);
  func_0x000107c61170(lStack_a0);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10064e6cc; end: 10064e6d3; -[SCPhotoPermissionServices photoPermissionCoordinator] */

undefined8 FUN_10064e6cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10064e6d4; end: 10064e6f3; -[SCPhotoPermissionServices coreConfigProvider] */

undefined8 FUN_10064e6d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10064e6f4; end: 10064e727;  */

void FUN_10064e6f4(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010064e6e8();
  FUN_10064d02c();
  FUN_10064e728();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  FUN_10064e810(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x00010064e9c8(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar2 = (ulong *)(unaff_x21 + 0x48);
  func_0x00010064e9d8();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10064ea0c();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        func_0x000107c30464();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        FUN_10064eb74();
        *(ulong **)(unaff_x21 + 0x68) = puVar3;
        puVar2 = puVar3;
      }
      else {
        func_0x000107c3049c();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  func_0x00010064e9e8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x000107c39d48();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10064e728; end: 10064e737;  */

void FUN_10064e728(void)

{
  return;
}



/* Entry: 10064e738; end: 10064e80f;  */

void FUN_10064e738(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  
  FUN_10064e728();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  FUN_10064e810(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x00010064e9c8(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar2 = (ulong *)(unaff_x21 + 0x48);
  func_0x00010064e9d8();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_10064ea0c();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        func_0x000107c30464();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        FUN_10064eb74();
        *(ulong **)(unaff_x21 + 0x68) = puVar3;
        puVar2 = puVar3;
      }
      else {
        func_0x000107c3049c();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  func_0x00010064e9e8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x000107c39d48();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10064e810; end: 10064e81f;  */

void FUN_10064e810(long *param_1,long param_2)

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
  FUN_100361ce4();
  plVar2 = param_1;
  FUN_10064e8bc();
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
  FUN_100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10064e820; end: 10064e8bb;  */

void FUN_10064e820(long *param_1)

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
  
  FUN_100361ce4();
  plVar2 = param_1;
  FUN_10064e8bc();
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
  FUN_100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10064e8bc; end: 10064e8df;  */

void FUN_10064e8bc(void)

{
  return;
}



/* Entry: 10064e8e0; end: 10064e9ab;  */

void FUN_10064e8e0(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  puVar1 = param_1;
  if (lVar4 != 0) {
    uVar3 = param_1[1];
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    puVar1 = param_1 + 2;
    FUN_1001a53d4(puVar1,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = param_1[1];
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    puVar1 = param_1 + 3;
    FUN_1001a53d4(puVar1,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = param_1[1];
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    puVar1 = param_1 + 4;
    FUN_1001a53d4(puVar1,uVar2,uVar3);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 5) = *(int *)(param_2 + 0x28);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x000107c39d50();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 10064e9ac; end: 10064ea0b; -[SCOnDemandResourceDownloaderServices downloader] */

undefined8 FUN_10064e9ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10064ea0c; end: 10064eb33;  */

undefined8 * FUN_10064ea0c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xa8;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0xa8);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_DAT_110cf9670;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x000107c39d4c();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_10064eb34(puVar1 + 3);
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_10064eb34(puVar1 + 6);
  *(undefined4 *)(puVar1 + 8) = 0;
  FUN_10064eb34(puVar1 + 9);
  *(undefined4 *)(puVar1 + 0xb) = 0;
  FUN_10064eb34(puVar1 + 0xc);
  *(undefined4 *)(puVar1 + 0xe) = 0;
  FUN_10064eb34(puVar1 + 0xf);
  *(undefined4 *)(puVar1 + 0x11) = 0;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c304b8(param_1,*(undefined8 *)(param_2 + 0x90));
  }
  puVar1[0x12] = param_1;
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  puVar1[0x13] = uVar2;
  return puVar1;
}



/* Entry: 10064eb34; end: 10064eb73;  */

int * FUN_10064eb34(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 unaff_x21;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = unaff_x21;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    FUN_10056a14c(param_1,0,iVar1);
    *param_1 = iVar1;
    func_0x00010064eb3c(*(undefined8 *)(param_3 + 2),iVar1,*(undefined8 *)(param_1 + 2));
  }
  return param_1;
}



/* Entry: 10064eb74; end: 10064ec8f;  */

undefined8 * FUN_10064eb74(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x88;
    func_0x000107c60e20();
  }
  else {
    puVar2 = param_1;
    func_0x000107c303f0(param_1,0x88);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_DAT_110cf9760;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x000107c39d4c();
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar2 + 0x1c) = 0;
  *(undefined8 *)((long)puVar2 + 0x14) = 0;
  *(undefined4 *)((long)puVar2 + 0x24) = 0;
  puVar2[5] = param_1;
  FUN_10064ec90(puVar2 + 3,param_2 + 0x18);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = param_1;
  func_0x00010064ee64(puVar2 + 6,param_2 + 0x30);
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = param_1;
  func_0x00010064ee74(puVar2 + 9,param_2 + 0x48);
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    func_0x000107c304bc(param_1,*(undefined8 *)(param_2 + 0x60));
  }
  puVar2[0xc] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_10064ef68(param_1,*(undefined8 *)(param_2 + 0x68));
  }
  puVar2[0xd] = param_1;
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(puVar2 + 0x10) = *(undefined1 *)(param_2 + 0x80);
  puVar2[0xf] = uVar5;
  puVar2[0xe] = uVar4;
  return puVar2;
}



/* Entry: 10064ec90; end: 10064ec9f;  */

void FUN_10064ec90(long *param_1,long param_2)

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
  FUN_100361ce4();
  plVar2 = param_1;
  FUN_10064e8bc();
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
  FUN_100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10064eca0; end: 10064ecef;  */

void FUN_10064eca0(ulong *param_1,long param_2)

{
  ulong *puVar1;
  
  puVar1 = param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    puVar1 = param_1 + 2;
    FUN_10064e820();
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 5) = *(int *)(param_2 + 0x28);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x000107c39d50();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 10064ecf0; end: 10064ed7f;  */

void FUN_10064ecf0(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_10064e728();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_10064ed80();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      FUN_10064ee10();
      puVar2 = puVar3;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107c39d48();
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



/* Entry: 10064ed80; end: 10064edbb;  */

long FUN_10064ed80(long param_1)

{
  long unaff_x20;
  
  func_0x00010064e6e8();
  if (param_1 == 0) {
    FUN_10064d388();
  }
  else {
    func_0x000107c303f0();
    param_1 = unaff_x20;
  }
  FUN_10064edbc();
  FUN_10064ee10();
  return param_1;
}



/* Entry: 10064edbc; end: 10064edd7;  */

void FUN_10064edbc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110cf94e0;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 10064edd8; end: 10064ee0f;  */

undefined8 FUN_10064edd8(undefined8 param_1)

{
  FUN_10064edbc();
  FUN_10064ee10();
  return param_1;
}



/* Entry: 10064ee10; end: 10064ee5b;  */

void FUN_10064ee10(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
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



/* Entry: 10064ee5c; end: 10064ee83; -[SCTemporaryFileWriterServices temporaryFileWriter] */

undefined8 FUN_10064ee5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10064ee84; end: 10064eea7; -[MemoriesExperimentServices memoriesExperimentService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064ee84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130806d0));
  return;
}



/* Entry: 10064eea8; end: 10064eefb;  */

void FUN_10064eea8(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010064ee94();
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(char *)(unaff_x20 + 0x2c) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x2c) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107c39d50();
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



/* Entry: 10064eefc; end: 10064ef5b;  */

undefined1  [16] FUN_10064eefc(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar3 = *param_2;
  if (iVar3 != 0) {
    func_0x000105992abc(param_1,*param_1 + iVar3);
    iVar1 = *param_1;
    *param_1 = iVar1 + iVar3;
    puVar4 = (undefined4 *)(*(long *)(param_1 + 2) + (long)iVar1 * 4);
    puVar2 = *(undefined4 **)(param_2 + 2);
    puVar5 = puVar2;
    puVar6 = puVar4;
    while (0 < iVar3) {
      *puVar6 = *puVar5;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    }
    auVar7._8_8_ = puVar4;
    auVar7._0_8_ = puVar2;
    return auVar7;
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 10064ef5c; end: 10064ef67;  */

void FUN_10064ef5c(void)

{
  return;
}



/* Entry: 10064ef68; end: 10064efa3;  */

undefined8 * FUN_10064ef68(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010064e6e8();
  if (param_1 == (undefined8 *)0x0) {
    FUN_10064d460();
  }
  else {
    param_1 = unaff_x20;
    func_0x000107c303f0();
  }
  *param_1 = &PTR_DAT_110cf9580;
  param_1[1] = unaff_x20;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10064efa4();
  return param_1;
}



/* Entry: 10064efa4; end: 10064efd7;  */

void FUN_10064efa4(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
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



/* Entry: 10064efd8; end: 10064f01b;  */

undefined8 * FUN_10064efd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110cf9580;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10064efa4(param_1,param_3);
  return param_1;
}



/* Entry: 10064f01c; end: 10064f4ff;  */

void FUN_10064f01c(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  int *piVar18;
  undefined1 auStack_f8 [8];
  ulong uStack_f0;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  puVar7 = (undefined8 *)0x220;
  func_0x000107c60e20();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_110cd3b20;
  FUN_10064f500(auStack_f8,0,param_2);
  puVar1 = puVar7 + 3;
  func_0x00010064c528(puVar1,0);
  uVar8 = puVar7[4];
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  if ((uStack_f0 & 1) != 0) {
    uStack_f0 = *(ulong *)(uStack_f0 & 0xfffffffffffffffe);
  }
  if (uVar8 == uStack_f0) {
    FUN_10064f7c4(puVar1,auStack_f8);
  }
  else {
    FUN_10064e6f4(puVar1,auStack_f8);
  }
  puVar7[0x14] = 0;
  puVar7[0x13] = 0;
  *(undefined4 *)(puVar7 + 0x12) = 10;
  puVar7[0x16] = 0;
  puVar7[0x15] = 0;
  *(undefined4 *)(puVar7 + 0x17) = 0x3f800000;
  plVar12 = puVar7 + 0x18;
  puVar7[0x19] = 0;
  *plVar12 = 0;
  puVar7[0x1b] = 0;
  puVar7[0x1a] = 0;
  *(undefined4 *)(puVar7 + 0x1c) = 0x3f800000;
  puVar7[0x1e] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x20] = 0;
  puVar7[0x1f] = 0;
  *(undefined4 *)(puVar7 + 0x21) = 0x3f800000;
  puVar15 = puVar7 + 0x22;
  puVar7[0x23] = 0;
  *puVar15 = 0;
  puVar7[0x25] = 0;
  puVar7[0x24] = 0;
  *(undefined4 *)(puVar7 + 0x26) = 0x3f800000;
  puVar7[0x28] = 0;
  puVar7[0x27] = 0;
  puVar7[0x2a] = 0;
  puVar7[0x29] = 0;
  *(undefined4 *)(puVar7 + 0x2b) = 0x3f800000;
  *(undefined2 *)(puVar7 + 0x2c) = 0;
  *(undefined4 *)((long)puVar7 + 0x164) = 0;
  FUN_10064f838(puVar7 + 0x2d,puVar1);
  FUN_10064fb28(puVar7 + 0x32,puVar1);
  *(undefined2 *)((long)puVar7 + 0x21c) = 0;
  *(undefined4 *)(puVar7 + 0x43) = 0;
  if ((*(byte *)(puVar7 + 5) & 1) != 0) {
    lVar17 = puVar7[0xf];
    *(undefined4 *)(puVar7 + 0x12) = *(undefined4 *)(lVar17 + 0x98);
    puVar6 = *(undefined4 **)(lVar17 + 0x20);
    for (lVar11 = (long)*(int *)(lVar17 + 0x18) << 2; lVar11 != 0; lVar11 = lVar11 + -4) {
      FUN_10065060c(puVar7 + 0x13,*puVar6);
      puVar6 = puVar6 + 1;
    }
    puVar6 = *(undefined4 **)(lVar17 + 0x38);
    for (lVar11 = (long)*(int *)(lVar17 + 0x30) << 2; lVar11 != 0; lVar11 = lVar11 + -4) {
      FUN_10065060c(puVar7 + 0x27,*puVar6);
      puVar6 = puVar6 + 1;
    }
    piVar18 = *(int **)(lVar17 + 0x50);
    piVar3 = piVar18 + *(int *)(lVar17 + 0x48);
    plVar2 = puVar7 + 0x1a;
    puVar16 = puVar15;
    for (; piVar18 != piVar3; piVar18 = piVar18 + 1) {
      iVar4 = *piVar18;
      puVar14 = (undefined8 *)(long)iVar4;
      puVar13 = (undefined8 *)puVar7[0x19];
      if (puVar13 != (undefined8 *)0x0) {
        uVar8 = (long)puVar13 - 1;
        if (((ulong)puVar13 & uVar8) == 0) {
          puVar16 = (undefined8 *)(uVar8 & (ulong)puVar14);
        }
        else {
          puVar16 = puVar14;
          if (puVar13 <= puVar14) {
            uVar5 = 0;
            if (puVar13 != (undefined8 *)0x0) {
              uVar5 = (ulong)puVar14 / (ulong)puVar13;
            }
            puVar16 = (undefined8 *)((long)puVar14 - uVar5 * (long)puVar13);
          }
        }
        plVar9 = *(long **)(*plVar12 + (long)puVar16 * 8);
        if (plVar9 != (long *)0x0) {
          do {
            while( true ) {
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) goto LAB_10064f264;
              puVar10 = (undefined8 *)plVar9[1];
              if (puVar10 != puVar14) break;
              if (*(int *)(plVar9 + 2) == iVar4) goto LAB_10064f378;
            }
            if (((ulong)puVar13 & uVar8) == 0) {
              puVar10 = (undefined8 *)((ulong)puVar10 & uVar8);
            }
            else if (puVar13 <= puVar10) {
              uVar5 = 0;
              if (puVar13 != (undefined8 *)0x0) {
                uVar5 = (ulong)puVar10 / (ulong)puVar13;
              }
              puVar10 = (undefined8 *)((long)puVar10 - uVar5 * (long)puVar13);
            }
          } while (puVar10 == puVar16);
        }
      }
LAB_10064f264:
      plVar9 = (long *)0x18;
      func_0x000107c60e20();
      uStack_70 = 1;
      *plVar9 = 0;
      plVar9[1] = (long)puVar14;
      *(int *)(plVar9 + 2) = iVar4;
      uStack_80 = plVar9;
      plStack_78 = plVar2;
      if ((puVar13 == (undefined8 *)0x0) ||
         (*(float *)(puVar7 + 0x1c) * (float)puVar13 < (float)(puVar7[0x1b] + 1))) {
        FUN_1006507fc((long)puVar13 << 1);
        func_0x000107c2c8e8(plVar12);
        puVar13 = (undefined8 *)puVar7[0x19];
        if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
          puVar16 = (undefined8 *)((long)puVar13 - 1U & (ulong)puVar14);
        }
        else {
          puVar16 = puVar14;
          if (puVar13 <= puVar14) {
            uVar8 = 0;
            if (puVar13 != (undefined8 *)0x0) {
              uVar8 = (ulong)puVar14 / (ulong)puVar13;
            }
            puVar16 = (undefined8 *)((long)puVar14 - uVar8 * (long)puVar13);
          }
        }
      }
      lVar11 = *plVar12;
      plVar9 = *(long **)(lVar11 + (long)puVar16 * 8);
      if (plVar9 == (long *)0x0) {
        *uStack_80 = *plVar2;
        *plVar2 = (long)uStack_80;
        *(long **)(lVar11 + (long)puVar16 * 8) = plVar2;
        if (*uStack_80 != 0) {
          puVar14 = *(undefined8 **)(*uStack_80 + 8);
          if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
            puVar14 = (undefined8 *)((ulong)puVar14 & (long)puVar13 - 1U);
          }
          else if (puVar13 <= puVar14) {
            uVar8 = 0;
            if (puVar13 != (undefined8 *)0x0) {
              uVar8 = (ulong)puVar14 / (ulong)puVar13;
            }
            puVar14 = (undefined8 *)((long)puVar14 - uVar8 * (long)puVar13);
          }
          *(long **)(lVar11 + (long)puVar14 * 8) = uStack_80;
        }
      }
      else {
        *uStack_80 = *plVar9;
        *plVar9 = (long)uStack_80;
      }
      uStack_80 = (long *)0x0;
      puVar7[0x1b] = puVar7[0x1b] + 1;
      func_0x000107c2c8ec(&uStack_80);
LAB_10064f378:
    }
    puVar6 = *(undefined4 **)(lVar17 + 0x68);
    for (lVar11 = (long)*(int *)(lVar17 + 0x60) << 2; lVar11 != 0; lVar11 = lVar11 + -4) {
      uStack_80._4_4_ = (undefined4)((ulong)uStack_80 >> 0x20);
      uStack_80 = (long *)CONCAT44(uStack_80._4_4_,*puVar6);
      func_0x000107c2c8dc(puVar7 + 0x1d,&uStack_80);
      puVar6 = puVar6 + 1;
    }
    puVar6 = *(undefined4 **)(lVar17 + 0x80);
    for (lVar11 = (long)*(int *)(lVar17 + 0x78) << 2; lVar11 != 0; lVar11 = lVar11 + -4) {
      uStack_80._4_4_ = (undefined4)((ulong)uStack_80 >> 0x20);
      uStack_80 = (long *)CONCAT44(uStack_80._4_4_,*puVar6);
      func_0x000107c2c8dc(puVar15,&uStack_80);
      puVar6 = puVar6 + 1;
    }
    *(undefined1 *)((long)puVar7 + 0x161) = *(undefined1 *)(lVar17 + 0xa0);
    *(undefined4 *)((long)puVar7 + 0x164) = *(undefined4 *)(lVar17 + 0x9c);
    *(undefined1 *)(puVar7 + 0x2c) = *(undefined1 *)(lVar17 + 0xa1);
    *(undefined1 *)((long)puVar7 + 0x21c) = *(undefined1 *)(lVar17 + 0xa2);
    *(undefined1 *)((long)puVar7 + 0x21d) = *(undefined1 *)(lVar17 + 0xa3);
    if ((*(byte *)(lVar17 + 0x10) & 1) != 0) {
      lVar11 = *(long *)(lVar17 + 0x90);
      *(undefined1 *)(puVar7 + 0x43) = *(undefined1 *)(lVar11 + 0x13);
      *(undefined1 *)((long)puVar7 + 0x219) = *(undefined1 *)(lVar11 + 0x10);
      *(undefined1 *)((long)puVar7 + 0x21a) = *(undefined1 *)(lVar11 + 0x11);
      *(undefined1 *)((long)puVar7 + 0x21b) = *(undefined1 *)(lVar11 + 0x12);
    }
  }
  FUN_100650c6c(auStack_f8);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar7;
  return;
}



/* Entry: 10064f500; end: 10064f5df;  */

undefined8 * FUN_10064f500(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110cf97b0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c39d4c();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_10064f5f4(param_1 + 3,param_2,param_3 + 0x18);
  FUN_10064f61c(param_1 + 6,param_2,param_3 + 0x30);
  func_0x00010064f63c(param_1 + 9,param_2,param_3 + 0x48);
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10064ea0c(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  param_1[0xc] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10064eb74(param_2,*(undefined8 *)(param_3 + 0x68));
  }
  param_1[0xd] = param_2;
  param_1[0xe] = *(undefined8 *)(param_3 + 0x70);
  return param_1;
}



/* Entry: 10064f5e0; end: 10064f5f3;  */

void FUN_10064f5e0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  return;
}



/* Entry: 10064f5f4; end: 10064f613;  */

void FUN_10064f5f4(void)

{
  FUN_10064f5e0();
  FUN_10064e810();
  return;
}



/* Entry: 10064f614; end: 10064f61b;  */

void FUN_10064f614(void)

{
  return;
}



/* Entry: 10064f61c; end: 10064f667;  */

void FUN_10064f61c(void)

{
  FUN_10064f5e0();
  func_0x00010064e9c8();
  return;
}



/* Entry: 10064f668; end: 10064f70b; -[SCCameraRollStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_10064f668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fda60;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10064f70c; end: 10064f767;  */

void FUN_10064f70c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10064f768; end: 10064f76f;  */

void FUN_10064f768(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10064f770; end: 10064f7c3;  */

void FUN_10064f770(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10064f7c4; end: 10064f82b;  */

undefined1  [16] FUN_10064f7c4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  func_0x00010064e6e8();
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar6;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  func_0x0001004a641c(param_1 + 0x18,param_2 + 0x18);
  func_0x0001004a641c(unaff_x20 + 0x30,unaff_x19 + 0x30);
  func_0x0001004a641c(unaff_x20 + 0x48,unaff_x19 + 0x48);
  puVar4 = (undefined1 *)(unaff_x19 + 0x60);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(unaff_x20 + 0x60); puVar3 != (undefined1 *)(unaff_x20 + 0x78);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(unaff_x20 + 0x78);
  return auVar7;
}



/* Entry: 10064f82c; end: 10064f837;  */

undefined1  [16] FUN_10064f82c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0x18;
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



/* Entry: 10064f838; end: 10064f927;  */

void FUN_10064f838(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar3 = *(ulong *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  puVar1 = (ulong *)(param_2 + 0x48);
  if ((uVar3 & 1) != 0) {
    puVar1 = (ulong *)(uVar3 + 7);
  }
  for (lVar4 = (long)*(int *)(param_2 + 0x50) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar5 = *puVar1;
    uVar3 = (ulong)*(uint *)(uVar5 + 0x10);
    func_0x000100650208();
    if (uVar3 >> 0x20 != 0) {
      uStack_38 = *(undefined4 *)(uVar5 + 0x14);
      uStack_34 = (undefined4)uVar3;
      func_0x000107c2c754(param_1,&uStack_34,&uStack_38);
    }
    puVar1 = puVar1 + 1;
  }
  uStack_34 = 3;
  puVar2 = param_1;
  FUN_10064f9c4(param_1,&uStack_34);
  if (puVar2 == (undefined8 *)0x0) {
    uStack_34 = 2;
    puVar2 = param_1;
    FUN_10064f9e0(param_1,&uStack_34);
    if (puVar2 != (undefined8 *)0x0) {
      uStack_34 = 3;
      func_0x000107c2c758(param_1,&uStack_34,(long)puVar2 + 0x14);
    }
  }
  return;
}



/* Entry: 10064f928; end: 10064f9c3;  */

long FUN_10064f928(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10064f9c4; end: 10064f9df;  */

bool FUN_10064f9c4(long param_1)

{
  FUN_10064f928();
  return param_1 != 0;
}



/* Entry: 10064f9e0; end: 10064fa87;  */

long FUN_10064f9e0(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10064fa88; end: 10064fb1b;  */

void FUN_10064fa88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002181a4();
  func_0x000107c613fc();
  FUN_10065b418(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 10064fb1c; end: 10064fb27;  */

void FUN_10064fb1c(void)

{
  return;
}



/* Entry: 10064fb28; end: 10064ff53;  */

void FUN_10064fb28(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *extraout_x8;
  undefined **ppuVar12;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *extraout_x11;
  long lVar17;
  long *plVar18;
  long lVar19;
  uint *puVar20;
  long lVar21;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  *param_1 = 0;
  puVar13 = param_1 + 3;
  *puVar13 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar18 = param_1 + 2;
  *plVar18 = (long)puVar13;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[10] = param_1 + 0xb;
  puVar14 = param_1 + 0xe;
  *puVar14 = 0;
  plVar16 = param_1 + 0xd;
  *plVar16 = (long)puVar14;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  bVar6 = *(undefined ***)(param_2 + 0x68) == (undefined **)0x0;
  ppuVar2 = &PTR_PTR_113382e80;
  if (!bVar6) {
    ppuVar2 = *(undefined ***)(param_2 + 0x68);
  }
  *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)ppuVar2 + 0x74);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)ppuVar2 + 0x7c);
  *(undefined4 *)param_1 = *(undefined4 *)(ppuVar2 + 0xe);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(ppuVar2 + 0xf);
  *(undefined1 *)((long)param_1 + 0x84) = *(undefined1 *)(ppuVar2 + 0x10);
  FUN_10064fb1c();
  plVar15 = extraout_x11;
  if (!bVar6) {
    plVar15 = extraout_x10;
  }
  plVar11 = plVar15 + (int)extraout_x11[1];
  for (; bVar6 = plVar15 == plVar11, !bVar6; plVar15 = plVar15 + 1) {
    lVar19 = *plVar15;
    FUN_10064fb1c();
    plVar1 = extraout_x8;
    if (!bVar6) {
      plVar1 = extraout_x10_00;
    }
    for (lVar17 = (long)*(int *)(lVar19 + 0x18) << 3; lVar17 != 0; lVar17 = lVar17 + -8) {
      lVar21 = *plVar1;
      uVar7 = *(undefined4 *)(lVar19 + 0x28);
      FUN_10064ff54();
      uStack_70 = uVar7;
      func_0x000100650164(param_1 + 5,&uStack_70);
      uVar8 = (ulong)*(uint *)(lVar21 + 0x20);
      func_0x000100650208();
      uVar7 = 3;
      if (uVar8 >> 0x20 != 0) {
        uVar7 = (undefined4)uVar8;
      }
      uStack_88 = CONCAT44(uVar7,uStack_70);
      ppuVar12 = *(undefined ***)(lVar21 + 0x18);
      ppuVar2 = &PTR_PTR_113382ca8;
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar2 = ppuVar12;
      }
      plVar9 = plVar18;
      func_0x000100650238(plVar18,&uStack_c0,&uStack_88);
      uVar5 = uStack_88;
      if (*plVar9 == 0) {
        lVar21 = 0x58;
        func_0x000107c60e20();
        uStack_e0 = 0;
        *(undefined8 *)(lVar21 + 0x20) = uVar5;
        uStack_f0 = lVar21;
        puStack_e8 = puVar13;
        func_0x0001006502bc(lVar21 + 0x28,ppuVar2);
        uStack_e0 = CONCAT71(uStack_e0._1_7_,1);
        FUN_1006502e4(plVar18,uStack_c0,plVar9,lVar21);
        uStack_f0 = 0;
        FUN_100650328(&uStack_f0);
      }
      plVar1 = plVar1 + 1;
    }
  }
  bVar6 = *(long *)(param_2 + 0x68) == 0;
  FUN_10064fb1c();
  plVar18 = extraout_x8_00;
  if (!bVar6) {
    plVar18 = extraout_x10_01;
  }
  plVar15 = plVar18 + (int)extraout_x8_00[1];
  for (; plVar18 != plVar15; plVar18 = plVar18 + 1) {
    lVar19 = *plVar18;
    uVar7 = *(undefined4 *)(lVar19 + 0x24);
    FUN_10064ff54();
    uVar3 = *(uint *)(lVar19 + 0x10);
    if ((int)uVar3 < 1) {
      uStack_f0 = CONCAT44(2,uVar7);
      func_0x000107c359a0();
    }
    else {
      puVar20 = *(uint **)(lVar19 + 0x18);
      uVar8 = (ulong)uVar3 << 2;
      uVar10 = (ulong)uVar3;
      while (uVar10 != 0) {
        uVar10 = (ulong)*puVar20;
        func_0x000100650208();
        if (uVar10 >> 0x20 != 0) {
          uStack_f0 = CONCAT44((int)uVar10,uVar7);
          func_0x000107c359a0();
        }
        puVar20 = puVar20 + 1;
        uVar8 = uVar8 - 4;
        uVar10 = uVar8;
      }
    }
  }
  bVar6 = *(long *)(param_2 + 0x68) == 0;
  FUN_10064fb1c();
  plVar18 = extraout_x8_01;
  if (!bVar6) {
    plVar18 = extraout_x10_02;
  }
  plVar15 = plVar18 + (int)extraout_x8_01[1];
  for (; plVar18 != plVar15; plVar18 = plVar18 + 1) {
    lVar17 = *plVar18;
    uVar7 = *(undefined4 *)(lVar17 + 0x24);
    FUN_10064ff54();
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0x3f800000;
    puVar4 = *(undefined4 **)(lVar17 + 0x18);
    uStack_8c = uVar7;
    for (lVar19 = (long)*(int *)(lVar17 + 0x10) << 2; lVar19 != 0; lVar19 = lVar19 + -4) {
      func_0x000107c2c760(&uStack_c0,*puVar4);
      puVar4 = puVar4 + 1;
    }
    uVar8 = (ulong)uStack_f0 >> 0x28;
    uStack_f0 = CONCAT35((int3)uVar8,*(undefined5 *)(lVar17 + 0x28));
    FUN_100650360(&puStack_e8,&uStack_c0);
    plVar11 = plVar16;
    FUN_100650484(plVar16,&uStack_70,&uStack_8c);
    uVar7 = uStack_8c;
    if (*plVar11 == 0) {
      lVar19 = 0x58;
      func_0x000107c60e20();
      uStack_78 = 0;
      *(undefined4 *)(lVar19 + 0x20) = uVar7;
      uStack_88 = lVar19;
      puStack_80 = puVar14;
      FUN_1006504d0(lVar19 + 0x28,&uStack_f0);
      uStack_78 = CONCAT71(uStack_78._1_7_,1);
      func_0x000100650504(plVar16,CONCAT44(uStack_6c,uStack_70),plVar11,lVar19);
      uStack_88 = 0;
      func_0x00010065052c(&uStack_88);
    }
    func_0x000100650590(&puStack_e8);
    func_0x000100650590(&uStack_c0);
  }
  return;
}



/* Entry: 10064ff54; end: 10064ff77;  */

undefined4 FUN_10064ff54(int param_1)

{
  if (param_1 - 1U < 5) {
    return *(undefined4 *)(&UNK_10e573238 + (ulong)(param_1 - 1U) * 4);
  }
  return 7;
}



/* Entry: 10064ff78; end: 100650147;  */

undefined1  [16] FUN_10064ff78(float param_1,float param_2,long *param_3,int *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x23;
  undefined1 auVar9 [16];
  long *aplStack_58 [3];
  
  uVar6 = (ulong)*param_4;
  uVar8 = param_3[1];
  if (uVar8 != 0) {
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar8 <= uVar6) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar6 / uVar8;
        }
        unaff_x23 = uVar6 - uVar5 * uVar8;
      }
    }
    plVar7 = *(long **)(*param_3 + unaff_x23 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_100650024;
          uVar5 = plVar7[1];
          if (uVar5 != uVar6) break;
          if ((int)plVar7[2] == *param_4) {
            uVar2 = 0;
            aplStack_58[0] = plVar7;
            goto LAB_100650120;
          }
        }
        if ((uVar8 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar8 <= uVar5) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar5 / uVar8;
          }
          uVar5 = uVar5 - uVar1 * uVar8;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_100650024:
  func_0x0001006315c0(aplStack_58);
  FUN_10065017c();
  FUN_1006501c4();
  if ((uVar8 == 0) || (param_2 * (float)uVar8 < param_1)) {
    func_0x0001006501d8(uVar8 << 1);
    FUN_100600ee0(param_3);
    uVar8 = param_3[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x23 = uVar8 - 1 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar8 <= uVar6) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar6 / uVar8;
        }
        unaff_x23 = uVar6 - uVar3 * uVar8;
      }
    }
  }
  lVar4 = *param_3;
  plVar7 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar7 == (long *)0x0) {
    param_3 = param_3 + 2;
    *aplStack_58[0] = *param_3;
    *param_3 = (long)aplStack_58[0];
    *(long **)(lVar4 + unaff_x23 * 8) = param_3;
    if (*aplStack_58[0] != 0) {
      uVar6 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar6 = uVar6 & uVar8 - 1;
      }
      else if (uVar8 <= uVar6) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar6 / uVar8;
        }
        uVar6 = uVar6 - uVar3 * uVar8;
      }
      *(long **)(lVar4 + uVar6 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar7;
    *plVar7 = (long)aplStack_58[0];
  }
  func_0x0001006501f0();
  FUN_1006316f0();
  uVar2 = 1;
LAB_100650120:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = aplStack_58[0];
  return auVar9;
}



/* Entry: 100650148; end: 10065017b;  */

void FUN_100650148(undefined8 param_1,undefined8 param_2)

{
  FUN_10064ff78(param_1,param_2,param_2);
  return;
}



/* Entry: 10065017c; end: 1006501c3;  */

void FUN_10065017c(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  func_0x000107c60e20();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = *param_4;
  return;
}



/* Entry: 1006501c4; end: 1006502e3;  */

float FUN_1006501c4(void)

{
  long unaff_x19;
  
  return (float)(*(long *)(unaff_x19 + 0x18) + 1);
}



/* Entry: 1006502e4; end: 10065030b;  */

void FUN_1006502e4(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x0001006502c8();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  FUN_10065030c();
  func_0x000100650318();
  return;
}



/* Entry: 10065030c; end: 100650327;  */

/* WARNING: Possible PIC construction at 0x00010002c67c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002c680) */

void FUN_10065030c(void)

{
  long *plVar1;
  long *plVar2;
  long *in_x3;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x19;
  
  plVar2 = *(long **)(unaff_x19 + 8);
  *(bool *)(in_x3 + 3) = in_x3 == plVar2;
  do {
    if ((in_x3 == plVar2) || (plVar7 = (long *)in_x3[2], (*(byte *)(plVar7 + 3) & 1) != 0)) {
      return;
    }
    plVar1 = (long *)plVar7[2];
    plVar6 = (long *)*plVar1;
    if (plVar7 == plVar6) {
      plVar6 = (long *)plVar1[1];
      if ((plVar6 == (long *)0x0) || ((*(byte *)(plVar6 + 3) & 1) != 0)) {
        if (in_x3 == (long *)*plVar7) {
          *(undefined1 *)(plVar7 + 3) = 1;
          *(undefined1 *)(plVar1 + 3) = 0;
          lVar3 = *plVar1;
          lVar5 = *(long *)(lVar3 + 8);
          *plVar1 = lVar5;
          if (lVar5 != 0) {
            *(long **)(lVar5 + 0x10) = plVar1;
          }
          plVar2 = (long *)plVar1[2];
          *(long **)(lVar3 + 0x10) = plVar2;
          if (plVar1 == (long *)*plVar2) {
            *plVar2 = lVar3;
          }
          else {
            plVar2[1] = lVar3;
          }
          *(long **)(lVar3 + 8) = plVar1;
          plVar1[2] = lVar3;
          return;
        }
        goto SUB_10002c89c;
      }
    }
    else if ((plVar6 == (long *)0x0) || ((*(byte *)(plVar6 + 3) & 1) != 0)) {
      plVar2 = plVar7;
      if (in_x3 == (long *)*plVar7) {
        FUN_10015dd98(plVar7);
        plVar2 = (long *)plVar7[2];
        plVar1 = (long *)plVar2[2];
      }
      plVar7 = plVar1;
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 0;
SUB_10002c89c:
      plVar2 = (long *)plVar7[1];
      lVar3 = *plVar2;
      plVar7[1] = lVar3;
      if (lVar3 != 0) {
        *(long **)(lVar3 + 0x10) = plVar7;
      }
      puVar4 = (undefined8 *)plVar7[2];
      plVar2[2] = (long)puVar4;
      if (plVar7 == (long *)*puVar4) {
        *puVar4 = plVar2;
      }
      else {
        puVar4[1] = plVar2;
      }
      *plVar2 = (long)plVar7;
      plVar7[2] = (long)plVar2;
      return;
    }
    *(undefined1 *)(plVar7 + 3) = 1;
    *(bool *)(plVar1 + 3) = plVar1 == plVar2;
    *(undefined1 *)(plVar6 + 3) = 1;
    in_x3 = plVar1;
  } while( true );
}



/* Entry: 100650328; end: 100650347;  */

void FUN_100650328(void)

{
  func_0x00010060f270();
  FUN_100650348();
  return;
}



/* Entry: 100650348; end: 10065035f;  */

void FUN_100650348(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107c3046c(lVar1 + 0x28);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 100650360; end: 10065039b;  */

void FUN_100650360(void)

{
  FUN_100600ca8();
  FUN_10065039c();
  FUN_100650444();
  return;
}



/* Entry: 10065039c; end: 100650437;  */

void FUN_10065039c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x9;
  long *extraout_x9_00;
  long *plVar5;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = param_1;
  uVar3 = param_2;
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    func_0x000107c60c44();
    uVar2 = param_2;
  }
  uVar8 = *(ulong *)(param_1 + 8);
  if (uVar8 < param_2) {
LAB_1006503e4:
    func_0x000107c35100();
    if (uVar3 == 0) {
      func_0x00010b1e6df8(uVar2);
      *(undefined8 *)(uVar2 + 8) = 0;
    }
    else {
      func_0x00010b1e6e10(uVar2 + 8);
      func_0x00010b1ee5f4();
      func_0x00010b1e6df8();
      uVar8 = 0;
      *(ulong *)(uVar2 + 8) = uVar3;
      while (uVar3 != uVar8) {
        func_0x00010b1ebda4();
        uVar8 = extraout_x9;
      }
      if (*(long *)(uVar2 + 0x10) != 0) {
        func_0x00010b1ee534();
        func_0x00010b1ee520();
        lVar4 = extraout_x8;
        plVar6 = extraout_x9_00;
        uVar2 = extraout_x10;
        uVar8 = extraout_x11;
        while (plVar5 = plVar6, plVar6 = (long *)*plVar5, plVar6 != (long *)0x0) {
          uVar7 = plVar6[1];
          if ((uVar3 & uVar2) == 0) {
            uVar7 = uVar7 & uVar2;
          }
          else if (uVar3 <= uVar7) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar7 / uVar3;
            }
            uVar7 = uVar7 - uVar1 * uVar3;
          }
          if (uVar7 != uVar8) {
            if (*(long *)(lVar4 + uVar7 * 8) == 0) {
              *(long **)(lVar4 + uVar7 * 8) = plVar5;
              uVar8 = uVar7;
            }
            else {
              *plVar5 = *plVar6;
              func_0x00010b1eadf0();
              lVar4 = extraout_x8_00;
              plVar6 = extraout_x9_01;
              uVar2 = extraout_x10_00;
              uVar8 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (param_2 < uVar8) {
    func_0x000107c350f4();
    if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else {
      func_0x000107c350ec();
    }
    if (param_2 <= uVar2) {
      param_2 = uVar2;
    }
    if (param_2 < uVar8) goto LAB_1006503e4;
  }
  return;
}



/* Entry: 100650438; end: 100650443;  */

void FUN_100650438(void)

{
  return;
}



/* Entry: 100650444; end: 100650483;  */

void FUN_100650444(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    func_0x000107c2be4c(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 100650484; end: 1006504cf;  */

long * FUN_100650484(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, (int)plVar3[4] <= *param_3) {
        if (*param_3 <= (int)plVar3[4]) goto LAB_1006504cc;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_1006504cc;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_1006504cc:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 1006504d0; end: 10065054b;  */

undefined4 * FUN_1006504d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  FUN_100650360(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10065054c; end: 100650563;  */

void FUN_10065054c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107c2be48(lVar1 + 0x30);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 100650564; end: 1006505b7;  */

void FUN_100650564(undefined8 param_1,long *param_2)

{
  while (param_2 != (long *)0x0) {
    param_2 = (long *)*param_2;
    func_0x000107c60e14();
  }
  return;
}



/* Entry: 1006505b8; end: 1006505cb;  */

void FUN_1006505b8(void)

{
  return;
}



/* Entry: 1006505cc; end: 1006505eb;  */

void FUN_1006505cc(void)

{
  func_0x0001006505c0();
  FUN_1006505ec();
  return;
}



/* Entry: 1006505ec; end: 10065060b;  */

void FUN_1006505ec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10065060c; end: 1006507fb;  */

void FUN_10065060c(long *param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x23;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  uVar8 = (ulong)param_2;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar3 = uVar7 - 1;
    if ((uVar7 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar8;
    }
    else {
      unaff_x23 = uVar8;
      if (uVar7 <= uVar8) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar8 / uVar7;
        }
        unaff_x23 = uVar8 - uVar6 * uVar7;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_1006506bc;
          uVar6 = plVar4[1];
          if (uVar6 != uVar8) break;
          if (*(int *)(plVar4 + 2) == param_2) {
            return;
          }
        }
        if ((uVar7 & uVar3) == 0) {
          uVar6 = uVar6 & uVar3;
        }
        else if (uVar7 <= uVar6) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar6 / uVar7;
          }
          uVar6 = uVar6 - uVar1 * uVar7;
        }
      } while (uVar6 == unaff_x23);
    }
  }
LAB_1006506bc:
  plVar4 = param_1 + 2;
  plVar2 = (long *)0x18;
  func_0x000107c60e20();
  uStack_48 = 1;
  *plVar2 = 0;
  plVar2[1] = uVar8;
  *(int *)(plVar2 + 2) = param_2;
  plStack_58 = plVar2;
  plStack_50 = plVar4;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    FUN_1006507fc(uVar7 << 1);
    FUN_100650814(param_1);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x23 = uVar7 - 1 & uVar8;
    }
    else {
      unaff_x23 = uVar8;
      if (uVar7 <= uVar8) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar8 / uVar7;
        }
        unaff_x23 = uVar8 - uVar3 * uVar7;
      }
    }
  }
  lVar5 = *param_1;
  plVar2 = *(long **)(lVar5 + unaff_x23 * 8);
  if (plVar2 == (long *)0x0) {
    *plStack_58 = *plVar4;
    *plVar4 = (long)plStack_58;
    *(long **)(lVar5 + unaff_x23 * 8) = plVar4;
    if (*plStack_58 != 0) {
      uVar8 = *(ulong *)(*plStack_58 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar3 * uVar7;
      }
      *(long **)(lVar5 + uVar8 * 8) = plStack_58;
    }
  }
  else {
    *plStack_58 = *plVar2;
    *plVar2 = (long)plStack_58;
  }
  plStack_58 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_100650c04(&plStack_58);
  return;
}



/* Entry: 1006507fc; end: 100650813;  */

void FUN_1006507fc(void)

{
  return;
}



/* Entry: 100650814; end: 1006508ab;  */

void FUN_100650814(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *plVar5;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar7 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar7 = param_2;
  }
  plVar9 = (long *)param_1[1];
  bVar2 = plVar9 <= param_2;
  if (plVar9 < param_2) {
LAB_10065085c:
    FUN_1006508ac();
    if (plVar3 == (long *)0x0) {
      FUN_100650be4(plVar7);
      plVar7[1] = 0;
    }
    else {
      plVar9 = plVar7 + 1;
      FUN_1006508b8(plVar9);
      FUN_100650be4(plVar7,plVar9);
      plVar7[1] = (long)plVar3;
      lVar4 = *plVar7;
      for (plVar9 = (long *)0x0; plVar3 != plVar9; plVar9 = (long *)((long)plVar9 + 1)) {
        *(undefined8 *)(lVar4 + (long)plVar9 * 8) = 0;
      }
      if (plVar7[2] != 0) {
        func_0x000100650c3c();
        func_0x000100650c50();
        lVar4 = extraout_x8;
        plVar7 = extraout_x9;
        uVar6 = extraout_x10;
        plVar9 = extraout_x11;
        while (plVar5 = plVar7, plVar7 = (long *)*plVar5, plVar7 != (long *)0x0) {
          plVar8 = (long *)plVar7[1];
          if (((ulong)plVar3 & uVar6) == 0) {
            plVar8 = (long *)((ulong)plVar8 & uVar6);
          }
          else if (plVar3 <= plVar8) {
            uVar1 = 0;
            if (plVar3 != (long *)0x0) {
              uVar1 = (ulong)plVar8 / (ulong)plVar3;
            }
            plVar8 = (long *)((long)plVar8 - uVar1 * (long)plVar3);
          }
          if (plVar8 != plVar9) {
            if (*(long *)(lVar4 + (long)plVar8 * 8) == 0) {
              *(long **)(lVar4 + (long)plVar8 * 8) = plVar5;
              plVar9 = plVar8;
            }
            else {
              func_0x000107c35b18();
              lVar4 = extraout_x8_00;
              plVar7 = extraout_x9_00;
              uVar6 = extraout_x10_00;
              plVar9 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!bVar2) {
    func_0x000107c35b34();
    if ((bVar2) && (((ulong)plVar9 & (long)plVar9 - 1U) == 0)) {
      func_0x000107c35b1c();
    }
    else {
      func_0x000107c60c44();
    }
    if (param_2 <= plVar7) {
      param_2 = plVar7;
    }
    if (param_2 < plVar9) goto LAB_10065085c;
  }
  return;
}



/* Entry: 1006508ac; end: 1006508b7;  */

void FUN_1006508ac(void)

{
  return;
}



/* Entry: 1006508b8; end: 1006508d3;  */

void FUN_1006508b8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  if (param_2 == 0) {
    FUN_100650be4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar6 = param_1 + 1;
    FUN_1006508b8(plVar6);
    FUN_100650be4(param_1,plVar6);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x000100650c3c();
      func_0x000100650c50();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x000107c35b18();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_00;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1006508d4; end: 10065099f;  */

void FUN_1006508d4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_100650be4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar6 = param_1 + 1;
    FUN_1006508b8(plVar6);
    FUN_100650be4(param_1,plVar6);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x000100650c3c();
      func_0x000100650c50();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x000107c35b18();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_00;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1006509a0; end: 100650b9f;  */

void FUN_1006509a0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uStack_98;
  undefined1 auStack_90 [48];
  
  FUN_1000285a8(0x112dc30a8,&UNK_10d980298);
  puVar1 = &UNK_1016f2224;
  FUN_1000823a8(&UNK_1016f2224,0);
  puVar2 = puVar1;
  FUN_1000cad14();
  puVar3 = puVar2;
  FUN_1000cad14();
  puVar4 = puVar3;
  FUN_1000cad14();
  puVar5 = puVar4;
  FUN_1000cad14();
  puVar6 = puVar5;
  FUN_1000cad14();
  puVar7 = puVar6;
  func_0x0001000ad7c4();
  puVar8 = puVar7;
  FUN_1000cad14();
  puVar9 = puVar8;
  FUN_1000cad14();
  puVar10 = puVar9;
  FUN_100083b20(auStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1000cad14();
  puVar11 = puVar10;
  func_0x0001000ad7c4();
  puVar12 = puVar11;
  FUN_1000cad14();
  puVar13 = puVar12;
  func_0x0001000ad7c4();
  puVar14 = puVar13;
  FUN_1000cad14();
  puVar15 = puVar14;
  FUN_1000cad14();
  puVar16 = puVar15;
  func_0x0001000ad7c4();
  puVar17 = puVar16;
  FUN_1000cad14();
  uVar18 = 0;
  FUN_1002180ec(0);
  func_0x000107c610f8();
  FUN_10065b164(uVar18,puVar2,puVar3,puVar4,puVar5,puVar6,puVar7,puVar8,puVar9,auStack_90,uStack_98,
                puVar10,puVar11,puVar12,puVar13,puVar14,puVar15,puVar16,puVar17);
  func_0x000107c61574(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 100650ba0; end: 100650be3;  */

void FUN_100650ba0(void)

{
  long unaff_x20;
  
  FUN_1006509a0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 100650be4; end: 100650c03;  */

void FUN_100650be4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100650c04; end: 100650c23;  */

void FUN_100650c04(void)

{
  func_0x00010064b9f4();
  FUN_100650c24();
  return;
}



/* Entry: 100650c24; end: 100650c6b;  */

void FUN_100650c24(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100650c6c; end: 100650c97;  */

undefined8 FUN_100650c6c(undefined8 param_1)

{
  func_0x000100650c64();
  FUN_100650c98(param_1);
  return param_1;
}



/* Entry: 100650c98; end: 100650cd7;  */

long FUN_100650c98(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_100667e3c();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_100667edc();
  }
  func_0x000107c60e14();
  FUN_100650ce4(param_1 + 0x48);
  FUN_100650d40(param_1 + 0x30);
  FUN_100650d70(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 100650cd8; end: 100650ce3;  */

void FUN_100650cd8(void)

{
  return;
}



/* Entry: 100650ce4; end: 100650d0b;  */

void FUN_100650ce4(void)

{
  long extraout_x8;
  
  FUN_100650cd8();
  if (extraout_x8 != 0) {
    FUN_100667fc8();
  }
  return;
}



/* Entry: 100650d0c; end: 100650d3f;  */

long FUN_100650d0c(long param_1)

{
  FUN_100650ce4(param_1 + 0x38);
  FUN_100650d40(param_1 + 0x20);
  FUN_100650d70(param_1 + 8);
  return param_1;
}



/* Entry: 100650d40; end: 100650d6f;  */

long * FUN_100650d40(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1000681a0(param_1);
  }
  return param_1;
}



/* Entry: 100650d70; end: 100650d9f;  */

long * FUN_100650d70(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1000681a0(param_1);
  }
  return param_1;
}



/* Entry: 100650da0; end: 100650e93;  */

undefined8 FUN_100650da0(long *param_1)

{
  undefined1 in_ZR;
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_70 [80];
  
  if ((bRam000000011383a658 & 1) == 0) {
    iVar1 = 0x1383a658;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_10064c520(0x11383a5e0);
      func_0x000107c60e4c(0x11383a658);
    }
  }
  FUN_10064bce4();
  if (*param_1 != 0) {
    func_0x00010064bcec();
    if (extraout_x8 != 0) {
      do {
        FUN_10011a6d8();
      } while (extraout_w10 != 0);
    }
    func_0x00010064bcf8(auStack_70);
    FUN_10011a768(0x11383a660);
    if (!(bool)in_ZR) {
      func_0x00010060f3d0();
      func_0x00010064bd04(0x11383a660);
    }
    FUN_100651a38(auStack_70);
  }
  func_0x00010064c2fc();
  return 0x11383a5e0;
}



/* Entry: 100650e94; end: 100650eff;  */

undefined1  [16] FUN_100650e94(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  int *piStack_28;
  
  piVar3 = (int *)*param_1;
  if (piVar3 == (int *)0x0) {
    piStack_28 = (int *)0x0;
    uVar4 = param_1[1];
  }
  else {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar4 = param_1[1];
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      piStack_28 = piVar3;
    } while (cVar1 != '\0');
  }
  FUN_10014dd80(&piStack_28);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = piVar3;
  return auVar5;
}



/* Entry: 100650f00; end: 100650f77;  */

void FUN_100650f00(void)

{
  undefined1 in_ZR;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [72];
  
  func_0x00010064bd0c();
  FUN_10064bd98(auStack_68,auStack_80);
  func_0x00010064bda8();
  func_0x00010064bdb0();
  func_0x00010064bdb8();
  func_0x00010064bdc8();
  FUN_10064c224();
  if ((bool)in_ZR) {
    func_0x00010064c230();
    FUN_10006369c(0x11383a5e0);
  }
  func_0x00010064c2b0();
  func_0x00010064c2b8();
  return;
}



/* Entry: 100650f78; end: 100651a37;  */

undefined4 *
FUN_100650f78(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
             ulong param_5,undefined4 param_6,undefined8 param_7,undefined8 *param_8,
             undefined **param_9,undefined4 *param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  
  *param_1 = param_2;
  func_0x00010064890c(param_1 + 2,param_3);
  func_0x0001006510d8(&puStack_e0,param_4);
  func_0x0001001a7750(param_1 + 10,&puStack_e0);
  func_0x0001001832d8(&puStack_e0);
  param_1[0x28] = param_6;
  uVar5 = param_8[1];
  uVar4 = *param_8;
  *(undefined8 *)(param_1 + 0x2e) = param_8[2];
  *(undefined8 *)(param_1 + 0x2c) = uVar5;
  *(undefined8 *)(param_1 + 0x2a) = uVar4;
  puVar1 = param_1 + 0x30;
  func_0x0001001c2158();
  param_1[0x32] = *param_10;
  *(undefined1 *)(param_1 + 0x36) = param_11;
  *(undefined8 *)(param_1 + 0x38) = param_13;
  if ((param_5 & 1) == 0) {
    func_0x000100651168();
    puStack_e0 = &UNK_10b3e4844;
    uStack_d8 = 0;
    puVar2 = param_1 + 0x3a;
    func_0x000100651170();
    puVar3 = &UNK_10b3e782c;
    puStack_f8 = puVar2;
    puStack_f0 = param_9;
    func_0x0001006511d4(&UNK_10b3e782c,&puStack_e0,&puStack_f8);
    param_9 = &puStack_e8;
    puStack_e8 = puVar3;
    func_0x00010065124c();
    func_0x000100645af0();
    func_0x000100645af8();
    if ((int)puVar1 != 0) {
      return puVar1;
    }
  }
  puStack_e0 = (undefined *)0x0;
  uStack_d8 = 0;
  puVar1 = param_3;
  func_0x00010064670c();
  func_0x00010065146c();
  puStack_f8 = puVar1;
  puStack_f0 = param_9;
  func_0x000100651478(param_3,&puStack_f8,&puStack_e0);
  func_0x000100645af8();
  if ((int)param_3 == 0) {
    func_0x0001006475f0();
    func_0x00010064890c(param_1 + 6,&puStack_e0);
  }
  func_0x000100652388();
  return param_3;
}



/* Entry: 100651a38; end: 100651a53;  */

long FUN_100651a38(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010064c2cc();
  lVar1 = unaff_x19;
  FUN_1000df750();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 100651a54; end: 100651b0f;  */

undefined1 * FUN_100651a54(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_NG;
  char in_OV;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x10;
  undefined1 *extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  undefined8 unaff_x22;
  undefined1 auStack_48 [24];
  
  FUN_100651b98();
  func_0x000107c60c84(auStack_48);
  func_0x000100651bb0();
  func_0x000100651bc4();
  uVar1 = extraout_x11;
  uVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    uVar2 = unaff_x22;
  }
  func_0x000100651bd8(uVar1,uVar2);
  func_0x000100651bc4();
  uVar1 = extraout_x11_00;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8_00;
  }
  func_0x000100651c9c(uVar1);
  func_0x000100651bc4();
  uVar1 = extraout_x11_01;
  puVar3 = extraout_x10_00;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8_01;
    puVar3 = auStack_48;
  }
  func_0x000100651bd8(uVar1,puVar3);
  func_0x000100651bc4();
  uVar1 = extraout_x11_02;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8_02;
  }
  func_0x000100651c9c(uVar1);
  func_0x000100651ca8();
  FUN_100651f68();
  return puVar3;
}



/* Entry: 100651b10; end: 100651b47;  */

void FUN_100651b10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_100651a54(param_2,param_3,param_1);
  return;
}



/* Entry: 100651b48; end: 100651b97;  */

undefined8 FUN_100651b48(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  FUN_100651b10(auStack_38,*param_1,param_1[1]);
  func_0x00010064c230();
  FUN_10006369c(param_2);
  FUN_10011a89c();
  return param_2;
}



/* Entry: 100651b98; end: 100651be7;  */

void FUN_100651b98(void)

{
  return;
}



/* Entry: 100651be8; end: 100651c13;  */

long FUN_100651be8(long param_1,long param_2,char *param_3)

{
  func_0x000100651be4(param_1,(long)*param_3,param_2 - param_1);
  if (param_1 != 0) {
    param_2 = param_1;
  }
  return param_2;
}



/* Entry: 100651c14; end: 100651c33;  */

void FUN_100651c14(void)

{
  FUN_100651be8();
  return;
}



/* Entry: 100651c34; end: 100651c93;  */

char * FUN_100651c34(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  FUN_100651c14();
  pcVar1 = param_1;
  if (param_2 == param_1) {
    return param_2;
  }
  do {
    do {
      pcVar1 = pcVar1 + 1;
      if (pcVar1 == param_2) {
        return param_1;
      }
    } while (*pcVar1 == *param_3);
    *param_1 = *pcVar1;
    param_1 = param_1 + 1;
  } while( true );
}



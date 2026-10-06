/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024f2e0c; end: 1024f2eeb;  */

long FUN_1024f2e0c(double param_1)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  double dVar4;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  dVar4 = (double)(long)(param_1 * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f2ee4);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < dVar4) {
    if (dVar4 < 9.223372036854776e+18) {
      return (long)dVar4;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f2eec);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f2ee8);
  (*pcVar1)();
}



/* Entry: 1024f2eec; end: 1024f2f3f;  */

void FUN_1024f2eec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024f2f40; end: 1024f32b3;  */

undefined * FUN_1024f2f40(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  char acStack_80 [8];
  undefined *apuStack_78 [2];
  long lStack_68;
  
  lVar6 = 0;
  FUN_1024de864();
  lVar15 = *(long *)(lVar6 + -8);
  lStack_68 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pcVar13 = acStack_80 + lVar4;
  lVar6 = 0x112ea1f58;
  func_0x0001000285a8(0x112ea1f58,&UNK_10dab4210);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = 0;
  uVar14 = *(ulong *)(param_1 + 0x10);
  apuStack_78[1] = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    if (uVar11 == uVar14) {
      return apuStack_78[1];
    }
    uVar12 = uVar11;
    uVar1 = uVar11;
    if (uVar11 < uVar14) {
      uVar1 = uVar14;
    }
    while( true ) {
      if (uVar1 == uVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1024f3198);
        (*pcVar5)();
      }
      uVar11 = uVar12 + 1;
      iVar3 = *(int *)(lVar6 + 0x30);
      func_0x0001024e1440(param_1 + ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                                    ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff)) +
                          *(long *)(lVar15 + 0x48) * uVar12,pcVar13 + (iVar3 - extraout_x8_00));
      FUN_1024e4170(pcVar13 + (iVar3 - extraout_x8_00),pcVar13);
      if (pcVar13[*(int *)(lStack_68 + 0x20)] == '\x01') break;
      func_0x0001024e41b4(pcVar13);
      uVar12 = uVar11;
      if (uVar14 == uVar11) {
        return apuStack_78[1];
      }
    }
    puVar9 = *(undefined **)pcVar13;
    uVar2 = *(undefined8 *)((long)apuStack_78 + lVar4);
    puVar7 = (undefined *)0x0;
    func_0x000102dccbd8();
    func_0x000107c610f8();
    apuStack_78[0] = puVar7;
    func_0x000107c61434(uVar2);
    func_0x000102dcbe70(puVar9,uVar2,uVar12);
    puVar7 = apuStack_78[1];
    puVar8 = apuStack_78[1];
    apuStack_78[0] = puVar9;
    func_0x000107c61550();
    if ((((int)puVar8 == 0) || ((long)puVar7 < 0)) ||
       (puVar9 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar7 >> 0x3e == 0) {
        puVar8 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar8 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar7) {
          puVar8 = puVar7;
        }
        func_0x000107c60480(puVar8);
      }
      puVar9 = (undefined *)0x0;
      FUN_1024e822c(0,puVar8 + 1,1,puVar7);
    }
    puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar7 = (undefined *)(uVar1 + 1);
    apuStack_78[1] = puVar9;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_1024e822c(puVar10,puVar7,1,puVar9);
      puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      apuStack_78[1] = puVar10;
    }
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(undefined **)(puVar8 + uVar1 * 8 + 0x20) = apuStack_78[0];
    if ((ulong)apuStack_78[1] >> 0x3e != 0) {
      puVar7 = puVar8;
      if ((undefined *)0x7fffffffffffffff < apuStack_78[1]) {
        puVar7 = apuStack_78[1];
      }
      func_0x000107c60480();
    }
    func_0x0001024e41b4(pcVar13);
  } while ((long)puVar7 < 10);
  return apuStack_78[1];
}



/* Entry: 1024f32b4; end: 1024f3307; -[SCFriendingInterstitialsOperaPlugin navigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f32b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112ea20d8;
  func_0x000107c61618();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c4d4b8();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1024f3308; end: 1024f331b; -[SCFriendingInterstitialsOperaPlugin addEventListenersWithEventAnnouncing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f3308(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ea20c8,param_3);
  return;
}



/* Entry: 1024f331c; end: 1024f332f; -[SCFriendingInterstitialsOperaPlugin setPlaylistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f331c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ea20d0,param_3);
  return;
}



/* Entry: 1024f3330; end: 1024f344f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f3330(long param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
LAB_1024f341c:
    func_0x000107c61170(param_1);
  }
  else {
    uVar1 = (ulong)(param_3 & 1);
    FUN_1024e2694(uVar1,param_4);
    if (uVar1 != 0) {
      func_0x0001024ef654();
      uVar2 = *(undefined8 *)(param_1 + _DAT_112ea20e8);
      *(undefined8 *)(param_1 + _DAT_112ea20e8) = 0;
      func_0x000107c61574(uVar2);
      lVar3 = param_1 + _DAT_112ea20d0;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c5fadc(param_5,param_6);
        func_0x000107c4e9d0(lVar3);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(param_5);
        func_0x000107c615e8(param_2);
        goto LAB_1024f341c;
      }
    }
    func_0x000107c61170(param_1);
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 1024f3450; end: 1024f356b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f3450(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c61604(unaff_x20 + _DAT_112ea20d8,param_1);
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112ea20e0));
  if (param_1 != 0) {
    func_0x000107c3dc78();
    func_0x000107c61180();
    if (param_1 != 0) {
      puVar1 = &UNK_110517f50;
      func_0x000107c613fc(&UNK_110517f50,0x18,7);
      func_0x000107c61614(puVar1 + 0x10);
      pcStack_40 = FUN_1024f356c;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      uStack_50 = 0x1024f3660;
      puStack_48 = &UNK_110517f68;
      puStack_38 = puVar1;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      lVar3 = param_1;
      func_0x000107c5c320(param_1);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c61170(param_1);
      func_0x000107c3e924(lVar3);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 1024f356c; end: 1024f35bb;  */

void FUN_1024f356c(void)

{
  func_0x000104454a14(FUN_1024f38b0);
  return;
}



/* Entry: 1024f35bc; end: 1024f36ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f35bc(ulong param_1,ulong param_2,long param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_3 + _DAT_112ea20f8);
    uVar2 = ((ulong *)(param_3 + _DAT_112ea20f8))[1];
    if ((param_1 == uVar1 && param_2 == uVar2) ||
       (func_0x000107c605b8(param_1,param_2,uVar1,uVar2,0), (param_1 & 1) != 0)) {
      (**(code **)(param_3 + *param_4))();
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1024f36ac; end: 1024f36c7;  */

void FUN_1024f36ac(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1024f36c8; end: 1024f370f; -[SCFriendingInterstitialsOperaPlugin setOperaControlling:] */

void FUN_1024f36c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1024f3450(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024f3710; end: 1024f373b; -[SCFriendingInterstitialsOperaPlugin type] */

void FUN_1024f3710(void)

{
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0a6c00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024f373c; end: 1024f379b; -[SCFriendingInterstitialsOperaPlugin init] */

void FUN_1024f373c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingInterstitialOperaPlugin.FriendingInterstitialsOperaPlugin",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f3768);
  (*pcVar1)();
}



/* Entry: 1024f379c; end: 1024f384f; -[SCFriendingInterstitialsOperaPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024f3810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024f3814) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f379c(long param_1)

{
  func_0x000100cf6ea8(param_1 + _DAT_112ea20c8);
  func_0x000100cf6ea8(param_1 + _DAT_112ea20d0);
  func_0x000100cf6ea8(param_1 + _DAT_112ea20d8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea20f0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea20f8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea2100 + 8));
  return;
}



/* Entry: 1024f3850; end: 1024f38af;  */

void FUN_1024f3850(void)

{
  func_0x000107c61168(&PTR_PTR_112849c40);
  return;
}



/* Entry: 1024f38b0; end: 1024f38b7;  */

void FUN_1024f38b0(void)

{
  FUN_1024f35bc();
  return;
}



/* Entry: 1024f38b8; end: 1024f38bb; -[SCFriendingInterstitialsOperaPlugin playlistDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f38b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ea20f0));
  return;
}



/* Entry: 1024f38bc; end: 1024f38bf; -[SCFriendingInterstitialsOperaPlugin dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f38bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ea20f0));
  return;
}



/* Entry: 1024f38c0; end: 1024f3983;  */

/* WARNING: Possible PIC construction at 0x0001024f3958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024f3968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024f395c) */
/* WARNING: Removing unreachable block (ram,0x0001024f396c) */

void FUN_1024f38c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_110518068;
  func_0x000107c613fc(&UNK_110518068,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112ea2140;
  func_0x0001000285a8(0x112ea2140,&UNK_10dab4330);
  func_0x000107c613fc();
  pcVar6 = FUN_1024f39d0;
  func_0x0001000841fc(FUN_1024f39d0,puVar4,uVar5);
  func_0x000100084214(&UNK_10dab4300,0x2f,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1024f3984; end: 1024f3993;  */

undefined1  [16] FUN_1024f3984(void)

{
  return ZEXT816(0x110518048);
}



/* Entry: 1024f3994; end: 1024f39cf;  */

void FUN_1024f3994(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024f39d0; end: 1024f3cdb;  */

void FUN_1024f39d0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  
  uVar3 = *param_2;
  func_0x0001000285a8(0x112ea2148,&UNK_10dab4338);
  puVar1 = &uStack_58;
  uStack_58 = uVar3;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001024f3a7c();
  func_0x000107c61574(puVar1);
  func_0x000100082720("BlockedOrMutedUsersEntryPointProvider",0x25,2);
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 1024f3cdc; end: 1024f3cfb;  */

undefined1  [16] FUN_1024f3cdc(void)

{
  return ZEXT816(0x110518138);
}



/* Entry: 1024f3cfc; end: 1024f42bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1024f3cfc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined1 uVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea2170) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea2178) = 0;
  *(long *)(unaff_x20 + _DAT_112ea2180) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea2188) = param_2;
  *(long *)(unaff_x20 + _DAT_112ea2190) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea2198) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea21a0) = param_5;
  *(long *)(unaff_x20 + _DAT_112ea21a8) = param_7;
  uVar15 = (undefined1)*(undefined8 *)(param_3 + _DAT_113092298);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x00010083f4d0();
  *(undefined1 *)(unaff_x20 + _DAT_112ea21b0) = uVar15;
  puVar1 = auStack_70;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  uVar13 = *(undefined8 *)(param_1 + _DAT_112f31268);
  uVar14 = *(undefined8 *)(param_1 + _DAT_112f31270);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x00010083f500();
  puVar2 = PTR_PTR_1126c2d78;
  func_0x000107c610f8();
  func_0x000107c46d14();
  func_0x000107c61170(puVar1);
  func_0x000107c5a444(puVar2);
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0a6f40);
  func_0x000107c520f4(puVar2);
  func_0x000107c61170();
  func_0x00010083f588();
  func_0x000107c61180();
  func_0x000107c520fc(puVar2);
  func_0x000107c61170();
  func_0x00010083f5a0();
  puVar3 = PTR_PTR_1126c2fb0;
  func_0x000107c610f8(PTR_PTR_1126c2fb0);
  func_0x000107c45eb4();
  func_0x000107c5a2b4();
  func_0x000107c556a8(puVar3);
  func_0x000107c59c78(puVar3);
  func_0x000107c5271c(puVar3);
  func_0x000107c52b8c(puVar2);
  puVar4 = PTR_PTR_1126aa960;
  func_0x000107c610f8();
  func_0x000107c46ca0();
  puVar5 = PTR_PTR_1126aa968;
  func_0x000107c610f8();
  func_0x000107c456d8();
  lVar12 = *(long *)(puVar1 + _DAT_112ea2170);
  *(undefined **)(puVar1 + _DAT_112ea2170) = puVar5;
  func_0x000107c61170();
  func_0x0001008201f0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar12 + 0x18) = 3;
  *(undefined8 *)(lVar12 + 0x10) = 1;
  *(undefined **)(lVar12 + 0x20) = puVar2;
  uVar6 = 0;
  func_0x00010082024c(0);
  func_0x000107c61174(puVar2);
  lVar7 = lVar12;
  func_0x000107c5fc48(lVar12,uVar6);
  func_0x000107c61574(lVar12);
  func_0x000107c5707c(uVar13);
  func_0x000107c61170(lVar7);
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar6 = *(undefined8 *)(puVar1 + _DAT_112ea2178);
  *(undefined **)(puVar1 + _DAT_112ea2178) = puVar5;
  func_0x000107c61174();
  func_0x000107c61170(uVar6);
  lVar7 = param_7;
  func_0x000107c41090();
  func_0x000107c61180();
  lVar12 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar12 != 0) {
    lVar7 = lVar12;
    func_0x000107c4442c(lVar12);
    func_0x000107c61180();
    lVar8 = lVar7;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    puVar9 = &UNK_1105182f0;
    func_0x000107c613fc(&UNK_1105182f0,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,puVar1);
    puVar10 = &UNK_110518318;
    func_0x000107c613fc(&UNK_110518318,0x28,7);
    *(undefined **)(puVar10 + 0x10) = puVar9;
    *(undefined8 *)(puVar10 + 0x18) = uVar13;
    *(undefined **)(puVar10 + 0x20) = puVar4;
    puStack_80 = &UNK_10083ff54;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_10083fefc;
    puStack_88 = &UNK_110518330;
    ppuVar11 = &puStack_a0;
    puStack_78 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    puVar9 = puStack_78;
    func_0x000107c61174(uVar13);
    func_0x000107c61174(puVar4);
    func_0x000107c61574(puVar9);
    lVar7 = lVar8;
    func_0x000107c5c320(lVar8);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(lVar8);
    func_0x000107c3e924(lVar7);
    func_0x000107c615e8(lVar12);
    func_0x000107c61170(lVar7);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar14);
  return puVar1;
}



/* Entry: 1024f42c0; end: 1024f4353; -[_TtC34SCAddFriendsHeaderButtonEntryPoint32AddFriendsHeaderButtonEntryPoint _handleOpenAddFriendsPageAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f42c0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f31278;
  lVar2 = *(long *)(param_1 + _DAT_112ea2180);
  func_0x000107c61428(lVar2 + _DAT_112f31278,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61174(param_1);
    func_0x000107c41d80(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1024f4354; end: 1024f43b3; -[_TtC34SCAddFriendsHeaderButtonEntryPoint32AddFriendsHeaderButtonEntryPoint init] */

void FUN_1024f4354(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAddFriendsHeaderButtonEntryPoint.AddFriendsHeaderButtonEntryPoint",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f4380);
  (*pcVar1)();
}



/* Entry: 1024f43b4; end: 1024f444b; -[_TtC34SCAddFriendsHeaderButtonEntryPoint32AddFriendsHeaderButtonEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024f43d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024f43f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024f4410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024f4430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024f4414) */
/* WARNING: Removing unreachable block (ram,0x0001024f43f4) */
/* WARNING: Removing unreachable block (ram,0x0001024f43d4) */
/* WARNING: Removing unreachable block (ram,0x0001024f4434) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f43b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea2180));
  return;
}



/* Entry: 1024f444c; end: 1024f445b;  */

undefined1  [16] FUN_1024f444c(void)

{
  return ZEXT816(0x110518368);
}



/* Entry: 1024f445c; end: 1024f460f;  */

ulong FUN_1024f445c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024f4540);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024f4544);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c2d78;
    func_0x000107c61168(PTR_PTR_1126c2d78);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c2d78;
    func_0x000107c61168(PTR_PTR_1126c2d78);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x00010082024c(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024f4610);
  (*pcVar2)();
}



/* Entry: 1024f4610; end: 1024f4623;  */

void FUN_1024f4610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1024f4624; end: 1024f4663;  */

void FUN_1024f4624(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  func_0x00010081fda4(param_1,param_2);
  return;
}



/* Entry: 1024f4664; end: 1024f46c3; -[_TtC30SCSearchHeaderButtonEntryPoint28SearchHeaderButtonEntryPoint init] */

void FUN_1024f4664(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSearchHeaderButtonEntryPoint.SearchHeaderButtonEntryPoint",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f4690);
  (*pcVar1)();
}



/* Entry: 1024f46c4; end: 1024f46fb; -[_TtC30SCSearchHeaderButtonEntryPoint28SearchHeaderButtonEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024f46e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024f46e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f46c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea21f8));
  return;
}



/* Entry: 1024f46fc; end: 1024f470b;  */

undefined1  [16] FUN_1024f46fc(void)

{
  return ZEXT816(0x1105185c0);
}



/* Entry: 1024f470c; end: 1024f482f;  */

void FUN_1024f470c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea2230,&UNK_10dab45f0);
  puVar1 = &UNK_110518688;
  func_0x000107c613fc(&UNK_110518688,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1024f4830,puVar1);
  return;
}



/* Entry: 1024f4830; end: 1024f484b;  */

/* WARNING: Possible PIC construction at 0x0001024f4804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024f4814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024f4808) */
/* WARNING: Removing unreachable block (ram,0x0001024f4818) */

void FUN_1024f4830(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0;
  func_0x0001024f4888();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  *param_1 = lVar5;
  param_1[1] = (long)&PTR_DAT_1105186c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1024f484c; end: 1024f48a7;  */

void FUN_1024f484c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024f48a8; end: 1024f4d2f;  */

void FUN_1024f48a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  
  puVar2 = PTR_PTR_1126aa970;
  func_0x000107c610f8(PTR_PTR_1126aa970);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1024f5018;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101016bdc;
  puStack_88 = &UNK_1105186d0;
  ppuVar4 = &puStack_a0;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c6157c();
  func_0x000107c46b38(puVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(unaff_x20);
  func_0x000107c56a84(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000100083b20(&puStack_a0);
  puVar3 = puStack_a0;
  puVar5 = puStack_a0;
  func_0x000107c451f8();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  if (puVar3 != (undefined *)0x0) {
    puVar5 = puVar3;
    func_0x000107c45200();
    func_0x000107c61180();
    func_0x000107c615e8(puVar3);
    puVar3 = puVar5;
    func_0x000107c451f4();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = puVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar5 != (undefined *)0x0) {
      func_0x0001000285a8(0x112ea2300,&UNK_10dab46e0);
      puVar3 = &UNK_110518708;
      func_0x000107c613fc(&UNK_110518708,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_2);
      puVar6 = &UNK_1105187d0;
      func_0x000107c613fc(&UNK_1105187d0,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(undefined **)(puVar6 + 0x18) = puVar3;
      func_0x000107c615f0(puVar5);
      pcVar7 = FUN_1024f50c8;
      func_0x0001000823a8(FUN_1024f50c8,puVar6);
      puVar3 = PTR_PTR_1126b1678;
      func_0x000107c610f8(PTR_PTR_1126b1678);
      pcStack_80 = (code *)0x1024f50ec;
      puStack_a0 = puVar1;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_101016bdc;
      puStack_88 = &UNK_1105187e8;
      ppuVar4 = &puStack_a0;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c6157c(pcVar7);
      func_0x000107c46b38(puVar3);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(pcVar7);
      func_0x000107c5997c(puVar2);
      func_0x000107c615e8(puVar5);
      func_0x000107c61574(pcVar7);
      func_0x000107c61170(puVar3);
    }
  }
  func_0x0001000285a8(0x112ea22f0,&UNK_10dab46d0);
  puVar3 = &UNK_110518708;
  puVar6 = puVar3;
  func_0x000107c613fc(&UNK_110518708,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,param_2);
  puVar5 = &UNK_110518730;
  func_0x000107c613fc(&UNK_110518730,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
  *(undefined **)(puVar5 + 0x18) = puVar6;
  func_0x000107c6157c();
  uVar8 = 0x1024f5064;
  func_0x0001000823a8(0x1024f5064,puVar5);
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_80 = (code *)0x1024f50e8;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101016bdc;
  puStack_88 = &UNK_110518748;
  ppuVar4 = &puStack_a0;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c6157c(uVar8);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(uVar8);
  func_0x000107c596cc(puVar2);
  func_0x000107c61170(puVar5);
  func_0x0001000285a8(0x112ea22f8,&UNK_10dab46d8);
  func_0x000107c613fc(&UNK_110518708,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_2);
  puVar5 = &UNK_110518780;
  func_0x000107c613fc(&UNK_110518780,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  func_0x000107c6157c();
  uVar9 = 0x1024f506c;
  func_0x0001000823a8(0x1024f506c,puVar5);
  puVar3 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_80 = FUN_1024f5074;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101016bdc;
  puStack_88 = &UNK_110518798;
  ppuVar4 = &puStack_a0;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c46b38(puVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(uVar9);
  func_0x000107c5a270(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c567a0(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  return;
}



/* Entry: 1024f4d30; end: 1024f4da7;  */

void FUN_1024f4d30(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c40a3c();
  func_0x000107c61180();
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c57740(param_2);
  func_0x000107c61170(param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 1024f4da8; end: 1024f5013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f4da8(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lStack_68;
  long lStack_60;
  undefined8 auStack_58 [3];
  
  func_0x000100083b20(auStack_58);
  uVar3 = 0x112ea2308;
  func_0x0001000285a8(0x112ea2308,&UNK_10dab46f0);
  func_0x000107c610f8();
  uVar4 = auStack_58[0];
  func_0x00010017da58(auStack_58[0],uVar3);
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  lVar6 = 0;
  FUN_1024f5198();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar2 = _DAT_112ea2318;
  func_0x000107c61614(lVar7 + _DAT_112ea2318,0);
  *(undefined8 *)(lVar7 + _DAT_112ea2320) = 0;
  *(undefined **)(lVar7 + _DAT_112ea2310) = puVar5;
  func_0x000107c61604(lVar7 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar7;
  lStack_60 = lVar6;
  func_0x000107c61174(puVar5);
  plVar8 = &lStack_68;
  func_0x000107c61154(plVar8,puVar1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_3);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 1024f5014; end: 1024f5017;  */

void FUN_1024f5014(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  
  puVar2 = PTR_PTR_1126aa970;
  func_0x000107c610f8(PTR_PTR_1126aa970);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1024f5018;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101016bdc;
  puStack_88 = &UNK_1105186d0;
  ppuVar4 = &puStack_a0;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c6157c();
  func_0x000107c46b38(puVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(unaff_x20);
  func_0x000107c56a84(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000100083b20(&puStack_a0);
  puVar3 = puStack_a0;
  puVar5 = puStack_a0;
  func_0x000107c451f8();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  if (puVar3 != (undefined *)0x0) {
    puVar5 = puVar3;
    func_0x000107c45200();
    func_0x000107c61180();
    func_0x000107c615e8(puVar3);
    puVar3 = puVar5;
    func_0x000107c451f4();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = puVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar5 != (undefined *)0x0) {
      func_0x0001000285a8(0x112ea2300,&UNK_10dab46e0);
      puVar3 = &UNK_110518708;
      func_0x000107c613fc(&UNK_110518708,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_2);
      puVar6 = &UNK_1105187d0;
      func_0x000107c613fc(&UNK_1105187d0,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(undefined **)(puVar6 + 0x18) = puVar3;
      func_0x000107c615f0(puVar5);
      pcVar7 = FUN_1024f50c8;
      func_0x0001000823a8(FUN_1024f50c8,puVar6);
      puVar3 = PTR_PTR_1126b1678;
      func_0x000107c610f8(PTR_PTR_1126b1678);
      pcStack_80 = (code *)0x1024f50ec;
      puStack_a0 = puVar1;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_101016bdc;
      puStack_88 = &UNK_1105187e8;
      ppuVar4 = &puStack_a0;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c6157c(pcVar7);
      func_0x000107c46b38(puVar3);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(pcVar7);
      func_0x000107c5997c(puVar2);
      func_0x000107c615e8(puVar5);
      func_0x000107c61574(pcVar7);
      func_0x000107c61170(puVar3);
    }
  }
  func_0x0001000285a8(0x112ea22f0,&UNK_10dab46d0);
  puVar3 = &UNK_110518708;
  puVar6 = puVar3;
  func_0x000107c613fc(&UNK_110518708,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,param_2);
  puVar5 = &UNK_110518730;
  func_0x000107c613fc(&UNK_110518730,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
  *(undefined **)(puVar5 + 0x18) = puVar6;
  func_0x000107c6157c();
  uVar8 = 0x1024f5064;
  func_0x0001000823a8(0x1024f5064,puVar5);
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_80 = (code *)0x1024f50e8;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101016bdc;
  puStack_88 = &UNK_110518748;
  ppuVar4 = &puStack_a0;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c6157c(uVar8);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(uVar8);
  func_0x000107c596cc(puVar2);
  func_0x000107c61170(puVar5);
  func_0x0001000285a8(0x112ea22f8,&UNK_10dab46d8);
  func_0x000107c613fc(&UNK_110518708,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_2);
  puVar5 = &UNK_110518780;
  func_0x000107c613fc(&UNK_110518780,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  func_0x000107c6157c();
  uVar9 = 0x1024f506c;
  func_0x0001000823a8(0x1024f506c,puVar5);
  puVar3 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_80 = FUN_1024f5074;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101016bdc;
  puStack_88 = &UNK_110518798;
  ppuVar4 = &puStack_a0;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c46b38(puVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(uVar9);
  func_0x000107c5a270(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c567a0(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  return;
}



/* Entry: 1024f5018; end: 1024f5047;  */

undefined8 FUN_1024f5018(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  return uStack_28;
}



/* Entry: 1024f5048; end: 1024f5073;  */

void FUN_1024f5048(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1024f5074; end: 1024f50c7;  */

undefined8 FUN_1024f5074(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 1024f50c8; end: 1024f50ef;  */

void FUN_1024f50c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c40a3c();
  func_0x000107c61180();
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618(lVar2);
  func_0x000107c57740(uVar1);
  func_0x000107c61170(lVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024f50f0; end: 1024f514f; -[_TtC38SCImpalaModerationNotificationServices50NotificationCenterModerationSpotlightActionHandler init] */

void FUN_1024f50f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImpalaModerationNotificationServices.NotificationCenterModerationSpotlightActionHandler"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f511c);
  (*pcVar1)();
}



/* Entry: 1024f5150; end: 1024f5197; -[_TtC38SCImpalaModerationNotificationServices50NotificationCenterModerationSpotlightActionHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024f516c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024f5170) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f5150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea2310));
  return;
}



/* Entry: 1024f5198; end: 1024f51b7;  */

void FUN_1024f5198(void)

{
  func_0x000107c61168(&PTR_PTR_112849f08);
  return;
}



/* Entry: 1024f51b8; end: 1024f52ff;  */

void FUN_1024f51b8(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    func_0x000107c614f0();
    pcVar2 = "openSpotlightSnap(withSnapId:moderationData:baseView:)";
    func_0x0001000c10c0("openSpotlightSnap(withSnapId:moderationData:baseView:)");
    func_0x000107c61180();
    puVar3 = &UNK_110518828;
    func_0x000107c613fc(&UNK_110518828,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110518878;
    func_0x000107c613fc(&UNK_110518878,0x40,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(ulong *)(puVar4 + 0x18) = param_1;
    *(ulong *)(puVar4 + 0x20) = param_2;
    *(undefined8 *)(puVar4 + 0x28) = param_4;
    *(undefined8 *)(puVar4 + 0x30) = param_3;
    *(undefined8 *)(puVar4 + 0x38) = unaff_x20;
    uStack_60 = 0x1024f57c8;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110518890;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_3);
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 1024f5300; end: 1024f5533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f5300(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ea2320;
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112ea2320) == 0) {
      puVar3 = PTR___ss5Int32VN_11034ee20;
      puVar7 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
      func_0x000107c6057c();
      puStack_90 = puVar3;
      puStack_88 = puVar7;
      func_0x000107c5fb78(0x3a3a,0xe200000000000000);
      func_0x000107c5fb78(param_2,param_3);
      func_0x000107c5fb78(0x303a3a,0xe300000000000000);
      puVar2 = puStack_88;
      puVar7 = puStack_90;
      lVar4 = 0x112d39140;
      func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
      func_0x000107c61534();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      puVar3 = PTR___sSSN_11034da80;
      puStack_90 = (undefined *)0xd00000000000001e;
      puStack_88 = (undefined *)0x800000010f0a70f0;
      func_0x000107c602d4(lVar4 + 0x20,&puStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      *(undefined **)(lVar4 + 0x60) = puVar3;
      *(undefined **)(lVar4 + 0x48) = puVar7;
      *(undefined **)(lVar4 + 0x50) = puVar2;
      lVar5 = lVar4;
      func_0x000100dfa3f0(lVar4);
      func_0x000107c61588(lVar4);
      func_0x000100e1766c(lVar4 + 0x20);
      func_0x000103b13b88(0);
      func_0x000107c610f8();
      func_0x000107c61174(param_4);
      lVar4 = param_1;
      func_0x000107c61174();
      func_0x000107c61174(param_5);
      func_0x000107c61434(param_3);
      uVar6 = 0xd000000000000015;
      func_0x000103b136f0(0xd000000000000015,0x800000010f0a70d0,param_2,param_3,lVar5,1,0x82,param_1
                          ,0);
      uVar8 = *(undefined8 *)(param_1 + lVar1);
      *(undefined8 *)(param_1 + lVar1) = uVar6;
      func_0x000107c61174();
      func_0x000107c61170(uVar8);
      func_0x000107c42c1c(*(undefined8 *)(lVar4 + _DAT_112ea2310));
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1024f5534; end: 1024f55d3; -[_TtC38SCImpalaModerationNotificationServices50NotificationCenterModerationSpotlightActionHandler openSpotlightSnapWithSnapId:moderationData:baseView:] */

void FUN_1024f5534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1024f51b8(param_3,param_2,param_4,param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1024f55d4; end: 1024f55df; -[_TtC38SCImpalaModerationNotificationServices50NotificationCenterModerationSpotlightActionHandler pushToValdiMarshaller:] */

undefined8 FUN_1024f55d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000106e40ff0(param_3,param_1);
  func_0x000106e40fe8();
  func_0x000106e40f64();
  func_0x000106e40f80();
  return param_3;
}



/* Entry: 1024f55e0; end: 1024f55ff; -[_TtC38SCImpalaModerationNotificationServices50NotificationCenterModerationSpotlightActionHandler presentingViewControllerForOurStoryDeepLinkHandlerScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f55e0(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ea2318);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024f5600; end: 1024f577b;  */

void FUN_1024f5600(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "removeOurStoryDeeplinkScope()";
  func_0x0001000c10c0("removeOurStoryDeeplinkScope()");
  func_0x000107c61180();
  puVar2 = &UNK_110518828;
  func_0x000107c613fc(&UNK_110518828,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_1024f57a4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110518840;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1024f577c; end: 1024f57a3; -[_TtC38SCImpalaModerationNotificationServices50NotificationCenterModerationSpotlightActionHandler removeOurStoryDeeplinkScope] */

void FUN_1024f577c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024f5600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024f57a4; end: 1024f57df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f57a4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ea2320;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + _DAT_112ea2320) != 0) {
      uVar4 = *(undefined8 *)(lVar2 + _DAT_112ea2310);
      func_0x000107c61174(uVar4);
      uVar3 = uVar4;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(uVar3);
      *(undefined8 *)(lVar2 + lVar1) = 0;
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1024f57e0; end: 1024f583f; -[_TtC38SCImpalaModerationNotificationServices44NotificationCenterModerationUrlActionHandler init] */

void FUN_1024f57e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImpalaModerationNotificationServices.NotificationCenterModerationUrlActionHandler"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f580c);
  (*pcVar1)();
}



/* Entry: 1024f5840; end: 1024f5877; -[_TtC38SCImpalaModerationNotificationServices44NotificationCenterModerationUrlActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f5840(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea2350));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ea2358);
  return;
}



/* Entry: 1024f5878; end: 1024f5897;  */

void FUN_1024f5878(void)

{
  func_0x000107c61168(&PTR_PTR_112849fd8);
  return;
}



/* Entry: 1024f5898; end: 1024f5ce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f5898(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  char *pcVar10;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar11;
  long extraout_x12;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  code *pcVar17;
  code *pcVar18;
  long lVar19;
  code *pcStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar1 + -8);
  lVar13 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)&pcStack_e0 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  pcVar18 = (code *)(lVar14 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar17 = pcVar18 + -extraout_x12;
  lVar19 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)pcVar17 - extraout_x8_00;
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  pcVar3 = (code *)(param_1 + 0x10);
  func_0x000107c61618();
  if (pcVar3 != (code *)0x0) {
    pcVar4 = pcVar3 + _DAT_112ea2358;
    lStack_b0 = lVar13;
    func_0x000107c61618();
    if (pcVar4 != (code *)0x0) {
      lStack_b8 = _DAT_112ea2350;
      puVar5 = *(undefined8 **)(pcVar3 + _DAT_112ea2350);
      lStack_c0 = lVar14;
      func_0x000107c5194c();
      func_0x000107c61180();
      pcVar7 = pcVar3;
      if (puVar5 == (undefined8 *)0x0) {
        func_0x0001046392d4();
        uVar15 = *puVar5;
        pcStack_d8 = *(code **)(lVar12 + 0x10);
        uStack_d0 = param_2;
        (*pcStack_d8)(lVar19,param_2,lVar1);
        (**(code **)(lVar12 + 0x38))(lVar19,0,1,lVar1);
        func_0x000107c61174(uVar15);
        func_0x000107c61174();
        func_0x000104651350(pcVar17);
        func_0x00010137dd74(lVar19,pcVar17 + *(int *)(lVar2 + 0x14));
        func_0x000100e39298(pcVar17,pcVar18);
        uVar6 = 0;
        func_0x000104652fec(0);
        pcStack_c8 = pcVar4;
        func_0x000107c610f8();
        pcVar4 = pcVar18;
        func_0x000104651d90(pcVar18);
        func_0x000107c61170(uVar15);
        func_0x0001000293e4(lVar19);
        func_0x000100e392dc(pcVar17);
        func_0x000107c61174(pcVar4);
        func_0x000104651350(pcVar17);
        *(undefined8 *)pcVar17 = 8;
        func_0x000100e39298(pcVar17,pcVar18);
        func_0x000107c610f8(uVar6);
        func_0x000104651d90();
        pcStack_e0 = pcVar18;
        func_0x000107c61170(pcVar4);
        func_0x000100e392dc(pcVar17);
        puVar5 = (undefined8 *)PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        pcVar7 = (code *)PTR_PTR_1126ae560;
        func_0x000107c610f8(PTR_PTR_1126ae560);
        func_0x000107c453e4();
        pcVar18 = pcVar7;
        func_0x000107c43bf4();
        func_0x000107c61180();
        lVar19 = lStack_c0;
        (*pcStack_d8)(lStack_c0,uStack_d0,lVar1);
        uVar11 = (ulong)*(byte *)(lVar12 + 0x50);
        uVar16 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
        puVar8 = &UNK_110518940;
        func_0x000107c613fc(&UNK_110518940,uVar16 + lStack_b0,uVar11 | 7);
        (**(code **)(lVar12 + 0x20))(puVar8 + uVar16,lVar19,lVar1);
        pcStack_88 = FUN_1024f60a4;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100e38b5c;
        puStack_90 = &UNK_110518958;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        func_0x000107c61574(puStack_80);
        pcVar10 = "openUrl(withUrl:sourceType:)";
        func_0x0001000c10c0("openUrl(withUrl:sourceType:)");
        func_0x000107c61180();
        func_0x000107c5dc64(pcVar18);
        func_0x000107c615e8(pcVar10);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61170(pcVar18);
        func_0x0001006edf64(0);
        func_0x000107c610f8();
        pcVar18 = pcStack_e0;
        func_0x000107c61174(pcStack_e0);
        func_0x000107c61174(pcVar7);
        func_0x000107c61174(puVar5);
        pcVar17 = pcVar3;
        func_0x000107c61174(pcVar3);
        pcVar4 = pcVar18;
        func_0x000103c5d014(pcVar18,pcVar7,puVar5,pcVar3,0,0,0);
        func_0x000107c42c1c(*(undefined8 *)(pcVar3 + lStack_b8));
        func_0x000107c61170(pcVar17);
        func_0x000107c61170(pcStack_c8);
        func_0x000107c61170(pcVar18);
      }
      pcVar3 = pcVar4;
      func_0x000107c61170(puVar5);
      func_0x000107c61170(pcVar7);
    }
    func_0x000107c61170(pcVar3);
  }
  return;
}



/* Entry: 1024f5ce8; end: 1024f5d27;  */

void FUN_1024f5ce8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1024f5d28; end: 1024f5d9f; -[_TtC38SCImpalaModerationNotificationServices44NotificationCenterModerationUrlActionHandler openUrlWithUrl:sourceType:] */

/* WARNING: Possible PIC construction at 0x0001024f5d88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024f5d8c) */

void FUN_1024f5d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c5faec(param_3);
  if (param_4 != 0) {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_1);
  FUN_1024f5e34(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1024f5da0; end: 1024f5da3; -[_TtC38SCImpalaModerationNotificationServices44NotificationCenterModerationUrlActionHandler shareUrlWithUrl:] */

void FUN_1024f5da0(void)

{
  return;
}



/* Entry: 1024f5da4; end: 1024f5daf; -[_TtC38SCImpalaModerationNotificationServices44NotificationCenterModerationUrlActionHandler pushToValdiMarshaller:] */

void FUN_1024f5da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 1024f5db0; end: 1024f5e33; -[_TtC38SCImpalaModerationNotificationServices44NotificationCenterModerationUrlActionHandler webBrowserDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001024f5dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024f5e08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024f5df0) */
/* WARNING: Removing unreachable block (ram,0x0001024f5e0c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f5db0(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1024f5e34; end: 1024f6057;  */

void FUN_1024f5e34(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long extraout_x8;
  ulong uVar7;
  long extraout_x12;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  ulong uVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&puStack_90 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  lVar10 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar11 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12;
  func_0x000107c5edd0(lVar11,param_1,param_2);
  lVar1 = lVar11;
  (**(code **)(lVar13 + 0x30))(lVar11,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x0001000293e4(lVar11);
  }
  else {
    pcVar12 = *(code **)(lVar13 + 0x20);
    (*pcVar12)(lVar8,lVar11,lVar2);
    pcVar3 = "openUrl(withUrl:sourceType:)";
    func_0x0001000c10c0("openUrl(withUrl:sourceType:)");
    func_0x000107c61180();
    puVar4 = &UNK_1105188c8;
    func_0x000107c613fc(&UNK_1105188c8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    (**(code **)(lVar13 + 0x10))(lVar9,lVar8,lVar2);
    uVar7 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar14 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
    puVar5 = &UNK_1105188f0;
    func_0x000107c613fc(&UNK_1105188f0,uVar14 + lVar10,uVar7 | 7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    (*pcVar12)(puVar5 + uVar14,lVar9,lVar2);
    pcStack_70 = FUN_1024f6058;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110518908;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_68);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(pcVar3);
    (**(code **)(lVar13 + 8))(lVar8,lVar2);
  }
  return;
}



/* Entry: 1024f6058; end: 1024f6087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f6058(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar14;
  long extraout_x12;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  code *pcVar20;
  code *pcVar21;
  code *pcStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar12 = 0;
  func_0x000107c5ede0();
  uVar14 = (ulong)*(byte *)(*(long *)(lVar12 + -8) + 0x50);
  lVar13 = *(long *)(unaff_x20 + 0x10);
  lVar1 = unaff_x20 + (uVar14 + 0x18 & (uVar14 ^ 0xffffffffffffffff));
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar2 + -8);
  lVar16 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = (long)&pcStack_e0 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  pcVar21 = (code *)(lVar17 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar20 = pcVar21 + -extraout_x12;
  lVar12 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)pcVar20 - extraout_x8_00;
  func_0x000107c61428(lVar13 + 0x10,auStack_78,0,0);
  pcVar4 = (code *)(lVar13 + 0x10);
  func_0x000107c61618();
  if (pcVar4 != (code *)0x0) {
    pcVar5 = pcVar4 + _DAT_112ea2358;
    lStack_b0 = lVar16;
    func_0x000107c61618();
    if (pcVar5 != (code *)0x0) {
      lStack_b8 = _DAT_112ea2350;
      puVar6 = *(undefined8 **)(pcVar4 + _DAT_112ea2350);
      lStack_c0 = lVar17;
      func_0x000107c5194c();
      func_0x000107c61180();
      pcVar8 = pcVar4;
      if (puVar6 == (undefined8 *)0x0) {
        func_0x0001046392d4();
        uVar18 = *puVar6;
        pcStack_d8 = *(code **)(lVar15 + 0x10);
        lStack_d0 = lVar1;
        (*pcStack_d8)(lVar12,lVar1,lVar2);
        (**(code **)(lVar15 + 0x38))(lVar12,0,1,lVar2);
        func_0x000107c61174(uVar18);
        func_0x000107c61174();
        func_0x000104651350(pcVar20);
        func_0x00010137dd74(lVar12,pcVar20 + *(int *)(lVar3 + 0x14));
        func_0x000100e39298(pcVar20,pcVar21);
        uVar7 = 0;
        func_0x000104652fec(0);
        pcStack_c8 = pcVar5;
        func_0x000107c610f8();
        pcVar5 = pcVar21;
        func_0x000104651d90(pcVar21);
        func_0x000107c61170(uVar18);
        func_0x0001000293e4(lVar12);
        func_0x000100e392dc(pcVar20);
        func_0x000107c61174(pcVar5);
        func_0x000104651350(pcVar20);
        *(undefined8 *)pcVar20 = 8;
        func_0x000100e39298(pcVar20,pcVar21);
        func_0x000107c610f8(uVar7);
        func_0x000104651d90();
        pcStack_e0 = pcVar21;
        func_0x000107c61170(pcVar5);
        func_0x000100e392dc(pcVar20);
        puVar6 = (undefined8 *)PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        pcVar8 = (code *)PTR_PTR_1126ae560;
        func_0x000107c610f8(PTR_PTR_1126ae560);
        func_0x000107c453e4();
        pcVar21 = pcVar8;
        func_0x000107c43bf4();
        func_0x000107c61180();
        lVar12 = lStack_c0;
        (*pcStack_d8)(lStack_c0,lStack_d0,lVar2);
        uVar14 = (ulong)*(byte *)(lVar15 + 0x50);
        uVar19 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
        puVar9 = &UNK_110518940;
        func_0x000107c613fc(&UNK_110518940,uVar19 + lStack_b0,uVar14 | 7);
        (**(code **)(lVar15 + 0x20))(puVar9 + uVar19,lVar12,lVar2);
        pcStack_88 = FUN_1024f60a4;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100e38b5c;
        puStack_90 = &UNK_110518958;
        ppuVar10 = &puStack_a8;
        puStack_80 = puVar9;
        func_0x000107c60bc4(ppuVar10);
        func_0x000107c61574(puStack_80);
        pcVar11 = "openUrl(withUrl:sourceType:)";
        func_0x0001000c10c0("openUrl(withUrl:sourceType:)");
        func_0x000107c61180();
        func_0x000107c5dc64(pcVar21);
        func_0x000107c615e8(pcVar11);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61170(pcVar21);
        func_0x0001006edf64(0);
        func_0x000107c610f8();
        pcVar21 = pcStack_e0;
        func_0x000107c61174(pcStack_e0);
        func_0x000107c61174(pcVar8);
        func_0x000107c61174(puVar6);
        pcVar20 = pcVar4;
        func_0x000107c61174(pcVar4);
        pcVar5 = pcVar21;
        func_0x000103c5d014(pcVar21,pcVar8,puVar6,pcVar4,0,0,0);
        func_0x000107c42c1c(*(undefined8 *)(pcVar4 + lStack_b8));
        func_0x000107c61170(pcVar20);
        func_0x000107c61170(pcStack_c8);
        func_0x000107c61170(pcVar21);
      }
      pcVar4 = pcVar5;
      func_0x000107c61170(puVar6);
      func_0x000107c61170(pcVar8);
    }
    func_0x000107c61170(pcVar4);
  }
  return;
}



/* Entry: 1024f6088; end: 1024f60a3;  */

void FUN_1024f6088(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1024f60a4; end: 1024f60ef;  */

void FUN_1024f60a4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5ed90(param_1,param_2,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c4b788(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1024f60f0; end: 1024f60f7;  */

void FUN_1024f60f0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1024f60f8; end: 1024f618b;  */

void FUN_1024f60f8(undefined8 param_1)

{
  func_0x0001000285a8(0x112ea2230,&UNK_10dab45f0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1024f618c,param_1);
  return;
}



/* Entry: 1024f618c; end: 1024f61a3;  */

void FUN_1024f618c(long *param_1)

{
  long lVar1;
  undefined8 unaff_x20;
  
  lVar1 = 0;
  func_0x0001024f61c8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_110518a48;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1024f61a4; end: 1024f61e7;  */

void FUN_1024f61a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024f61e8; end: 1024f63ff;  */

void FUN_1024f61e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar6 = &puStack_70;
  puVar1 = PTR_PTR_1126aa978;
  func_0x000107c610f8(PTR_PTR_1126aa978);
  func_0x000107c453e4();
  func_0x000100083b20(&puStack_70);
  puVar3 = puStack_70;
  puVar2 = puStack_70;
  func_0x000107c451f8();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar3;
    func_0x000107c45200();
    func_0x000107c61180();
    func_0x000107c615e8(puVar3);
    puVar3 = puVar2;
    func_0x000107c451f4();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar2 = puVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar2 != (undefined *)0x0) {
      func_0x0001000285a8(0x112ea2300,&UNK_10dab46e0);
      puVar3 = &UNK_110518a68;
      func_0x000107c613fc(&UNK_110518a68,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_2);
      puVar4 = &UNK_110518a90;
      func_0x000107c613fc(&UNK_110518a90,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar2;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      func_0x000107c615f0(puVar2);
      uVar5 = 0x1024f647c;
      func_0x0001000823a8(0x1024f647c,puVar4);
      puVar3 = PTR_PTR_1126b1678;
      func_0x000107c610f8(PTR_PTR_1126b1678);
      pcStack_50 = FUN_1024f6484;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_101016bdc;
      puStack_58 = &UNK_110518aa8;
      uStack_48 = uVar5;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c6157c(uVar5);
      func_0x000107c46b38(puVar3);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61574(uStack_48);
      func_0x000107c5997c(puVar1);
      func_0x000107c615e8(puVar2);
      func_0x000107c61574(uVar5);
      func_0x000107c61170(puVar3);
    }
  }
  func_0x000107c57604(param_1);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1024f6400; end: 1024f6477;  */

void FUN_1024f6400(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c40a3c();
  func_0x000107c61180();
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c57740(param_2);
  func_0x000107c61170(param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 1024f6478; end: 1024f6483;  */

void FUN_1024f6478(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar6 = &puStack_70;
  puVar1 = PTR_PTR_1126aa978;
  func_0x000107c610f8(PTR_PTR_1126aa978);
  func_0x000107c453e4();
  func_0x000100083b20(&puStack_70);
  puVar3 = puStack_70;
  puVar2 = puStack_70;
  func_0x000107c451f8();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar3;
    func_0x000107c45200();
    func_0x000107c61180();
    func_0x000107c615e8(puVar3);
    puVar3 = puVar2;
    func_0x000107c451f4();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar2 = puVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar2 != (undefined *)0x0) {
      func_0x0001000285a8(0x112ea2300,&UNK_10dab46e0);
      puVar3 = &UNK_110518a68;
      func_0x000107c613fc(&UNK_110518a68,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_2);
      puVar4 = &UNK_110518a90;
      func_0x000107c613fc(&UNK_110518a90,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar2;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      func_0x000107c615f0(puVar2);
      uVar5 = 0x1024f647c;
      func_0x0001000823a8(0x1024f647c,puVar4);
      puVar3 = PTR_PTR_1126b1678;
      func_0x000107c610f8(PTR_PTR_1126b1678);
      pcStack_50 = FUN_1024f6484;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_101016bdc;
      puStack_58 = &UNK_110518aa8;
      uStack_48 = uVar5;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c6157c(uVar5);
      func_0x000107c46b38(puVar3);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61574(uStack_48);
      func_0x000107c5997c(puVar1);
      func_0x000107c615e8(puVar2);
      func_0x000107c61574(uVar5);
      func_0x000107c61170(puVar3);
    }
  }
  func_0x000107c57604(param_1);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1024f6484; end: 1024f64a7;  */

undefined8 FUN_1024f6484(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 1024f64a8; end: 1024f64c3;  */

void FUN_1024f64a8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1024f64c4; end: 1024f653b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f64c4(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea2430);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4ff64();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024f653c; end: 1024f65c3; -[_TtC42SCImpalaSpotlightReplyNotificationServices45NotificationCenterSpotlightReplyActionHandler dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f653c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112ea2430);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4ff64();
    func_0x000107c615e8(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024f65c4; end: 1024f664b; -[_TtC42SCImpalaSpotlightReplyNotificationServices45NotificationCenterSpotlightReplyActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f65c4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea2428));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea2430));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea2438));
  func_0x000107c61610(param_1 + _DAT_112ea2440);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea2448));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea2450));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ea2458));
  return;
}



/* Entry: 1024f664c; end: 1024f6697; -[_TtC42SCImpalaSpotlightReplyNotificationServices45NotificationCenterSpotlightReplyActionHandler init] */

void FUN_1024f664c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImpalaSpotlightReplyNotificationServices.NotificationCenterSpotlightReplyActionHandler"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f6678);
  (*pcVar1)();
}



/* Entry: 1024f6698; end: 1024f66a3; -[_TtC42SCImpalaSpotlightReplyNotificationServices45NotificationCenterSpotlightReplyActionHandler approveReplyWithSpotlightSnapId:replyId:callback:] */

/* WARNING: Possible PIC construction at 0x0001024f6750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024f6754) */

void FUN_1024f6698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_5);
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c60bc4(param_5);
  func_0x000107c61174(param_1);
  FUN_1024f9ccc(param_3,param_2,param_4,uVar1,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1024f66a4; end: 1024f66af; -[_TtC42SCImpalaSpotlightReplyNotificationServices45NotificationCenterSpotlightReplyActionHandler rejectReplyWithSpotlightSnapId:replyId:callback:] */

/* WARNING: Possible PIC construction at 0x0001024f6750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024f6754) */

void FUN_1024f66a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_5);
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c60bc4(param_5);
  func_0x000107c61174(param_1);
  (*(code *)0x1024f9e8c)(param_3,param_2,param_4,uVar1,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1024f66b0; end: 1024f676f;  */

/* WARNING: Possible PIC construction at 0x0001024f6750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024f6754) */

void FUN_1024f66b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_5);
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c60bc4(param_5);
  func_0x000107c61174(param_1);
  (*param_6)(param_3,param_2,param_4,uVar1,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1024f6770; end: 1024f6b5f;  */

void FUN_1024f6770(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    func_0x000107c614f0();
    pcVar2 = "openSpotlightSnap(withSpotlightSnapId:replyId:showApprovedTab:)";
    func_0x0001000c10c0("openSpotlightSnap(withSpotlightSnapId:replyId:showApprovedTab:)");
    func_0x000107c61180();
    puVar3 = &UNK_110518c18;
    func_0x000107c613fc(&UNK_110518c18,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110518e20;
    func_0x000107c613fc(&UNK_110518e20,0x48,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(ulong *)(puVar4 + 0x18) = param_1;
    *(ulong *)(puVar4 + 0x20) = param_2;
    puVar4[0x28] = param_5 & 1;
    *(undefined8 *)(puVar4 + 0x30) = param_3;
    *(undefined8 *)(puVar4 + 0x38) = param_4;
    *(undefined8 *)(puVar4 + 0x40) = unaff_x20;
    uStack_70 = 0x1024facfc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110518e38;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 1024f6b60; end: 1024f6bef; -[_TtC42SCImpalaSpotlightReplyNotificationServices45NotificationCenterSpotlightReplyActionHandler openSpotlightSnapWithSpotlightSnapId:replyId:showApprovedTab:] */

/* WARNING: Possible PIC construction at 0x0001024f6bd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024f6bd8) */

void FUN_1024f6b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_1024f6770(param_3,param_2,param_4,uVar1,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1024f6bf0; end: 1024f6e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1024f6bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long extraout_x12;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  
  lVar3 = 0;
  uStack_e8 = param_3;
  uStack_e0 = param_5;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)&uStack_f0 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  lStack_d8 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12;
  func_0x000107c5eec4(lVar10);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  uStack_f0 = param_6;
  func_0x000107c6157c(param_6);
  func_0x000100087bd4(FUN_1024faba0,&puStack_d0,PTR___sytN_11034f1b0 + 8);
  uStack_e0 = param_2;
  FUN_1024f6f30(param_1,param_2,uStack_e8,param_4,lVar10);
  puVar4 = &UNK_110518c18;
  func_0x000107c613fc(&UNK_110518c18,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  lVar1 = lStack_d8;
  (**(code **)(lVar11 + 0x10))(lStack_d8,lVar10,lVar3);
  uVar8 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar9 = uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff);
  puVar5 = &UNK_110518d08;
  func_0x000107c613fc(&UNK_110518d08,uVar9 + lVar12,uVar8 | 7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  (**(code **)(lVar11 + 0x20))(puVar5 + uVar9,lVar1,lVar3);
  puVar6 = PTR_PTR_1126b2f30;
  func_0x000107c610f8();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  ppuVar7 = &puStack_d0;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c45b74();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puVar4);
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c61574(uStack_f0);
    func_0x000107c6142c(param_4);
    func_0x000107c6142c(uStack_e0);
    (**(code **)(lVar11 + 8))(lVar10,lVar3);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024f6e68);
  (*pcVar2)();
}



/* Entry: 1024f6e68; end: 1024f6f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f6e68(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 auStack_88 [2];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112ea2458;
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_58 = param_3[3];
  uStack_60 = param_3[2];
  uVar2 = param_3[5];
  func_0x000107c61428(param_1 + _DAT_112ea2458,auStack_78,0x21,0);
  func_0x000100402194(&uStack_50,auStack_88);
  func_0x000100402194(&uStack_60,auStack_88);
  func_0x000107c6157c(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c61558(uVar2);
  auStack_88[0] = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0x8000000000000000;
  FUN_1024f89f8(param_3,param_2,uVar2);
  *(undefined8 *)(param_1 + lVar1) = auStack_88[0];
  func_0x000107c614a8(auStack_78);
  return;
}



/* Entry: 1024f6f30; end: 1024f7153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f6f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  uStack_98 = param_2;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = *(long *)(unaff_x20 + _DAT_112ea2428);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    *(undefined8 *)(lVar4 + 0x20) = param_3;
    *(undefined8 *)(lVar4 + 0x28) = param_4;
    uStack_a8 = param_5;
    func_0x000107c61434(param_4);
    lVar5 = lVar4;
    func_0x000107c5fc48(lVar4,PTR___sSSN_11034da80);
    lStack_a0 = lVar5;
    func_0x000107c61574(lVar4);
    func_0x000107c5fadc(param_1,uStack_98);
    puVar6 = &UNK_110518c18;
    uStack_98 = param_1;
    func_0x000107c613fc(&UNK_110518c18,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    (**(code **)(lVar10 + 0x10))(auStack_b0 + -(lVar11 + 0xfU & 0xfffffffffffffff0),uStack_a8,lVar2)
    ;
    uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
    uVar12 = uVar9 + 0x28 & (uVar9 ^ 0xffffffffffffffff);
    puVar7 = &UNK_110518d58;
    func_0x000107c613fc(&UNK_110518d58,uVar12 + lVar11,uVar9 | 7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(undefined8 *)(puVar7 + 0x18) = param_3;
    *(undefined8 *)(puVar7 + 0x20) = param_4;
    (**(code **)(lVar10 + 0x20))
              (puVar7 + uVar12,auStack_b0 + -(lVar11 + 0xfU & 0xfffffffffffffff0),lVar2);
    pcStack_70 = FUN_1024fac04;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1024f8694;
    puStack_78 = &UNK_110518d70;
    ppuVar8 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar6 = puStack_68;
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar6);
    uVar1 = uStack_98;
    lVar2 = lStack_a0;
    func_0x000107c501e8(lVar3);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1024f7154; end: 1024f71e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f7154(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lStack_60 = param_1;
    uStack_58 = param_2;
    func_0x000100087bd4(0x1024fabec,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1024f71e4; end: 1024f72bf; -[_TtC42SCImpalaSpotlightReplyNotificationServices45NotificationCenterSpotlightReplyActionHandler observeReplyUpdatesWithSpotlightSnapId:replyId:callback:] */

void FUN_1024f71e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  uVar2 = param_2;
  func_0x000107c5faec(param_4);
  puVar1 = &UNK_110518ce0;
  func_0x000107c613fc(&UNK_110518ce0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_1);
  FUN_1024f6bf0(param_3,param_2,param_4,uVar2,0x1024fab8c,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1024f72c0; end: 1024f72cb; -[_TtC42SCImpalaSpotlightReplyNotificationServices45NotificationCenterSpotlightReplyActionHandler pushToValdiMarshaller:] */

undefined8 FUN_1024f72c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000106e40ff0(param_3,param_1);
  func_0x000106e40fe8();
  func_0x000106e40f64();
  func_0x000106e40f80();
  return param_3;
}



/* Entry: 1024f72cc; end: 1024f72eb; -[_TtC42SCImpalaSpotlightReplyNotificationServices45NotificationCenterSpotlightReplyActionHandler presentingViewControllerForOurStoryDeepLinkHandlerScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f72cc(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ea2440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024f72ec; end: 1024f7467;  */

void FUN_1024f72ec(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "removeOurStoryDeeplinkScope()";
  func_0x0001000c10c0("removeOurStoryDeeplinkScope()");
  func_0x000107c61180();
  puVar2 = &UNK_110518c18;
  func_0x000107c613fc(&UNK_110518c18,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_1024fab84;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110518ca8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1024f7468; end: 1024f748f; -[_TtC42SCImpalaSpotlightReplyNotificationServices45NotificationCenterSpotlightReplyActionHandler removeOurStoryDeeplinkScope] */

void FUN_1024f7468(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024f72ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024f7490; end: 1024f7a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f7490(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  long extraout_x8_00;
  long lVar10;
  code *pcVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  ulong *puVar20;
  ulong uVar21;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  code *pcVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 auStack_188 [33];
  undefined1 auStack_80 [32];
  
  lVar5 = 0x112ea2498;
  func_0x0001000285a8(0x112ea2498,&UNK_10dab48b8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar14 = (long)auStack_188 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar15 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar16 - extraout_x12_01;
  lVar6 = 0;
  func_0x000107c5eec8();
  lVar9 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = _DAT_112ea2458;
  lVar10 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + _DAT_112ea2458,auStack_80,0,0);
  lVar23 = *(long *)(param_2 + lVar7);
  lVar7 = lVar23;
  func_0x000107c61434();
  FUN_1024fa8b4();
  func_0x000107c6142c(lVar23);
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar23 = *(long *)(lVar7 + 0x10);
  if (lVar23 == 0) {
    func_0x000107c61574(lVar7);
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    FUN_1024f9938(0,lVar23,0);
    uVar1 = lVar7 + 0x40;
    uVar24 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)));
    lVar17 = 0;
    iVar4 = *(int *)(lVar7 + 0x24);
    do {
      if (uVar24 >> ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1024f7a24);
        (*pcVar11)();
      }
      uVar21 = uVar24 >> 6;
      uVar22 = 1L << (uVar24 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar21 * 8) & uVar22) == 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1024f7a28);
        (*pcVar11)();
      }
      if (iVar4 != *(int *)(lVar7 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1024f7a2c);
        (*pcVar11)();
      }
      lVar18 = *(long *)(lVar9 + 0x48);
      pcVar11 = *(code **)(lVar9 + 0x10);
      (*pcVar11)(lVar8,*(long *)(lVar7 + 0x30) + lVar18 * uVar24,lVar6);
      puVar12 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar24 * 0x30);
      uVar27 = *puVar12;
      uVar3 = puVar12[1];
      uVar28 = puVar12[2];
      uVar26 = puVar12[5];
      pcVar29 = *(code **)(lVar9 + 0x20);
      uVar32 = puVar12[4];
      uVar30 = puVar12[3];
      (*pcVar29)(lVar16,lVar8,lVar6);
      puVar12 = (undefined8 *)(lVar16 + *(int *)(lVar5 + 0x30));
      *puVar12 = uVar27;
      puVar12[1] = uVar3;
      puVar12[2] = uVar28;
      puVar12[4] = uVar32;
      puVar12[3] = uVar30;
      puVar12[5] = uVar26;
      FUN_1024faad8(lVar16,lVar15);
      puVar12 = (undefined8 *)(lVar15 + *(int *)(lVar5 + 0x30));
      uVar33 = puVar12[1];
      uVar32 = *puVar12;
      uVar27 = puVar12[2];
      uVar28 = puVar12[5];
      puVar2 = (undefined8 *)(lVar14 + *(int *)(lVar5 + 0x30));
      uVar34 = puVar12[4];
      uVar31 = puVar12[3];
      (*pcVar29)(lVar14,lVar15,lVar6);
      puVar2[1] = uVar33;
      *puVar2 = uVar32;
      puVar2[2] = uVar27;
      puVar2[4] = uVar34;
      puVar2[3] = uVar31;
      puVar2[5] = uVar28;
      (*pcVar11)(lVar10,lVar14,lVar6);
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar30);
      func_0x000107c6157c(uVar26);
      FUN_1024fad14(lVar14,0x112ea2498,&UNK_10dab48b8);
      FUN_1024fad14(lVar16,0x112ea2498,&UNK_10dab48b8);
      uVar25 = *(ulong *)(puVar19 + 0x10);
      if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar25) {
        FUN_1024f9938(1 < *(ulong *)(puVar19 + 0x18),uVar25 + 1,1);
      }
      *(ulong *)(puVar19 + 0x10) = uVar25 + 1;
      (*pcVar29)(puVar19 + uVar25 * lVar18 +
                           ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)),lVar10,lVar6);
      uVar25 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
      if (uVar25 <= uVar24) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1024f7a30);
        (*pcVar11)();
      }
      uVar13 = *(ulong *)(uVar1 + uVar21 * 8);
      if ((uVar13 & uVar22) == 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1024f7a34);
        (*pcVar11)();
      }
      if (iVar4 != *(int *)(lVar7 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1024f7a38);
        (*pcVar11)();
      }
      uVar13 = uVar13 & -2L << (uVar24 & 0x3f);
      if (uVar13 == 0) {
        lVar18 = uVar21 << 6;
        puVar20 = (ulong *)(lVar7 + 0x48 + uVar21 * 8);
        do {
          uVar21 = uVar21 + 1;
          if (uVar25 + 0x3f >> 6 <= uVar21) {
            FUN_1024fab28(uVar24,iVar4,0);
            uVar24 = uVar25;
            goto LAB_1024f76c0;
          }
          uVar22 = *puVar20;
          lVar18 = lVar18 + 0x40;
          puVar20 = puVar20 + 1;
        } while (uVar22 == 0);
        FUN_1024fab28(uVar24,iVar4,0);
        uVar24 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) + lVar18;
      }
      else {
        uVar21 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
        uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
        uVar24 = LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) | uVar24 & 0x7fffffffffffffc0;
      }
LAB_1024f76c0:
      lVar17 = lVar17 + 1;
    } while (lVar17 != lVar23);
    func_0x000107c61574(lVar7);
  }
  *param_1 = puVar19;
  return;
}



/* Entry: 1024f7a38; end: 1024f7a87;  */

long FUN_1024f7a38(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  
  if (param_4 == 0) {
    if (param_6 == 0) {
      return 0;
    }
    lVar1 = param_2[2];
    lVar2 = param_2[3];
    param_3 = param_5;
    param_4 = param_6;
    if (lVar1 == param_5 && param_6 == lVar2) {
      return 1;
    }
  }
  else {
    lVar1 = *param_2;
    lVar2 = param_2[1];
    if (lVar1 == param_3 && param_4 == lVar2) {
      return 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar1,lVar2,param_3,param_4,0);
  return lVar1;
}



/* Entry: 1024f7a88; end: 1024f7b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f7a88(long param_1,undefined8 param_2,byte param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  byte abStack_90 [16];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112ea2450);
    uStack_80 = param_2;
    lStack_78 = param_1;
    func_0x000107c6157c(uVar3);
    uVar2 = 0x112ea2490;
    func_0x0001000285a8(0x112ea2490,&UNK_10dab48b0);
    func_0x000100087bd4(&lStack_70,FUN_1024fa5f0,abStack_90,uVar2);
    func_0x000107c61574(uVar3);
    lVar4 = *(long *)(lStack_70 + 0x10);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lStack_70 + 0x28);
      do {
        pcVar1 = (code *)puVar5[-1];
        uVar2 = *puVar5;
        abStack_90[0] = param_3 & 1;
        func_0x000107c6157c(uVar2);
        (*pcVar1)(abStack_90);
        func_0x000107c61574(uVar2);
        puVar5 = puVar5 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    func_0x000107c61170(param_1);
    func_0x000107c6142c(lStack_70);
  }
  return;
}



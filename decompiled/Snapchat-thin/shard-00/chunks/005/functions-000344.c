/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100736cec; end: 100736ed3;  */

/* WARNING: Removing unreachable block (ram,0x000100224820) */
/* WARNING: Removing unreachable block (ram,0x0001002248cc) */

ulong FUN_100736cec(ulong param_1,long *param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  
  lVar4 = *param_2;
  FUN_10072ec28();
  iVar2 = (int)lVar4;
  if (iVar2 == 0x18c) {
    puVar10 = &UNK_10e52aadc;
  }
  else {
    lVar13 = 0x12;
    puVar12 = &UNK_10e52aadc;
    do {
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) {
        uVar5 = 0xc;
        uVar8 = 0xb8;
        uVar9 = 0x77;
        goto LAB_100736e94;
      }
      puVar10 = puVar12 + 0xc;
      piVar1 = (int *)(puVar12 + 0xc);
      puVar12 = puVar10;
    } while (*piVar1 != iVar2);
  }
  if (*(int *)(puVar10 + 8) != *(int *)(param_3 + 4)) {
    uVar5 = 0xc;
    uVar8 = 0xbd;
    uVar9 = 0x7d;
LAB_100736e94:
    FUN_1004d2c58(uVar5,0,uVar8,&UNK_10f6cd094,uVar9);
    return 0;
  }
  if (*(int *)(puVar10 + 4) != 0) {
    if (((int *)param_2[1] == (int *)0x0) || (*(int *)param_2[1] == 5)) {
      ppuVar11 = &PTR_DAT_110c7c3c0;
      lVar13 = 0x12;
      do {
        if (*(int *)(ppuVar11 + -1) == *(int *)(puVar10 + 4)) {
          (*(code *)*ppuVar11)();
          if (lVar4 != 0) goto LAB_100736eb8;
          break;
        }
        ppuVar11 = ppuVar11 + 4;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      uVar5 = 0xc;
      uVar8 = 0xb7;
      uVar9 = 0x9e;
    }
    else {
      uVar5 = 0xb;
      uVar8 = 0x88;
      uVar9 = 0x97;
    }
    goto LAB_100736e94;
  }
  if (iVar2 == 0x3b5) {
    if (param_2[1] == 0) {
      lVar4 = 0;
LAB_100736eb8:
      uVar3 = *(ulong *)(param_1 + 0x10);
      if (*(ulong *)(param_1 + 0x10) == 0) {
        FUN_100224644(param_3,0,0xffffffff);
        *(ulong *)(param_1 + 0x10) = param_3;
        uVar3 = param_3;
        if (param_3 == 0) {
          return 0;
        }
      }
      *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110c7c730;
      FUN_100224960();
      if ((int)uVar3 != 0) {
        if (lVar4 == 0) {
          if (*(long *)(**(long **)(param_1 + 0x10) + 0x38) != 0) {
            FUN_1004d2c58(6,0,0x77,&UNK_10f6c5f3e,0x6b);
            return 0;
          }
        }
        else {
          uVar3 = *(ulong *)(param_1 + 0x10);
          func_0x0001002249bc(uVar3,0xffffffff,0x38,1,0,lVar4);
          if ((int)uVar3 == 0) {
            return uVar3;
          }
          if ((*(long *)(**(long **)(param_1 + 0x10) + 0x38) != 0) &&
             (FUN_1001fc024(param_1,lVar4,0), (int)param_1 == 0)) {
            return param_1;
          }
        }
        uVar3 = 1;
      }
      return uVar3;
    }
    uVar5 = 0xb;
    uVar8 = 0x88;
    uVar9 = 0x88;
    goto LAB_100736e94;
  }
  if (iVar2 != 0x390) {
    uVar5 = 0xc;
    uVar8 = 0xb8;
    uVar9 = 0x8d;
    goto LAB_100736e94;
  }
  func_0x00010ae4b29c(param_2,&puStack_60);
  if (param_2 == (long *)0x0) {
    func_0x000107c2b29c(0xb,0,0x70,&UNK_10f6cd43c,0x10c);
    uVar3 = 0;
    goto code_r0x00010ae4b24c;
  }
  if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
    plVar7 = param_2;
    func_0x000107c2b424();
    plVar6 = plVar7;
  }
  else {
    iVar2 = (int)*(undefined8 *)param_2[1];
    func_0x000107c2b550();
    if ((puStack_60 == (undefined8 *)0x0) || (iVar2 != 0x38f)) {
      plVar7 = (long *)0xb;
      func_0x000107c2b29c(0xb,0,0x70,&UNK_10f6cd43c,0xbc);
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)*puStack_60;
      func_0x00010ae27f00();
      plVar7 = plVar6;
      if (plVar6 == (long *)0x0) {
        plVar7 = (long *)0xb;
        func_0x000107c2b29c(0xb,0,0x70,&UNK_10f6cd43c,0xc1);
      }
    }
  }
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    func_0x000107c2b424();
joined_r0x00010ae4b134:
    if (plVar6 != (long *)0x0) {
      lVar4 = param_2[2];
      if (lVar4 == 0) {
        lVar4 = 0x14;
      }
      else {
        func_0x000107c34f2c(lVar4,2);
        if ((int)lVar4 < 0) {
          uVar5 = 0x11d;
          goto code_r0x00010ae4b244;
        }
      }
      lVar13 = param_2[3];
      if ((lVar13 != 0) && (func_0x000107c34f2c(lVar13,2), lVar13 != 1)) {
        uVar5 = 0x125;
        goto code_r0x00010ae4b244;
      }
      func_0x000107c34f6c(param_1,&uStack_68,plVar7,0,param_3,1);
      if ((((int)param_1 != 0) &&
          (uVar5 = uStack_68, func_0x000107c2b2d4(uStack_68,6,0xffffffff,0x1001,6,0),
          (int)uVar5 != 0)) &&
         (uVar5 = uStack_68, func_0x000107c2b2d4(uStack_68,6,0x18,0x1003,lVar4,0), (int)uVar5 != 0))
      {
        func_0x000107c2b2d4(uStack_68,6,0xf8,0x1009,0,plVar6);
        uVar3 = (ulong)((int)uStack_68 != 0);
        goto code_r0x00010ae4b24c;
      }
    }
  }
  else {
    plVar7 = *(long **)*param_2;
    func_0x00010ae27f00();
    if (plVar7 != (long *)0x0) goto joined_r0x00010ae4b134;
    uVar5 = 0xad;
code_r0x00010ae4b244:
    func_0x000107c2b29c(0xb,0,0x70,&UNK_10f6cd43c,uVar5);
  }
  uVar3 = 0;
code_r0x00010ae4b24c:
  plStack_58 = param_2;
  func_0x000107c2b1bc(&plStack_58,&UNK_110c86910,0);
  func_0x000107c2b1bc(&plStack_58,&DAT_110c86e10,0);
  return uVar3;
}



/* Entry: 100736ed4; end: 10073708b;  */

undefined8
FUN_100736ed4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long *param_6)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iStack_6c;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_6[1];
  if ((lVar1 == 0) || (param_6[2] == 0)) {
    uVar5 = 0x90;
    uVar6 = 0x259;
LAB_10073705c:
    FUN_1004d2c58(4,0,uVar5,&UNK_10f6c73f8,uVar6);
    return 0;
  }
  if (*(code **)(*param_6 + 0x20) == (code *)0x0) {
    FUN_100202834();
    plVar2 = (long *)(ulong)((int)lVar1 + 7U >> 3);
  }
  else {
    plVar2 = param_6;
    (**(code **)(*param_6 + 0x20))();
  }
  lStack_60 = 0;
  uStack_58 = 0;
  iStack_6c = 0;
  if (((int)param_1 == 0x72) && (param_3 != 0x24)) {
    uVar5 = 0x7d;
    uVar6 = 0x265;
    goto LAB_10073705c;
  }
  uVar8 = (ulong)plVar2 & 0xffffffff;
  puVar3 = (ulong *)(uVar8 + 8);
  func_0x000107c610a0();
  if (puVar3 == (ulong *)0x0) {
    uVar5 = 0x41;
    uVar6 = 0x26b;
    goto LAB_10073705c;
  }
  puVar7 = puVar3 + 1;
  *puVar3 = uVar8;
  func_0x0001002255a8(param_6,&lStack_68,puVar7,uVar8,param_4,param_5,1);
  if ((int)param_6 != 0) {
    puVar4 = &uStack_58;
    FUN_100738404(puVar4,&lStack_60,&iStack_6c,param_1,param_2,param_3);
    if ((int)puVar4 != 0) {
      if ((lStack_68 == lStack_60) &&
         ((lStack_68 == 0 ||
          (puVar3 = puVar7, func_0x000107c610b0(puVar7,uStack_58), (int)puVar3 == 0)))) {
        uVar5 = 1;
        goto LAB_100737028;
      }
      FUN_1004d2c58(4,0,0x69,&UNK_10f6c73f8,0x27a);
    }
  }
  uVar5 = 0;
LAB_100737028:
  FUN_1001e33e0(puVar7);
  if (iStack_6c == 0) {
    return uVar5;
  }
  FUN_1001e33e0(uStack_58);
  return uVar5;
}



/* Entry: 10073708c; end: 1007370ff;  */

void FUN_10073708c(long param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if ((iVar1 != 0) && (FUN_1000285a8(param_1,param_2), param_1 != 0)) {
    param_3 = (ulong *)0x112d36e60;
    param_4 = (long *)&UNK_10d901170;
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100737100; end: 10073711f;  */

void FUN_100737100(void)

{
  func_0x000107c61168(&PTR_PTR_112de6bc8);
  return;
}



/* Entry: 100737120; end: 100737137;  */

undefined8 * FUN_100737120(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 100737138; end: 10073718b;  */

void FUN_100737138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  FUN_100737120(param_1,unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  *(undefined8 *)(unaff_x20 + 0x50) = param_5;
  *(undefined8 *)(unaff_x20 + 0x58) = param_6;
  return;
}



/* Entry: 10073718c; end: 1007371ab;  */

void FUN_10073718c(void)

{
  func_0x000107c61168(&PTR_PTR_112de6d20);
  return;
}



/* Entry: 1007371ac; end: 1007371b7;  */

void FUN_1007371ac(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1007371b8; end: 10073720f; -[SCFideliusManager _updateKeyVersion] */

void FUN_1007371b8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1007989ac;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x88),param_2,&puStack_38);
  return;
}



/* Entry: 100737210; end: 100737217; -[SCLensCacheServices lensContentResultManager] */

undefined8 FUN_100737210(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100737218; end: 100737237;  */

void FUN_100737218(void)

{
  func_0x000107c61168(&PTR_PTR_112de7080);
  return;
}



/* Entry: 100737238; end: 10073725b;  */

void FUN_100737238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 10073725c; end: 10073731b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10073725c(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_11307d230) = param_1;
  FUN_100234378();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10073731c; end: 100737373; -[SCFideliusDeviceGraphManager backfillKeyChainForDeviceTransfer] */

void FUN_10073731c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100738f24;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 100737374; end: 100737433; -[SCFideliusDeviceGraphManager updateKVStoreWithLoadedIdentity:isIdentityNew:] */

/* WARNING: Possible PIC construction at 0x0001007373bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100737410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007373c0) */
/* WARNING: Removing unreachable block (ram,0x0001007373dc) */
/* WARNING: Removing unreachable block (ram,0x0001007373c4) */
/* WARNING: Removing unreachable block (ram,0x0001007373e0) */
/* WARNING: Removing unreachable block (ram,0x000100737408) */
/* WARNING: Removing unreachable block (ram,0x000100737400) */
/* WARNING: Removing unreachable block (ram,0x00010073740c) */
/* WARNING: Removing unreachable block (ram,0x000100737414) */

void FUN_100737374(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c49fec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100737434; end: 100737543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100737434(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126bd030;
    func_0x000107c610f4(PTR_PTR_1126bd030);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126bd038;
    func_0x000107c4b808(PTR_PTR_1126bd038);
    func_0x000107c61180();
    lVar3 = lVar1 + _DAT_112727b50;
    func_0x000107c61148(lVar3);
    lVar4 = lVar3;
    func_0x000107c444a4();
    func_0x000107c61180();
    lVar5 = lVar1 + _DAT_112727b58;
    func_0x000107c61148(lVar5);
    lVar6 = lVar5;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c47530(puVar8,param_2,uVar7,puVar2,lVar4,lVar6);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100737544; end: 1007375b3; +[SCFideliusPerformerInitializer localKVStoreManagerPerformer] */

void FUN_100737544(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310d3d);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x15,0,0x18);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1007375b4; end: 10073791b; -[SCLensUnlockableDataProviderCreatorServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007375b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar1 = param_1 + _DAT_1127828b8;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5ce38();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127828bc;
  func_0x000107c61148();
  lVar3 = lVar1;
  func_0x000107c4ad3c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127828c0;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c4b020();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127828c4;
  func_0x000107c61148();
  lVar5 = lVar1;
  func_0x000107c4b518();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127828c8;
  func_0x000107c61148();
  lVar6 = lVar1;
  func_0x000107c4af44();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127828cc;
  func_0x000107c61148();
  lVar7 = lVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127828d0;
  func_0x000107c61148();
  lVar8 = lVar1;
  func_0x000107c4b3b8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127828d4;
  func_0x000107c61148();
  lVar9 = lVar1;
  func_0x000107c3ee24();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127828d8;
  func_0x000107c61148();
  lVar10 = lVar1;
  func_0x000107c4d598();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127828dc;
  func_0x000107c61148();
  lVar11 = lVar1;
  func_0x000107c3e654();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127828e0;
  func_0x000107c61148();
  lVar12 = lVar1;
  func_0x000107c4afc4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127828e4;
  func_0x000107c61148();
  lVar13 = lVar1;
  func_0x000107c3f770();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  param_1 = param_1 + _DAT_1127828e8;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c3d56c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_100804500;
  puStack_d8 = &UNK_110adf788;
  puVar14 = PTR_PTR_1126ae720;
  lStack_d0 = lVar2;
  lStack_c8 = lVar3;
  lStack_c0 = lVar1;
  lStack_b8 = lVar8;
  lStack_b0 = lVar7;
  lStack_a8 = lVar4;
  lStack_a0 = lVar5;
  lStack_98 = lVar6;
  lStack_90 = lVar9;
  lStack_88 = lVar10;
  lStack_80 = lVar11;
  lStack_78 = lVar13;
  lStack_70 = lVar12;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_f0);
  func_0x000107c61180();
  puVar15 = PTR_PTR_1126dda38;
  func_0x000107c610f4();
  func_0x000107c47410();
  func_0x000107c61170(puVar14);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10073791c; end: 100737923; -[SCLensUnlockerService trackedLensUnlocker] */

undefined8 FUN_10073791c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100737924; end: 10073792b; -[SCLensRemovalServices lensRemovalManager] */

undefined8 FUN_100737924(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10073792c; end: 10073793b; -[_TtC28AdaptiveLensFetchingServices30SCAdaptiveLensFetchingServices adaptiveLensFetcherFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10073792c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307d230));
  return;
}



/* Entry: 10073793c; end: 1007379bb;  */

/* WARNING: Possible PIC construction at 0x000100737950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100737960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100737970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100737980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100737990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007379a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100737994) */
/* WARNING: Removing unreachable block (ram,0x000100737984) */
/* WARNING: Removing unreachable block (ram,0x000100737974) */
/* WARNING: Removing unreachable block (ram,0x000100737964) */
/* WARNING: Removing unreachable block (ram,0x000100737954) */
/* WARNING: Removing unreachable block (ram,0x0001007379a4) */

void FUN_10073793c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 1007379bc; end: 100737a13; -[_TtC29SCLensDataProviderCreationAPI36SCLensUnlockableDataProviderServices initWithLensUnlockableDataProviderCreator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007379bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113034638) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100737a14; end: 100737a9f;  */

void FUN_100737a14(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100737aa0; end: 100737aa7;  */

void FUN_100737aa0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100737aa8; end: 100737afb;  */

void FUN_100737aa8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100737afc; end: 100738267;  */

void FUN_100737afc(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_10023a75c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  puVar1 = PTR_PTR_1126a8280;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar9 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc6a20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc6a40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc6a60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef132d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef235a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc65b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6600);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef25be0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc6a80);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  uVar14 = uVar15;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  *(undefined8 *)(param_2 + 0x70) = uVar14;
  *param_1 = param_2;
  return;
}



/* Entry: 100738268; end: 1007382a3;  */

void FUN_100738268(void)

{
  long unaff_x20;
  
  FUN_100737afc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1007382a4; end: 100738403;  */

undefined8
FUN_1007382a4(undefined8 param_1,ulong *param_2,ulong param_3,char *param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_5 < 2) {
    uVar1 = 0x74;
    uVar2 = 0x66;
  }
  else if ((*param_4 == '\0') && (param_4[1] == '\x01')) {
    if (param_5 != 2) {
      lVar3 = 0;
      do {
        if (param_4[lVar3 + 2] != -1) {
          if (param_4[lVar3 + 2] != '\0') {
            uVar1 = 0x66;
            uVar2 = 0x78;
            goto LAB_100738330;
          }
          if (param_5 - 2 != lVar3) {
            if (lVar3 + 2U < 10) {
              uVar1 = 0x67;
              uVar2 = 0x83;
            }
            else {
              uVar4 = (param_5 - lVar3) - 3;
              if (uVar4 <= param_3) {
                if (param_5 - 3 != lVar3) {
                  func_0x000107c610b4(param_1,param_4 + lVar3 + 3,uVar4);
                }
                *param_2 = uVar4;
                return 1;
              }
              uVar1 = 0x71;
              uVar2 = 0x8b;
            }
            goto LAB_100738330;
          }
          break;
        }
        lVar3 = lVar3 + 1;
      } while (param_5 - 2 != lVar3);
    }
    uVar1 = 0x83;
    uVar2 = 0x7e;
  }
  else {
    uVar1 = 0x6b;
    uVar2 = 0x6c;
  }
LAB_100738330:
  FUN_1004d2c58(4,0,uVar1,&UNK_10f6c7379,uVar2);
  return 0;
}



/* Entry: 100738404; end: 10073858b;  */

undefined8
FUN_100738404(undefined8 *param_1,long *param_2,undefined4 *param_3,int param_4,undefined8 param_5,
             ulong param_6)

{
  int *piVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined *puVar10;
  
  if (param_4 == 4) {
    puVar10 = &UNK_10e525a48;
  }
  else {
    if (param_4 == 0x72) {
      if (param_6 == 0x24) {
        *param_1 = param_5;
        *param_2 = 0x24;
        *param_3 = 0;
        return 1;
      }
      uVar4 = 0x7d;
      uVar5 = 0x1e2;
      goto LAB_100738568;
    }
    lVar7 = 6;
    puVar6 = &UNK_10e525a48;
    do {
      lVar7 = lVar7 + -1;
      if (lVar7 == 0) {
        uVar4 = 0x8e;
        uVar5 = 0x212;
        goto LAB_100738568;
      }
      puVar10 = puVar6 + 0x1c;
      piVar1 = (int *)(puVar6 + 0x1c);
      puVar6 = puVar10;
    } while (*piVar1 != param_4);
  }
  if (param_6 == (byte)puVar10[4]) {
    bVar2 = puVar10[5];
    uVar8 = (ulong)bVar2;
    lVar7 = param_6 + uVar8;
    plVar3 = (long *)(lVar7 + 8);
    func_0x000107c610a0();
    if (plVar3 != (long *)0x0) {
      plVar9 = plVar3 + 1;
      *plVar3 = lVar7;
      if (bVar2 != 0) {
        func_0x000107c610b4(plVar9,puVar10 + 6,uVar8);
      }
      if (param_6 != 0) {
        func_0x000107c610b4((long)plVar9 + uVar8,param_5,param_6);
      }
      *param_1 = plVar9;
      *param_2 = lVar7;
      *param_3 = 1;
      return 1;
    }
    uVar4 = 0x41;
    uVar5 = 0x204;
  }
  else {
    uVar4 = 0x7d;
    uVar5 = 499;
  }
LAB_100738568:
  FUN_1004d2c58(4,0,uVar4,&UNK_10f6c73f8,uVar5);
  return 0;
}



/* Entry: 10073858c; end: 1007388c3; -[SCLensDataProviderCreatorServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10073858c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar1 = param_1 + _DAT_112782704;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112782708;
  func_0x000107c61148();
  lVar3 = lVar1;
  func_0x000107c4b020();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_11278270c;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c4b3b8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112782710;
  func_0x000107c61148();
  lVar5 = lVar1;
  func_0x000107c4d598();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112782714;
  func_0x000107c61148();
  lVar6 = lVar1;
  func_0x000107c3e654();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112782718;
  func_0x000107c61148();
  lVar7 = lVar1;
  func_0x000107c4b4a8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar14 = (long)_DAT_11278271c;
  lVar1 = param_1 + lVar14;
  func_0x000107c61148();
  lVar8 = lVar1;
  func_0x000107c4ad38();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar14 = param_1 + lVar14;
  func_0x000107c61148();
  lVar9 = lVar14;
  func_0x000107c4ad40();
  func_0x000107c61180();
  func_0x000107c61170(lVar14);
  lVar1 = param_1 + _DAT_112782720;
  func_0x000107c61148();
  lVar14 = lVar1;
  func_0x000107c4b518();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112782724;
  func_0x000107c61148();
  lVar10 = lVar1;
  func_0x000107c4af44();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112782728;
  func_0x000107c61148();
  lVar11 = lVar1;
  func_0x000107c4afc4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  param_1 = param_1 + _DAT_11278272c;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c3d56c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_100803694;
  puStack_d0 = &UNK_110adf538;
  puVar12 = PTR_PTR_1126ae720;
  lStack_c8 = lVar8;
  lStack_c0 = lVar9;
  lStack_b8 = lVar1;
  lStack_b0 = lVar4;
  lStack_a8 = lVar7;
  lStack_a0 = lVar2;
  lStack_98 = lVar3;
  lStack_90 = lVar14;
  lStack_88 = lVar10;
  lStack_80 = lVar5;
  lStack_78 = lVar6;
  lStack_70 = lVar11;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_e8);
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126dd9c0;
  func_0x000107c610f4();
  func_0x000107c47278();
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1007388c4; end: 1007388cb; -[SCLensLoggerServices lensThumbnailLogger] */

undefined8 FUN_1007388c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1007388cc; end: 1007388d3; -[SCLegacyLensDataFetcherServices legacyLensDataPrefetcher] */

undefined8 FUN_1007388cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1007388d4; end: 10073894b;  */

/* WARNING: Possible PIC construction at 0x0001007388e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007388f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100738908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100738918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100738928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100738938: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010073892c) */
/* WARNING: Removing unreachable block (ram,0x00010073891c) */
/* WARNING: Removing unreachable block (ram,0x00010073890c) */
/* WARNING: Removing unreachable block (ram,0x0001007388fc) */
/* WARNING: Removing unreachable block (ram,0x0001007388ec) */
/* WARNING: Removing unreachable block (ram,0x00010073893c) */

void FUN_1007388d4(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 10073894c; end: 1007389a3; -[_TtC29SCLensDataProviderCreationAPI26SCLensDataProviderServices initWithLensDataProviderCreator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10073894c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113034600) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1007389a4; end: 100738a1f;  */

void FUN_1007389a4(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100738a20; end: 100738a27;  */

void FUN_100738a20(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100738a28; end: 100738a7b;  */

void FUN_100738a28(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100738a7c; end: 100738a83;  */

void FUN_100738a7c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10029dec4();
  func_0x000107c613fc();
  func_0x000100738ae4(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100738a84; end: 100738bab;  */

void FUN_100738a84(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10029dec4();
  func_0x000107c613fc();
  func_0x000100738ae4(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 100738bac; end: 100738ccf; -[SCLensOnboardingMetadataStoreServiceProvider provide] */

void FUN_100738bac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110c8d780);
  func_0x000107c61180();
  func_0x000107c61144(auStack_38,param_1);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(puVar1);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126de368;
  func_0x000107c610f4(PTR_PTR_1126de368);
  func_0x000107c473a0();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100738cd0; end: 100738d73; -[SCLensOnboardingMetadataStoreServices initWithLensOnboardingMetadataStore:lensOnboardingMetadataStoreUpdater:] */

undefined1 *
FUN_100738cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701e20;
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



/* Entry: 100738d74; end: 100738f23; -[SCLensDataProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100738d74(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1007fa0bc;
  puStack_78 = &UNK_1109663a0;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_98,auStack_68);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126d10b0;
  func_0x000107c610f4(PTR_PTR_1126d10b0);
  func_0x000107c471c0();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112759dbc);
  puVar4 = PTR_PTR_1126d10b8;
  func_0x000107c610f4(PTR_PTR_1126d10b8);
  func_0x000107c471c4();
  func_0x000107c42c20(uVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_98);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 100738f24; end: 100738fd3;  */

void FUN_100738f24(long param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c0438;
  func_0x000107c5cf20(PTR_PTR_1126c0438);
  func_0x000107c61180();
  func_0x000107c3c720();
  func_0x000107c61170(puVar1);
  if (iVar2 != 0) {
    func_0x000107c3c444(*(undefined8 *)(param_1 + 0x20));
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c0438;
  func_0x000107c5cf24(PTR_PTR_1126c0438);
  func_0x000107c61180();
  func_0x000107c3c720();
  func_0x000107c61170(puVar1);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2be270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),
               PTR_s_writeRecordsForDeviceTransferOnC_11268d2c0);
    return;
  }
  return;
}



/* Entry: 100738fd4; end: 100738fff; +[_TtC28SCFideliusClientInitServices19SCFideliusConstants transferableDeviceGraphKey] */

void FUN_100738fd4(void)

{
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f1ea630);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100739000; end: 1007391ff;  */

void FUN_100739000(long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 uStack_58;
  
  if ((*(int **)(param_1 + 0x98) != (int *)0x0) &&
     (uVar2 = **(int **)(param_1 + 0x98) - 1, -1 < (int)uVar2)) {
    bVar9 = false;
    uVar14 = (ulong)uVar2;
    do {
      puVar10 = *(ulong **)(param_1 + 0x98);
      if ((puVar10 == (ulong *)0x0) || (*puVar10 <= uVar14)) {
        lVar12 = 0;
        if (uVar14 != 0) goto LAB_100739064;
LAB_10073906c:
        if (puVar10 == (ulong *)0x0) {
          lVar15 = -1;
        }
        else {
          lVar15 = (long)((int)*puVar10 + -1);
        }
        for (; (long)uVar14 < lVar15; lVar15 = lVar15 + -1) {
          if (*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x98) + 8) + lVar15 * 8) + 0x80) !=
              0) {
            lVar4 = lVar12;
            func_0x000107c2b668();
            iVar3 = (int)lVar4;
            if (iVar3 != 0) {
              if (iVar3 == 0x11) goto LAB_1007391d8;
              *(int *)(param_1 + 0xac) = (int)uVar14;
              *(int *)(param_1 + 0xb0) = iVar3;
              *(long *)(param_1 + 0xb8) = lVar12;
              iVar3 = 0;
              (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar3 == 0) {
                return;
              }
            }
            bVar9 = true;
          }
        }
      }
      else {
        lVar12 = *(long *)(puVar10[1] + uVar14 * 8);
        if (uVar14 == 0) goto LAB_10073906c;
LAB_100739064:
        if ((*(byte *)(lVar12 + 0x38) >> 5 & 1) == 0) goto LAB_10073906c;
      }
      bVar1 = 0 < (long)uVar14;
      uVar14 = uVar14 - 1;
    } while (bVar1);
    plVar11 = *(long **)(param_1 + 0x98);
    if ((plVar11 == (long *)0x0) || (*plVar11 == 0)) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = *(long **)plVar11[1];
    }
    if ((bVar9) && (plVar11[0xf] == 0)) {
      plVar13 = *(long **)(*plVar11 + 0x28);
      plVar16 = (long *)0xffffffff;
      do {
        plVar5 = plVar13;
        FUN_10073d6bc(plVar13,&PTR_DAT_110c7cec0,plVar16);
        if ((int)plVar5 == -1) {
          return;
        }
        uVar8 = 0;
        if ((plVar13 != (long *)0x0) && (-1 < (int)plVar5)) {
          puVar10 = (ulong *)*plVar13;
          if ((puVar10 == (ulong *)0x0) ||
             ((*puVar10 <= ((ulong)plVar5 & 0xffffffff) ||
              (lVar12 = *(long *)(puVar10[1] + ((ulong)plVar5 & 0xffffffff) * 8), lVar12 == 0)))) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined8 *)(lVar12 + 8);
          }
        }
        puVar6 = &uStack_58;
        FUN_1004cfb18(puVar6,uVar8);
        uVar8 = uStack_58;
        if ((int)puVar6 < 0) {
LAB_1007391d8:
          *(undefined4 *)(param_1 + 0xb0) = 0x11;
          return;
        }
        uVar7 = uStack_58;
        func_0x000107c2b678(uStack_58,(ulong)puVar6 & 0xffffffff);
        FUN_1001e33e0(uVar8);
        plVar16 = plVar5;
      } while ((int)uVar7 == 0);
      *(undefined8 *)(param_1 + 0xac) = 0x43ffffffff;
      *(long **)(param_1 + 0xb8) = plVar11;
      (**(code **)(param_1 + 0x38))(0,param_1);
    }
  }
  return;
}



/* Entry: 100739200; end: 1007392eb;  */

void FUN_100739200(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lStack_38;
  
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
    (**(code **)(param_1 + 0x88))(param_1);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    if (*(long *)(param_1 + 0xd8) == 0) {
      FUN_1004caf34(lVar2);
      FUN_1001e33e0(lVar2);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    func_0x000107c2b658();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  puVar3 = *(ulong **)(param_1 + 0x98);
  if (puVar3 != (ulong *)0x0) {
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        lVar2 = *(long *)(puVar3[1] + uVar4 * 8);
        if (lVar2 != 0) {
          lStack_38 = lVar2;
          FUN_1004d164c(&lStack_38,&UNK_110c87868,0);
          uVar1 = *puVar3;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    FUN_1001e33e0(puVar3[1]);
    FUN_1001e33e0(puVar3);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  FUN_10021f290(0x113311308,param_1,param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}



/* Entry: 1007392ec; end: 10073937f; -[SCFideliusDeviceGraphManager _shouldBackfillForDeviceTransferWithKey:] */

bool FUN_1007392ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126aef90;
  func_0x000107c41238(PTR_PTR_1126aef90,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c4ba34();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return puVar1 == (undefined *)0x0;
}



/* Entry: 100739380; end: 10073945f;  */

void FUN_100739380(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  ulong unaff_x21;
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x000100655724();
  FUN_100647ff0();
  if ((int)param_1 == 0) {
    return;
  }
  func_0x0001007393d4();
  func_0x000100648084();
  if ((unaff_x21 & 1) != 0) {
    func_0x000107c37328(param_1 + ((long)unaff_x21 >> 1));
    UNRECOVERED_JUMPTABLE = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007393f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100739460; end: 10073962f; -[SCFideliusLocalKVStoreManager initWithLogger:performer:grapheneRegistry:circumstanceEngine:] */

undefined8 *
FUN_100739460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_68 = PTR_PTR_1126eaf70;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    puVar1[6] = 10;
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSUbiquitousKeyValueStore_1126bd0a8;
    func_0x000107c41628(PTR__OBJC_CLASS___NSUbiquitousKeyValueStore_1126bd0a8);
    func_0x000107c61180();
    func_0x000107c3d7bc(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    uVar2 = puVar1[1];
    func_0x000107c61174(puVar1);
    func_0x000107c4e524(uVar2);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100739630; end: 1007396bf; -[_TtC21SCLensDataProviderAPI35SCLensCarouselDataProvidingServices initWithLensCarouselDataProvider:lensDataStoreUpdater:lensDataProviderUpdater:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100739630(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11307d040) = param_3;
  *(undefined8 *)(param_1 + _DAT_11307d048) = param_4;
  *(undefined8 *)(param_1 + _DAT_11307d050) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1007396c0; end: 100739717; -[_TtC21SCLensDataProviderAPI49SCCameraUIScopedLensCarouselDataProvidingServices initWithLensCarouselDataProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007396c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11307d010) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100739718; end: 1007397e3;  */

void FUN_100739718(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007397e4; end: 1007397eb;  */

void FUN_1007397e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007397ec; end: 10073983f;  */

void FUN_1007397ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100739840; end: 100739847;  */

void FUN_100739840(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  func_0x0001005c33e4();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1007398d0(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100739848; end: 1007398cf;  */

void FUN_100739848(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  func_0x0001005c33e4();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1007398d0(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007398d0; end: 100739b1f;  */

void FUN_1007398d0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126abd08;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef23580);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0dbc50);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0dbc70);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100739b1c);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + 0x30) = lVar5;
  lVar5 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 != 0) {
    *(long *)(unaff_x20 + 0x38) = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100739b20);
  (*pcVar1)();
}



/* Entry: 100739b20; end: 100739c5b; -[SCLensCTAHandlingImplEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100739b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100739c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100739c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100739c3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100739c30) */
/* WARNING: Removing unreachable block (ram,0x000100739c20) */
/* WARNING: Removing unreachable block (ram,0x000100739b6c) */
/* WARNING: Removing unreachable block (ram,0x000100739c40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100739b20(long param_1)

{
  param_1 = param_1 + _DAT_11273fe08;
  func_0x000107c61148(param_1);
  func_0x000107c4af44();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100739c5c; end: 100739cff; -[SCLensCTAHandlingServices initWithLensCtaHandler:organicLensCtaHandler:] */

undefined1 *
FUN_100739c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270a808;
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



/* Entry: 100739d00; end: 100739da3; -[SCLensCTARegisteringServices initWithLensCtaRegistry:lensOrganicCTARegistry:] */

undefined1 *
FUN_100739d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126efd08;
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



/* Entry: 100739da4; end: 100739e17; -[SCCameraUIScopedLensCTAHandlingServices initWithLensCTAHandlingServices:] */

undefined1 * FUN_100739da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a7f8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100739e18; end: 100739e23;  */

void FUN_100739e18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100739e24; end: 100739e77;  */

void FUN_100739e24(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100739e78; end: 100739e7f;  */

void FUN_100739e78(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100739e80; end: 100739ed3;  */

void FUN_100739e80(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100739ed4; end: 100739edb;  */

void FUN_100739ed4(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  func_0x0001005c2bec();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100739f74();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10073a0f4();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100739edc; end: 100739f73;  */

void FUN_100739edc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  func_0x0001005c2bec();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100739f74();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10073a0f4();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 100739f74; end: 100739fdf;  */

void FUN_100739f74(undefined8 param_1)

{
  if (lRam0000000112ee3bb8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e70db8c);
  return;
}



/* Entry: 100739fe0; end: 10073a077;  */

void FUN_100739fe0(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  
  lVar5 = *(long *)(param_2 + 0xa0);
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x18);
    iVar6 = *piVar1;
    do {
      if (iVar6 == -1) break;
      iVar2 = *piVar1;
      if (iVar2 == iVar6) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        bVar4 = cVar3 == '\0';
      }
      else {
        bVar4 = false;
        ClearExclusiveLocal();
      }
      iVar6 = iVar2;
    } while (!bVar4);
  }
  *(long *)(param_1 + 0xa0) = lVar5;
  lVar5 = *(long *)(param_2 + 0xa8);
  if (lVar5 != 0) {
    FUN_10073a078();
    *(long *)(param_1 + 0xa8) = lVar5;
    if (lVar5 == 0) {
      return;
    }
  }
  lVar5 = *(long *)(param_2 + 0xb0);
  if (lVar5 != 0) {
    FUN_10073a078();
    *(long *)(param_1 + 0xb0) = lVar5;
  }
  return;
}



/* Entry: 10073a078; end: 10073a0f3;  */

void FUN_10073a078(ulong *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  
  FUN_100229de4();
  if ((param_1 != (ulong *)0x0) && (*param_1 != 0)) {
    uVar5 = 0;
    do {
      piVar1 = (int *)(*(long *)(param_1[1] + uVar5 * 8) + 0x18);
      iVar6 = *piVar1;
      do {
        if (iVar6 == -1) break;
        iVar2 = *piVar1;
        if (iVar2 == iVar6) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          bVar4 = cVar3 == '\0';
        }
        else {
          bVar4 = false;
          ClearExclusiveLocal();
        }
        iVar6 = iVar2;
      } while (!bVar4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *param_1);
  }
  return;
}



/* Entry: 10073a0f4; end: 10073a0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10073a0f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  puVar1 = PTR_PTR_1126abdd8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126abdd8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126abdd8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = 0;
  FUN_10073a420();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined **)(lVar5 + _DAT_112ee3d90) = puVar1;
  *(undefined **)(lVar5 + _DAT_112ee3d98) = puVar2;
  *(undefined **)(lVar5 + _DAT_112ee3da0) = puVar3;
  puVar7 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61174(puVar1);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(puVar3);
  func_0x000107c61154(&lStack_50,puVar7);
  puVar7 = PTR_PTR_1126abde0;
  func_0x000107c610f8(PTR_PTR_1126abde0);
  func_0x000107c48fa8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(plVar6);
  return puVar7;
}



/* Entry: 10073a0f8; end: 10073a217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10073a0f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  puVar1 = PTR_PTR_1126abdd8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126abdd8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126abdd8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = 0;
  FUN_10073a420();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined **)(lVar5 + _DAT_112ee3d90) = puVar1;
  *(undefined **)(lVar5 + _DAT_112ee3d98) = puVar2;
  *(undefined **)(lVar5 + _DAT_112ee3da0) = puVar3;
  puVar7 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61174(puVar1);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(puVar3);
  func_0x000107c61154(&lStack_50,puVar7);
  puVar7 = PTR_PTR_1126abde0;
  func_0x000107c610f8(PTR_PTR_1126abde0);
  func_0x000107c48fa8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(plVar6);
  return puVar7;
}



/* Entry: 10073a218; end: 10073a323;  */

void FUN_10073a218(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lStack_38;
  
  lStack_38 = *(long *)(param_1 + 0xa0);
  FUN_1004d164c(&lStack_38,&UNK_110c87868,0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  puVar3 = *(ulong **)(param_1 + 0xa8);
  if (puVar3 != (ulong *)0x0) {
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        lVar2 = *(long *)(puVar3[1] + uVar4 * 8);
        if (lVar2 != 0) {
          lStack_38 = lVar2;
          FUN_1004d164c(&lStack_38,&UNK_110c87868,0);
          uVar1 = *puVar3;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    FUN_1001e33e0(puVar3[1]);
    FUN_1001e33e0(puVar3);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  puVar3 = *(ulong **)(param_1 + 0xb0);
  if (puVar3 != (ulong *)0x0) {
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        lVar2 = *(long *)(puVar3[1] + uVar4 * 8);
        if (lVar2 != 0) {
          lStack_38 = lVar2;
          FUN_1004d164c(&lStack_38,&UNK_110c87868,0);
          uVar1 = *puVar3;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    FUN_1001e33e0(puVar3[1]);
    FUN_1001e33e0(puVar3);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}



/* Entry: 10073a324; end: 10073a393; -[SCLensFeatureRegistry init] */

undefined1 * FUN_10073a324(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112703da0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x000107c5e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10073a394; end: 10073a41f;  */

void FUN_10073a394(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lStack_38;
  
  puVar3 = *(ulong **)(param_1 + 0x5b0);
  if (puVar3 != (ulong *)0x0) {
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        lVar2 = *(long *)(puVar3[1] + uVar4 * 8);
        if (lVar2 != 0) {
          lStack_38 = lVar2;
          FUN_1004d164c(&lStack_38,&DAT_110c87418,0);
          uVar1 = *puVar3;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    FUN_1001e33e0(puVar3[1]);
    FUN_1001e33e0(puVar3);
  }
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  return;
}



/* Entry: 10073a420; end: 10073a43f;  */

void FUN_10073a420(void)

{
  func_0x000107c61168(&PTR_PTR_112882060);
  return;
}



/* Entry: 10073a440; end: 10073a447;  */

undefined8 FUN_10073a440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10073a448; end: 10073a4c7;  */

undefined8 FUN_10073a448(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      uVar1 = 2;
    }
    else {
      puVar2 = (undefined8 *)0x28;
      FUN_100460860();
      uVar1 = 0;
      *puVar2 = &PTR_FUN_1107c7860;
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      puVar2[2] = *(undefined8 *)(param_1 + 0x18);
      puVar2[1] = uVar3;
      *(undefined8 *)(param_1 + 0x18) = 0;
      puVar2[3] = param_2;
      puVar2[4] = param_3;
      *param_4 = puVar2;
    }
    return uVar1;
  }
  return 2;
}



/* Entry: 10073a4c8; end: 10073a5c3; -[SCLensesFeatureServices initWithUIFeatureRegistry:recordingDisablingFeatureRegistry:mediaPickerFeatureRegistry:lensesFeaturesInfoProvider:] */

undefined1 *
FUN_10073a4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_112703d80;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10073a5c4; end: 10073a5cb;  */

void FUN_10073a5c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073a5cc; end: 10073a61f;  */

void FUN_10073a5cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073a620; end: 10073a627;  */

void FUN_10073a620(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  func_0x0001005c3edc();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  func_0x00010073a690();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073a628; end: 10073a85f;  */

void FUN_10073a628(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  func_0x0001005c3edc();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  func_0x00010073a690();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073a860; end: 10073a917; -[SCLensInfoCardLifecycleResolutionServicesEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x00010073a8f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010073a8f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10073a860(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11090ffd8);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126c8378;
  func_0x000107c610f4(PTR_PTR_1126c8378);
  func_0x000107c47338();
  puVar2 = PTR_PTR_1126c8380;
  func_0x000107c610f4(PTR_PTR_1126c8380);
  func_0x000107c46e78();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11273fe88),param_2,puVar1);
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11273fe8c),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10073a918; end: 10073a98b; -[SCLensInfoCardLifecycleResolutionServices initWithLensInfoCardLifecycleResolver:] */

undefined1 * FUN_10073a918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701b00;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10073a98c; end: 10073a9e3; -[_TtC16LensInfoCardsAPI31SCLensInfoCardLifecycleServices initWithInfoCardsScopeOnCameraObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10073a98c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113071e38) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10073a9e4; end: 10073a9eb;  */

void FUN_10073a9e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073a9ec; end: 10073aa3f;  */

void FUN_10073a9ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073aa40; end: 10073aa47;  */

void FUN_10073aa40(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_10033db9c();
  func_0x000107c613fc();
  FUN_10073aac4(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073aa48; end: 10073aabb;  */

void FUN_10073aa48(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_10033db9c();
  func_0x000107c613fc();
  FUN_10073aac4(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 10073aabc; end: 10073aac3;  */

void FUN_10073aabc(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10073aac4; end: 10073abb3;  */

void FUN_10073aac4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  FUN_1000285a8(0x112f1a848,&UNK_10db52a28);
  func_0x000107c610f8();
  uVar1 = param_2;
  func_0x000107c6157c(param_2);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x00010073abd4(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10073ac50();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar3 = uVar1;
  func_0x000107c6157c();
  FUN_10073ac78();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  return;
}



/* Entry: 10073abb4; end: 10073ac4f;  */

void FUN_10073abb4(void)

{
  func_0x000107c61168(&PTR_PTR_1129a2970);
  return;
}



/* Entry: 10073ac50; end: 10073ac77;  */

void FUN_10073ac50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10073ac78; end: 10073aebf;  */

undefined * FUN_10073ac78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar8 = &puStack_90;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_1105d8f60;
  func_0x000107c613fc(&UNK_1105d8f60,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar9;
  FUN_1000285a8(0x112f1dd40,&UNK_10db55e20);
  func_0x000107c613fc();
  func_0x000107c61174(uVar9);
  puVar2 = &UNK_102e29090;
  FUN_1000bdd8c(&UNK_102e29090,puVar1);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = &UNK_102e29154;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_102e29160;
  puStack_78 = &UNK_1105d8f78;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar7 = puStack_68;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar7);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_70 = &UNK_102e29158;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_102e2915c;
  puStack_78 = &UNK_1105d8fa0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar7 = puStack_68;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar7);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_70 = &UNK_102e290d8;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_102e28ff8;
  puStack_78 = &UNK_1105d8fc8;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  uVar9 = 0;
  FUN_1003410b4(0);
  func_0x000107c610f8();
  FUN_10073af20(puVar3,puVar5,puVar7,uVar9);
  func_0x000107c61574(puVar2);
  return puVar3;
}



/* Entry: 10073aec0; end: 10073af03;  */

void FUN_10073aec0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10073af04; end: 10073af1f;  */

void FUN_10073af04(long param_1,long param_2)

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



/* Entry: 10073af20; end: 10073af93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10073af20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113071360) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113071368) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113071370) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10073af94; end: 10073afbf;  */

void FUN_10073af94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



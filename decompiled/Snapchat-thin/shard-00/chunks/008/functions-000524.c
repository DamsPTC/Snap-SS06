/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a16e30; end: 100a16e47; -[SCScopeLifecycle parent] */

void FUN_100a16e30(long param_1)

{
  func_0x000107c61148(param_1 + 0x118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a16e48; end: 100a16e9f; -[SCScopeLifecycle scopeName] */

void FUN_100a16e48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c508ec();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c51fe0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100a16ea0; end: 100a16ec7; -[SCScopeLifecycle rootScopeContainer] */

void FUN_100a16ea0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100a16ec8; end: 100a16ef7; -[SCServicesContainer serviceClassType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a16ec8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278ca4c);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100a16ef8; end: 100a17097; -[SCScopeLifecycle createLifecycleServicesContainers] */

void FUN_100a16ef8(undefined2 *param_1,long param_2)

{
  undefined2 *puVar1;
  long lVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined2 *puVar7;
  long *plVar8;
  long lVar9;
  
  puVar4 = param_1;
  func_0x000107c3b604();
  *(undefined2 **)(param_1 + 0x74) = puVar4;
  *(long *)(param_1 + 0x78) = param_2;
  if (param_2 != 0) {
    puVar1 = puVar4 + param_2;
    do {
      uVar3 = *puVar4;
      puVar5 = (undefined8 *)(param_1 + 0x34);
      FUN_100a183e4(puVar5,uVar3);
      if (puVar5[1] != 0) {
        plVar8 = (long *)*puVar5;
        lVar9 = puVar5[1] << 3;
        do {
          if (*(short *)(*plVar8 + 4) == 2) {
            puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
            func_0x000107c61180();
            puVar7 = param_1;
            func_0x000107c3c4f8(param_1);
            func_0x000107c61180();
            func_0x000107c56bd8(*(undefined8 *)(param_1 + 0x84));
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar6);
          }
          plVar8 = plVar8 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      lVar9 = *(long *)(param_1 + 0x3c);
      lVar2 = *(long *)(param_1 + 0x40);
      FUN_100a18bbc(lVar9,lVar2,uVar3);
      if (lVar2 != lVar9) {
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x000107c61180();
        puVar7 = param_1;
        func_0x000107c3c4f8(param_1);
        func_0x000107c61180();
        func_0x000107c56bd8(*(undefined8 *)(param_1 + 0x84));
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar6);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar1);
  }
  return;
}



/* Entry: 100a17098; end: 100a170e3; -[SCScopeLifecycle _entryPointIdsForLifecycle] */

void FUN_100a17098(long param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(param_1 + 0xb8);
  uStack_30 = *(undefined8 *)(param_1 + 0xb0);
  uStack_20 = *(undefined8 *)(param_1 + 0xc0);
  func_0x000107c42984(PTR_PTR_1126df8c8,param_2,*(undefined2 *)(param_1 + 0x100),&uStack_30,
                      *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),param_1);
  return;
}



/* Entry: 100a170e4; end: 100a1744b; +[SCScopeLifecycleEntryPointsLookupV3 entryPointIdsForExposedScope:lifecycleToEntrypointsMap:scopeToIdentifyingExposuresMap:entitiesMap:delegate:] */

undefined1  [16]
FUN_100a170e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,long param_5,
             ushort *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined2 *puVar1;
  bool bVar2;
  int *piVar3;
  undefined2 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined2 **ppuVar7;
  long lVar8;
  ushort *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined2 *puVar18;
  long lVar19;
  ushort *puVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  undefined2 *puVar23;
  undefined1 auVar24 [16];
  undefined2 uStack_7a;
  undefined2 *puStack_78;
  undefined2 *puStack_70;
  undefined2 *puStack_68;
  
  func_0x000107c61174(param_9);
  lVar8 = *param_4;
  lVar14 = param_4[1];
  if ((long)param_6 - param_5 != 0) {
    uVar10 = 0;
    lVar13 = param_4[2];
    uVar11 = ((long)param_6 - param_5 >> 3) * -0x5555555555555555;
    puVar9 = param_6;
    while( true ) {
      while( true ) {
        puVar20 = (ushort *)(param_5 + uVar10 * 0x18);
        if ((uint)param_3 <= (uint)*puVar20) break;
        if (uVar11 - 1 >> 1 <= uVar10) goto LAB_100a1719c;
        uVar10 = uVar10 * 2 + 2;
      }
      puVar9 = puVar20;
      if (uVar11 >> 1 <= uVar10) break;
      uVar10 = uVar10 << 1 | 1;
    }
LAB_100a1719c:
    if ((param_6 != puVar9) && ((uint)*puVar9 <= (uint)param_3)) {
      uStack_7a = (undefined2)param_3;
      puStack_70 = (undefined2 *)0x0;
      puStack_68 = (undefined2 *)0x0;
      puStack_78 = (undefined2 *)0x0;
      FUN_100b56a68(&puStack_78,&uStack_7a,&puStack_78,1);
      if (*(long *)(puVar9 + 8) != 0) {
        lVar19 = *(long *)(puVar9 + 8) << 1;
        puVar22 = *(undefined2 **)(puVar9 + 4);
        do {
          uVar4 = *puVar22;
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
          func_0x000107c61180();
          uVar15 = param_9;
          func_0x000107c44714();
          if ((int)uVar15 != 0) {
            if (puStack_70 < puStack_68) {
              *puStack_70 = uVar4;
              puStack_70 = puStack_70 + 1;
            }
            else {
              lVar17 = (long)puStack_70 - (long)puStack_78;
              lVar12 = lVar17 >> 1;
              if (lVar12 < -1) {
                func_0x00010730ba44();
                goto LAB_100a173fc;
              }
              uVar11 = (long)puStack_68 - (long)puStack_78;
              uVar10 = uVar11;
              if (uVar11 <= lVar12 + 1U) {
                uVar10 = lVar12 + 1;
              }
              if (0x7ffffffffffffffd < uVar11) {
                uVar10 = 0x7fffffffffffffff;
              }
              ppuVar7 = &puStack_68;
              FUN_100b56ae0();
              puVar1 = (undefined2 *)((long)ppuVar7 + lVar17);
              puVar21 = (undefined2 *)((long)ppuVar7 + uVar10 * 2);
              puVar18 = (undefined2 *)((long)puVar1 - ((long)puStack_70 - (long)puStack_78));
              puVar23 = puVar1 + 1;
              *puVar1 = uVar4;
              func_0x000107c610b4(puVar18);
              bVar2 = puStack_78 != (undefined2 *)0x0;
              puStack_78 = puVar18;
              puStack_70 = puVar23;
              puStack_68 = puVar21;
              if (bVar2) {
                func_0x000107c60e14();
                puStack_70 = puVar23;
              }
            }
          }
          func_0x000107c61170(puVar6);
          puVar22 = puVar22 + 1;
          lVar19 = lVar19 + -2;
        } while (lVar19 != 0);
      }
      puVar1 = puStack_70;
      puVar22 = puStack_78;
      if (puStack_78 == puStack_70) {
        uVar16 = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        uVar16 = 0;
        puVar21 = puStack_78;
        do {
          FUN_100a1744c(lVar8,lVar14,*puVar21);
          if (lVar14 == lVar8) break;
          if (*(int *)(lVar8 + 0x18) != 1) {
            if (*(int *)(lVar8 + 0x18) == 0) {
              uVar15 = *(undefined8 *)(lVar8 + 8);
              uVar16 = *(undefined8 *)(lVar8 + 0x10);
              if (puVar22 == (undefined2 *)0x0) goto LAB_100a173a0;
              goto LAB_100a17394;
            }
            func_0x00010563ab98();
            goto LAB_100a173fc;
          }
          piVar3 = (int *)(lVar8 + 0xc);
          lVar8 = lVar13 + (long)*(int *)(lVar8 + 8) * 0x20;
          lVar14 = lVar13 + (long)*piVar3 * 0x20;
          lVar19 = lVar8;
          FUN_100a1744c(lVar8,lVar14,0xffff);
          if (lVar14 != lVar19) {
            if (*(int *)(lVar19 + 0x18) != 0) {
              func_0x00010563ab98();
              goto LAB_100a173fc;
            }
            uVar15 = *(undefined8 *)(lVar19 + 8);
            uVar16 = *(undefined8 *)(lVar19 + 0x10);
          }
          puVar21 = puVar21 + 1;
        } while (puVar21 != puVar1);
      }
      if (puVar22 != (undefined2 *)0x0) {
LAB_100a17394:
        puStack_70 = puVar22;
        func_0x000107c60e14(puVar22);
      }
      goto LAB_100a173a0;
    }
  }
  FUN_100a1744c(lVar8,lVar14,param_3);
  if (lVar14 == lVar8) {
    uVar16 = 0;
    uVar15 = 0;
  }
  else {
    if (*(int *)(lVar8 + 0x18) != 0) {
      func_0x00010563ab98();
LAB_100a173fc:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100a17400);
      (*pcVar5)();
    }
    uVar15 = *(undefined8 *)(lVar8 + 8);
    uVar16 = *(undefined8 *)(lVar8 + 0x10);
  }
LAB_100a173a0:
  func_0x000107c61170(param_9);
  auVar24._8_8_ = uVar16;
  auVar24._0_8_ = uVar15;
  return auVar24;
}



/* Entry: 100a1744c; end: 100a174d7;  */

ushort * FUN_100a1744c(long param_1,ushort *param_2,ushort param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = param_2;
  if ((long)param_2 - param_1 != 0) {
    uVar4 = 0;
    uVar3 = (long)param_2 - param_1 >> 5;
    while( true ) {
      for (; puVar1 = (ushort *)(param_1 + uVar4 * 0x20), param_3 <= *puVar1; uVar4 = uVar4 << 1 | 1
          ) {
        puVar2 = puVar1;
        if (uVar3 >> 1 <= uVar4) goto LAB_100a174b8;
      }
      if (uVar3 - 1 >> 1 <= uVar4) break;
      uVar4 = uVar4 * 2 + 2;
    }
  }
LAB_100a174b8:
  if ((param_2 == puVar2) || (param_3 < *puVar2)) {
    puVar2 = param_2;
  }
  return puVar2;
}



/* Entry: 100a174d8; end: 100a17513;  */

undefined8 FUN_100a174d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  func_0x000107c60e20(0x70);
  FUN_100a17514(uVar1,param_1);
  return uVar1;
}



/* Entry: 100a17514; end: 100a176bf;  */

void FUN_100a17514(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      FUN_100a178a8(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x0001050cf22c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_100a17600:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        func_0x0001050cf2c0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_100a17600;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110866be0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 100a176c0; end: 100a176fb;  */

undefined8 FUN_100a176c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  func_0x000107c60e20(0x70);
  FUN_100a176fc(uVar1,param_1);
  return uVar1;
}



/* Entry: 100a176fc; end: 100a178a7;  */

void FUN_100a176fc(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x00010507a520(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x00010507a48c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_100a177e8:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        func_0x00010507a620(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_100a177e8;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110864c08;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 100a178a8; end: 100a179a7;  */

undefined8 * FUN_100a178a8(undefined8 *param_1,int param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  lVar2 = *param_3;
  lVar3 = *param_4;
  if ((*(byte *)(lVar2 + 0x19) & 1) == 0) {
    bVar4 = *(byte *)(lVar3 + 0x19);
  }
  else {
    bVar4 = 1;
  }
  if ((*(byte *)(lVar2 + 0x1a) & 1) == 0) {
    bVar5 = *(byte *)(lVar3 + 0x1a);
  }
  else {
    bVar5 = 1;
  }
  if (param_2 == 4) {
    if ((*(byte *)(lVar2 + 0x1b) & 1) == 0) {
      bVar6 = 0;
      goto LAB_100a17914;
    }
  }
  else if ((*(byte *)(lVar2 + 0x1b) & 1) != 0) {
    bVar6 = 1;
    goto LAB_100a17914;
  }
  bVar6 = *(byte *)(lVar3 + 0x1b);
LAB_100a17914:
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(byte *)((long)param_1 + 0x19) = bVar4 & 1;
  *(byte *)((long)param_1 + 0x1a) = bVar5 & 1;
  *(byte *)((long)param_1 + 0x1b) = bVar6 & 1;
  *param_1 = &PTR_DAT_110866be0;
  param_1[7] = lVar2;
  param_1[8] = lVar3;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  lVar2 = *param_3;
  *param_3 = 0;
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = lVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar2 = *param_4;
  *param_4 = 0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = lVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 100a179a8; end: 100a17b43;  */

void FUN_100a179a8(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c40808(param_1);
  func_0x000107c3e170(puVar2);
  func_0x000107c61180();
  func_0x000107c61174(param_1);
  puVar3 = param_1;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_1);
      }
      uVar4 = *(undefined8 *)((long)puVar6 * 8);
      func_0x000107c5d984(uVar4);
      func_0x000107c61180();
      func_0x000107c3d798(puVar2);
      func_0x000107c61170(uVar4);
      puVar6 = (undefined8 *)((long)puVar6 + 1);
    } while (puVar3 != puVar6);
    puVar3 = param_1;
    func_0x000107c4080c();
  }
  func_0x000107c61170(param_1);
  puVar3 = param_1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c60bd8();
  *puVar3 = &PTR_DAT_110cf91b8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 9) = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  return;
}



/* Entry: 100a17b44; end: 100a17b6f;  */

void FUN_100a17b44(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cf91b8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}



/* Entry: 100a17b70; end: 100a17bbb;  */

void FUN_100a17b70(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x40) = 0;
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



/* Entry: 100a17bbc; end: 100a17bd7;  */

void FUN_100a17bbc(void)

{
  return;
}



/* Entry: 100a17bd8; end: 100a17c23;  */

void FUN_100a17bd8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0x20);
  }
  *puVar1 = &PTR_DAT_110cf9168;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 100a17c24; end: 100a17c2b;  */

void FUN_100a17c24(void)

{
  return;
}



/* Entry: 100a17c2c; end: 100a17c53;  */

long FUN_100a17c2c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000100a17b4c(param_1,0);
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_100a17cb8(param_1);
    }
    else {
      func_0x000107c3044c(param_1);
    }
  }
  return param_1;
}



/* Entry: 100a17c54; end: 100a17cb7;  */

long FUN_100a17c54(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_100a17cb8(param_1);
    }
    else {
      func_0x000107c3044c(param_1);
    }
  }
  return param_1;
}



/* Entry: 100a17cb8; end: 100a17d07;  */

undefined1  [16] FUN_100a17cb8(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  func_0x0001004a641c(param_1 + 0x10,param_2 + 0x10);
  func_0x0001004a641c(param_1 + 0x28,param_2 + 0x28);
  puVar3 = (undefined1 *)(param_2 + 0x40);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x40); puVar2 != (undefined1 *)(param_1 + 0x48);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x48);
  return auVar6;
}



/* Entry: 100a17d08; end: 100a17d13;  */

undefined1  [16] FUN_100a17d08(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 8;
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



/* Entry: 100a17d14; end: 100a17d43;  */

long FUN_100a17d14(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  FUN_100a17d74(param_1 + 0x10);
  return param_1;
}



/* Entry: 100a17d44; end: 100a17d73;  */

long * FUN_100a17d44(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1000681a0(param_1);
  }
  return param_1;
}



/* Entry: 100a17d74; end: 100a17d9b;  */

undefined8 FUN_100a17d74(long param_1)

{
  char in_NG;
  char in_OV;
  undefined8 unaff_x19;
  
  FUN_100a17d44(param_1 + 0x18);
  func_0x00010006804c(param_1);
  if (in_NG == in_OV) {
    FUN_1002a998c(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 100a17d9c; end: 100a17dbb;  */

void FUN_100a17d9c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_100a17d14();
  }
  return;
}



/* Entry: 100a17dbc; end: 100a17deb;  */

long FUN_100a17dbc(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  FUN_100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 100a17dec; end: 100a17dff;  */

void FUN_100a17dec(void)

{
  FUN_100a17dbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100a17e00; end: 100a17e13;  */

void FUN_100a17e00(void)

{
  undefined1 uStack_11;
  
  uStack_11 = 0;
  FUN_10011befc(0x38,1,&UNK_10f76e8e1,0x1e,&uStack_11,0);
  return;
}



/* Entry: 100a17e14; end: 100a183e3;  */

long ** FUN_100a17e14(long **param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  long **pplVar7;
  undefined8 *puVar8;
  ushort *puVar9;
  long lVar10;
  uint *puVar11;
  long **pplVar12;
  long *plVar13;
  undefined1 *puVar14;
  long **pplVar15;
  long *plVar16;
  long *plVar17;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar18;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  ushort *puVar22;
  long **unaff_x19;
  long unaff_x20;
  long **unaff_x21;
  long **unaff_x22;
  undefined8 *puVar23;
  long *plVar24;
  undefined1 *unaff_x23;
  long **unaff_x24;
  undefined8 unaff_x25;
  long lVar25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  ulong uStack_2f0;
  long lStack_2e8;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined1 auStack_2a8 [24];
  undefined1 uStack_290;
  undefined1 auStack_288 [24];
  undefined1 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [16];
  undefined8 *puStack_190;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined **ppuStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_c1;
  ulong uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  FUN_10063865c();
  uVar5 = *(char *)((long)param_1 + 0xc1) == '\x01';
  pplVar7 = param_1;
  uStack_58 = extraout_x8;
  if ((bool)uVar5) {
    if (*(int *)(param_1 + 0x24) == 0) {
      uVar5 = *(int *)(param_1 + 0x10) == 1;
      if ((bool)uVar5) {
        uStack_c1 = 0;
        pplVar15 = param_1 + 0x18;
        puVar14 = &uStack_c1;
        pplVar7 = pplVar15;
        func_0x000107315604(pplVar15,puVar14,1,5);
        param_2 = (uint)puVar14;
        if ((int)pplVar7 != 0) {
          func_0x0001009d8ac4(auStack_1a0,param_1 + 4);
          param_2 = (uint)puVar14;
          uStack_d8 = puStack_190[1];
          plStack_e0 = (long *)*puStack_190;
          if (puStack_190[1] != 0) {
            do {
              func_0x000100638fe0();
              param_2 = (uint)puVar14;
            } while (extraout_w10 != 0);
          }
          FUN_1000df5a0(auStack_1a0);
          if (plStack_e0 == (long *)0x0) {
            *(undefined1 *)pplVar15 = 0;
          }
          else {
            ppuStack_108 = &PTR_DAT_110ce9e00;
            uStack_100 = 0;
            puStack_f8 = &DAT_11383d918;
            puStack_f0 = &DAT_11383d918;
            uStack_e8 = 1;
            func_0x0001056439e0(&puStack_f8,&DAT_10f3b28b3,0);
            uVar20 = uStack_100;
            if ((uStack_100 & 1) != 0) {
              uVar20 = *(ulong *)(uStack_100 & 0xfffffffffffffffe);
            }
            func_0x0001056439e0(&puStack_f0,&UNK_10f76e85a,uVar20);
            func_0x000107c3036c(auStack_120,&ppuStack_108);
            FUN_100456794(auStack_138,param_1 + 0x11,&UNK_10f76e819);
            func_0x000107c60c94(auStack_1b8,auStack_138);
            FUN_10002b838(&uStack_218,"Accept");
            FUN_10002b838(&uStack_230,"application/x-protobuf");
            uStack_b0 = uStack_208;
            lStack_b8 = uStack_210;
            uStack_c0 = uStack_218;
            uStack_210 = 0;
            uStack_208 = 0;
            uStack_a0 = uStack_228;
            uStack_a8 = uStack_230;
            uStack_98 = uStack_220;
            uStack_230 = 0;
            uStack_228 = 0;
            uStack_220 = 0;
            uStack_218 = 0;
            FUN_10002b838(&uStack_248,"Content-Type");
            FUN_10002b838(&uStack_260,"application/x-protobuf");
            uStack_88 = uStack_240;
            uStack_90 = uStack_248;
            uStack_80 = uStack_238;
            uStack_240 = 0;
            uStack_238 = 0;
            uStack_70 = uStack_258;
            uStack_78 = uStack_260;
            uStack_68 = uStack_250;
            uStack_260 = 0;
            uStack_258 = 0;
            uStack_250 = 0;
            uStack_248 = 0;
            func_0x00010530169c(&uStack_200,&uStack_c0,2);
            uStack_1d8 = uStack_1f8;
            uStack_1e0 = uStack_200;
            uStack_1d0 = uStack_1f0;
            uStack_1f8 = 0;
            uStack_1f0 = 0;
            uStack_200 = 0;
            uStack_1c8 = 1;
            auStack_2a8[0] = 0;
            uStack_290 = 0;
            auStack_288[0] = 0;
            uStack_270 = 0;
            uStack_268 = 0x100000001;
            func_0x00010530182c(auStack_1a0,auStack_1b8,&uStack_1e0,7,auStack_288);
            FUN_1001148fc(auStack_288);
            FUN_1001148fc(auStack_2a8);
            func_0x0001005ad2a8(&uStack_1e0);
            func_0x0001005ad2a8(&uStack_200);
            lVar25 = 0x30;
            do {
              FUN_1005acd08((long)&uStack_c0 + lVar25);
              lVar25 = lVar25 + -0x30;
              uVar5 = lVar25 == -0x30;
            } while (!(bool)uVar5);
            func_0x000107c60ca0(&uStack_260);
            func_0x000107c60ca0(&uStack_248);
            func_0x000107c60ca0(&uStack_230);
            func_0x000107c60ca0(&uStack_218);
            func_0x000107c60ca0(auStack_1b8);
            plVar13 = param_1[2];
            plVar17 = param_1[3];
            plStack_2c8 = plVar13;
            plStack_2c0 = plVar17;
            if (plVar17 != (long *)0x0) {
              do {
                func_0x000100638fe0();
              } while (extraout_w10_00 != 0);
            }
            puVar8 = (undefined8 *)0x30;
            func_0x000107c60e20();
            plVar19 = puVar8 + 1;
            *plVar19 = 0;
            puVar8[2] = 0;
            *puVar8 = &PTR_DAT_110ce9d18;
            puVar23 = puVar8 + 3;
            *puVar23 = &PTR_DAT_110ce9d68;
            plStack_2c8 = (long *)0x0;
            plStack_2c0 = (long *)0x0;
            puVar8[4] = plVar13;
            puVar8[5] = plVar17;
            uStack_c0 = 0;
            lStack_b8 = 0;
            FUN_100638f5c(&uStack_c0);
            puStack_2b8 = puVar23;
            puStack_2b0 = puVar8;
            FUN_100638f5c(&plStack_2c8);
            func_0x0001086e3e34(&plStack_2c8,auStack_120);
            func_0x000105300df4(&uStack_c0,&plStack_2c8);
            FUN_1000ff1ac(&plStack_2c8);
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar6) {
                *plVar19 = *plVar19 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            lStack_2e8 = lStack_b8;
            uStack_2f0 = uStack_c0;
            plVar13 = plStack_e0;
            puStack_2d8 = puVar23;
            puStack_2d0 = puVar8;
            if (lStack_b8 != 0) {
              do {
                func_0x000100638fe0();
              } while (extraout_w10_01 != 0);
            }
            param_2 = (uint)auStack_1a0;
            (**(code **)(*plVar13 + 0x10))(&plStack_2c8);
            func_0x000105301d8c(&plStack_2c8);
            FUN_10067c884(&uStack_2f0);
            func_0x000105302c94(&puStack_2d8);
            func_0x000105302648(&uStack_c0);
            func_0x000107c2ff0c(&puStack_2b8);
            func_0x0001053018c4(auStack_1a0);
            func_0x000107c60ca0(auStack_138);
            func_0x000107c60ca0(auStack_120);
            func_0x000107c2ff14(&ppuStack_108);
          }
          pplVar7 = &plStack_e0;
          func_0x0001009d8b30(pplVar7);
        }
        goto LAB_100a18278;
      }
    }
    else {
      if ((*(int *)(param_1 + 0x24) == 2) || (*(int *)(param_1 + 0x10) == 1)) {
        bVar6 = true;
        func_0x000100638fc4(extraout_x8);
        if (bVar6) {
          plVar13 = (long *)0x1;
code_r0x00010b47aad0:
          while( true ) {
            pplVar7 = param_1;
            if (*(char *)(pplVar7 + 0x23) != '\x01') {
              return pplVar7;
            }
            uVar3 = *(undefined4 *)(pplVar7 + 0x24);
            pplVar15 = pplVar7 + 0x19;
            plVar17 = (long *)((long)register0x00000008 + -0x1f0);
            *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
            *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
            *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
            *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
            *(long ***)((long)register0x00000008 + -0x40) = unaff_x24;
            *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
            *(long ***)((long)register0x00000008 + -0x30) = unaff_x22;
            *(long ***)((long)register0x00000008 + -0x28) = unaff_x21;
            *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
            *(long ***)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
            *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
            unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
            unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x160);
            func_0x000107c393cc();
            *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_x8_00;
            *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
            plVar19 = pplVar15[5];
            *(undefined4 *)((long)register0x00000008 + -0x90) = 0x3f800000;
            uVar5 = ((ulong)plVar19 & 1) == 0;
            unaff_x24 = pplVar15 + 5;
            if (!(bool)uVar5) {
              unaff_x24 = (long **)((long)plVar19 + 7);
            }
            for (lVar25 = (long)*(int *)(pplVar15 + 6) << 3; lVar25 != 0; lVar25 = lVar25 + -8) {
              uVar2 = *(uint *)(*unaff_x24 + 3);
              unaff_x26 = (ulong)uVar2;
              puVar11 = (uint *)((long)register0x00000008 + -0xb0);
              func_0x0001074d68bc(puVar11,(*unaff_x24)[2] & 0xfffffffffffffffc);
              *puVar11 = uVar2;
              unaff_x24 = unaff_x24 + 1;
            }
            func_0x000107c2c050((undefined1 *)((long)register0x00000008 + -0xd8),pplVar7[0x1c],
                                (long)pplVar7[0x1c] + (long)*(int *)(pplVar7 + 0x1b) * 4);
            *(long **)((long)register0x00000008 + -0x160) = pplVar7[0x21];
            unaff_x22 = (long **)((long)register0x00000008 + -0x160);
            *(undefined8 *)((long)register0x00000008 + -0x80) = 0x800000000;
            func_0x000107c2ff10((undefined1 *)((long)register0x00000008 + -0x158),
                                (undefined1 *)((long)register0x00000008 + -0x80),2);
            plVar19 = (long *)((long)register0x00000008 + -0xd8);
            func_0x000107c2b124((undefined1 *)((long)register0x00000008 + -0x130));
            *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
            *(undefined4 *)((long)register0x00000008 + -0xe8) = 0x3f800000;
            *(undefined1 *)((long)register0x00000008 + -0xe0) = 1;
            *(undefined4 *)((long)register0x00000008 + -0xdc) = uVar3;
            __ZNSt3__15mutex4lockEv(pplVar7 + 0x25);
            *(char *)(pplVar7 + 0x2d) = (char)plVar13;
            pplVar15 = pplVar7 + 0x2e;
            if ((int)plVar13 == 0) {
              func_0x0001074d9c50(pplVar15);
            }
            else {
              uVar5 = pplVar15 == (long **)((long)register0x00000008 + -0xb0);
              if (!(bool)uVar5) {
                *(undefined4 *)(pplVar7 + 0x32) = *(undefined4 *)((long)register0x00000008 + -0x90);
                plVar13 = *(long **)((long)register0x00000008 + -0xa0);
                plVar18 = pplVar7[0x2f];
                if (plVar18 != (long *)0x0) {
                  plVar24 = *pplVar15;
                  for (; plVar18 != (long *)0x0; plVar18 = (long *)((long)plVar18 + -1)) {
                    *plVar24 = 0;
                    plVar24 = plVar24 + 1;
                  }
                  plVar24 = pplVar7[0x30];
                  pplVar7[0x30] = (long *)0x0;
                  pplVar7[0x31] = (long *)0x0;
                  for (plVar18 = plVar13;
                      (plVar16 = plVar24, plVar13 = plVar18, plVar16 != (long *)0x0 &&
                      (plVar13 = (long *)0x0, plVar18 != (long *)0x0)); plVar18 = (long *)*plVar18)
                  {
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                              (plVar16 + 2,plVar18 + 2);
                    *(undefined4 *)(plVar16 + 5) = *(undefined4 *)(plVar18 + 5);
                    plVar24 = (long *)*plVar16;
                    func_0x00010b47b054(pplVar15);
                    plVar19 = plVar16;
                  }
                  func_0x00010b47b564();
                }
                unaff_x22 = pplVar7 + 0x30;
                unaff_x24 = (long **)0x1;
                for (; unaff_x23 = (undefined1 *)0x0, plVar13 != (long *)0x0;
                    plVar13 = (long *)*plVar13) {
                  plVar19 = (long *)0x30;
                  __Znwm();
                  *(long **)((long)register0x00000008 + -0x80) = plVar19;
                  *(long ***)((long)register0x00000008 + -0x78) = unaff_x22;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  *plVar19 = 0;
                  plVar19[1] = 0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                            (plVar19 + 2,plVar13 + 2);
                  *(undefined4 *)(plVar19 + 5) = *(undefined4 *)(plVar13 + 5);
                  *(undefined1 *)((long)register0x00000008 + -0x70) = 1;
                  pplVar12 = pplVar7 + 0x31;
                  func_0x000107c278c4(pplVar12,plVar19 + 2);
                  plVar19[1] = (long)pplVar12;
                  func_0x00010b47b054(pplVar15);
                  *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
                  func_0x0001074d9bd4((undefined1 *)((long)register0x00000008 + -0x80));
                }
              }
            }
            func_0x00010b47b554();
            func_0x000107c2fec8((undefined1 *)((long)register0x00000008 + -0x80),pplVar7 + 0xe);
            unaff_x20 = *(long *)((long)register0x00000008 + -0x80);
            plVar13 = plVar19;
            if (unaff_x20 != 0) {
              func_0x00010b47a298((undefined1 *)((long)register0x00000008 + -0x1f0),
                                  (undefined1 *)((long)register0x00000008 + -0x160));
              func_0x00010b48c75c(unaff_x20);
              func_0x00010b47b55c();
              *(undefined1 *)((long)pplVar7 + 0x125) = 1;
              plVar13 = plVar17;
            }
            func_0x000107c2c5ac((undefined1 *)((long)register0x00000008 + -0x80));
            func_0x000107c2fed8((undefined1 *)((long)register0x00000008 + -0x160));
            func_0x000107c2ab24((undefined1 *)((long)register0x00000008 + -0xd8));
            unaff_x21 = (long **)((long)register0x00000008 + -0xb0);
            func_0x0001057061b4();
            func_0x000107c393b0(*(undefined8 *)((long)register0x00000008 + -0x68));
            if ((bool)uVar5) break;
            ___stack_chk_fail();
            func_0x00010b47b55c();
            func_0x000107c2c5ac((undefined1 *)((long)register0x00000008 + -0x80));
            func_0x000107c2fed8((undefined1 *)((long)register0x00000008 + -0x160));
            func_0x000107c2ab24((undefined1 *)((long)register0x00000008 + -0xd8));
            func_0x0001057061b4((undefined1 *)((long)register0x00000008 + -0xb0));
            unaff_x30 = &UNK_10b47aad0;
            param_1 = unaff_x21;
            __Unwind_Resume();
            unaff_x25 = 0;
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1f0);
            unaff_x19 = pplVar7;
          }
          return unaff_x21;
        }
        goto LAB_100a182a0;
      }
      bVar6 = *(char *)((long)param_1 + 0x124) == '\x01';
      if (bVar6) {
        func_0x000100638fc4(extraout_x8);
        if (bVar6) {
          plVar13 = (long *)0x0;
          goto code_r0x00010b47aad0;
        }
        goto LAB_100a182a0;
      }
    }
    bVar6 = false;
    func_0x000100638fc4(extraout_x8);
    if (bVar6) {
      func_0x00010b47b578(param_1);
      if ((((ulong)unaff_x19[0x2d] & 1) == 0) && (*(char *)((long)unaff_x19 + 0x125) != '\x01')) {
        pplVar7 = unaff_x19 + 0x25;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(pplVar7);
        return pplVar7;
      }
      *(undefined1 *)(unaff_x19 + 0x2d) = 0;
      func_0x0001074d9c50(unaff_x19 + 0x2e);
      func_0x00010b47b554();
      func_0x000107c2fec8(&stack0xffffffffffffffd0,unaff_x19 + 0xe);
      if (unaff_x22 != (long **)0x0) {
        uStack_c0 = uStack_c0 & 0xffffffffffffff00;
        func_0x00010b48c75c(unaff_x22,&uStack_c0);
        func_0x00010b47b55c();
      }
      pplVar7 = (long **)&stack0xffffffffffffffd0;
      func_0x000107c2c5ac(pplVar7);
      *(undefined1 *)((long)unaff_x19 + 0x125) = 0;
      return pplVar7;
    }
  }
  else {
LAB_100a18278:
    func_0x000100638fc4(uStack_58);
    if ((bool)uVar5) {
      return pplVar7;
    }
  }
LAB_100a182a0:
  func_0x000107c60e78();
  FUN_100a169a0();
  FUN_10067c884();
  func_0x000105302c94(&puStack_2d8);
  func_0x000105302648(&uStack_c0);
  func_0x000107c2ff0c(&puStack_2b8);
  func_0x0001053018c4(auStack_1a0);
  func_0x000107c60ca0(auStack_138);
  func_0x000107c60ca0(auStack_120);
  func_0x000107c2ff14(&ppuStack_108);
  pplVar7 = &plStack_e0;
  func_0x0001009d8b30();
  func_0x000107c393b8();
  puVar1 = (ushort *)pplVar7[1];
  lVar25 = (long)puVar1 - (long)*pplVar7;
  if (lVar25 != 0) {
    uVar20 = 0;
    uVar21 = (lVar25 >> 3) * -0x5555555555555555;
    puVar9 = puVar1;
    while( true ) {
      while (puVar22 = (ushort *)(*pplVar7 + uVar20 * 3), (param_2 & 0xffff) <= (uint)*puVar22) {
        puVar9 = puVar22;
        if (uVar21 >> 1 <= uVar20) goto LAB_100a18468;
        uVar20 = uVar20 << 1 | 1;
      }
      if (uVar21 - 1 >> 1 <= uVar20) break;
      uVar20 = uVar20 * 2 + 2;
    }
LAB_100a18468:
    if ((puVar1 != puVar9) && ((uint)*puVar9 <= (param_2 & 0xffff))) {
      return (long **)(puVar9 + 4);
    }
  }
  lVar10 = 0x10;
  func_0x000107c60e30();
  func_0x000104c03f74();
  lVar25 = lVar10;
  func_0x000107c60e54(lVar10,PTR___ZTISt12out_of_range_110352240,
                      PTR___ZNSt12out_of_rangeD1Ev_110346180);
  func_0x000107c60e40(lVar10);
  func_0x000107c60bd8();
  pplVar7 = *(long ***)(lVar25 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010be6fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar25 + 0x40),*(undefined4 *)(lVar25 + 0x50),
             *(undefined8 *)(lVar25 + 0x48),pplVar7,PTR_s__pageViewDidStartWithName_withPa_112579828
             ,*(undefined8 *)(lVar25 + 0x28),*(undefined8 *)(lVar25 + 0x30),
             *(undefined8 *)(lVar25 + 0x38),*(undefined1 *)(lVar25 + 0x54));
  return pplVar7;
}



/* Entry: 100a183e4; end: 100a184cf;  */

ushort * FUN_100a183e4(long *param_1,ushort param_2)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  ushort *puVar4;
  ulong uVar5;
  ulong uVar6;
  ushort *puVar7;
  
  puVar4 = (ushort *)param_1[1];
  lVar3 = (long)puVar4 - *param_1;
  if (lVar3 != 0) {
    uVar5 = 0;
    uVar6 = (lVar3 >> 3) * -0x5555555555555555;
    puVar1 = puVar4;
    while( true ) {
      for (; puVar7 = (ushort *)(*param_1 + uVar5 * 0x18), param_2 <= *puVar7;
          uVar5 = uVar5 << 1 | 1) {
        puVar1 = puVar7;
        if (uVar6 >> 1 <= uVar5) goto LAB_100a18468;
      }
      if (uVar6 - 1 >> 1 <= uVar5) break;
      uVar5 = uVar5 * 2 + 2;
    }
LAB_100a18468:
    if ((puVar4 != puVar1) && (*puVar1 <= param_2)) {
      return puVar1 + 4;
    }
  }
  lVar2 = 0x10;
  func_0x000107c60e30();
  func_0x000104c03f74();
  lVar3 = lVar2;
  func_0x000107c60e54(lVar2,PTR___ZTISt12out_of_range_110352240,
                      PTR___ZNSt12out_of_rangeD1Ev_110346180);
  func_0x000107c60e40(lVar2);
  func_0x000107c60bd8();
  puVar4 = *(ushort **)(lVar3 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010be6fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar3 + 0x40),*(undefined4 *)(lVar3 + 0x50),
             *(undefined8 *)(lVar3 + 0x48),puVar4,PTR_s__pageViewDidStartWithName_withPa_112579828,
             *(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x30),
             *(undefined8 *)(lVar3 + 0x38),*(undefined1 *)(lVar3 + 0x54));
  return puVar4;
}



/* Entry: 100a184d0; end: 100a184eb;  */

void FUN_100a184d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x50),
             *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20),
             PTR_s__pageViewDidStartWithName_withPa_112579828,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined1 *)(param_1 + 0x54));
  return;
}



/* Entry: 100a184ec; end: 100a18617; -[SCBatteryPageViewLogger _pageViewDidStartWithName:withPageViewStartTime:withPreviousPageName:batteryLevel:thermalState:isCharging:pageViewStartCpuTime:] */

/* WARNING: Possible PIC construction at 0x000100a185a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a185f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a185ac) */
/* WARNING: Removing unreachable block (ram,0x000100a185d0) */
/* WARNING: Removing unreachable block (ram,0x000100a185bc) */
/* WARNING: Removing unreachable block (ram,0x000100a185ec) */
/* WARNING: Removing unreachable block (ram,0x000100a185f4) */

void FUN_100a184ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c53c88(param_4,param_5,param_6);
  func_0x000107c49b10(param_4,param_5,2);
  func_0x000107c49b10(param_4,param_5,1);
  func_0x000107c610f4(PTR_PTR_1126b6fb0);
  func_0x000107c47d38(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 100a18618; end: 100a18683; -[SCBatteryPageViewLogger setCurrentPage:] */

/* WARNING: Possible PIC construction at 0x000100a18658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a18670: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1865c) */

void FUN_100a18618(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c49d0c(param_3,param_2,*(undefined8 *)(param_1 + 0x78));
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x000107c40794();
    param_3 = *(ulong *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100a18684; end: 100a186ff; -[SCBatteryPageViewLogger isCameraOpenAtPosition:] */

bool FUN_100a18684(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x40);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c4d9e8(lVar4,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = lVar4;
    func_0x000107c49804(lVar4);
    bVar1 = (int)lVar3 == 0;
  }
  func_0x000107c61170(lVar4);
  return bVar1;
}



/* Entry: 100a18700; end: 100a1892b; -[SCBatteryPageViewLoggingItem initWithPageStartTime:previousPageName:isFrontCameraOn:isBackCameraOn:startBatteryLevel:startThermalState:isBatteryCharging:pageStartCpuTime:] */

undefined1 *
FUN_100a18700(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,int param_7,int param_8,undefined8 param_9,
             int param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_9);
  puStack_78 = PTR_PTR_1126e7590;
  uStack_80 = param_4;
  func_0x000107c61154(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = 0xbff0000000000000;
    uVar2 = param_6;
    func_0x000107c40794();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar5);
    *(undefined4 *)((long)puVar1 + 0xc) = param_2;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    func_0x000107c61170(uVar2);
    if (param_10 != 0) {
      *(undefined1 *)((long)puVar1 + 8) = 1;
    }
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    *(undefined8 *)((long)puVar1 + 0x48) = param_1;
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    func_0x000107c61170(uVar2);
    if (param_7 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c3e15c(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x000107c61180();
      puVar4 = PTR_PTR_1126b6ed8;
      func_0x000107c610f4(PTR_PTR_1126b6ed8);
      func_0x000107c48d28(param_1);
      func_0x000107c3d798(puVar3);
      func_0x000107c56bd8(*(undefined8 *)((long)puVar1 + 0x60));
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
    }
    if (param_8 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c3e15c(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x000107c61180();
      puVar4 = PTR_PTR_1126b6ed8;
      func_0x000107c610f4(PTR_PTR_1126b6ed8);
      func_0x000107c48d28(param_1);
      func_0x000107c3d798(puVar3);
      func_0x000107c56bd8(*(undefined8 *)((long)puVar1 + 0x60));
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
    }
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 100a1892c; end: 100a189bf; -[SCPerformanceResourceTracker startRecordingResourceHistoryWithPageName:] */

/* WARNING: Possible PIC construction at 0x000100a1897c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a189a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a18980) */
/* WARNING: Removing unreachable block (ram,0x000100a189ac) */

void FUN_100a1892c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61174(param_3);
  func_0x000107c3e15c(puVar1);
  func_0x000107c61180();
  func_0x000107c56bd8(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100a189c0; end: 100a189f3;  */

void FUN_100a189c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148(lVar1);
  func_0x000107c3c0e0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100a189f4; end: 100a18a9b; -[SCBatteryCameraMonitor _performCameraStartBeingVisiableAtTime:] */

/* WARNING: Possible PIC construction at 0x000100a18a3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a18a40) */
/* WARNING: Removing unreachable block (ram,0x000100a18a88) */

void FUN_100a189f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_2 + 0x28);
  func_0x000107c40808();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b6ee0;
    func_0x000107c610f4(PTR_PTR_1126b6ee0);
    func_0x000107c48d2c(param_1);
    func_0x000107c3d798(*(undefined8 *)(param_2 + 0x28),param_3,puVar2);
  }
  else {
    puVar2 = *(undefined **)(param_2 + 0x28);
    func_0x000107c4aa28(puVar2);
    func_0x000107c61180();
    func_0x000107c3f31c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100a18a9c; end: 100a18af3; -[SCBatteryCameraVisibleStatusChangeActivityItem initWithTimestamp:cameraVisibleStatusChangeType:] */

void FUN_100a18a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e7548;
  uStack_40 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 100a18af4; end: 100a18b8b;  */

void FUN_100a18af4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  if ((lVar1 != 0) && ((*(double *)(lVar1 + 0x10) < 1e-06 || (*(double *)(lVar1 + 0x18) < 1e-06))))
  {
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100a18b8c; end: 100a18bbb; -[SCSnapchattersSuggestRequestCoordinator _updatePinnedUserIds:] */

void FUN_100a18b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100a18bbc; end: 100a18c47;  */

ushort * FUN_100a18bbc(long param_1,ushort *param_2,ushort param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = param_2;
  if ((long)param_2 - param_1 != 0) {
    uVar4 = 0;
    uVar3 = (long)param_2 - param_1 >> 2;
    while( true ) {
      for (; puVar1 = (ushort *)(param_1 + uVar4 * 4), param_3 <= *puVar1; uVar4 = uVar4 << 1 | 1) {
        puVar2 = puVar1;
        if (uVar3 >> 1 <= uVar4) goto LAB_100a18c28;
      }
      if (uVar3 - 1 >> 1 <= uVar4) break;
      uVar4 = uVar4 * 2 + 2;
    }
  }
LAB_100a18c28:
  if ((param_2 == puVar2) || (param_3 < *puVar2)) {
    puVar2 = param_2;
  }
  return puVar2;
}



/* Entry: 100a18c48; end: 100a18ccb; -[SCMutliplexingScopeLifecycleMonitor lifecycleBeginning:] */

void FUN_100a18c48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100a18ccc;
  puStack_30 = &UNK_110cb7518;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c3b75c(param_1,param_2,&puStack_48);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100a18ccc; end: 100a18cd7;  */

void FUN_100a18ccc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c098c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_lifecycleBeginning__112603d10,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100a18cd8; end: 100a18d7f; -[SCStartupScopeLifecycleMonitor lifecycleBeginning:] */

/* WARNING: Possible PIC construction at 0x000100a18d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a18d64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a18d3c) */
/* WARNING: Removing unreachable block (ram,0x000100a18d68) */

void FUN_100a18cd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000107c61174(param_3);
    func_0x000107c6071c();
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d954(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c56bcc(uVar2,param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 100a18d80; end: 100a18d83; -[SCNoOpScopeLifecycleMonitor lifecycleBeginning:] */

void FUN_100a18d80(void)

{
  return;
}



/* Entry: 100a18d84; end: 100a18e0f; -[SCServicesContainer exposeServices:] */

/* WARNING: Possible PIC construction at 0x000100a18dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a18df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a18dd0) */
/* WARNING: Removing unreachable block (ram,0x000100a18df8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a18d84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11278ca48;
  func_0x000107c61174(param_3);
  param_1 = param_1 + lVar1;
  func_0x000107c61148(param_1);
  func_0x000107c52024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a18e10; end: 100a18ee7; -[SCScopeLifecycle servicesContainer:willExposeServices:] */

/* WARNING: Possible PIC construction at 0x000100a18e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a18e94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a18e6c) */
/* WARNING: Removing unreachable block (ram,0x000100a18e98) */
/* WARNING: Removing unreachable block (ram,0x000100a18e70) */

void FUN_100a18e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c508ec(param_1);
  func_0x000107c61180();
  func_0x000107c49cec(param_3,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a18ee8; end: 100a18f2f; +[SCLockfreeLazy creationWithObject:] */

void FUN_100a18ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c47b50();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100a18f30; end: 100a18fab; -[SCLockfreeLazy initWithObject:] */

undefined1 * FUN_100a18f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127057a0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = 1;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a18fac; end: 100a1916f; -[SCScopeLifecycle externallyAccessibleServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100a18fac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + 0x108);
  func_0x000107c3db60();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4080c();
  if (lVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          func_0x000107c61128(lVar2);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar4 = *(ulong *)(param_1 + 0x108);
        func_0x000107c4d9e8(uVar4,param_2,uVar7);
        func_0x000107c61180();
        uVar5 = uVar4;
        func_0x000107c42cdc();
        func_0x000107c61170(uVar4);
        if ((uVar5 & 1) != 0) {
          uVar6 = *(undefined8 *)(param_1 + 0x108);
          func_0x000107c4d9e8(uVar6,param_2,uVar7);
          func_0x000107c61180();
          func_0x000107c3d798(puVar1,param_2,uVar6);
          func_0x000107c61170(uVar6);
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x000107c4080c(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  lVar3 = lVar2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  func_0x000107c60e78();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c60bd8();
  return (undefined *)(ulong)*(byte *)(lVar3 + _DAT_11278ca50);
}



/* Entry: 100a19170; end: 100a1917f; -[SCServicesContainer externallyAccessible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100a19170(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278ca50);
}



/* Entry: 100a19180; end: 100a19187; -[SCScopeLifecycle createEntryPoints] */

void FUN_100a19180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bded5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__createEntryPoints__112558f10,*(undefined8 *)(param_1 + 0xe8),
             *(undefined8 *)(param_1 + 0xf0));
  return;
}



/* Entry: 100a19188; end: 100a1943b; -[SCScopeLifecycle _createEntryPoints:] */

void FUN_100a19188(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  if (param_4 != 0) {
    param_4 = param_4 << 1;
    do {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200();
      func_0x000107c61180();
      puVar2 = puVar1;
      func_0x000107c60af0();
      func_0x000107c61174();
      puVar3 = puVar2;
      FUN_10010fab4(puVar2,PTR_DAT_1126a5c18);
      puVar5 = puVar2;
      if ((int)puVar3 == 0) {
        puVar5 = (undefined *)0x0;
      }
      func_0x000107c61174(puVar5);
      func_0x000107c61170(puVar2);
      if (puVar5 == (undefined *)0x0) {
LAB_100a1936c:
        func_0x000107c3b238(param_1);
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x40);
        func_0x000107c41688();
        func_0x000107c61180();
        func_0x000107c40534(puVar2);
        uVar6 = uVar4;
        func_0x000107c5ab8c();
        func_0x000107c61170(uVar4);
        func_0x000107c61170(puVar2);
        if ((int)uVar6 == 0) goto LAB_100a1936c;
        func_0x000107c61144(auStack_78,param_1);
        func_0x000107c61174(puVar1);
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c51804();
        func_0x000107c61180();
        puVar3 = puVar5;
        func_0x000107c61178();
        func_0x000107c3ac4c();
        FUN_10029ce24();
        func_0x000107c61170(puVar5);
        uVar6 = *(undefined8 *)(param_1 + 0x40);
        func_0x000107c41688(uVar6);
        func_0x000107c61180();
        func_0x000107c40534(puVar2);
        func_0x000107c6111c(auStack_98,auStack_78);
        lStack_90 = param_3;
        puStack_88 = puVar2;
        func_0x000107c61174(puVar1);
        puStack_80 = puVar3;
        func_0x000107c4167c(uVar6);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(puVar1);
        func_0x000107c61120(auStack_98);
        func_0x000107c61170(puVar1);
        func_0x000107c61120(auStack_78);
      }
      func_0x000107c61170(puVar1);
      param_3 = param_3 + 2;
      param_4 = param_4 + -2;
    } while (param_4 != 0);
  }
  return;
}



/* Entry: 100a1943c; end: 100a19897; -[SCScopeLifecycle _createEntryPoint:entryPointClass:entryPointName:] */

void FUN_100a1943c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_5);
  lVar4 = *(long *)(param_1 + 0x78);
  FUN_100a18bbc(lVar4,*(undefined8 *)(param_1 + 0x80),param_3);
  func_0x000107c61158(PTR_PTR_1126df810);
  uVar5 = param_4;
  func_0x000107c4a560();
  if ((int)uVar5 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(long *)(param_1 + 0x80) != lVar4;
  }
  func_0x000107c61158(PTR_PTR_1126df800);
  uVar5 = param_4;
  func_0x000107c4a560();
  if ((int)uVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x000107c400d0();
    func_0x000107c61180();
    uVar1 = *(ulong *)(param_1 + 0xd0);
    if (uVar1 != 0) {
      uVar11 = 0;
      while( true ) {
        while ((uint)*(ushort *)(*(long *)(param_1 + 200) + uVar11 * 2) < (uint)param_3) {
          if (uVar1 - 1 >> 1 <= uVar11) goto LAB_100a19564;
          uVar11 = uVar11 * 2 + 2;
        }
        if (uVar1 >> 1 <= uVar11) break;
        uVar11 = uVar11 * 2 | 1;
      }
    }
LAB_100a19564:
    uVar12 = uVar5;
    func_0x000107c5ab88();
    uVar3 = (uint)uVar12;
    func_0x000107c61170(uVar5);
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  func_0x000107c61144(auStack_78,param_1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_100a19898;
  puStack_a8 = &UNK_110cb7768;
  func_0x000107c61174(param_5);
  uStack_a0 = param_5;
  func_0x000107c6111c(auStack_90,auStack_78);
  uStack_80 = (undefined2)param_3;
  uStack_7e = (undefined1)uVar3;
  uStack_88 = param_4;
  func_0x000107c61174(puVar6);
  ppuVar7 = &puStack_c0;
  puStack_98 = puVar6;
  func_0x000107c61184();
  if (bVar2) {
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    lVar4 = param_1;
    func_0x000107c3c1c0(param_1);
    func_0x000107c61180();
    puVar8 = PTR_PTR_1126df850;
    func_0x000107c40c7c(PTR_PTR_1126df850);
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(param_1 + 0x48);
    func_0x000107c61174(uVar12);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x000107c4d100();
    func_0x000107c61180();
    func_0x000107c61174(uVar12);
    func_0x000107c61174(uVar5);
    puVar9 = puVar8;
    func_0x000107c4c280(puVar8);
    func_0x000107c61180();
    func_0x000107c42c10(lVar4);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(puVar8);
    param_1 = lVar4;
  }
  else {
    ppuVar10 = ppuVar7;
    (*(code *)ppuVar7[2])(ppuVar7);
    func_0x000107c61180();
    if ((uVar3 & 1) != 0) goto LAB_100a19760;
    func_0x000107c3d670(param_1);
    func_0x000107c4b608(param_1);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_1);
LAB_100a19760:
  func_0x000107c61170(ppuVar10);
  func_0x000107c61170(ppuVar7);
  func_0x000107c61170(puStack_98);
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61120(auStack_78);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 100a19898; end: 100a19b53;  */

void FUN_100a19898(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_10b0addfc;
  puStack_70 = &UNK_11087bb90;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar8);
  ppuVar1 = &puStack_88;
  uStack_68 = uVar8;
  FUN_1001071d4();
  func_0x000107c61170(uStack_68);
  lVar2 = param_1 + 0x30;
  func_0x000107c61148();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x38);
    func_0x000107c610fc();
    puVar4 = (undefined8 *)(lVar2 + 0x68);
    FUN_100a183e4(puVar4,*(undefined2 *)(param_1 + 0x40));
    if (puVar4[1] != 0) {
      plVar10 = (long *)*puVar4;
      lVar11 = puVar4[1] << 3;
      do {
        lVar9 = *plVar10;
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x000107c61180();
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x000107c61180();
        if (*(ushort *)(lVar9 + 4) < 2) {
          if (*(char *)(param_1 + 0x42) == '\x01') {
            func_0x000107c4f514(lVar2);
          }
          else {
            func_0x000107c4f518(lVar2);
          }
        }
        else if (*(ushort *)(lVar9 + 4) == 2) {
          lVar9 = lVar2;
          func_0x000107c4f4fc(lVar2);
          func_0x000107c61180();
          func_0x000107c5a4a0(*(undefined8 *)(param_1 + 0x28));
          func_0x000107c61170(lVar9);
        }
        else {
          func_0x000107c4f4f8(lVar2);
        }
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar5);
        plVar10 = plVar10 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    puVar5 = PTR_PTR_1126df810;
    func_0x000107c61158(PTR_PTR_1126df810);
    uVar7 = uVar3;
    func_0x000107c6115c(uVar3,puVar5);
    if ((uVar7 & 1) != 0) {
      func_0x000107c3ad14(lVar2);
    }
  }
  func_0x000107c61170(lVar2);
  func_0x0001000e2a84(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100a19b54; end: 100a19bbf; -[SCActivSystemScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a19b54(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113050e00,0);
  *(undefined8 *)(param_1 + _DAT_113050e08) = 0;
  *(undefined8 *)(param_1 + _DAT_113050e10) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a19bc0; end: 100a19d93; -[SCScopeLifecycle propertyRequirementForRegularEntryPoint:propertyType:requirementConstraintType:propertyName:] */

/* WARNING: Possible PIC construction at 0x000100a19c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a19cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a19cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a19ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a19cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a19ce8) */
/* WARNING: Removing unreachable block (ram,0x000100a19cd8) */
/* WARNING: Removing unreachable block (ram,0x000100a19cc0) */
/* WARNING: Removing unreachable block (ram,0x000100a19cf8) */

void FUN_100a19bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  uVar1 = param_1;
  func_0x000107c3bd20(param_1,param_2,param_4,param_3);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c4aa28(uVar1);
  func_0x000107c61180();
  func_0x000107c61158(param_3);
  FUN_100a16814();
  func_0x000107c61180();
  if (param_5 == 0) {
    func_0x000107c4b608(param_1);
    func_0x000107c61180();
    func_0x000107c3e77c(uVar2,param_2,uVar1,param_3,param_1);
    uVar1 = param_1;
  }
  else {
    func_0x000107c52018(uVar1);
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100a19d94; end: 100a19f0f; -[SCScopeLifecycle _lifecycleProvidingServicesContainer:requiredBy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100a19d94(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong unaff_x22;
  undefined *puVar3;
  long lStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    do {
      unaff_x22 = *(ulong *)(param_1 + 0x108);
      func_0x000107c4d9e8(unaff_x22,param_2,param_3);
      func_0x000107c61180();
      if ((unaff_x22 != 0) &&
         ((uVar1 = unaff_x22, func_0x000107c3f3c4(), (uVar1 & 1) != 0 ||
          (lVar2 = param_1, func_0x000107c44a14(param_1,param_2,unaff_x22), (int)lVar2 != 0)))) {
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        lStack_58 = param_1;
        uStack_50 = unaff_x22;
        func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_58,2);
        func_0x000107c61180();
        func_0x000107c61170(unaff_x22);
        func_0x000107c61170(param_1);
        break;
      }
      lVar2 = param_1;
      func_0x000107c4e350();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c61170(unaff_x22);
      puVar3 = (undefined *)0x0;
      param_1 = lVar2;
    } while (lVar2 != 0);
  }
  func_0x000107c61170(param_4);
  lVar2 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    func_0x000107c61170(unaff_x22);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c60bd8();
    return (undefined *)(ulong)(*(long *)(lVar2 + _DAT_11278ca54) != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 100a19f10; end: 100a19f27; -[SCServicesContainer canExposeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100a19f10(long param_1)

{
  return *(long *)(param_1 + _DAT_11278ca54) != 0;
}



/* Entry: 100a19f28; end: 100a19f57; -[SCServicesContainer services] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a19f28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278ca54);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100a19f58; end: 100a19f5b; -[SCLockfreeLazy target] */

void FUN_100a19f58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf57510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_createNow_1125b36e8);
  return;
}



/* Entry: 100a19f5c; end: 100a1a0b7; -[SCLockfreeLazy createNow] */

void FUN_100a19f5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  undefined1 auStack_160 [32];
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    lVar1 = *(long *)(param_1 + 8);
    (**(code **)(lVar1 + 0x10))();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar1;
    func_0x000107c61170(uVar6);
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar7);
  lVar8 = *(long *)(param_1 + 0x10);
  func_0x000107c61174(lVar8);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  func_0x000107c61170(uVar6);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  func_0x000107c61174(lVar8);
  puVar3 = auStack_c8;
  lVar1 = lVar8;
  func_0x000107c4080c();
  if (lVar1 != 0) {
    unaff_x22 = *plStack_100;
    do {
      lVar9 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          func_0x000107c61128(lVar8);
        }
        lVar2 = *(long *)(lStack_108 + lVar9 * 8);
        param_2 = uVar7;
        (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      puVar3 = auStack_c8;
      lVar1 = lVar8;
      puVar5 = &uStack_110;
      func_0x000107c4080c();
      param_1 = 0;
    } while (lVar1 != 0);
  }
  func_0x000107c61170(lVar8);
  lVar1 = lVar8;
  func_0x000107c61170(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  func_0x000107c60e78();
  pcStack_118 = FUN_100a1a0b8;
  lStack_140 = unaff_x22;
  lStack_138 = param_1;
  lStack_130 = lVar8;
  uStack_128 = uVar7;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x000107c615f0(puVar5);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(lVar1);
  func_0x000107c60234(auStack_160,puVar5);
  func_0x000107c615e8(puVar5);
  puVar4 = puVar3;
  func_0x000107c5faec(puVar3);
  func_0x000107c61170(puVar3);
  FUN_100a1a164(auStack_160,puVar4,param_2);
  func_0x000107c61170(lVar1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_160);
  return;
}



/* Entry: 100a1a0b8; end: 100a1a163; -[SCActivSystemScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a1a0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100a1a164(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a1a164; end: 100a1a2fb;  */

void FUN_100a1a164(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e1c650)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f1e39b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ActivSystemScopeGraphBridge/SCActivSystemScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4e,2,0x45,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1a2fc);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c521ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a1a2fc; end: 100a1a353; -[SCActivSystemScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1a2fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113050e00;
  func_0x000107c61428(param_1 + _DAT_113050e00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a1a354; end: 100a1a437; -[SCScopeLifecycle propertyExposerForService:isDeferred:propertyType:propertyName:] */

void FUN_100a1a354(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  uVar1 = param_1;
  func_0x000107c3c1c0(param_1,param_2,param_5,param_3);
  func_0x000107c61180();
  func_0x000107c61174();
  if (param_4 != 0) {
    func_0x000107c53fa8(param_1,param_2,param_3,uVar1);
  }
  func_0x000107c5a49c(param_3,param_2,uVar1,param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100a1a438; end: 100a1a50f; -[SCScopeLifecycle _provideServicesContainer:forEntryPoint:] */

void FUN_100a1a438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    do {
      lVar1 = *(long *)(param_1 + 0x108);
      func_0x000107c4d9e8(lVar1,param_2,param_3);
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c61170(param_1);
        goto LAB_100a1a4c4;
      }
      lVar1 = param_1;
      func_0x000107c4e350();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      param_1 = lVar1;
    } while (lVar1 != 0);
    lVar1 = 0;
  }
LAB_100a1a4c4:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100a1a510; end: 100a1a573; -[SCActivSystemScopeGraphBridgeSaberEntryPoint setActivSystemScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1a510(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113050e08;
  func_0x000107c61428(param_1 + _DAT_113050e08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a1a574; end: 100a1a60b; -[SCScopeLifecycle addEntryPoint:] */

/* WARNING: Possible PIC construction at 0x000100a1a5d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1a5d4) */

void FUN_100a1a574(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  func_0x000107c3c56c(param_1,param_2,param_3);
  func_0x000107c3d58c(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  func_0x000107c3ad50(param_1);
  func_0x000107c611a8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a1a60c; end: 100a1a6fb; -[SCScopeLifecycle _setEntryPointMetadataBeforeAdd:] */

/* WARNING: Possible PIC construction at 0x000100a1a68c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1a69c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1a690) */

void FUN_100a1a60c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126df7f8;
  func_0x000107c61158(PTR_PTR_1126df7f8);
  uVar2 = param_3;
  func_0x000107c6115c(param_3,puVar1);
  if ((uVar2 & 1) != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c51994(param_1);
    func_0x000107c61180();
    func_0x000107c51998(param_1);
    func_0x000107c61180();
    func_0x000107c58c8c(param_3);
    param_3 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100a1a6fc; end: 100a1a867; -[SCScopeLifecycleEntryPoints add:] */

void FUN_100a1a6fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x000107c40404(uVar1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      func_0x000107c3d798(*(undefined8 *)(param_1 + 8),param_2,param_3);
      func_0x000107c611a8(param_1);
      func_0x000107c61170(param_1);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      puStack_58 = &UNK_10b0ac398;
      puStack_50 = &UNK_110847450;
      func_0x000107c61174(param_3);
      ppuVar2 = &puStack_68;
      uStack_48 = param_3;
      FUN_1001071d4(ppuVar2);
      func_0x000107c61170(uStack_48);
      lVar3 = param_1 + 0x18;
      func_0x000107c61148(lVar3);
      func_0x000107c42974();
      func_0x000107c61170(lVar3);
      func_0x000107c3e740(param_3);
      param_1 = param_1 + 0x18;
      func_0x000107c61148(param_1);
      func_0x000107c4296c();
      func_0x000107c61170(param_1);
      func_0x0001000e2a84(ppuVar2);
      goto LAB_100a1a75c;
    }
  }
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
LAB_100a1a75c:
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100a1a868; end: 100a1a8e7; -[SCScopeLifecycle entryPointBeginning:] */

/* WARNING: Possible PIC construction at 0x000100a1a8ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1a8b0) */

void FUN_100a1a868(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c4d100(uVar1);
  func_0x000107c61180();
  func_0x000107c42968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100a1a8e8; end: 100a1a997; -[SCMutliplexingScopeLifecycleMonitor entryPoint:beginningInLifecycle:] */

void FUN_100a1a8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100a1a998;
  puStack_48 = &UNK_110cb7588;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3b75c(param_1,param_2,&puStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100a1a998; end: 100a1a9a3;  */

void FUN_100a1a998(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_entryPoint_beginningInLifecycle__1125c36c8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100a1a9a4; end: 100a1aa1f; -[SCStartupScopeLifecycleMonitor entryPoint:beginningInLifecycle:] */

/* WARNING: Possible PIC construction at 0x000100a1aa04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1aa08) */

void FUN_100a1a9a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000107c61174(param_3);
    func_0x000107c6071c();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d954(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c56bcc(uVar2,param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 100a1aa20; end: 100a1aa23; -[SCNoOpScopeLifecycleMonitor entryPoint:beginningInLifecycle:] */

void FUN_100a1aa20(void)

{
  return;
}



/* Entry: 100a1aa24; end: 100a1aa4b; -[SCActivSystemScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a1aa24(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a1aa4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a1aa4c; end: 100a1ab7f;  */

/* WARNING: Possible PIC construction at 0x000100a1ab04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1ab20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a1ab3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1ab08) */
/* WARNING: Removing unreachable block (ram,0x000100a1ab24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1aa4c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c3d024();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a1ac10();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a1ac30();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a1ab80);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_11304f7d0) = lVar5;
    *(long *)(lVar4 + _DAT_11304f7d8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a1ab80; end: 100a1abc7; -[SCActivSystemScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1ab80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113050e00;
  func_0x000107c61428(param_1 + _DAT_113050e00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a1abc8; end: 100a1ac0f; -[SCActivSystemScopeGraphBridgeSaberEntryPoint activSystemScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1abc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113050e08;
  func_0x000107c61428(param_1 + _DAT_113050e08,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a1ac10; end: 100a1ac2f;  */

void FUN_100a1ac10(void)

{
  func_0x000107c61168(&PTR_PTR_112980bd8);
  return;
}



/* Entry: 100a1ac30; end: 100a1acff;  */

undefined8 FUN_100a1ac30(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x113050cc8,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1000a33e8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a1ad00; end: 100a1adaf; -[SCMutliplexingScopeLifecycleMonitor services:willBeExposedInLifecycle:] */

void FUN_100a1ad00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100a1adb0;
  puStack_48 = &UNK_110cb7588;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3b75c(param_1,param_2,&puStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100a1adb0; end: 100a1adbb;  */

void FUN_100a1adb0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15f990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_services_willBeExposedInLifecycl_112635880,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100a1adbc; end: 100a1adbf; -[SCStartupScopeLifecycleMonitor services:willBeExposedInLifecycle:] */

void FUN_100a1adbc(void)

{
  return;
}



/* Entry: 100a1adc0; end: 100a1adc3; -[SCNoOpScopeLifecycleMonitor services:willBeExposedInLifecycle:] */

void FUN_100a1adc0(void)

{
  return;
}



/* Entry: 100a1adc4; end: 100a1ae43; -[SCScopeLifecycle entryPointBegan:] */

/* WARNING: Possible PIC construction at 0x000100a1ae08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a1ae0c) */

void FUN_100a1adc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c4d100(uVar1);
  func_0x000107c61180();
  func_0x000107c42964();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100a1ae44; end: 100a1aef3; -[SCMutliplexingScopeLifecycleMonitor entryPoint:beganInLifecycle:] */

void FUN_100a1ae44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100a1aef4;
  puStack_48 = &UNK_110cb7588;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3b75c(param_1,param_2,&puStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100a1aef4; end: 100a1aeff;  */

void FUN_100a1aef4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_entryPoint_beganInLifecycle__1125c36c0,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100a1af00; end: 100a1afb7; -[SCStartupScopeLifecycleMonitor entryPoint:beganInLifecycle:] */

/* WARNING: Possible PIC construction at 0x000100a1af94: Changing call to branch */

void FUN_100a1af00(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  double dVar2;
  
  func_0x000107c61174(param_4);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x000107c6071c();
    lVar1 = *(long *)(param_2 + 0x10);
    dVar2 = param_1;
    func_0x000107c4d9c0(lVar1,param_3,param_4);
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c61170(0);
    }
    else {
      func_0x000107c4ff88(*(undefined8 *)(param_2 + 0x10),param_3,param_4);
      func_0x000107c61158(param_4);
      func_0x000107c60b14();
      func_0x000107c61180();
      func_0x000107c4223c(lVar1);
      func_0x000107c3e784(param_1 - dVar2,*(undefined8 *)(param_2 + 0x20),param_3,param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100a1afb8; end: 100a1afbb; -[SCNoOpScopeLifecycleMonitor entryPoint:beganInLifecycle:] */

void FUN_100a1afb8(void)

{
  return;
}



/* Entry: 100a1afbc; end: 100a1b17f; -[SCScopeLifecycle _allowExternalAccessOfNewlyExposedServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1afbc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x000107c3e530();
  func_0x000107c61180();
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x000107c40794();
  lVar4 = lVar3;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar3);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      uVar5 = uVar7;
      func_0x000107c44888();
      if ((uVar5 & 1) != 0) {
        func_0x000107c52018(uVar7);
        func_0x000107c61180();
        uVar5 = uVar7;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c3d58c(lVar2);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar7);
        func_0x000107c4ff80(*(undefined8 *)(param_1 + 0x30));
      }
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = lVar3;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar3);
  lVar4 = lVar2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c60bd8();
  if (*(long *)(lVar4 + _DAT_11278ca54) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c06f890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(lVar4 + _DAT_11278ca54),PTR_s_isCreated_1125f9830);
    return;
  }
  return;
}



/* Entry: 100a1b180; end: 100a1b197; -[SCServicesContainer hasExposedServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1b180(long param_1)

{
  if (*(long *)(param_1 + _DAT_11278ca54) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c06f890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_11278ca54),PTR_s_isCreated_1125f9830);
    return;
  }
  return;
}



/* Entry: 100a1b198; end: 100a1b19f; -[SCLockfreeLazy isCreated] */

undefined1 FUN_100a1b198(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 100a1b1a0; end: 100a1b367; -[SCAvailableScope add:] */

void FUN_100a1b1a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar3 = param_3;
  func_0x000107c61158(param_3);
  func_0x000107c611ec(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c4d9c0(lVar1,param_2,lVar3);
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 == 0) {
    func_0x000107c56bcc(*(undefined8 *)(param_1 + 8),param_2,param_3,lVar3);
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x000107c4d9e8(lVar1,param_2,lVar3);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c3db80();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  else {
    lVar3 = 0;
  }
  func_0x000107c611f0(param_1 + 0x20);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  func_0x000107c61174(lVar3);
  lVar1 = lVar3;
  func_0x000107c4080c(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          func_0x000107c61128(lVar3);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        uVar2 = uVar4;
        func_0x000107c45328(uVar4);
        func_0x000107c58c5c(uVar4,param_2,param_3,uVar2);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x000107c4080c(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c611f0(0x20);
  func_0x000107c60bd8();
  uVar2 = *(undefined8 *)(param_3 + 0x110);
  func_0x000107c61174(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100a1b368; end: 100a1b38f; -[SCScopeLifecycle lifecycleName] */

void FUN_100a1b368(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100a1b390; end: 100a1b3d7; +[SCLockfreeLazy creationWithInitializationBlock:] */

void FUN_100a1b390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c46ea4();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



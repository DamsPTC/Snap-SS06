/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010228d4; end: 101022923;  */

void FUN_1010228d4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d55528 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d55500;
  func_0x00010002969c(0x112d55500,&UNK_10d91c570);
  puVar2 = &DAT_10dd3ca20;
  func_0x000107c61520(&DAT_10dd3ca20,uVar1);
  puRam0000000112d55528 = puVar2;
  return;
}



/* Entry: 101022924; end: 101022a33;  */

void FUN_101022924(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_1010242e4();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0;
      FUN_1010244a8(0,0x112d55598,&PTR_PTR_1126b25d0);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_101022d48(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_1010231e4(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 101022a34; end: 101022cdb;  */

void FUN_101022a34(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1010244a8(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101022cdc; end: 101022ce3;  */

void FUN_101022cdc(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_110377e18;
  func_0x000107c613fc(&UNK_110377e18,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101022d20;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  pcStack_50 = FUN_101022d28;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101022794;
  puStack_58 = &UNK_110377e30;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar3);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x86,0xdc,0x16,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101021eec);
  (*pcVar1)();
}



/* Entry: 101022ce4; end: 101022d03;  */

void FUN_101022ce4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101022d04; end: 101022d27;  */

void FUN_101022d04(long param_1,long param_2)

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



/* Entry: 101022d28; end: 101022d47;  */

void FUN_101022d28(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101022d48; end: 1010231e3;  */

void FUN_101022d48(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long unaff_x21;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar16 = param_3[1];
  if (0 < lVar16) {
    lVar11 = 0;
    do {
      lVar17 = lVar11 + 1;
      if (lVar17 < lVar16) {
        uVar3 = *(undefined8 *)(*param_3 + lVar17 * 8);
        puVar14 = (undefined8 *)(*param_3 + lVar11 * 8);
        puVar19 = puVar14 + 2;
        uVar18 = *puVar14;
        func_0x000107c61174();
        func_0x000107c61174();
        uVar13 = uVar3;
        func_0x000107c4e920();
        uVar4 = uVar18;
        func_0x000107c4e920();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar18);
        lVar12 = lVar11 + 2;
        do {
          lVar10 = lVar12;
          lVar17 = lVar16;
          if (lVar16 == lVar10) break;
          uVar3 = puVar19[-1];
          uVar18 = *puVar19;
          func_0x000107c61174();
          func_0x000107c61174();
          uVar5 = uVar18;
          func_0x000107c4e920();
          uVar6 = uVar3;
          func_0x000107c4e920();
          func_0x000107c61170(uVar18);
          func_0x000107c61170(uVar3);
          puVar19 = puVar19 + 1;
          lVar12 = lVar10 + 1;
          lVar17 = lVar10;
        } while ((uint)uVar13 < (uint)uVar4 != (uint)uVar6 <= (uint)uVar5);
        if ((uint)uVar13 < (uint)uVar4) {
          if (lVar17 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1010231b8);
            (*pcVar1)();
          }
          if (lVar11 < lVar17) {
            lVar10 = *param_3;
            puVar14 = (undefined8 *)(lVar10 + lVar17 * 8);
            puVar19 = (undefined8 *)(lVar10 + lVar11 * 8);
            lVar12 = lVar17;
            lVar16 = lVar11;
            do {
              puVar14 = puVar14 + -1;
              lVar12 = lVar12 + -1;
              if (lVar16 != lVar12) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010231d8);
                  (*pcVar1)();
                }
                uVar13 = *puVar19;
                *puVar19 = *puVar14;
                *puVar14 = uVar13;
              }
              lVar16 = lVar16 + 1;
              puVar19 = puVar19 + 1;
            } while (lVar16 < lVar12);
          }
        }
      }
      lVar16 = param_3[1];
      lVar12 = lVar17;
      if (lVar17 < lVar16) {
        if (SBORROW8(lVar17,lVar11)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1010231b4);
          (*pcVar1)();
        }
        if (lVar17 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1010231bc);
            (*pcVar1)();
          }
          lVar10 = lVar11 + param_4;
          if (lVar16 <= lVar11 + param_4) {
            lVar10 = lVar16;
          }
          if (lVar10 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1010231c0);
            (*pcVar1)();
          }
          if (lVar17 != lVar10) {
            lVar20 = *param_3;
            puVar19 = (undefined8 *)(lVar20 + lVar17 * 8 + -8);
            lVar16 = lVar11 - lVar17;
            do {
              uVar13 = *(undefined8 *)(lVar20 + lVar17 * 8);
              puVar14 = puVar19;
              lVar12 = lVar16;
              do {
                uVar18 = *puVar14;
                func_0x000107c61174();
                func_0x000107c61174();
                uVar4 = uVar13;
                func_0x000107c4e920();
                uVar3 = uVar18;
                func_0x000107c4e920();
                func_0x000107c61170(uVar13);
                func_0x000107c61170(uVar18);
                if ((uint)uVar3 <= (uint)uVar4) break;
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010231c4);
                  (*pcVar1)();
                }
                uVar4 = *puVar14;
                uVar13 = puVar14[1];
                *puVar14 = uVar13;
                puVar14[1] = uVar4;
                bVar2 = lVar12 != -1;
                lVar12 = lVar12 + 1;
                puVar14 = puVar14 + -1;
              } while (bVar2);
              lVar17 = lVar17 + 1;
              puVar19 = puVar19 + 1;
              lVar16 = lVar16 + -1;
              lVar12 = lVar10;
            } while (lVar17 != lVar10);
          }
        }
      }
      puVar9 = puStack_58;
      if (lVar12 < lVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010231a8);
        (*pcVar1)();
      }
      puVar7 = puStack_58;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar15 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar15) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000a91e0(puVar9,uVar15 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar15 + 1;
      *(long *)(puVar9 + uVar15 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar9 + uVar15 * 0x10 + 0x28) = lVar12;
      puStack_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010231dc);
        (*pcVar1)();
      }
      FUN_1010232d8(&puStack_58,*param_1,param_3);
      puVar9 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101023178;
      lVar16 = param_3[1];
      lVar11 = lVar12;
    } while (lVar12 < lVar16);
  }
  puVar9 = puStack_58;
  lVar16 = *param_1;
  if (lVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010231e4);
    (*pcVar1)();
  }
  puVar7 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    FUN_100e06d54();
  }
  uVar15 = *(ulong *)(puVar9 + 0x10);
  while (puStack_58 = puVar9, 1 < uVar15) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010231e0);
      (*pcVar1)();
    }
    lVar10 = uVar15 - 1;
    lVar12 = *(long *)(puVar9 + uVar15 * 0x10);
    lVar17 = *(long *)(puVar9 + lVar10 * 0x10 + 0x28);
    FUN_101023540(lVar11 + lVar12 * 8,lVar11 + *(long *)(puVar9 + lVar10 * 0x10 + 0x20) * 8,
                  lVar11 + lVar17 * 8,lVar16);
    if (unaff_x21 != 0) break;
    if (lVar17 < lVar12) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010231ac);
      (*pcVar1)();
    }
    puVar7 = puVar9;
    func_0x000107c61558();
    if (((ulong)puVar7 & 1) == 0) {
      FUN_100e06d54();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar15 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010231b0);
      (*pcVar1)();
    }
    *(long *)(puVar9 + uVar15 * 0x10) = lVar12;
    *(long *)((long)(puVar9 + uVar15 * 0x10) + 8) = lVar17;
    puStack_58 = puVar9;
    func_0x0001000a97cc(lVar10);
    puVar9 = puStack_58;
    uVar15 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_101023178:
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 1010231e4; end: 1010232d7;  */

void FUN_1010231e4(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if (param_3 != param_2) {
    lVar8 = *param_4;
    puVar9 = (undefined8 *)(lVar8 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      uVar3 = *(undefined8 *)(lVar8 + param_3 * 8);
      lVar6 = param_1;
      puVar10 = puVar9;
      do {
        uVar7 = *puVar10;
        func_0x000107c61174();
        func_0x000107c61174();
        uVar4 = uVar3;
        func_0x000107c4e920();
        uVar5 = uVar7;
        func_0x000107c4e920();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar7);
        if ((uint)uVar5 <= (uint)uVar4) break;
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1010232d8);
          (*pcVar1)();
        }
        uVar4 = *puVar10;
        uVar3 = puVar10[1];
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        puVar10 = puVar10 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar9 = puVar9 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1010232d8; end: 10102353f;  */

undefined8 FUN_1010232d8(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1010233ac;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101023528);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_101023410:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101023518);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101023520);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101023500);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101023504);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10102350c);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101023514);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1010233ac:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101023508);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101023510);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10102351c);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101023524);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_101023410;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10102352c);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1010234f4);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101023540);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_101023540(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1010234f8);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        FUN_100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1010234fc);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 101023540; end: 101023877;  */

undefined8
FUN_101023540(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar11 = (long)param_2 - (long)param_1;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  lVar15 = (long)param_3 - (long)param_2;
  lVar9 = lVar15 + 7;
  if (-1 < lVar15) {
    lVar9 = lVar15;
  }
  lVar9 = lVar9 >> 3;
  if (lVar6 < lVar9) {
    if (((param_4 < param_1) || (param_1 + lVar6 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar6 << 3);
    }
    puVar12 = param_4 + lVar6;
    puVar5 = param_1;
    if (7 < lVar11) {
      do {
        if (param_3 <= param_2) break;
        uVar2 = *param_2;
        uVar14 = *param_4;
        func_0x000107c61174();
        func_0x000107c61174();
        uVar3 = uVar2;
        func_0x000107c4e920();
        uVar4 = uVar14;
        func_0x000107c4e920();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar14);
        if ((uint)uVar3 < (uint)uVar4) {
          puVar10 = param_2 + 1;
          puVar7 = param_4;
          puVar13 = param_2;
        }
        else {
          puVar7 = param_4 + 1;
          puVar13 = param_4;
          puVar10 = param_2;
        }
        param_4 = puVar7;
        if (puVar5 != puVar13) {
          *puVar5 = *puVar13;
        }
        puVar5 = puVar5 + 1;
        param_2 = puVar10;
      } while (param_4 < puVar12);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar9 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar9 << 3);
    }
    puVar10 = param_4 + lVar9;
    puVar5 = param_2;
    puVar12 = puVar10;
    if ((param_1 < param_2) && (7 < lVar15)) {
      do {
        puVar7 = param_2 + -1;
        puVar13 = param_3;
        while( true ) {
          param_3 = puVar13 + -1;
          puVar12 = puVar10 + -1;
          uVar2 = *puVar12;
          uVar14 = *puVar7;
          func_0x000107c61174();
          func_0x000107c61174();
          uVar3 = uVar2;
          func_0x000107c4e920();
          uVar4 = uVar14;
          func_0x000107c4e920();
          func_0x000107c61170(uVar2);
          func_0x000107c61170(uVar14);
          if ((uint)uVar3 < (uint)uVar4) break;
          if (puVar13 != puVar10) {
            *param_3 = *puVar12;
          }
          puVar5 = param_2;
          puVar10 = puVar12;
          puVar13 = param_3;
          if (puVar12 <= param_4) goto LAB_10102380c;
        }
        if (puVar13 != param_2) {
          *param_3 = *puVar7;
        }
        puVar5 = puVar7;
        puVar12 = puVar10;
      } while ((param_1 < puVar7) && (param_2 = puVar7, param_4 < puVar10));
    }
  }
LAB_10102380c:
  uVar8 = (long)puVar12 - (long)param_4;
  uVar1 = uVar8 + 7;
  if (-1 < (long)uVar8) {
    uVar1 = uVar8;
  }
  if ((puVar5 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= puVar5)) {
    func_0x000107c610b8(puVar5,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 101023878; end: 1010239d7;  */

ulong FUN_101023878(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010239d8);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101023c9c(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010239d4);
      (*pcVar1)();
    }
    FUN_101023d2c(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1010239d8; end: 101023b1f;  */

ulong FUN_1010239d8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101023b20);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101023c9c(uVar2,uVar4,0x112d55530,&PTR_PTR_1126b3718,0x112d55550,&UNK_10d91c5a0);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101023b1c);
      (*pcVar1)();
    }
    FUN_101023e48(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101023b20; end: 101023c9b;  */

undefined * FUN_101023b20(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101023c9c);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112d55580;
    func_0x0001000285a8(0x112d55580,&UNK_10d91c5e0);
    lVar5 = 0;
    func_0x000107c5ede0();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101023c94);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101023c98);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  func_0x000107c5ede0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 101023c9c; end: 101023d2b;  */

undefined *
FUN_101023c9c(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_101022a34(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 101023d2c; end: 101023e47;  */

long FUN_101023d2c(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101023e44);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101023e48);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1010244a8(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1010244a8(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101023e40);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101023e48; end: 101023f5f;  */

long FUN_101023e48(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101023f5c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101023f60);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1010244a8(0,0x112d55530,&PTR_PTR_1126b3718);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1010244a8(0,0x112d55530,&PTR_PTR_1126b3718);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101023f58);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101023f60; end: 10102404f;  */

void FUN_101023f60(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101024050();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101024050; end: 1010242e3;  */

undefined *
FUN_101024050(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101024198);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = param_5;
    func_0x000101022aac(param_5,param_6,param_7,param_8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c6140c(puVar1,puVar4,uVar6,param_5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1010242e4; end: 101024327;  */

void FUN_1010242e4(long param_1)

{
  func_0x000101024198(0,*(undefined8 *)(param_1 + 0x10),0,param_1,0x112d55598,&PTR_PTR_1126b25d0,
                      0x112d555a0,&UNK_10d9b78c0);
  return;
}



/* Entry: 101024328; end: 1010244a7;  */

ulong FUN_101024328(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010244a8);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10102449c);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_1010244a8(0,0x112d55598,&PTR_PTR_1126b25d0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010244a0);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010244a4);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          func_0x000101022b20(uVar7,param_3,&PTR_PTR_1126b25d0,0x112d55598);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1010244a8; end: 1010244e7;  */

void FUN_1010244a8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1010244e8; end: 1010244fb;  */

void FUN_1010244e8(long param_1,long param_2)

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



/* Entry: 1010244fc; end: 101024673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1010244fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long lStack_70;
  long lStack_68;
  
  plVar5 = &lStack_70;
  func_0x000107c613fc();
  lVar3 = *(long *)(param_4 + _DAT_11302ecd0);
  func_0x000107c4a464();
  if ((int)lVar3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_11302ba70);
    FUN_101024a90();
    lVar4 = lVar3;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar4 + _DAT_112d555c8);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_5;
    puVar1[3] = param_6;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar4;
    lStack_68 = lVar3;
    func_0x000107c61174(uVar6);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c61154(&lStack_70,puVar2);
    func_0x000107c4fba8(uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(plVar5);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_6);
  return unaff_x20;
}



/* Entry: 101024674; end: 10102468f;  */

void FUN_101024674(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101024690; end: 10102489f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101024690(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c4d814();
  func_0x000107c61180();
  lVar2 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4c1dc(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar9 = *(undefined8 *)(param_3 + _DAT_11302bad8);
    lVar4 = 0;
    FUN_10102281c();
    lVar2 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar2 + _DAT_112d554b8) = param_1;
    func_0x0001000285a8(0x112d55690,&UNK_10d91c6b0);
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    func_0x000107c615f0(uVar9);
    func_0x000107c61174();
    uVar5 = param_4;
    func_0x000107c52088();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x0001000bda74();
    func_0x000107c61170(uVar5);
    *(undefined8 *)(lVar2 + _DAT_112d554c0) = uVar6;
    *(undefined8 *)(lVar2 + _DAT_112d554c8) = uVar9;
    puVar8 = PTR_s_init_1125d9248;
    lStack_70 = lVar2;
    lStack_68 = lVar4;
    func_0x000107c615f0(uVar9);
    plVar7 = &lStack_70;
    func_0x000107c61154(plVar7,puVar8);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar9);
    func_0x000107c61170(param_4);
    puVar8 = PTR_PTR_1126a61b8;
    func_0x000107c610f8(PTR_PTR_1126a61b8);
    func_0x000107c463a0();
    func_0x000107c61170(plVar7);
    func_0x000107c615ec(lVar3,2);
    return puVar8;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000027,0x800000010ef206a0,
                      "SnapEditorAutoCaptionsPluginEntryPoint/SnapEditorAutoCaptionsPluginEntryPoint.swift"
                      ,0x53,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010248a0);
  (*pcVar1)();
}



/* Entry: 1010248a0; end: 1010249e3; -[_TtC38SnapEditorAutoCaptionsPluginEntryPoint28SnapEditorAutoCaptionsPlugin populateDependencies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010248a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_80;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d555c8);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  puVar6 = &UNK_110377f30;
  func_0x000107c613fc(&UNK_110377f30,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar4;
  *(undefined8 *)(puVar6 + 0x20) = uVar3;
  *(undefined8 *)(puVar6 + 0x28) = uVar5;
  puVar7 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  uStack_60 = 0x101024d00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101016bdc;
  puStack_68 = &UNK_110377f48;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar5);
  func_0x000107c46b38(puVar7);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(puStack_58);
  func_0x000107c52a5c(param_3);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1010249e4; end: 101024a43; -[_TtC38SnapEditorAutoCaptionsPluginEntryPoint28SnapEditorAutoCaptionsPlugin init] */

void FUN_1010249e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorAutoCaptionsPluginEntryPoint.SnapEditorAutoCaptionsPlugin",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101024a10);
  (*pcVar1)();
}



/* Entry: 101024a44; end: 101024a8f; -[_TtC38SnapEditorAutoCaptionsPluginEntryPoint28SnapEditorAutoCaptionsPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101024a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101024a78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101024a6c) */
/* WARNING: Removing unreachable block (ram,0x000101024a7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101024a44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d555c8 + 0x18));
  return;
}



/* Entry: 101024a90; end: 101024acf;  */

void FUN_101024a90(void)

{
  func_0x000107c61168(&PTR_PTR_1127a8958);
  return;
}



/* Entry: 101024ad0; end: 101024b33;  */

long FUN_101024ad0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101024b34; end: 101024c13;  */

undefined8 * FUN_101024b34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  return param_1;
}



/* Entry: 101024c14; end: 101024c67;  */

undefined8 * FUN_101024c14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101024c68; end: 101024d27;  */

int FUN_101024c68(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101024d28; end: 101024d33; -[SCSnapEditorAutoCaptionsPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101024d28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55698;
  func_0x000107c61428(param_1 + _DAT_112d55698,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101024d34; end: 101024d3f; -[SCSnapEditorAutoCaptionsPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101024d34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55698;
  func_0x000107c61428(param_1 + _DAT_112d55698,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101024d40; end: 101024d4b; -[SCSnapEditorAutoCaptionsPluginEntryPoint autoCaptionsHelperServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101024d40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d556a0;
  func_0x000107c61428(param_1 + _DAT_112d556a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101024d4c; end: 101024d57; -[SCSnapEditorAutoCaptionsPluginEntryPoint setAutoCaptionsHelperServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101024d4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d556a0;
  func_0x000107c61428(param_1 + _DAT_112d556a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101024d58; end: 101024d63; -[SCSnapEditorAutoCaptionsPluginEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101024d58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d556a8;
  func_0x000107c61428(param_1 + _DAT_112d556a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101024d64; end: 101024d6f; -[SCSnapEditorAutoCaptionsPluginEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101024d64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d556a8;
  func_0x000107c61428(param_1 + _DAT_112d556a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101024d70; end: 101024d7b; -[SCSnapEditorAutoCaptionsPluginEntryPoint creativeToolsABServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101024d70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d556b0;
  func_0x000107c61428(param_1 + _DAT_112d556b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101024d7c; end: 101024d87; -[SCSnapEditorAutoCaptionsPluginEntryPoint setCreativeToolsABServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101024d7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d556b0;
  func_0x000107c61428(param_1 + _DAT_112d556b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101024d88; end: 101024d93; -[SCSnapEditorAutoCaptionsPluginEntryPoint snapEditorScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101024d88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d556b8;
  func_0x000107c61428(param_1 + _DAT_112d556b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101024d94; end: 101024d9f; -[SCSnapEditorAutoCaptionsPluginEntryPoint setSnapEditorScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101024d94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d556b8;
  func_0x000107c61428(param_1 + _DAT_112d556b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101024da0; end: 101024dab; -[SCSnapEditorAutoCaptionsPluginEntryPoint speechRecognitionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101024da0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d556c0;
  func_0x000107c61428(param_1 + _DAT_112d556c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101024dac; end: 101024def;  */

void FUN_101024dac(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101024df0; end: 101024dfb; -[SCSnapEditorAutoCaptionsPluginEntryPoint setSpeechRecognitionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101024df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d556c0;
  func_0x000107c61428(param_1 + _DAT_112d556c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101024dfc; end: 101024e4f;  */

void FUN_101024dfc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101024e50; end: 1010250e7;  */

/* WARNING: Possible PIC construction at 0x000101024fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101024ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101025004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101025014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010250a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010250b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101025088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101025098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101025078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010102509c) */
/* WARNING: Removing unreachable block (ram,0x00010102508c) */
/* WARNING: Removing unreachable block (ram,0x0001010250bc) */
/* WARNING: Removing unreachable block (ram,0x0001010250ac) */
/* WARNING: Removing unreachable block (ram,0x000101025018) */
/* WARNING: Removing unreachable block (ram,0x000101025008) */
/* WARNING: Removing unreachable block (ram,0x000101024ff8) */
/* WARNING: Removing unreachable block (ram,0x000101024fe8) */
/* WARNING: Removing unreachable block (ram,0x00010102507c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101024e50(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lStack_70;
  long lStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c3e4b4();
    func_0x000107c61180();
    lVar9 = lVar3;
    if (lVar4 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c3ff88();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar9 = lVar4;
      }
      else {
        lVar8 = unaff_x20;
        func_0x000107c40c98();
        func_0x000107c61180();
        if (lVar8 == 0) {
          func_0x000107c61170(lVar3);
          lVar9 = lVar4;
        }
        else {
          lVar6 = unaff_x20;
          func_0x000107c5b274();
          func_0x000107c61180();
          if (lVar6 != 0) {
            func_0x000107c5b784();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              func_0x000101024ab0(0);
              func_0x000107c613fc();
              uVar7 = *(ulong *)(lVar8 + _DAT_11302ecd0);
              func_0x000107c4a464();
              lVar9 = lVar8;
              if ((uVar7 & 1) != 0) {
                lVar9 = *(long *)(lVar3 + _DAT_11302ba70);
                lVar8 = 0;
                func_0x000101024a90();
                lVar3 = lVar8;
                func_0x000107c610f8();
                plVar1 = (long *)(lVar3 + _DAT_112d555c8);
                *plVar1 = lVar4;
                plVar1[1] = lVar5;
                plVar1[2] = lVar6;
                plVar1[3] = unaff_x20;
                puVar2 = PTR_s_init_1125d9248;
                lStack_70 = lVar3;
                lStack_68 = lVar8;
                func_0x000107c61174(lVar9);
                func_0x000107c61174(lVar4);
                func_0x000107c61174(lVar5);
                func_0x000107c61174(lVar6);
                func_0x000107c61174(unaff_x20);
                func_0x000107c61154(&lStack_70,puVar2);
                func_0x000107c4fba8(lVar9);
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar9);
    return;
  }
  return;
}



/* Entry: 1010250e8; end: 10102510f; -[SCSnapEditorAutoCaptionsPluginEntryPoint begin] */

void FUN_1010250e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101024e50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101025110; end: 101025153; -[SCSnapEditorAutoCaptionsPluginEntryPoint end] */

void FUN_101025110(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101025154; end: 1010254a7;  */

void FUN_101025154(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10df930)) ||
       (func_0x000107c605b8(0xd00000000000001a,0x800000010ef206d0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52a60();
    }
    else {
      if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10e63d0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd000000000000017;
          if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10e36b0)) ||
             (func_0x000107c605b8(0xd000000000000017,0x800000010ef1c950,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c53ae0();
          }
          else {
            uVar2 = 0x7469644570616e73;
            if (((param_2 == 0x7469644570616e73) && (param_3 == -0x109a8f909cac8d91)) ||
               (func_0x000107c605b8(0x7469644570616e73,0xef65706f6353726f,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c593c0();
            }
            else {
              uVar2 = 0xd000000000000019;
              if (((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10df910)) &&
                 (func_0x000107c605b8(0xd000000000000019,0x800000010ef206f0,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "SnapEditorAutoCaptionsPluginEntryPoint/SCSnapEditorAutoCaptionsPluginEntryPoint.swift"
                                    ,0x55,2,0x3d,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1010254a8);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c59624();
            }
          }
          goto LAB_1010251e0;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53680();
    }
  }
LAB_1010251e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1010254a8; end: 101025553; -[SCSnapEditorAutoCaptionsPluginEntryPoint setValue:forIvarName:] */

void FUN_1010254a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101025154(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101025554; end: 101025617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101025554(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d55698,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d556a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d556a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d556b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d556b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d556c0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d556c8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101025618; end: 101025637; -[SCSnapEditorAutoCaptionsPluginEntryPoint init] */

void FUN_101025618(void)

{
  FUN_101025554();
  return;
}



/* Entry: 101025638; end: 10102566b;  */

void FUN_101025638(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10102566c; end: 1010256f3; -[SCSnapEditorAutoCaptionsPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102566c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d55698);
  func_0x000107c61610(param_1 + _DAT_112d556a0);
  func_0x000107c61610(param_1 + _DAT_112d556a8);
  func_0x000107c61610(param_1 + _DAT_112d556b0);
  func_0x000107c61610(param_1 + _DAT_112d556b8);
  func_0x000107c61610(param_1 + _DAT_112d556c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d556c8));
  return;
}



/* Entry: 1010256f4; end: 10102572f;  */

void FUN_1010256f4(void)

{
  func_0x000107c61168(&PTR_PTR_1127a8a18);
  return;
}



/* Entry: 101025730; end: 1010257f7; -[_TtC30SnapEditorCropPluginEntryPoint20SnapEditorCropPlugin populateDependencies:] */

void FUN_101025730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  uStack_40 = 0x101025714;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101016bdc;
  puStack_48 = &UNK_110378020;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61174(param_3);
  func_0x000107c46b38(puVar1,param_2,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_38);
  func_0x000107c53b68(param_3,param_2,puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1010257f8; end: 101025833; -[_TtC30SnapEditorCropPluginEntryPoint20SnapEditorCropPlugin init] */

void FUN_1010257f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000101025864();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101025834; end: 101025883;  */

void FUN_101025834(void)

{
  func_0x000101025864();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101025884; end: 10102589f;  */

void FUN_101025884(long param_1,long param_2)

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



/* Entry: 1010258a0; end: 1010258e7;  */

void FUN_1010258a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_1010258e8(param_1,param_2,param_3);
  return;
}



/* Entry: 1010258e8; end: 1010259e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1010258e8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  iVar1 = (int)*(undefined8 *)(param_3 + _DAT_11302ecd0);
  func_0x000107c4a468();
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11302ba70);
    uVar3 = 0;
    func_0x000101025864(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar4);
    func_0x000107c453e4(uVar3);
    func_0x000107c4fba8(uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1010259e8; end: 101025a47; -[_TtC30SnapEditorCropPluginEntryPoint30SnapEditorCropPluginEntryPoint init] */

void FUN_1010259e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorCropPluginEntryPoint.SnapEditorCropPluginEntryPoint",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101025a14);
  (*pcVar1)();
}



/* Entry: 101025a48; end: 101025a53;  */

void FUN_101025a48(void)

{
  return;
}



/* Entry: 101025a54; end: 101025a73;  */

void FUN_101025a54(void)

{
  func_0x000107c61168(&PTR_PTR_1127a8bb8);
  return;
}



/* Entry: 101025a74; end: 101025a7f; -[SCSnapEditorCropPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101025a74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55748;
  func_0x000107c61428(param_1 + _DAT_112d55748,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101025a80; end: 101025a8b; -[SCSnapEditorCropPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101025a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55748;
  func_0x000107c61428(param_1 + _DAT_112d55748,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101025a8c; end: 101025a97; -[SCSnapEditorCropPluginEntryPoint scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101025a8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55750;
  func_0x000107c61428(param_1 + _DAT_112d55750,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101025a98; end: 101025aa3; -[SCSnapEditorCropPluginEntryPoint setScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101025a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55750;
  func_0x000107c61428(param_1 + _DAT_112d55750,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101025aa4; end: 101025aaf; -[SCSnapEditorCropPluginEntryPoint creativeToolsABServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101025aa4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55758;
  func_0x000107c61428(param_1 + _DAT_112d55758,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101025ab0; end: 101025af3;  */

void FUN_101025ab0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101025af4; end: 101025aff; -[SCSnapEditorCropPluginEntryPoint setCreativeToolsABServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101025af4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55758;
  func_0x000107c61428(param_1 + _DAT_112d55758,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101025b00; end: 101025c1f;  */

void FUN_101025b00(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101025c20; end: 101025c47; -[SCSnapEditorCropPluginEntryPoint begin] */

void FUN_101025c20(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101025b54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101025c48; end: 101025c8b; -[SCSnapEditorCropPluginEntryPoint end] */

void FUN_101025c48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101025c8c; end: 101025e8f;  */

void FUN_101025c8c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0x65706f6373;
    if (((param_2 == 0x65706f6373) && (param_3 == -0x1b00000000000000)) ||
       (func_0x000107c605b8(0x65706f6373,0xe500000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58c58();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10e36b0)) {
        uVar2 = 0xd000000000000017;
        func_0x000107c605b8(0xd000000000000017,0x800000010ef1c950,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SnapEditorCropPluginEntryPoint/SCSnapEditorCropPluginEntryPoint.swift"
                              ,0x45,2,0x2c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101025e90);
          (*pcVar1)();
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53ae0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101025e90; end: 101025f3b; -[SCSnapEditorCropPluginEntryPoint setValue:forIvarName:] */

void FUN_101025e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101025c8c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101025f3c; end: 101025fc3; -[SCSnapEditorCropPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101025f3c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d55748,0);
  func_0x000107c61614(param_1 + _DAT_112d55750,0);
  func_0x000107c61614(param_1 + _DAT_112d55758,0);
  *(undefined8 *)(param_1 + _DAT_112d55760) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101025fc4; end: 101025ff7;  */

void FUN_101025fc4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101025ff8; end: 10102604f; -[SCSnapEditorCropPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101025ff8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d55748);
  func_0x000107c61610(param_1 + _DAT_112d55750);
  func_0x000107c61610(param_1 + _DAT_112d55758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d55760));
  return;
}



/* Entry: 101026050; end: 10102606f;  */

void FUN_101026050(void)

{
  func_0x000107c61168(&PTR_PTR_1127a8c70);
  return;
}



/* Entry: 101026070; end: 10102618b; -[_TtC33SnapEditorDrawingPluginEntryPoint23SnapEditorDrawingPlugin populateDependencies:] */

void FUN_101026070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10102618c();
  puVar2 = &UNK_110378170;
  func_0x000107c613fc(&UNK_110378170,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  puVar3 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  uStack_50 = 0x1010264a8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101016bdc;
  puStack_58 = &UNK_110378188;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c46b38(puVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puStack_48);
  func_0x000107c542cc(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10102618c; end: 10102624f;  */

undefined * FUN_10102618c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126a61c8;
  func_0x000107c610f8(PTR_PTR_1126a61c8);
  func_0x000107c453e4();
  puVar2 = &UNK_110378120;
  func_0x000107c613fc(&UNK_110378120,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_101026484;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x1010264f0;
  puStack_48 = &UNK_110378138;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c54e94(puVar1);
  func_0x000107c60bd0(ppuVar3);
  return puVar1;
}



/* Entry: 101026250; end: 1010263f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101026250(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112d55790;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d55790;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar4 = *(long *)(lVar1 + _DAT_112d557d0);
      func_0x000107c61174();
      func_0x000107c61170(lVar1);
      lVar1 = lVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar1 != 0) {
        lVar4 = lVar1;
        func_0x000107c40ed4();
        func_0x000107c61180();
        func_0x000107c615e8(lVar1);
        if (lVar4 != 0) {
          lVar2 = param_1 + lVar2;
          func_0x000107c61618();
          if (lVar2 != 0) {
            puVar5 = *(undefined **)(lVar2 + _DAT_112d557d8);
            func_0x000107c61174(puVar5);
            func_0x000107c61170(lVar2);
            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
            func_0x000107c45788();
            func_0x000107c61170(lVar4);
            func_0x000107c4d664(puVar5);
            func_0x000107c61170(puVar3);
            puVar3 = puVar5;
            func_0x000107c5cb24(puVar5);
            func_0x000107c61180();
            func_0x000107c61170(param_1);
            goto LAB_1010263c4;
          }
          func_0x000107c61170(param_1);
          param_1 = lVar4;
        }
      }
    }
    func_0x000107c61170(param_1);
  }
  puVar5 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c453e4();
  puVar3 = puVar5;
  func_0x000107c5cb24();
  func_0x000107c61180();
LAB_1010263c4:
  func_0x000107c61170(puVar5);
  return puVar3;
}



/* Entry: 1010263f8; end: 101026453; -[_TtC33SnapEditorDrawingPluginEntryPoint23SnapEditorDrawingPlugin init] */

void FUN_1010263f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorDrawingPluginEntryPoint.SnapEditorDrawingPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101026424);
  (*pcVar1)();
}



/* Entry: 101026454; end: 101026463; -[_TtC33SnapEditorDrawingPluginEntryPoint23SnapEditorDrawingPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101026454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112d55790);
  return;
}



/* Entry: 101026464; end: 101026483;  */

void FUN_101026464(void)

{
  func_0x000107c61168(&PTR_PTR_1127a8d40);
  return;
}



/* Entry: 101026484; end: 1010264af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101026484(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112d55790;
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d55790;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar5 = *(long *)(lVar2 + _DAT_112d557d0);
      func_0x000107c61174();
      func_0x000107c61170(lVar2);
      lVar2 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar2 != 0) {
        lVar5 = lVar2;
        func_0x000107c40ed4();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        if (lVar5 != 0) {
          lVar3 = lVar1 + lVar3;
          func_0x000107c61618();
          if (lVar3 != 0) {
            puVar6 = *(undefined **)(lVar3 + _DAT_112d557d8);
            func_0x000107c61174(puVar6);
            func_0x000107c61170(lVar3);
            puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
            func_0x000107c45788();
            func_0x000107c61170(lVar5);
            func_0x000107c4d664(puVar6);
            func_0x000107c61170(puVar4);
            puVar4 = puVar6;
            func_0x000107c5cb24(puVar6);
            func_0x000107c61180();
            func_0x000107c61170(lVar1);
            goto LAB_1010263c4;
          }
          func_0x000107c61170(lVar1);
          lVar1 = lVar5;
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  puVar6 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c453e4();
  puVar4 = puVar6;
  func_0x000107c5cb24();
  func_0x000107c61180();
LAB_1010263c4:
  func_0x000107c61170(puVar6);
  return puVar4;
}



/* Entry: 1010264b0; end: 1010264e7;  */

void FUN_1010264b0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1010264e8; end: 1010264f3;  */

void FUN_1010264e8(long param_1,long param_2)

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



/* Entry: 1010264f4; end: 1010266cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1010264f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  
  plVar8 = &lStack_80;
  func_0x000107c610f8();
  *(long *)(unaff_x20 + _DAT_112d557c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d557c8) = param_2;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = param_4;
  func_0x000107c42500();
  func_0x000107c61180();
  uVar3 = uVar9;
  func_0x000107c424fc();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  *(undefined8 *)(unaff_x20 + _DAT_112d557d0) = uVar3;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112d557d8) = puVar4;
  puVar5 = auStack_70;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  iVar2 = (int)*(undefined8 *)(param_3 + _DAT_11302ecd0);
  func_0x000107c4a46c();
  if (iVar2 != 0) {
    uVar9 = *(undefined8 *)(param_1 + _DAT_11302ba70);
    lVar6 = 0;
    FUN_101026464();
    lVar7 = lVar6;
    func_0x000107c610f8();
    lVar1 = _DAT_112d55790;
    func_0x000107c61614(lVar7 + _DAT_112d55790,0);
    func_0x000107c61604(lVar7 + lVar1,puVar5);
    puVar4 = PTR_s_init_1125d9248;
    lStack_80 = lVar7;
    lStack_78 = lVar6;
    func_0x000107c61174(uVar9);
    func_0x000107c61154(&lStack_80,puVar4);
    func_0x000107c4fba8(uVar9);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(plVar8);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  return puVar5;
}



/* Entry: 1010266cc; end: 10102672b; -[_TtC33SnapEditorDrawingPluginEntryPoint33SnapEditorDrawingPluginEntryPoint init] */

void FUN_1010266cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorDrawingPluginEntryPoint.SnapEditorDrawingPluginEntryPoint",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010266f8);
  (*pcVar1)();
}



/* Entry: 10102672c; end: 101026783; -[_TtC33SnapEditorDrawingPluginEntryPoint33SnapEditorDrawingPluginEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101026748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101026768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010102674c) */
/* WARNING: Removing unreachable block (ram,0x00010102676c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102672c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d557c8));
  return;
}



/* Entry: 101026784; end: 10102678f;  */

void FUN_101026784(void)

{
  return;
}



/* Entry: 101026790; end: 1010267af;  */

void FUN_101026790(void)

{
  func_0x000107c61168(&PTR_PTR_1127a8e28);
  return;
}



/* Entry: 1010267b0; end: 1010267bb; -[SCSnapEditorDrawingPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010267b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55808;
  func_0x000107c61428(param_1 + _DAT_112d55808,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010267bc; end: 1010267c7; -[SCSnapEditorDrawingPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010267bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55808;
  func_0x000107c61428(param_1 + _DAT_112d55808,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010267c8; end: 1010267d3; -[SCSnapEditorDrawingPluginEntryPoint scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010267c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55810;
  func_0x000107c61428(param_1 + _DAT_112d55810,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



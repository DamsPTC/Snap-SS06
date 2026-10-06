/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102db0e04; end: 102db0e13;  */

void FUN_102db0e04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102db0e14; end: 102db0fa3;  */

/* WARNING: Removing unreachable block (ram,0x000102db0ed0) */

undefined1  [16] FUN_102db0e14(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_1;
  FUN_102dbc79c(param_1);
  if (unaff_x21 == 0) {
    param_1 = uVar2;
    FUN_102db0fa4();
    uVar3 = uVar2;
    func_0x000107c4c978(uVar2);
    func_0x000107c5ee80(lVar5,0x40f5180000000000);
    (**(code **)(lVar6 + 0x10))(puVar4,lVar5,lVar1);
    (**(code **)(lVar6 + 0x38))(puVar4,0,1,lVar1);
    func_0x00010444993c(0);
    func_0x000107c610f8();
    func_0x0001044490cc((double)(uVar3 & 0xffffffff) / 1000.0,puVar4);
    func_0x000107c61170(uVar2);
    (**(code **)(lVar6 + 8))(lVar5,lVar1);
    unaff_x20 = puVar4;
  }
  auVar7._8_8_ = unaff_x20;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 102db0fa4; end: 102db15ab;  */

undefined8 ******
FUN_102db0fa4(undefined8 ******param_1,undefined8 *******param_2,undefined8 param_3,
             undefined *param_4)

{
  undefined8 *******pppppppuVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *******pppppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 uVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ******ppppppuVar11;
  undefined8 uVar12;
  undefined8 ******ppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  uint uVar17;
  long extraout_x8;
  undefined8 *****pppppuVar18;
  undefined8 *****pppppuVar19;
  undefined8 ******unaff_x20;
  undefined8 ******ppppppuVar20;
  long unaff_x21;
  undefined8 ******ppppppuVar21;
  long lVar22;
  undefined8 *******pppppppuVar23;
  undefined8 *****pppppuStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 ******ppppppuStack_d0;
  long lStack_c8;
  undefined8 ****appppuStack_b0 [3];
  long lStack_98;
  undefined8 ******appppppuStack_88 [3];
  undefined8 uStack_70;
  
  pppppppuVar7 = (undefined8 *******)0x0;
  func_0x000107c5ede0();
  ppppppuVar21 = pppppppuVar7[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(ppppppuVar21[8]);
  lVar22 = (long)&pppppuStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  ppppppuVar20 = param_1;
  func_0x000107c44984();
  if ((int)ppppppuVar20 != 0) {
    ppppppuVar8 = param_1;
    func_0x000107c4c99c();
    func_0x000107c61180();
    ppppppuVar20 = (undefined8 ******)0x0;
    if (ppppppuVar8 != (undefined8 ******)0x0) {
      pppppppuVar23 = param_2;
      func_0x000107c4ca10();
      func_0x000107c61180();
      ppppppuVar20 = unaff_x20;
      if (pppppppuVar23 != (undefined8 *******)0x0) {
        appppppuStack_88[0] = (undefined8 *******)0x0;
        uVar9 = 0;
        FUN_102dbd588(0,0x112d512f8,&PTR_PTR_1126b25d8);
        pppppppuVar16 = appppppuStack_88;
        func_0x000107c5fc50(pppppppuVar23,pppppppuVar16,uVar9);
        func_0x000107c61170();
        pppppppuVar15 = (undefined8 *******)appppppuStack_88[0];
        if ((undefined8 *******)appppppuStack_88[0] != (undefined8 *******)0x0) {
          pppppppuVar23 = (undefined8 *******)((ulong)appppppuStack_88[0] & 0xffffffffffffff8);
          pppppuStack_e0 = ppppppuVar21;
          ppppppuStack_d8 = pppppppuVar7;
          ppppppuStack_d0 = param_2;
          lStack_c8 = lVar22;
          if ((ulong)appppppuStack_88[0] >> 0x3e == 0) {
            pppppppuVar7 = (undefined8 *******)pppppppuVar23[2];
          }
          else {
            pppppppuVar7 = (undefined8 *******)appppppuStack_88[0];
            if (-1 < (long)appppppuStack_88[0]) {
              pppppppuVar7 = pppppppuVar23;
            }
            func_0x000107c60480();
          }
          if (pppppppuVar7 != (undefined8 *******)0x0) {
            ppppppuVar20 = (undefined8 ******)0x0;
            do {
              if (((ulong)pppppppuVar15 & 0xc000000000000001) == 0) {
                if (pppppppuVar23[2] <= ppppppuVar20) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x102db152c);
                  (*pcVar5)();
                }
                ppppppuVar21 = pppppppuVar15[(long)ppppppuVar20 + 4];
                func_0x000107c61174();
              }
              else {
                param_4 = (undefined *)0x112d512f8;
                ppppppuVar21 = ppppppuVar20;
                pppppppuVar16 = pppppppuVar15;
                FUN_102dba8c8(ppppppuVar20,pppppppuVar15,&PTR_PTR_1126b25d8,0x112d512f8);
              }
              pppppppuVar1 = (undefined8 *******)((long)ppppppuVar20 + 1);
              if (SCARRY8((long)ppppppuVar20,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x102db1528);
                (*pcVar5)();
              }
              ppppppuVar10 = ppppppuVar21;
              func_0x000107c4c9b4();
              ppppppuVar11 = ppppppuVar8;
              func_0x000107c4c9b4();
              if (ppppppuVar10 == ppppppuVar11) {
                func_0x000107c6142c(pppppppuVar15);
                ppppppuVar10 = ppppppuVar21;
                func_0x000107c4ca5c();
                ppppppuVar11 = ppppppuVar21;
                func_0x000107c40488();
                func_0x000107c61180();
                pppppppuVar7 = pppppppuVar16;
                if (ppppppuVar11 != (undefined8 ******)0x0) {
                  ppppppuVar20 = ppppppuVar11;
                  func_0x000107c5ee30();
                  func_0x000107c61170(ppppppuVar11);
                  uVar4 = (uint)((ulong)pppppppuVar16 >> 0x20);
                  uVar17 = uVar4 >> 0x1e;
                  if (1 < uVar4 >> 0x1e) {
                    if (uVar17 == 2) {
                      pppppuVar18 = ppppppuVar20[2];
                      pppppuVar19 = ppppppuVar20[3];
                      goto LAB_102db11d4;
                    }
LAB_102db11dc:
                    func_0x00010006c090(ppppppuVar20);
                    pppppppuVar7 = pppppppuVar16;
                    ppppppuVar20 = ppppppuVar11;
                    goto LAB_102db11e8;
                  }
                  if (uVar17 == 0) {
                    if (((ulong)pppppppuVar16 & 0xff000000000000) == 0) goto LAB_102db11dc;
                  }
                  else {
                    pppppuVar18 = (undefined8 *****)(long)(int)ppppppuVar20;
                    pppppuVar19 = (undefined8 *****)((long)ppppppuVar20 >> 0x20);
LAB_102db11d4:
                    if (pppppuVar18 == pppppuVar19) goto LAB_102db11dc;
                  }
                  ppppppuVar10 = (undefined8 ******)PTR_PTR_1126b2c80;
                  func_0x000107c61168(PTR_PTR_1126b2c80);
                  ppppppuVar11 = ppppppuVar20;
                  func_0x000107c5ee20(ppppppuVar20,pppppppuVar16);
                  ppppppuVar13 = ppppppuVar11;
                  func_0x000107c4049c(ppppppuVar10);
                  func_0x000107c61180();
                  func_0x00010006c090(ppppppuVar20);
                  func_0x000107c61170(ppppppuVar11);
LAB_102db12a8:
                  func_0x000107c61174(ppppppuVar10);
LAB_102db12b0:
                  FUN_102dbc1ac(param_1);
                  ppppppuVar20 = ppppppuVar21;
                  func_0x000107c4ca5c();
                  uVar4 = (int)ppppppuVar20 - 1;
                  if (uVar4 < 0xb) {
                    uVar9 = *(undefined8 *)(&UNK_10db4e3b8 + (ulong)uVar4 * 8);
                  }
                  else {
                    uVar9 = 0;
                  }
                  bVar6 = pppppppuVar16 != (undefined8 *******)0x0;
                  ppppppuVar20 = (undefined8 ******)0x0;
                  if (bVar6) {
                    ppppppuVar20 = ppppppuVar13;
                  }
                  puVar2 = (undefined *)0x0;
                  if (bVar6) {
                    puVar2 = param_4;
                  }
                  ppppppuVar11 = (undefined8 ******)0x0;
                  if (bVar6) {
                    ppppppuVar11 = param_1;
                  }
                  uVar12 = 0;
                  func_0x000104448f4c(0);
                  func_0x000107c610f8();
                  ppppppuVar13 = ppppppuVar10;
                  func_0x000104448c64(ppppppuVar10,uVar9,ppppppuVar11,pppppppuVar16,ppppppuVar20,
                                      puVar2,uVar12);
                  func_0x000107c61170(ppppppuVar21);
                  func_0x000107c61170(ppppppuVar8);
                  func_0x000107c61170(ppppppuVar10);
                  return ppppppuVar13;
                }
LAB_102db11e8:
                ppppppuVar11 = ppppppuVar21;
                func_0x000107c3abfc();
                func_0x000107c61180();
                pppppppuVar16 = pppppppuVar7;
                if (ppppppuVar11 != (undefined8 ******)0x0) {
                  ppppppuVar20 = ppppppuVar11;
                  func_0x000107c5faec();
                  pppppppuVar16 = pppppppuVar7;
                  func_0x000107c6142c(pppppppuVar7);
                  uVar3 = (ulong)ppppppuVar20 & 0xffffffffffff;
                  if (((ulong)pppppppuVar7 & 0x2000000000000000) != 0) {
                    uVar3 = (ulong)pppppppuVar7 >> 0x38 & 0xf;
                  }
                  if (uVar3 != 0) {
                    ppppppuVar10 = (undefined8 ******)PTR_PTR_1126b2c80;
                    func_0x000107c61168(PTR_PTR_1126b2c80);
                    ppppppuVar13 = ppppppuVar11;
                    func_0x000107c5d81c();
                    func_0x000107c61180();
                    func_0x000107c61170(ppppppuVar11);
                    goto LAB_102db12a8;
                  }
                  func_0x000107c61170(ppppppuVar11);
                  ppppppuVar20 = ppppppuVar11;
                }
                ppppppuVar11 = ppppppuVar21;
                func_0x000107c4b7ec();
                func_0x000107c61180();
                pppppppuVar7 = (undefined8 *******)0x0;
                if (ppppppuVar11 == (undefined8 ******)0x0) {
LAB_102db1430:
                  FUN_102dbcde4();
                  func_0x000107c613f8(&UNK_1105d1000,pppppppuVar7,0,0);
                  pppppppuVar7[1] = (undefined8 ******)0x6;
                  *pppppppuVar7 = (undefined8 ******)0x0;
                }
                else {
                  ppppppuVar13 = ppppppuVar11;
                  pppppppuVar7 = pppppppuVar16;
                  func_0x000107c5faec();
                  ppppppuVar14 = ppppppuVar11;
                  func_0x000107c61170();
                  uVar3 = (ulong)ppppppuVar13 & 0xffffffffffff;
                  if (((ulong)pppppppuVar7 & 0x2000000000000000) != 0) {
                    uVar3 = (ulong)pppppppuVar7 >> 0x38 & 0xf;
                  }
                  ppppppuVar20 = ppppppuVar11;
                  if (uVar3 == 0) {
                    func_0x000107c6142c();
                    goto LAB_102db1430;
                  }
                  if ((int)ppppppuVar10 == 3) {
                    param_4 = &UNK_10db4e2f0;
                    FUN_102dbd7a8(unaff_x20 + 7,appppuStack_b0,0x112f17dc0,&UNK_10db4e2f0);
                    if (lStack_98 != 0) {
                      FUN_102dbce24(appppuStack_b0,appppppuStack_88);
                      pppppppuVar23 = appppppuStack_88;
                      func_0x0001000a8868(pppppppuVar23,uStack_70);
                      lVar22 = lStack_c8;
                      ppppppuVar20 = *pppppppuVar23;
                      pppppppuVar23 = pppppppuVar7;
                      FUN_102daa304(lStack_c8,ppppppuVar13,pppppppuVar7,ppppppuStack_d0);
                      func_0x000107c6142c(pppppppuVar7);
                      if (unaff_x21 != 0) {
                        func_0x000107c61170(ppppppuVar21);
                        func_0x000107c61170(ppppppuVar8);
                        func_0x0001000834e4(appppppuStack_88);
                        return ppppppuVar20;
                      }
                      ppppppuVar10 = (undefined8 ******)PTR_PTR_1126b2c80;
                      func_0x000107c61168(PTR_PTR_1126b2c80);
                      ppppppuVar20 = ppppppuVar10;
                      func_0x000107c5ed70();
                      func_0x000107c5fadc();
                      func_0x000107c6142c(pppppppuVar23);
                      ppppppuVar13 = ppppppuVar20;
                      func_0x000107c5d81c(ppppppuVar10);
                      func_0x000107c61180();
                      func_0x000107c61170(ppppppuVar20);
                      pppppppuVar16 = (undefined8 *******)ppppppuStack_d8;
                      (*(code *)pppppuStack_e0[1])(lVar22);
                      func_0x000107c61174(ppppppuVar10);
                      func_0x0001000834e4(appppppuStack_88);
                      goto LAB_102db12b0;
                    }
                    ppppppuVar14 = (undefined8 ******)appppuStack_b0;
                    FUN_102dbd694(ppppppuVar14,0x112f17dc0,&UNK_10db4e2f0);
                  }
                  FUN_102dbcde4();
                  func_0x000107c613f8(&UNK_1105d1000,ppppppuVar14,0,0);
                  *ppppppuVar14 = ppppppuVar13;
                  ppppppuVar14[1] = pppppppuVar7;
                }
                func_0x000107c61654();
                func_0x000107c61170(ppppppuVar21);
                goto LAB_102db157c;
              }
              func_0x000107c61170(ppppppuVar21);
              ppppppuVar20 = (undefined8 ******)((long)ppppppuVar20 + 1);
            } while (pppppppuVar1 != pppppppuVar7);
          }
          func_0x000107c6142c();
          pppppppuVar23 = pppppppuVar15;
        }
      }
      FUN_102dbcde4();
      func_0x000107c613f8(&UNK_1105d1000,pppppppuVar23,0,0);
      pppppppuVar23[1] = (undefined8 ******)0x4;
      *pppppppuVar23 = (undefined8 ******)0x0;
      func_0x000107c61654();
LAB_102db157c:
      func_0x000107c61170(ppppppuVar8);
      return ppppppuVar20;
    }
  }
  FUN_102dbcde4();
  func_0x000107c613f8(&UNK_1105d1000,ppppppuVar20,0,0);
  ppppppuVar20[1] = (undefined8 *****)0x3;
  *ppppppuVar20 = (undefined8 *****)0x0;
  func_0x000107c61654();
  return unaff_x20;
}



/* Entry: 102db15ac; end: 102db164b;  */

undefined * FUN_102db15ac(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_28;
  
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102db164c);
    (*pcVar1)();
  }
  lVar2 = param_1;
  func_0x000107c4e928();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    puStack_28 = (undefined *)0x0;
    uVar3 = 0;
    FUN_102dbd588(0,0x112d55598,&PTR_PTR_1126b25d0);
    func_0x000107c5fc50(lVar2,&puStack_28,uVar3);
    func_0x000107c61170(lVar2);
    if (puStack_28 != (undefined *)0x0) {
      puVar4 = puStack_28;
    }
  }
  return puVar4;
}



/* Entry: 102db164c; end: 102db1beb;  */

ulong FUN_102db164c(int param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar6 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102db173c);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_2 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar7;
        FUN_102dba8c8(uVar7,param_2,&PTR_PTR_1126b25d0,0x112d55598);
      }
      uVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102db1738);
        (*pcVar2)();
      }
      uVar4 = uVar3;
      func_0x000107c4abb4();
      if ((int)uVar4 == 1) {
        uVar4 = uVar3;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (uVar4 != 0) {
          uVar5 = uVar4;
          func_0x000107c3e240();
          func_0x000107c61170(uVar4);
          if ((int)uVar5 == param_1) {
            return uVar3;
          }
        }
      }
      func_0x000107c61170(uVar3);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar6);
  }
  return 0;
}



/* Entry: 102db1bec; end: 102db1c27;  */

void FUN_102db1bec(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  FUN_102dbd694(unaff_x20 + 0x38,0x112f17dc0,&UNK_10db4e2f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102db1c28; end: 102db1fdb;  */

undefined * FUN_102db1c28(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102db1e24);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_102dbd588(0,0x112d530c8,&PTR_PTR_1126affc8);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_102dba8c8(uVar7,param_1,&PTR_PTR_1126affc8,0x112d530c8);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_102dbd588(0,0x112d530c8,&PTR_PTR_1126affc8);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 102db1fdc; end: 102db2127;  */

double FUN_102db1fdc(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  FUN_102db15ac();
  uVar2 = 5;
  FUN_102db164c(5,param_1);
  func_0x000107c6142c(param_1);
  if (uVar2 == 0) {
    return 0.0;
  }
  uVar3 = uVar2;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c44824();
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar3;
      func_0x000107c41e40();
      func_0x000107c61180();
      if (uVar4 != 0) {
        uVar5 = uVar2;
        func_0x000107c4f4ec();
        func_0x000107c61180();
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102db2128);
          (*pcVar1)();
        }
        uVar6 = uVar5;
        func_0x000107c44bd0();
        func_0x000107c61170(uVar5);
        if ((int)uVar6 == 0) {
          uVar5 = uVar4;
          func_0x000107c5e304();
          uVar6 = uVar4;
          func_0x000107c44d98();
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar2);
          if ((int)uVar5 == 0) {
            return 0.0;
          }
          if ((int)uVar6 != 0) {
            return (double)(uVar5 & 0xffffffff);
          }
          return 0.0;
        }
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar3);
        uVar2 = uVar4;
        goto LAB_102db20a4;
      }
    }
    func_0x000107c61170(uVar2);
    uVar2 = uVar3;
  }
LAB_102db20a4:
  func_0x000107c61170(uVar2);
  return 0.0;
}



/* Entry: 102db2128; end: 102db236f;  */

/* WARNING: Removing unreachable block (ram,0x000102db229c) */
/* WARNING: Removing unreachable block (ram,0x000102db2224) */

void FUN_102db2128(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar8;
  
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x00010006c00c(param_1,param_2);
  puVar1 = param_1;
  func_0x0001010282b0(param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  if (unaff_x21 != (undefined8 *)0x0) {
    func_0x000107c614ac();
    param_1 = unaff_x21;
LAB_102db21ac:
    FUN_102dbcde4();
    func_0x000107c613f8(&UNK_1105d1000,param_1,0,0);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x000107c61654();
    return;
  }
  if (puVar1 == (undefined8 *)0x0) goto LAB_102db21ac;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar7);
  puVar2 = puVar1;
  FUN_102db0e14();
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  puVar3 = puVar1;
  FUN_102db15ac(puVar1);
  lVar4 = 6;
  FUN_102db164c(6,puVar3);
  func_0x000107c6142c(puVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar8 = lVar5;
      FUN_102db0fa4();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar5);
      goto LAB_102db22d4;
    }
    func_0x000107c61170(lVar4);
  }
  lVar8 = 0;
LAB_102db22d4:
  func_0x000104448b0c(0);
  func_0x000107c610f8();
  uVar6 = 0xb;
  func_0x0001044488f4(0xb,3,0);
  func_0x00010444a99c(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_4);
  func_0x000104449e34(param_3,param_4,puVar2,0,lVar8,0,uVar7,uVar6,0x100);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 102db2370; end: 102db2393;  */

void FUN_102db2370(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102db2394; end: 102db3013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102db2394(undefined8 param_1,undefined8 param_2,undefined8 ***param_3,
                    undefined8 ***param_4,undefined8 param_5,undefined8 *****param_6)

{
  long lVar1;
  long lVar2;
  undefined8 **ppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 ***pppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  long *plVar16;
  long extraout_x8;
  undefined8 ****ppppuVar17;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  undefined8 ****ppppuVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  long alStack_160 [3];
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined8 **ppuStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  long alStack_d8 [2];
  undefined8 ****ppppuStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 auStack_b8 [3];
  undefined8 ****ppppuStack_a0;
  undefined **ppuStack_98;
  undefined8 ****appppuStack_90 [3];
  undefined8 ****ppppuStack_78;
  undefined **ppuStack_70;
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112f17ae8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f17af0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f17af8) = param_2;
  if (param_3 == (undefined8 ***)0x0) {
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_1);
    pppppuVar5 = (undefined8 *****)0x0;
  }
  else {
    ppppuVar4 = (undefined8 ****)0x0;
    FUN_102dafe04();
    ppppuVar18 = ppppuVar4;
    func_0x000107c610f8();
    *(undefined8 ****)((long)ppppuVar18 + _DAT_112f179c0) = param_3;
    *(undefined8 *)((long)ppppuVar18 + _DAT_112f179c8) = param_5;
    puVar15 = PTR_s_init_1125d9248;
    pppuStack_e8 = ppppuVar18;
    pppuStack_e0 = ppppuVar4;
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c615f0(param_3);
    func_0x000107c615f0(param_5);
    pppppuVar5 = (undefined8 *****)&pppuStack_e8;
    func_0x000107c61154(pppppuVar5,puVar15);
  }
  puStack_140 = (undefined1 *)_DAT_112f17b00;
  *(undefined8 ******)(unaff_x20 + _DAT_112f17b00) = pppppuVar5;
  lStack_120 = unaff_x20;
  FUN_102db3014();
  pppppuVar6 = pppppuVar5;
  func_0x000107c613fc();
  ppuStack_138 = param_3;
  uStack_128 = param_2;
  if (param_3 == (undefined8 ***)0x0) {
    ppppuVar18 = (undefined8 ****)0x0;
    ppppuVar4 = (undefined8 ****)0x0;
    ppuVar21 = (undefined **)0x0;
    pppppuVar8 = pppppuVar6;
  }
  else {
    ppppuVar4 = (undefined8 ****)0x0;
    func_0x000102dabb04();
    ppppuVar18 = ppppuVar4;
    func_0x000107c613fc();
    ppppuVar18[2] = param_3;
    ppppuVar18[3] = param_4;
    pppuVar7 = (undefined8 ***)0x0;
    func_0x000102dabb24();
    func_0x000107c613fc();
    func_0x000107c615f0(param_4);
    func_0x000107c615f0(param_3);
    ppppuVar17 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000102dbbc50();
    appppuStack_90[0] = ppppuVar17;
    func_0x0001000285a8(0x112f17b80,&UNK_10db4e190);
    func_0x000107c613fc();
    pppppuVar8 = appppuStack_90;
    func_0x00010006c248();
    pppuVar7[2] = pppppuVar8;
    ppppuVar18[4] = pppuVar7;
    ppuVar21 = &PTR_DAT_1105d05d8;
  }
  ppuStack_70 = &PTR_DAT_1105d0bd8;
  appppuStack_90[0] = pppppuVar6;
  ppppuStack_78 = pppppuVar5;
  func_0x000102db3034();
  pppppuVar9 = pppppuVar8;
  func_0x000107c613fc();
  func_0x0001000c6518(appppuStack_90,pppppuVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)(pppppuVar5[-1][8]);
  puVar19 = (undefined8 *)((long)alStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar19);
  ppppuVar17 = (undefined8 ****)*puVar19;
  pppppuVar9[5] = pppppuVar5;
  pppppuVar9[6] = (undefined8 ****)&PTR_DAT_1105d0bd8;
  pppppuVar9[2] = ppppuVar17;
  pppppuVar9[7] = ppppuVar18;
  pppppuVar9[8] = (undefined8 ****)0x0;
  pppppuVar9[9] = (undefined8 ****)0x0;
  pppppuVar9[10] = ppppuVar4;
  pppppuVar9[0xb] = (undefined8 ****)ppuVar21;
  func_0x000107c6157c(ppppuVar18);
  func_0x000107c6157c(pppppuVar6);
  pppppuVar10 = appppuStack_90;
  func_0x0001000834e4();
  ppuStack_70 = &PTR_DAT_1105d0bc0;
  appppuStack_90[0] = pppppuVar9;
  ppppuStack_78 = pppppuVar8;
  func_0x000102db3054();
  pppppuVar5 = pppppuVar10;
  func_0x000107c613fc();
  func_0x0001000c6518(appppuStack_90,pppppuVar8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(pppppuVar8[-1][8]);
  puVar19 = (undefined8 *)((long)alStack_160 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar19);
  ppppuVar4 = (undefined8 ****)*puVar19;
  pppppuVar5[5] = pppppuVar8;
  pppppuVar5[6] = (undefined8 ****)&PTR_DAT_1105d0bc0;
  pppppuVar5[2] = ppppuVar4;
  func_0x000107c6157c(pppppuVar9);
  pppppuVar8 = appppuStack_90;
  func_0x0001000834e4();
  ppuVar3 = ppuStack_138;
  pppuStack_130 = ppppuVar18;
  if (param_6 == (undefined8 *****)0x0) {
    uStack_144 = 0;
  }
  else {
    pppppuVar8 = param_6;
    func_0x000108f494ec();
    uStack_144 = SUB84(pppppuVar8,0);
  }
  uVar20 = *(undefined8 *)(lStack_120 + (long)puStack_140);
  ppuStack_70 = &PTR_DAT_1105d0bb0;
  alStack_160[1] = uVar20;
  appppuStack_90[0] = pppppuVar5;
  ppppuStack_78 = pppppuVar10;
  func_0x000102db3074();
  pppppuVar11 = pppppuVar8;
  func_0x000107c610f8();
  func_0x0001000c6518(appppuStack_90,pppppuVar10);
  puStack_140 = (undefined1 *)alStack_160;
  (*(code *)PTR____chkstk_darwin_11034bd40)(pppppuVar10[-1][8]);
  puVar19 = (undefined8 *)((long)alStack_160 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_01 + 0x10))(puVar19);
  lVar1 = _DAT_112f17b10;
  auStack_b8[0] = *puVar19;
  ppuStack_98 = &PTR_DAT_1105d0bb0;
  *(undefined8 *)((long)pppppuVar11 + _DAT_112f17b08) = 0;
  ppppuStack_a0 = pppppuVar10;
  func_0x000107c61174(uVar20);
  uVar20 = uStack_128;
  uVar12 = uStack_128;
  func_0x000107c61174();
  alStack_160[2] = uVar12;
  func_0x000107c615f0(ppuVar3);
  func_0x000107c6157c(pppppuVar5);
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010b11e8();
  lVar2 = _DAT_112f17b18;
  *(undefined **)((long)pppppuVar11 + lVar1) = puVar13;
  puVar13 = puVar15;
  func_0x000102dbbdec();
  lVar1 = _DAT_112f17b28;
  *(undefined **)((long)pppppuVar11 + lVar2) = puVar13;
  *(undefined8 *)((long)pppppuVar11 + _DAT_112f17b20) = 0;
  lVar14 = 0;
  func_0x000102dbdacc();
  func_0x000107c613fc();
  puVar13 = puVar15;
  func_0x000102dbbf14(puVar15,0x112f17908,&UNK_10db4e340);
  *(undefined **)(lVar14 + 0x10) = puVar13;
  lVar2 = _DAT_112f17b30;
  *(long *)((long)pppppuVar11 + lVar1) = lVar14;
  puVar13 = puVar15;
  func_0x000102dbbc50();
  lVar1 = _DAT_112f17b38;
  *(undefined **)((long)pppppuVar11 + lVar2) = puVar13;
  puVar13 = puVar15;
  func_0x000102dbbf14(puVar15,0x112d52ae8,&UNK_10d91a720);
  lVar2 = _DAT_112f17b40;
  *(undefined **)((long)pppppuVar11 + lVar1) = puVar13;
  puVar13 = puVar15;
  func_0x0001001830b8();
  lVar1 = _DAT_112f17b48;
  *(undefined **)((long)pppppuVar11 + lVar2) = puVar13;
  func_0x000102dbc02c();
  *(undefined **)((long)pppppuVar11 + lVar1) = puVar15;
  *(undefined8 *)((long)pppppuVar11 + _DAT_112f17b50) = uVar20;
  FUN_102dbc148(auStack_b8,(long)pppppuVar11 + _DAT_112f17b58);
  *(long *)((long)pppppuVar11 + _DAT_112f17b60) = alStack_160[1];
  *(undefined8 ***)((long)pppppuVar11 + _DAT_112f17b68) = ppuVar3;
  *(char *)((long)pppppuVar11 + _DAT_112f17b70) = (char)uStack_144;
  pppppuVar10 = &ppppuStack_c8;
  ppppuStack_c8 = pppppuVar11;
  ppppuStack_c0 = pppppuVar8;
  func_0x000107c61154(pppppuVar10,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(appppuStack_90);
  *(undefined8 ******)(lStack_120 + _DAT_112f17b78) = pppppuVar10;
  alStack_d8[0] = lStack_120;
  plVar16 = alStack_d8;
  func_0x000107c61154(plVar16,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(alStack_160[2]);
  func_0x000107c615e8(ppuVar3);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61574(pppppuVar5);
  func_0x000107c61574(pppppuVar9);
  func_0x000107c61574(pppuStack_130);
  func_0x000107c61574(pppppuVar6);
  func_0x000107c615e8(param_4);
  return plVar16;
}



/* Entry: 102db3014; end: 102db3093;  */

void FUN_102db3014(void)

{
  func_0x000107c61168(&PTR_PTR_112f17bc8);
  return;
}



/* Entry: 102db3094; end: 102db30a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db3094(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(unaff_x20 + _DAT_112f17ae8,param_1);
  return;
}



/* Entry: 102db30a8; end: 102db30c7; -[_TtC29SCImpalaSnapDocPlaybackPlugin27ImpalaSnapDocPlaybackPlugin setPlaylistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db30a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f17ae8,param_3);
  return;
}



/* Entry: 102db30c8; end: 102db30fb; -[_TtC29SCImpalaSnapDocPlaybackPlugin27ImpalaSnapDocPlaybackPlugin dependentPlugins] */

void FUN_102db30c8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e9e980;
  func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102db30fc; end: 102db30ff;  */

/* WARNING: Removing unreachable block (ram,0x000102dbcb44) */

undefined8 FUN_102db30fc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010443846c(0);
  func_0x000104434f4c(param_1);
  func_0x000104435044(1);
  func_0x000107c61170();
  func_0x000104435028(2);
  func_0x000107c61170();
  func_0x000104434ff4(1);
  func_0x000107c61170();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000104434f6c();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000104435060(1);
  func_0x000107c61170();
  func_0x000104435088(1);
  func_0x000107c61170();
  func_0x000104435008(0);
  func_0x000107c61170();
  func_0x000104435164(1);
  func_0x000107c61170();
  uVar3 = 1;
  func_0x000104434fe0(1);
  func_0x000107c61170();
  func_0x000104435b90();
  func_0x000107c61170(param_1);
  return uVar3;
}



/* Entry: 102db3100; end: 102db315b; -[_TtC29SCImpalaSnapDocPlaybackPlugin27ImpalaSnapDocPlaybackPlugin updateOperaConfiguration:] */

void FUN_102db3100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102dbca4c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102db315c; end: 102db3163;  */

void FUN_102db315c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 102db3164; end: 102db3193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102db3164(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f17b78);
  func_0x000107c61174(uVar1);
  return uVar1;
}



/* Entry: 102db3194; end: 102db31a7; -[_TtC29SCImpalaSnapDocPlaybackPlugin27ImpalaSnapDocPlaybackPlugin playlistDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db3194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f17b78));
  return;
}



/* Entry: 102db31a8; end: 102db31c7; -[_TtC29SCImpalaSnapDocPlaybackPlugin27ImpalaSnapDocPlaybackPlugin addEventListenersWithEventAnnouncing:] */

void FUN_102db31a8(void)

{
  return;
}



/* Entry: 102db31c8; end: 102db31f3; -[_TtC29SCImpalaSnapDocPlaybackPlugin27ImpalaSnapDocPlaybackPlugin type] */

void FUN_102db31c8(void)

{
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f10d920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102db31f4; end: 102db31ff;  */

/* WARNING: Possible PIC construction at 0x000102dbcd74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dbcd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dbcdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dbcc74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dbcdc4) */
/* WARNING: Removing unreachable block (ram,0x000102dbcd18) */
/* WARNING: Removing unreachable block (ram,0x000102dbcd78) */
/* WARNING: Removing unreachable block (ram,0x000102dbcc78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db31f4(undefined *param_1,long param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 != (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
    FUN_102db0698();
    puVar3 = param_1;
    func_0x000107c61480();
    if (puVar3 != (undefined *)0x0) {
      if (param_2 == 0) {
        lVar8 = *(long *)(puVar3 + _DAT_112f17aa0);
        puVar2 = *(undefined **)((long)(puVar3 + _DAT_112f17aa0) + 8);
        func_0x000107c61434(puVar2);
      }
      else {
        func_0x000107c3b9ac(param_2);
        func_0x000107c61180();
        lVar8 = param_2;
        func_0x000107c5faec();
        func_0x000107c61170(param_2);
      }
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar7 = *(long *)(puVar3 + _DAT_112f17a98);
      if (*(long *)(lVar7 + 0x10) != 0) {
        uVar4 = *(undefined8 *)(lVar7 + 0x20);
        uVar1 = *(ulong *)(lVar7 + 0x28);
        puVar5 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          lVar8 = *(long *)(puVar3 + _DAT_112f17aa0);
          puVar2 = *(undefined **)((long)(puVar3 + _DAT_112f17aa0) + 8);
          func_0x000107c61434(puVar2);
          puVar5 = (undefined *)0x0;
        }
        func_0x00010006c00c(uVar4,uVar1);
        func_0x000107c61434(puVar5);
        FUN_102db32e8(uVar4,uVar1,lVar8,puVar2,param_4,param_5);
        uVar6 = (uint)(uVar1 >> 0x3e);
        if (uVar6 != 1) {
          if (uVar6 != 2) {
            return;
          }
          func_0x000107c61574(uVar4);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
        return;
      }
      if (param_4 != (code *)0x0) {
        puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
        func_0x000100dfa3f0(puVar5);
        (*param_4)(puVar2,puVar5);
      }
      goto code_r0x000107c6142c;
    }
    FUN_102db02e4();
    func_0x000107c61480(param_1,puVar3);
    if (param_1 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_112f17a20);
      func_0x000107c5ee30(uVar4);
      if (param_2 == 0) {
        lVar8 = 0;
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = puVar3;
        func_0x000107c3b9ac(param_2);
        func_0x000107c61180();
        lVar8 = param_2;
        func_0x000107c5faec();
        func_0x000107c61170(param_2);
      }
      FUN_102db32e8(uVar4,puVar3,lVar8,puVar2,param_4,param_5);
      goto code_r0x000107c6142c;
    }
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_4 == (code *)0x0) {
    return;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000100dfa3f0(puVar3);
  (*param_4)(puVar2,puVar3);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar2);
  return;
}



/* Entry: 102db3200; end: 102db32e7; -[_TtC29SCImpalaSnapDocPlaybackPlugin27ImpalaSnapDocPlaybackPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

/* WARNING: Possible PIC construction at 0x000102db32b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db32c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102db32bc) */
/* WARNING: Removing unreachable block (ram,0x000102db32cc) */

void FUN_102db3200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1105d0f68;
    func_0x000107c613fc(&UNK_1105d0f68,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    uVar3 = 0x102dbd7a0;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_102dbcb64(param_3,param_4,uVar3,puVar2);
  func_0x000100d262e4(uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102db32e8; end: 102db3943;  */

/* WARNING: Possible PIC construction at 0x000102db33a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db3598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db35b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db3674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db36b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db37c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db37d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db3814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db3844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db38c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db38d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db3874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db38a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db3914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db34a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102db38a8) */
/* WARNING: Removing unreachable block (ram,0x000102db3878) */
/* WARNING: Removing unreachable block (ram,0x000102db38cc) */
/* WARNING: Removing unreachable block (ram,0x000102db3848) */
/* WARNING: Removing unreachable block (ram,0x000102db3818) */
/* WARNING: Removing unreachable block (ram,0x000102db37d8) */
/* WARNING: Removing unreachable block (ram,0x000102db38dc) */
/* WARNING: Removing unreachable block (ram,0x000102db37c8) */
/* WARNING: Removing unreachable block (ram,0x000102db36b4) */
/* WARNING: Removing unreachable block (ram,0x000102db36cc) */
/* WARNING: Removing unreachable block (ram,0x000102db37f4) */
/* WARNING: Removing unreachable block (ram,0x000102db38b4) */
/* WARNING: Removing unreachable block (ram,0x000102db38bc) */
/* WARNING: Removing unreachable block (ram,0x000102db37f8) */
/* WARNING: Removing unreachable block (ram,0x000102db36dc) */
/* WARNING: Removing unreachable block (ram,0x000102db3678) */
/* WARNING: Removing unreachable block (ram,0x000102db35bc) */
/* WARNING: Removing unreachable block (ram,0x000102db35c8) */
/* WARNING: Removing unreachable block (ram,0x000102db35d0) */
/* WARNING: Removing unreachable block (ram,0x000102db359c) */
/* WARNING: Removing unreachable block (ram,0x000102db35dc) */
/* WARNING: Removing unreachable block (ram,0x000102db35e0) */
/* WARNING: Removing unreachable block (ram,0x000102db35ec) */
/* WARNING: Removing unreachable block (ram,0x000102db3854) */
/* WARNING: Removing unreachable block (ram,0x000102db3900) */
/* WARNING: Removing unreachable block (ram,0x000102db3908) */
/* WARNING: Removing unreachable block (ram,0x000102db3858) */
/* WARNING: Removing unreachable block (ram,0x000102db35f4) */
/* WARNING: Removing unreachable block (ram,0x000102db3608) */
/* WARNING: Removing unreachable block (ram,0x000102db35a0) */
/* WARNING: Removing unreachable block (ram,0x000102db33a4) */
/* WARNING: Removing unreachable block (ram,0x000102db34a4) */
/* WARNING: Removing unreachable block (ram,0x000102db3368) */
/* WARNING: Removing unreachable block (ram,0x000102db3440) */
/* WARNING: Removing unreachable block (ram,0x000102db336c) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db32e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long unaff_x20;
  undefined *apuStack_d0 [3];
  undefined8 uStack_b8;
  
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x00010006c00c(param_1,param_2);
  lVar2 = param_1;
  func_0x0001010282b0(param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f17af0);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 == 0) {
    if (param_5 != (code *)0x0) {
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
      func_0x000100dfa3f0(puVar6);
      (*param_5)(puVar5,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar5);
      return;
    }
  }
  else {
    func_0x000107c4e2b4();
    func_0x000107c61180();
    puVar6 = &UNK_1105d0e28;
    uVar8 = 0x18;
    uVar10 = 7;
    func_0x000107c613fc(&UNK_1105d0e28,0x18);
    puVar4 = *(undefined **)(lVar3 + _DAT_113079c48);
    puVar5 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100214a84();
      puVar4 = (undefined *)0x0;
    }
    *(undefined **)(puVar6 + 0x10) = puVar5;
    func_0x000107c61434(puVar4);
    lVar3 = lVar2;
    FUN_102db1fdc(lVar2);
    if ((uVar10 & 0xff) != 1) {
      puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      uVar9 = uVar8;
      func_0x000107c61168();
      func_0x000107c5dc58(lVar3,uVar8);
      func_0x000107c61180();
      ppuVar7 = &PTR____CFConstantStringClassReference_110f0d418;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0d418);
      uVar8 = 0;
      FUN_102dbd588(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
      apuStack_d0[0] = puVar6;
      uStack_b8 = uVar8;
      func_0x000100102934(apuStack_d0,ppuVar7,uVar9);
    }
    func_0x000107c44fd8();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102db3944);
      (*pcVar1)();
    }
    func_0x000107c44fd8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102db3944; end: 102db3d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db3944(long param_1,long param_2,code *param_3,undefined8 param_4,long param_5,
                  undefined *param_6,ulong param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    if (param_3 == (code *)0x0) {
      return;
    }
    func_0x000107c61428(param_5 + 0x10,&puStack_d0,0,0);
    uVar11 = *(undefined8 *)(param_5 + 0x10);
    uVar6 = uVar11;
    func_0x000107c61434(uVar11);
    func_0x00010018cc3c();
    func_0x000107c6142c(uVar11);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    (*param_3)(uVar6,puVar12);
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(puVar12);
    return;
  }
  if (param_1 == 0) {
    lVar10 = *(long *)(param_2 + _DAT_112f17af8);
    if (lVar10 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar10 != 0) {
        func_0x000107c61170(param_2);
        func_0x000107c615e8(lVar10);
        return;
      }
    }
LAB_102db3c60:
    if (param_3 == (code *)0x0) goto LAB_102db3d18;
    func_0x000107c61428(param_5 + 0x10,&puStack_d0,0,0);
    uVar11 = *(undefined8 *)(param_5 + 0x10);
    uVar6 = uVar11;
    func_0x000107c61434(uVar11);
    func_0x00010018cc3c();
    func_0x000107c6142c(uVar11);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    (*param_3)(uVar6,puVar12);
    func_0x000107c6142c(uVar6);
  }
  else {
    if (param_7 == 0) goto LAB_102db3c60;
    uVar1 = (ulong)param_6 & 0xffffffffffff;
    if ((param_7 & 0x2000000000000000) != 0) {
      uVar1 = param_7 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) goto LAB_102db3c60;
    uStack_a0 = 0x645c5f6d6574695f;
    uStack_98 = 0xea0000000000242b;
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    lVar10 = param_2;
    puStack_d0 = param_6;
    uStack_c8 = param_7;
    func_0x000100e8b654();
    puVar2 = &uStack_a0;
    puVar9 = &uStack_88;
    func_0x000107c601fc(puVar2,puVar9,0x400,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                        PTR___sSSN_11034da80,lVar10,lVar10,lVar10);
    puVar3 = PTR_PTR_1126b25b8;
    func_0x000107c610f8();
    func_0x000107c5fadc(puVar2,puVar9);
    func_0x000107c6142c(puVar9);
    func_0x000107c46814();
    func_0x000107c61170(puVar2);
    func_0x000107c61428(param_5 + 0x10,&uStack_a0,0,0);
    puVar12 = *(undefined **)(param_5 + 0x10);
    lVar10 = *(long *)(param_2 + _DAT_112f17af8);
    if (lVar10 == 0) {
      func_0x000107c61434(puVar12);
    }
    else {
      func_0x000107c61434(puVar12);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar10 != 0) {
        pcVar4 = "tryLocalFallback(snapDocKey:snapDoc:pageProperties:completion:)";
        func_0x0001000c10c0("tryLocalFallback(snapDocKey:snapDoc:pageProperties:completion:)");
        func_0x000107c61180();
        puVar7 = &UNK_1105d0ec8;
        func_0x000107c613fc(&UNK_1105d0ec8,0x48,7);
        *(long *)(puVar7 + 0x10) = lVar10;
        *(undefined **)(puVar7 + 0x18) = puVar3;
        *(undefined8 *)(puVar7 + 0x20) = param_8;
        *(long *)(puVar7 + 0x28) = param_2;
        *(code **)(puVar7 + 0x30) = param_3;
        *(undefined8 *)(puVar7 + 0x38) = param_4;
        *(undefined **)(puVar7 + 0x40) = puVar12;
        uStack_b0 = 0x102dbd77c;
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0x42000000;
        puStack_c0 = &UNK_1000f6b44;
        puStack_b8 = &UNK_1105d0ee0;
        ppuVar5 = &puStack_d0;
        puStack_a8 = puVar7;
        func_0x000107c60bc4(ppuVar5);
        puVar7 = puStack_a8;
        func_0x000107c61434(puVar12);
        func_0x000107c615f0(lVar10);
        func_0x000107c61174(puVar3);
        func_0x000107c61174(param_8);
        func_0x000107c61174(param_2);
        func_0x000100d26378(param_3,param_4);
        func_0x000107c61574(puVar7);
        func_0x000107c4e524(pcVar4);
        func_0x000107c61170(puVar3);
        func_0x000107c6142c(puVar12);
        func_0x000107c61170(param_2);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c615e8(lVar10);
        func_0x000107c615e8(pcVar4);
        return;
      }
    }
    if (param_3 != (code *)0x0) {
      puVar7 = puVar12;
      func_0x00010018cc3c(puVar12);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
      (*param_3)(puVar7,puVar8);
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(puVar8);
    }
    func_0x000107c61170(puVar3);
  }
  func_0x000107c6142c(puVar12);
LAB_102db3d18:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102db3d40; end: 102db3e63;  */

void FUN_102db3d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  puVar1 = &UNK_1105d0e50;
  func_0x000107c613fc(&UNK_1105d0e50,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_4);
  puVar2 = &UNK_1105d0f18;
  func_0x000107c613fc(&UNK_1105d0f18,0x38,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_7;
  *(undefined8 *)(puVar2 + 0x30) = param_2;
  uStack_60 = 0x102dbd790;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100ff4e10;
  puStack_68 = &UNK_1105d0f30;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000100d26378(param_5,param_6);
  func_0x000107c61434(param_7);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c4edf4(param_1);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102db3e64; end: 102db3efb;  */

void FUN_102db3e64(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c61170();
  }
  if (param_3 != (code *)0x0) {
    func_0x00010018cc3c(param_5);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    (*param_3)(param_5,puVar1);
    func_0x000107c6142c(param_5);
    func_0x000107c6142c(puVar1);
  }
  return;
}



/* Entry: 102db3efc; end: 102db3f57; -[_TtC29SCImpalaSnapDocPlaybackPlugin27ImpalaSnapDocPlaybackPlugin init] */

void FUN_102db3efc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImpalaSnapDocPlaybackPlugin.ImpalaSnapDocPlaybackPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102db3f28);
  (*pcVar1)();
}



/* Entry: 102db3f58; end: 102db3fbf; -[_TtC29SCImpalaSnapDocPlaybackPlugin27ImpalaSnapDocPlaybackPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102db3f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db3fa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102db3f78) */
/* WARNING: Removing unreachable block (ram,0x000102db3fa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db3f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f17af0));
  return;
}



/* Entry: 102db3fc0; end: 102db408f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db3fc0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c614f0();
  FUN_102db4090();
  lVar3 = *(long *)(unaff_x20 + _DAT_112f17b28);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,1,0);
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined **)(lVar3 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar2);
  lVar3 = _DAT_112f17b10;
  func_0x000107c61428(unaff_x20 + _DAT_112f17b10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  func_0x000107c6142c(uVar2);
  lVar3 = _DAT_112f17b18;
  func_0x000107c61428(unaff_x20 + _DAT_112f17b18,auStack_78,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  func_0x000107c6142c(uVar2);
  func_0x000107c61154(&stack0xffffffffffffff78,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102db4090; end: 102db4247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db4090(void)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = _DAT_112f17b48;
  func_0x000107c61428(unaff_x20 + _DAT_112f17b48,auStack_68,1,0);
  lVar10 = *(long *)(unaff_x20 + lVar3);
  uVar9 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar10 + 0x40);
  func_0x000107c61434(lVar10);
  lVar13 = 0;
  while( true ) {
    for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar1 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      func_0x000107c3f474(*(undefined8 *)
                           (*(long *)(lVar10 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                           lVar13 * 0x200));
    }
    bVar5 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar5) break;
    if ((long)(uVar9 + 0x3f >> 6) <= lVar13) {
      func_0x000107c61574(lVar10);
      puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
      *(undefined **)(unaff_x20 + lVar3) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      func_0x000107c6142c(uVar6);
      lVar3 = _DAT_112f17b30;
      func_0x000107c61428(unaff_x20 + _DAT_112f17b30,auStack_80,1,0);
      lVar10 = *(long *)(unaff_x20 + lVar3);
      puVar11 = *(undefined8 **)(lVar10 + 0x10);
      puVar7 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar11 != (undefined8 *)0x0) {
        func_0x000107c61434(lVar10);
        puVar7 = puVar11;
        FUN_102dbab04(puVar11,0);
        lVar13 = 0;
        func_0x000107c5ede0();
        uVar12 = (ulong)*(byte *)(*(long *)(lVar13 + -8) + 0x50);
        puVar8 = &uStack_a8;
        func_0x000102dbba30(puVar8,(undefined *)
                                   ((long)puVar7 + (uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff))),
                            puVar11,lVar10);
        func_0x000100d2645c(uStack_a8,uStack_a0,uStack_98,uStack_90,uStack_88);
        if (puVar8 != puVar11) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102db4204);
          (*pcVar4)();
        }
      }
      FUN_102dbcea0(puVar7);
      func_0x000107c61574(puVar7);
      uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
      *(undefined **)(unaff_x20 + lVar3) = puVar2;
      func_0x000107c6142c(uVar6);
      return;
    }
    uVar12 = ((ulong *)(lVar10 + 0x40))[lVar13];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102db4248);
  (*pcVar4)();
}



/* Entry: 102db4248; end: 102db42f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db4248(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112f17b28);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,1,0);
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined **)(lVar3 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar2);
  lVar3 = _DAT_112f17b10;
  func_0x000107c61428(unaff_x20 + _DAT_112f17b10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  func_0x000107c6142c(uVar2);
  lVar3 = _DAT_112f17b18;
  func_0x000107c61428(unaff_x20 + _DAT_112f17b18,auStack_78,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined **)(unaff_x20 + lVar3) = puVar1;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 102db42f4; end: 102db434f; -[_TtC29SCImpalaSnapDocPlaybackPlugin30SCImpalaSnapDocOperaDataSource dealloc] */

void FUN_102db42f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  FUN_102db4090();
  FUN_102db4248();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102db4350; end: 102db4427; -[_TtC29SCImpalaSnapDocPlaybackPlugin30SCImpalaSnapDocOperaDataSource .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102db439c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db43ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db440c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102db43f0) */
/* WARNING: Removing unreachable block (ram,0x000102db43a0) */
/* WARNING: Removing unreachable block (ram,0x000102db4410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db4350(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f17b50));
  func_0x0001000834e4(param_1 + _DAT_112f17b58);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f17b08));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f17b10));
  return;
}



/* Entry: 102db4428; end: 102db44b7; -[_TtC29SCImpalaSnapDocPlaybackPlugin30SCImpalaSnapDocOperaDataSource canResolvePlaylistItemGroupDataModel:] */

uint FUN_102db4428(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_102dbd118(&uStack_40);
  func_0x000107c61170(param_1);
  FUN_102dbd694(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 102db44b8; end: 102db4bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102db44b8(undefined8 param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long unaff_x20;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_a8;
  long alStack_a0 [3];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  FUN_102dbd7a8(param_1,auStack_88,0x112d387f8,&UNK_10d902650);
  if (lStack_70 == 0) {
    FUN_102dbd694(auStack_88,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar10 = 0;
    FUN_102db0698(0);
    plVar11 = alStack_a0;
    func_0x000107c6147c(plVar11,auStack_88,PTR___sypN_11034f1a8 + 8,uVar10,6);
    if (((ulong)plVar11 & 1) != 0) {
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f17b08);
      *(long *)(unaff_x20 + _DAT_112f17b08) = alStack_a0[0];
      lVar12 = alStack_a0[0];
      func_0x000107c61174();
      func_0x000107c61170(uVar10);
      lVar5 = _DAT_112f17a98;
      *(undefined8 *)(unaff_x20 + _DAT_112f17b20) =
           *(undefined8 *)(*(long *)(lVar12 + _DAT_112f17a98) + 0x10);
      FUN_102db4090();
      lVar24 = _DAT_112f17b38;
      func_0x000107c61428(unaff_x20 + _DAT_112f17b38,auStack_88,1,0);
      puVar18 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      uVar10 = *(undefined8 *)(unaff_x20 + lVar24);
      *(undefined **)(unaff_x20 + lVar24) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      func_0x000107c6142c(uVar10);
      lVar24 = _DAT_112f17b40;
      func_0x000107c61428(unaff_x20 + _DAT_112f17b40,alStack_a0,1,0);
      uVar10 = *(undefined8 *)(unaff_x20 + lVar24);
      *(undefined **)(unaff_x20 + lVar24) = puVar18;
      func_0x000107c6142c(uVar10);
      puVar1 = (ulong *)(lVar12 + _DAT_112f17aa0);
      uVar22 = puVar1[1];
      if (uVar22 == 0) {
        uStack_c0 = 0;
        uStack_b8 = 0xe000000000000000;
        func_0x000107c602fc(0x17);
        func_0x000107c6142c(uStack_b8);
        uStack_c0 = 0xd000000000000015;
        uStack_b8 = 0x800000010f10da70;
        func_0x000107c5fab4();
        puVar18 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar18);
        uVar22 = 0;
        uVar17 = uStack_c0;
        uVar25 = uStack_b8;
      }
      else {
        uVar17 = *puVar1;
        uVar25 = uVar22;
      }
      lVar24 = *(long *)(unaff_x20 + _DAT_112f17b28);
      func_0x000107c61428(lVar24 + 0x10,&uStack_c0,0x21,0);
      lVar13 = lVar12;
      func_0x000107c61174();
      func_0x000107c61434(uVar22);
      func_0x000107c61434(uVar25);
      uVar10 = *(undefined8 *)(lVar24 + 0x10);
      func_0x000107c61558(uVar10);
      uStack_a8 = *(long *)(lVar24 + 0x10);
      *(undefined8 *)(lVar24 + 0x10) = 0x8000000000000000;
      FUN_102dabfc8(lVar13,uVar17,uVar25,uVar10);
      func_0x000107c6142c(uVar25);
      *(ulong *)(lVar24 + 0x10) = uStack_a8;
      func_0x000107c614a8(&uStack_c0);
      lVar6 = _DAT_112f17b18;
      lVar24 = _DAT_112f17b10;
      lVar14 = *(long *)(lVar12 + lVar5);
      uVar22 = *(ulong *)(lVar14 + 0x10);
      func_0x000107c61434();
      if (uVar22 != 0) {
        lVar26 = 0;
        uVar27 = 0;
        do {
          if (*(ulong *)(lVar14 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x102db4bbc);
            (*pcVar9)();
          }
          uStack_b8 = puVar1[1];
          if (uStack_b8 == 0) {
            uStack_c0 = 0;
            uStack_b8 = 0xe000000000000000;
            func_0x000107c602fc(0x12);
            func_0x000107c6142c(uStack_b8);
            uStack_c0 = 0xd000000000000014;
            uStack_b8 = 0x800000010f10d9e0;
          }
          else {
            uStack_c0 = *puVar1;
            func_0x000107c61434();
            func_0x000107c5fb78(0x5f6d6574695f,0xe600000000000000);
          }
          puVar18 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          uStack_a8 = uVar27;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar18);
          uVar8 = uStack_b8;
          uVar7 = uStack_c0;
          lVar20 = *(long *)(lVar12 + lVar5);
          if (*(ulong *)(lVar20 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x102db4bc0);
            (*pcVar9)();
          }
          lVar20 = lVar20 + lVar26;
          uVar3 = *(ulong *)(lVar20 + 0x20);
          uVar4 = *(ulong *)(lVar20 + 0x28);
          func_0x000107c61428(unaff_x20 + lVar24,&uStack_c0,0x21,0);
          func_0x00010006c00c(uVar3,uVar4);
          func_0x00010006c00c(uVar3,uVar4);
          uVar16 = *(ulong *)(unaff_x20 + lVar24);
          func_0x000107c61558();
          lVar23 = *(long *)(unaff_x20 + lVar24);
          *(undefined8 *)(unaff_x20 + lVar24) = 0x8000000000000000;
          uVar15 = uVar7;
          uVar19 = uVar8;
          uStack_a8 = lVar23;
          FUN_102dba280(uVar7,uVar8,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,&UNK_1000292e8);
          uVar21 = (ulong)~(uint)uVar19 & 1;
          lVar20 = *(long *)(lVar23 + 0x10) + uVar21;
          if (SCARRY8(*(long *)(lVar23 + 0x10),uVar21)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x102db4bc4);
            (*pcVar9)();
          }
          if (*(long *)(lVar23 + 0x18) < lVar20) {
            func_0x0001010b91f8(lVar20,uVar16);
            uVar15 = uVar7;
            uVar16 = uVar8;
            FUN_102dba280(uVar7,uVar8,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,&UNK_1000292e8);
            if (((uint)uVar19 & 1) != ((uint)uVar16 & 1)) {
              func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x102db4bf0);
              (*pcVar9)();
            }
joined_r0x000102db499c:
            if ((uVar19 & 1) == 0) goto LAB_102db49a0;
LAB_102db4978:
            uVar16 = uStack_a8;
            puVar2 = (ulong *)(*(long *)(uStack_a8 + 0x38) + uVar15 * 0x10);
            uVar15 = *puVar2;
            uVar19 = puVar2[1];
            *puVar2 = uVar3;
            puVar2[1] = uVar4;
            func_0x00010006c090(uVar15,uVar19);
          }
          else {
            if ((uVar16 & 1) == 0) {
              func_0x0001010b9074();
              goto joined_r0x000102db499c;
            }
            if ((uVar19 & 1) != 0) goto LAB_102db4978;
LAB_102db49a0:
            uVar16 = uStack_a8;
            lVar20 = uStack_a8 + (uVar15 >> 6) * 8;
            *(ulong *)(lVar20 + 0x40) = *(ulong *)(lVar20 + 0x40) | 1L << (uVar15 & 0x3f);
            puVar2 = (ulong *)(*(long *)(uStack_a8 + 0x30) + uVar15 * 0x10);
            *puVar2 = uVar7;
            puVar2[1] = uVar8;
            puVar2 = (ulong *)(*(long *)(uStack_a8 + 0x38) + uVar15 * 0x10);
            *puVar2 = uVar3;
            puVar2[1] = uVar4;
            if (SCARRY8(*(long *)(uStack_a8 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x102db4bcc);
              (*pcVar9)();
            }
            *(long *)(uStack_a8 + 0x10) = *(long *)(uStack_a8 + 0x10) + 1;
            func_0x000107c61434(uVar8);
          }
          *(ulong *)(unaff_x20 + lVar24) = uVar16;
          func_0x000107c614a8(&uStack_c0);
          func_0x000107c61428(unaff_x20 + lVar6,&uStack_c0,0x21,0);
          func_0x00010006c00c(uVar3,uVar4);
          uVar16 = *(ulong *)(unaff_x20 + lVar6);
          func_0x000107c61558();
          lVar23 = *(long *)(unaff_x20 + lVar6);
          *(undefined8 *)(unaff_x20 + lVar6) = 0x8000000000000000;
          uVar15 = uVar3;
          uVar19 = uVar4;
          uStack_a8 = lVar23;
          FUN_102dba280(uVar3,uVar4,PTR___s10Foundation4DataV4hash4intoys6HasherVz_tF_110350a88,
                        FUN_102dba2f8);
          uVar21 = (ulong)~(uint)uVar19 & 1;
          lVar20 = *(long *)(lVar23 + 0x10) + uVar21;
          if (SCARRY8(*(long *)(lVar23 + 0x10),uVar21)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x102db4bc8);
            (*pcVar9)();
          }
          if (*(long *)(lVar23 + 0x18) < lVar20) {
            func_0x000102dacc28(lVar20,uVar16);
            uVar15 = uVar3;
            uVar16 = uVar4;
            FUN_102dba280(uVar3,uVar4,PTR___s10Foundation4DataV4hash4intoys6HasherVz_tF_110350a88,
                          FUN_102dba2f8);
            if (((uint)uVar19 & 1) != ((uint)uVar16 & 1)) {
              func_0x000107c60624(PTR___s10Foundation4DataVN_110350ae0);
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x102db4be0);
              (*pcVar9)();
            }
LAB_102db4acc:
            if ((uVar19 & 1) == 0) goto LAB_102db4ad4;
LAB_102db4774:
            uVar19 = uStack_a8;
            puVar2 = (ulong *)(*(long *)(uStack_a8 + 0x38) + uVar15 * 0x10);
            uVar15 = puVar2[1];
            *puVar2 = uVar7;
            puVar2[1] = uVar8;
            func_0x000107c6142c(uVar15);
            func_0x00010006c090(uVar3,uVar4);
          }
          else {
            if ((uVar16 & 1) != 0) goto LAB_102db4acc;
            FUN_102dac4c0();
            if ((uVar19 & 1) != 0) goto LAB_102db4774;
LAB_102db4ad4:
            lVar20 = uStack_a8 + (uVar15 >> 6) * 8;
            *(ulong *)(lVar20 + 0x40) = *(ulong *)(lVar20 + 0x40) | 1L << (uVar15 & 0x3f);
            puVar2 = (ulong *)(*(long *)(uStack_a8 + 0x30) + uVar15 * 0x10);
            *puVar2 = uVar3;
            puVar2[1] = uVar4;
            puVar2 = (ulong *)(*(long *)(uStack_a8 + 0x38) + uVar15 * 0x10);
            *puVar2 = uVar7;
            puVar2[1] = uVar8;
            if (SCARRY8(*(long *)(uStack_a8 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x102db4bd0);
              (*pcVar9)();
            }
            *(long *)(uStack_a8 + 0x10) = *(long *)(uStack_a8 + 0x10) + 1;
            uVar19 = uStack_a8;
          }
          uVar27 = uVar27 + 1;
          *(ulong *)(unaff_x20 + lVar6) = uVar19;
          func_0x000107c614a8(&uStack_c0);
          func_0x00010006c090(uVar3,uVar4);
          lVar26 = lVar26 + 0x10;
        } while (uVar22 != uVar27);
      }
      func_0x000107c6142c(lVar14);
      func_0x000104445170(0);
      func_0x000107c610f8();
      func_0x000104444a48(uVar17,uVar25,0xd00000000000001e,0x800000010f10d920,1,1,1);
      func_0x000107c61170(lVar13);
      return uVar17;
    }
  }
  return 0;
}



/* Entry: 102db4bf0; end: 102db4c7f; -[_TtC29SCImpalaSnapDocPlaybackPlugin30SCImpalaSnapDocOperaDataSource playlistItemGroupModelForDataModel:] */

void FUN_102db4bf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_102db44b8(&uStack_40);
  func_0x000107c61170(param_1);
  FUN_102dbd694(&uStack_40,0x112d387f8,&UNK_10d902650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102db4c80; end: 102db4c8f; -[_TtC29SCImpalaSnapDocPlaybackPlugin30SCImpalaSnapDocOperaDataSource needToPrepareMediaBeforeDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102db4c80(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f17b70);
}



/* Entry: 102db4c90; end: 102db5b6b;  */

/* WARNING: Removing unreachable block (ram,0x000102db5298) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db4c90(long param_1,code *param_2,undefined8 param_3,code *param_4,ulong param_5)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  uint uVar18;
  long extraout_x8;
  long lVar19;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  long extraout_x12;
  long extraout_x12_00;
  long lVar23;
  long unaff_x20;
  long lVar24;
  code *pcVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  bool bVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar27 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar27 + 0x40));
  lVar19 = (long)&uStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar30 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar30 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = lVar19 - extraout_x8_00;
  lVar24 = 0x112d36580;
  puVar13 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar24 + -8) + 0x40));
  uVar22 = lVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar31 = uVar22 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar33 = lVar31 - extraout_x12_00;
  lVar24 = param_1;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  lVar21 = lVar24;
  func_0x000107c5faec();
  func_0x000107c61170(lVar24);
  lVar24 = _DAT_112f17b10;
  func_0x000107c61428(unaff_x20 + _DAT_112f17b10,&uStack_a0,0x20,0);
  lVar24 = *(long *)(unaff_x20 + lVar24);
  if (*(long *)(lVar24 + 0x10) != 0) {
    func_0x000107c61434(lVar24);
    puVar14 = puVar13;
    FUN_102dba280(lVar21,puVar13,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,&UNK_1000292e8);
    if (((ulong)puVar14 & 1) != 0) {
      puVar1 = (ulong *)(*(long *)(lVar24 + 0x38) + lVar21 * 0x10);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      func_0x00010006c00c(uVar4,uVar5);
      func_0x000107c614a8(&uStack_a0);
      func_0x000107c6142c(lVar24);
      func_0x000107c6142c(puVar13);
      if (((*(byte *)(unaff_x20 + _DAT_112f17b70) & 1) == 0) ||
         (uVar6 = uVar4, uVar7 = uVar5, func_0x000102db1e24(), uStack_130 = uVar4, (uVar6 & 1) == 0)
         ) {
        func_0x00010006c090(uVar4,uVar5);
        goto joined_r0x000102db4fa4;
      }
      lVar24 = param_1;
      uStack_138 = uVar5;
      func_0x000107c3b9ac(param_1);
      func_0x000107c61180();
      lVar21 = lVar24;
      func_0x000107c5faec();
      func_0x000107c61170(lVar24);
      lVar24 = _DAT_112f17b30;
      func_0x000107c61428(unaff_x20 + _DAT_112f17b30,&uStack_a0,0x20,0);
      lVar24 = *(long *)(unaff_x20 + lVar24);
      uStack_140 = uVar7;
      if (*(long *)(lVar24 + 0x10) == 0) {
        bVar29 = true;
      }
      else {
        func_0x000107c61434(lVar24);
        FUN_102dba280(lVar21,uVar7,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,&UNK_1000292e8);
        bVar29 = (uVar7 & 1) == 0;
        if (!bVar29) {
          (**(code **)(lVar27 + 0x10))
                    (lVar33,*(long *)(lVar24 + 0x38) + *(long *)(lVar27 + 0x48) * lVar21,lVar3);
        }
        func_0x000107c6142c(lVar24);
      }
      pcVar25 = *(code **)(lVar27 + 0x38);
      (*pcVar25)(lVar33,bVar29,1,lVar3);
      func_0x000107c6142c(uStack_140);
      func_0x000107c614a8(&uStack_a0);
      (*pcVar25)(lVar31,1,1,lVar3);
      lVar30 = (long)*(int *)(lVar30 + 0x30);
      FUN_102dbd7a8(lVar33,lVar23,0x112d36580,&UNK_10d9016d0);
      FUN_102dbd7a8(lVar31,lVar23 + lVar30,0x112d36580,&UNK_10d9016d0);
      pcVar25 = *(code **)(lVar27 + 0x30);
      lVar24 = lVar23;
      (*pcVar25)(lVar23,1,lVar3);
      if ((int)lVar24 == 1) {
        FUN_102dbd694(lVar31,0x112d36580,&UNK_10d9016d0);
        FUN_102dbd694(lVar33,0x112d36580,&UNK_10d9016d0);
        lVar30 = lVar23 + lVar30;
        (*pcVar25)(lVar30,1,lVar3);
        if ((int)lVar30 == 1) {
          FUN_102dbd694(lVar23,0x112d36580,&UNK_10d9016d0);
LAB_102db5250:
          uVar22 = uStack_138;
          func_0x000107c610f8(PTR_PTR_1126b25c0);
          uVar4 = uStack_130;
          func_0x00010006c00c(uStack_130,uVar22);
          uVar5 = uVar4;
          func_0x0001010282b0(uVar4,uVar22);
          func_0x00010006c090(uVar4,uVar22);
          if (uVar5 == 0) {
            if (param_4 != (code *)0x0) {
              (*param_4)(1,0,0);
            }
            func_0x00010006c090(uStack_130,uVar22);
            return;
          }
          uVar4 = uVar5;
          FUN_102db15ac(uVar5);
          uVar6 = 5;
          FUN_102db164c(5,uVar4);
          func_0x000107c6142c(uVar4);
          if (uVar6 == 0) goto joined_r0x000102db5454;
          uVar4 = uVar6;
          func_0x000107c4c930();
          func_0x000107c61180();
          if (uVar4 != 0) {
            uVar7 = uVar4;
            func_0x000107c44984();
            if ((uVar7 & 1) != 0) {
              uVar7 = uVar4;
              func_0x000107c4c99c();
              func_0x000107c61180();
              if (uVar7 != 0) {
                uVar8 = uVar5;
                func_0x000107c4ca10();
                func_0x000107c61180();
                if (uVar8 != 0) {
                  uStack_a0 = 0;
                  uVar9 = 0;
                  FUN_102dbd588(0,0x112d512f8,&PTR_PTR_1126b25d8);
                  func_0x000107c5fc50(uVar8,&uStack_a0,uVar9);
                  func_0x000107c61170(uVar8);
                  uVar8 = uStack_a0;
                  if (uStack_a0 != 0) {
                    uVar32 = uStack_a0 & 0xffffffffffffff8;
                    if (uStack_a0 >> 0x3e == 0) {
                      uVar26 = *(ulong *)(uVar32 + 0x10);
                    }
                    else {
                      uVar26 = uStack_a0;
                      if (-1 < (long)uStack_a0) {
                        uVar26 = uVar32;
                      }
                      func_0x000107c60480();
                    }
                    if (uVar26 != 0) {
                      uVar28 = 0;
                      do {
                        if ((uVar8 & 0xc000000000000001) == 0) {
                          if (*(ulong *)(uVar32 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
                            pcVar25 = (code *)SoftwareBreakpoint(1,0x102db5b24);
                            (*pcVar25)();
                          }
                          uVar22 = *(ulong *)(uVar8 + uVar28 * 8 + 0x20);
                          func_0x000107c61174();
                        }
                        else {
                          uVar22 = uVar28;
                          FUN_102dba8c8(uVar28,uVar8,&PTR_PTR_1126b25d8,0x112d512f8);
                        }
                        if (SCARRY8(uVar28,1)) {
                    /* WARNING: Does not return */
                          pcVar25 = (code *)SoftwareBreakpoint(1,0x102db542c);
                          (*pcVar25)();
                        }
                        uVar34 = uVar28 + 1;
                        uVar10 = uVar22;
                        func_0x000107c4c9b4();
                        uVar11 = uVar7;
                        func_0x000107c4c9b4();
                        if (uVar10 == uVar11) {
                          func_0x000107c6142c(uVar8);
                          lVar30 = *(long *)(unaff_x20 + _DAT_112f17b68);
                          if (lVar30 == 0) {
                            if (param_4 != (code *)0x0) {
                              (*param_4)(1,0,0);
                            }
                            func_0x00010006c090(uStack_130,uStack_138);
                            func_0x000107c61170(uVar5);
                            func_0x000107c61170(uVar22);
                            goto LAB_102db5944;
                          }
                          if (param_2 == (code *)0x0) {
                            func_0x000107c615f0(lVar30);
                          }
                          else {
                            func_0x000107c615f0(lVar30);
                            (*param_2)();
                          }
                          uVar8 = uVar4;
                          func_0x000107c5d0f0();
                          uVar9 = 6;
                          if ((int)uVar8 == 0) {
                            uVar9 = 1;
                          }
                          puVar12 = PTR_PTR_1126b1060;
                          func_0x000107c610f8();
                          puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
                          puVar17 = PTR___sSSN_11034da80;
                          func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8);
                          func_0x000107c47d08();
                          func_0x000107c61170(puVar13);
                          func_0x000107c3b9ac();
                          func_0x000107c61180();
                          lVar24 = param_1;
                          func_0x000107c5faec();
                          func_0x000107c61170(param_1);
                          puVar13 = &UNK_1105d0ce8;
                          func_0x000107c613fc(&UNK_1105d0ce8,0x18,7);
                          func_0x000107c61614(puVar13 + 0x10,unaff_x20);
                          puVar14 = &UNK_1105d0d10;
                          func_0x000107c613fc(&UNK_1105d0d10,0x40,7);
                          *(undefined **)(puVar14 + 0x10) = puVar13;
                          *(code **)(puVar14 + 0x18) = param_4;
                          *(ulong *)(puVar14 + 0x20) = param_5;
                          *(long *)(puVar14 + 0x28) = lVar24;
                          *(undefined **)(puVar14 + 0x30) = puVar17;
                          *(undefined8 *)(puVar14 + 0x38) = uVar9;
                          func_0x000107c61434(puVar17);
                          func_0x000100d26378(param_4);
                          uVar8 = uVar22;
                          func_0x000107c4b7ec();
                          func_0x000107c61180();
                          uVar32 = param_5;
                          if (uVar8 == 0) {
LAB_102db5864:
                            uVar8 = uVar22;
                            func_0x000107c40488();
                            func_0x000107c61180();
                            if (uVar8 != 0) {
                              uVar26 = uVar8;
                              func_0x000107c5ee30();
                              func_0x000107c61170(uVar8);
                              uVar2 = (uint)(uVar32 >> 0x20);
                              uVar18 = uVar2 >> 0x1e;
                              if (uVar2 >> 0x1e < 2) {
                                if (uVar18 != 0) {
                                  lVar21 = (long)(int)uVar26;
                                  lVar3 = (long)uVar26 >> 0x20;
                                  goto LAB_102db58c4;
                                }
                                if ((uVar32 & 0xff000000000000) != 0) goto LAB_102db5960;
                              }
                              else if (uVar18 == 2) {
                                lVar21 = *(long *)(uVar26 + 0x10);
                                lVar3 = *(long *)(uVar26 + 0x18);
LAB_102db58c4:
                                if (lVar21 != lVar3) {
LAB_102db5960:
                                  uVar8 = uVar26;
                                  func_0x000107c5ee20(uVar26,uVar32);
                                  uVar28 = uVar8;
                                  func_0x000107c2bde8();
                                  func_0x000107c61180();
                                  func_0x000107c61170(uVar8);
                                  puVar13 = &UNK_1105d0d38;
                                  func_0x000107c613fc(&UNK_1105d0d38,0x20,7);
                                  *(undefined8 *)(puVar13 + 0x10) = 0x102dbd684;
                                  *(undefined **)(puVar13 + 0x18) = puVar14;
                                  uStack_b8 = 0x102dbda94;
                                  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
                                  uStack_d0 = 0x42000000;
                                  puStack_c8 = &UNK_100f17d9c;
                                  puStack_c0 = &UNK_1105d0d50;
                                  ppuVar16 = &puStack_d8;
                                  puStack_b0 = puVar13;
                                  func_0x000107c60bc4(ppuVar16);
                                  puVar13 = puStack_b0;
                                  func_0x000107c6157c(puVar14);
                                  func_0x000107c61574(puVar13);
                                  lVar3 = lVar30;
                                  func_0x000107c50790(lVar30);
                                  func_0x000107c61180();
                                  func_0x000107c60bd0(ppuVar16);
                                  lVar21 = _DAT_112f17b48;
                                  func_0x000107c61428(unaff_x20 + _DAT_112f17b48,&puStack_d8,0x21,0)
                                  ;
                                  func_0x000107c615f0(lVar3);
                                  uVar9 = *(undefined8 *)(unaff_x20 + lVar21);
                                  func_0x000107c61558(uVar9);
                                  uVar20 = *(undefined8 *)(unaff_x20 + lVar21);
                                  *(undefined8 *)(unaff_x20 + lVar21) = 0x8000000000000000;
                                  FUN_102dabfdc(lVar3,lVar24,puVar17,uVar9);
                                  func_0x000107c6142c(puVar17);
                                  *(undefined8 *)(unaff_x20 + lVar21) = uVar20;
                                  func_0x000107c614a8(&puStack_d8);
                                  func_0x00010006c090(uStack_130,uStack_138);
                                  func_0x000107c61574(puVar14);
                                  func_0x000107c61170(uVar7);
                                  func_0x000107c61170(uVar4);
                                  func_0x000107c61170(uVar6);
                                  func_0x00010006c090(uVar26,uVar32);
                                  func_0x000107c615e8(lVar30);
                                  func_0x000107c61170(uVar5);
                                  func_0x000107c61170(uVar22);
                                  func_0x000107c61170(puVar12);
                                  func_0x000107c61170(uVar28);
                                  func_0x000107c615e8(lVar3);
                                  return;
                                }
                              }
                              func_0x00010006c090(uVar26,uVar32);
                            }
                            func_0x000107c6142c(puVar17);
                            if (param_4 != (code *)0x0) {
                              (*param_4)(1,0,0);
                            }
                            func_0x00010006c090(uStack_130,uStack_138);
                            func_0x000107c615e8(lVar30);
                            func_0x000107c61170(uVar5);
                            func_0x000107c61170(uVar22);
                            func_0x000107c61170(puVar12);
                          }
                          else {
                            uVar26 = uVar8;
                            func_0x000107c5faec();
                            uVar32 = param_5;
                            func_0x000107c61170(uVar8);
                            uVar8 = uVar26 & 0xffffffffffff;
                            if ((param_5 & 0x2000000000000000) != 0) {
                              uVar8 = param_5 >> 0x38 & 0xf;
                            }
                            if (uVar8 == 0) {
                              func_0x000107c6142c(param_5);
                              goto LAB_102db5864;
                            }
                            uVar32 = param_5;
                            FUN_102dae628(&uStack_a0,uVar26);
                            func_0x000107c6142c(param_5);
                            uVar8 = uStack_a0;
                            if (lStack_98 == 0) goto LAB_102db5864;
                            func_0x000107c61434(lStack_98);
                            FUN_102daea8c(uVar8,lStack_98);
                            puVar15 = PTR_PTR_1126b08b8;
                            func_0x000107c610f8();
                            uVar9 = uStack_78;
                            func_0x000107c5fadc(uStack_78,uStack_70);
                            func_0x000107c4766c();
                            func_0x000107c61170(uVar9);
                            FUN_102dbd694(&uStack_a0,0x112f178e8,&UNK_10db4dec0);
                            puVar13 = &UNK_1105d0d88;
                            func_0x000107c613fc(&UNK_1105d0d88,0x20,7);
                            *(undefined8 *)(puVar13 + 0x10) = 0x102dbd684;
                            *(undefined **)(puVar13 + 0x18) = puVar14;
                            uStack_b8 = 0x102dbd6d4;
                            puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
                            uStack_d0 = 0x42000000;
                            puStack_c8 = &UNK_100f17d9c;
                            puStack_c0 = &UNK_1105d0da0;
                            ppuVar16 = &puStack_d8;
                            puStack_b0 = puVar13;
                            func_0x000107c60bc4(ppuVar16);
                            puVar13 = puStack_b0;
                            func_0x000107c6157c(puVar14);
                            func_0x000107c61574(puVar13);
                            lVar3 = lVar30;
                            func_0x000107c50784(lVar30);
                            func_0x000107c61180();
                            func_0x000107c60bd0(ppuVar16);
                            lVar21 = _DAT_112f17b48;
                            func_0x000107c61428(unaff_x20 + _DAT_112f17b48,&puStack_d8,0x21,0);
                            func_0x000107c615f0(lVar3);
                            uVar9 = *(undefined8 *)(unaff_x20 + lVar21);
                            func_0x000107c61558(uVar9);
                            uVar20 = *(undefined8 *)(unaff_x20 + lVar21);
                            *(undefined8 *)(unaff_x20 + lVar21) = 0x8000000000000000;
                            FUN_102dabfdc(lVar3,lVar24,puVar17,uVar9);
                            func_0x000107c6142c(puVar17);
                            *(undefined8 *)(unaff_x20 + lVar21) = uVar20;
                            func_0x000107c614a8(&puStack_d8);
                            func_0x00010006c090(uStack_130,uStack_138);
                            func_0x000107c615e8(lVar30);
                            func_0x000107c61170(uVar5);
                            func_0x000107c61170(uVar22);
                            func_0x000107c61170(puVar12);
                            func_0x000107c61170(puVar15);
                            func_0x000107c615e8(lVar3);
                          }
                          func_0x000107c61574(puVar14);
LAB_102db5944:
                          func_0x000107c61170(uVar7);
                          func_0x000107c61170(uVar4);
                          func_0x000107c61170(uVar6);
                          return;
                        }
                        func_0x000107c61170(uVar22);
                        uVar28 = uVar28 + 1;
                        uVar22 = uStack_138;
                      } while (uVar34 != uVar26);
                    }
                    func_0x000107c6142c(uVar8);
                    func_0x000107c61170(uVar7);
                    func_0x000107c61170(uVar4);
                    func_0x000107c61170(uVar6);
                    goto joined_r0x000102db5454;
                  }
                }
                func_0x000107c61170(uVar7);
                func_0x000107c61170(uVar4);
                goto LAB_102db5450;
              }
            }
            func_0x000107c61170(uVar6);
            uVar6 = uVar4;
          }
LAB_102db5450:
          func_0x000107c61170(uVar6);
joined_r0x000102db5454:
          if (param_4 != (code *)0x0) {
            (*param_4)(1,0,0);
          }
          func_0x00010006c090(uStack_130,uVar22);
          func_0x000107c61170(uVar5);
          return;
        }
LAB_102db5160:
        FUN_102dbd694(lVar23,0x112d7e680,&UNK_10d95e350);
      }
      else {
        FUN_102dbd7a8(lVar23,uVar22,0x112d36580,&UNK_10d9016d0);
        lVar24 = lVar23 + lVar30;
        (*pcVar25)(lVar24,1,lVar3);
        if ((int)lVar24 == 1) {
          FUN_102dbd694(lVar31,0x112d36580,&UNK_10d9016d0);
          FUN_102dbd694(lVar33,0x112d36580,&UNK_10d9016d0);
          (**(code **)(lVar27 + 8))(uVar22,lVar3);
          goto LAB_102db5160;
        }
        (**(code **)(lVar27 + 0x20))(lVar19,lVar23 + lVar30,lVar3);
        uVar9 = 0x112d7e688;
        FUN_102dbd630(0x112d7e688,PTR___s10Foundation3URLVMa_110350988,
                      PTR___s10Foundation3URLVSQAAMc_1103509a8);
        uVar4 = uVar22;
        func_0x000107c5fab8(uVar22,lVar19,lVar3,uVar9);
        pcVar25 = *(code **)(lVar27 + 8);
        (*pcVar25)(lVar19,lVar3);
        FUN_102dbd694(lVar31,0x112d36580,&UNK_10d9016d0);
        FUN_102dbd694(lVar33,0x112d36580,&UNK_10d9016d0);
        (*pcVar25)(uVar22,lVar3);
        FUN_102dbd694(lVar23,0x112d36580,&UNK_10d9016d0);
        if ((uVar4 & 1) != 0) goto LAB_102db5250;
      }
      func_0x00010006c090(uStack_130,uStack_138);
      goto joined_r0x000102db4fa4;
    }
    func_0x000107c6142c(lVar24);
  }
  func_0x000107c6142c(puVar13);
  func_0x000107c614a8(&uStack_a0);
joined_r0x000102db4fa4:
  if (param_4 != (code *)0x0) {
    (*param_4)(0,0,0);
  }
  return;
}



/* Entry: 102db5b6c; end: 102db5c23;  */

void FUN_102db5b6c(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    if (param_3 != (code *)0x0) {
      (*param_3)(1,0,0);
    }
  }
  else {
    FUN_102db5c24(param_1,param_5,param_6,param_7,param_3,param_4);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102db5c24; end: 102db654f;  */

/* WARNING: Possible PIC construction at 0x000102db5d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db5e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db5f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db60a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db61a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db61b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db6518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db630c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db6370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db628c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db6124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db60e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102db6290) */
/* WARNING: Removing unreachable block (ram,0x000102db6378) */
/* WARNING: Removing unreachable block (ram,0x000102db629c) */
/* WARNING: Removing unreachable block (ram,0x000102db6374) */
/* WARNING: Removing unreachable block (ram,0x000102db6310) */
/* WARNING: Removing unreachable block (ram,0x000102db6328) */
/* WARNING: Removing unreachable block (ram,0x000102db634c) */
/* WARNING: Removing unreachable block (ram,0x000102db6398) */
/* WARNING: Removing unreachable block (ram,0x000102db63a0) */
/* WARNING: Removing unreachable block (ram,0x000102db6354) */
/* WARNING: Removing unreachable block (ram,0x000102db651c) */
/* WARNING: Removing unreachable block (ram,0x000102db61b8) */
/* WARNING: Removing unreachable block (ram,0x000102db6268) */
/* WARNING: Removing unreachable block (ram,0x000102db61c0) */
/* WARNING: Removing unreachable block (ram,0x000102db61e0) */
/* WARNING: Removing unreachable block (ram,0x000102db6548) */
/* WARNING: Removing unreachable block (ram,0x000102db61ec) */
/* WARNING: Removing unreachable block (ram,0x000102db62d0) */
/* WARNING: Removing unreachable block (ram,0x000102db622c) */
/* WARNING: Removing unreachable block (ram,0x000102db6244) */
/* WARNING: Removing unreachable block (ram,0x000102db63a4) */
/* WARNING: Removing unreachable block (ram,0x000102db61a8) */
/* WARNING: Removing unreachable block (ram,0x000102db60a4) */
/* WARNING: Removing unreachable block (ram,0x000102db6108) */
/* WARNING: Removing unreachable block (ram,0x000102db60b4) */
/* WARNING: Removing unreachable block (ram,0x000102db5fa0) */
/* WARNING: Removing unreachable block (ram,0x000102db5e7c) */
/* WARNING: Removing unreachable block (ram,0x000102db60c0) */
/* WARNING: Removing unreachable block (ram,0x000102db60e8) */
/* WARNING: Removing unreachable block (ram,0x000102db60f0) */
/* WARNING: Removing unreachable block (ram,0x000102db5e80) */
/* WARNING: Removing unreachable block (ram,0x000102db5e98) */
/* WARNING: Removing unreachable block (ram,0x000102db60d0) */
/* WARNING: Removing unreachable block (ram,0x000102db5ea4) */
/* WARNING: Removing unreachable block (ram,0x000102db5d2c) */
/* WARNING: Removing unreachable block (ram,0x000102db5e34) */
/* WARNING: Removing unreachable block (ram,0x000102db5e40) */
/* WARNING: Removing unreachable block (ram,0x000102db5d34) */
/* WARNING: Removing unreachable block (ram,0x000102db5d5c) */
/* WARNING: Removing unreachable block (ram,0x000102db6544) */
/* WARNING: Removing unreachable block (ram,0x000102db5d68) */
/* WARNING: Removing unreachable block (ram,0x000102db5e44) */
/* WARNING: Removing unreachable block (ram,0x000102db5da8) */
/* WARNING: Removing unreachable block (ram,0x000102db5dc0) */
/* WARNING: Removing unreachable block (ram,0x000102db5dd4) */
/* WARNING: Removing unreachable block (ram,0x000102db6100) */
/* WARNING: Removing unreachable block (ram,0x000102db6128) */
/* WARNING: Removing unreachable block (ram,0x000102db6138) */

void FUN_102db5c24(long param_1,undefined8 param_2,undefined8 param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long extraout_x12;
  undefined8 unaff_x20;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long alStack_190 [8];
  undefined1 auStack_150 [56];
  undefined8 uStack_118;
  long lStack_110;
  long lStack_100;
  long lStack_f8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = unaff_x20;
  pcVar4 = param_5;
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = auStack_150 + (-extraout_x12 - (lVar11 + 0xfU & 0xfffffffffffffff0));
  lVar3 = param_1;
  func_0x000107c44314();
  if (lVar3 == 0) {
    lVar3 = param_1;
    lStack_f8 = lVar11;
    func_0x000107c440d0();
    if ((int)lVar3 != 0) {
      uStack_118 = param_2;
      lStack_110 = lVar10;
      lStack_100 = param_1;
      func_0x000108461ea8(param_1);
      func_0x000107c61180();
      func_0x000107c5fc54();
      lVar3 = param_1;
      goto code_r0x000107c61170;
    }
  }
  if (param_5 != (code *)0x0) {
    lVar3 = 1;
    param_3 = 0;
    (*param_5)(1,0,0);
    unaff_x20 = param_6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  func_0x000107c60e78();
  *(undefined1 **)(puVar8 + -0x40) = puVar8;
  *(long *)(puVar8 + -0x38) = lVar2;
  *(undefined8 *)(puVar8 + -0x30) = param_2;
  *(long *)(puVar8 + -0x28) = param_1;
  *(undefined8 *)(puVar8 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar8 + -0x18) = uVar1;
  *(undefined1 **)(puVar8 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar8 + -8) = FUN_102db6550;
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar6 = (undefined *)0x0;
    uVar1 = 0;
    uVar7 = 0;
    if (pcVar4 == (code *)0x0) goto LAB_102db65e4;
LAB_102db65b4:
    puVar9 = &UNK_1105d0c98;
    func_0x000107c613fc(&UNK_1105d0c98,0x18,7);
    *(code **)(puVar9 + 0x10) = pcVar4;
    pcVar4 = FUN_102dbd670;
    uVar1 = uVar7;
  }
  else {
    puVar6 = &UNK_1105d0cc0;
    func_0x000107c613fc(&UNK_1105d0cc0,0x18,7);
    *(long *)(puVar6 + 0x10) = param_4;
    uVar1 = 0x102dbd678;
    uVar7 = uVar1;
    if (pcVar4 != (code *)0x0) goto LAB_102db65b4;
LAB_102db65e4:
    puVar9 = (undefined *)0x0;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(lVar3);
  FUN_102db4c90(param_3,uVar1,puVar6,pcVar4,puVar9);
  func_0x000100d262e4(pcVar4,puVar9);
  func_0x000100d262e4(uVar1,puVar6);
  func_0x000107c615e8(param_3);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102db6550; end: 102db664b; -[_TtC29SCImpalaSnapDocPlaybackPlugin30SCImpalaSnapDocOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_102db6550(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar2 = &UNK_1105d0cc0;
    func_0x000107c613fc(&UNK_1105d0cc0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar1 = 0x102dbd678;
  }
  if (param_5 == 0) {
    puVar4 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar4 = &UNK_1105d0c98;
    func_0x000107c613fc(&UNK_1105d0c98,0x18,7);
    *(long *)(puVar4 + 0x10) = param_5;
    pcVar3 = FUN_102dbd670;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102db4c90(param_3,uVar1,puVar2,pcVar3,puVar4);
  func_0x000100d262e4(pcVar3,puVar4);
  func_0x000100d262e4(uVar1,puVar2);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102db664c; end: 102db716f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db664c(long param_1,code *param_2,undefined8 param_3,byte *param_4,ulong param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  byte *pbVar2;
  code *pcVar3;
  byte **ppbVar4;
  byte **ppbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined *puVar9;
  long extraout_x8;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  byte *pbStack_90;
  ulong uStack_88;
  undefined1 auStack_78 [24];
  
  lVar13 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&uStack_b0 - extraout_x8;
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    if (param_2 == (code *)0x0) {
      return;
    }
    (*param_2)(1,0,0);
    return;
  }
  func_0x000107c61428(param_1 + _DAT_112f17b48,&pbStack_90,0x21,0);
  pbVar11 = param_4;
  FUN_102dabd0c(param_4,param_5);
  func_0x000107c614a8(&pbStack_90);
  func_0x000107c615e8(pbVar11);
  lVar14 = _DAT_112f17b10;
  func_0x000107c61428(param_1 + _DAT_112f17b10,&pbStack_90,0x20,0);
  lVar14 = *(long *)(param_1 + lVar14);
  uStack_a8 = param_3;
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_102db697c:
    func_0x000107c614a8(&pbStack_90);
    uVar6 = 0;
    uVar12 = 0xf000000000000000;
LAB_102db698c:
    func_0x0001000b44c0(uVar6,uVar12);
    lVar13 = 0x112d55580;
    func_0x0001000285a8(0x112d55580,&UNK_10d91c5e0);
    lVar14 = 0;
    func_0x000107c5ede0();
    lVar15 = *(long *)(lVar14 + -8);
    uVar12 = (ulong)*(byte *)(lVar15 + 0x50);
    uVar16 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
    func_0x000107c613fc(lVar13,uVar16 + *(long *)(lVar15 + 0x48),uVar12 | 7);
    *(undefined8 *)(lVar13 + 0x18) = 2;
    *(undefined8 *)(lVar13 + 0x10) = 1;
    (**(code **)(lVar15 + 0x10))(lVar13 + uVar16,param_6,lVar14);
    FUN_102dbcea0(lVar13);
    func_0x000107c61574(lVar13);
    if (param_2 == (code *)0x0) goto LAB_102db6a28;
    uVar7 = 1;
    uVar6 = 0;
  }
  else {
    func_0x000107c61434(lVar14);
    pbVar11 = param_4;
    uVar12 = param_5;
    FUN_102dba280(param_4,param_5,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,&UNK_1000292e8);
    if ((uVar12 & 1) == 0) {
      func_0x000107c6142c(lVar14);
      goto LAB_102db697c;
    }
    puVar1 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)pbVar11 * 0x10);
    uVar6 = *puVar1;
    uVar12 = puVar1[1];
    uStack_b0 = param_8;
    func_0x00010006c00c(uVar6,uVar12);
    func_0x000107c6142c(lVar14);
    func_0x000107c614a8(&pbStack_90);
    if (0xe < uVar12 >> 0x3c) goto LAB_102db698c;
    func_0x0001000b44c0(uVar6,uVar12);
    func_0x0001000b44c0(0,0xf000000000000000);
    lVar14 = 0;
    func_0x000107c5ede0();
    lVar15 = *(long *)(lVar14 + -8);
    (**(code **)(lVar15 + 0x10))(lVar13,param_6,lVar14);
    (**(code **)(lVar15 + 0x38))(lVar13,0,1,lVar14);
    func_0x000107c61428(param_1 + _DAT_112f17b30,&pbStack_90,0x21,0);
    func_0x000107c61434(param_5);
    FUN_102dab93c(lVar13,param_4,param_5);
    ppbVar4 = &pbStack_90;
    func_0x000107c614a8(ppbVar4);
    if (param_7 != 0) {
      pbStack_a0 = (byte *)0x5f6d6574695f;
      uStack_98 = 0xe600000000000000;
      pbStack_90 = param_4;
      uStack_88 = param_5;
      func_0x000100e8b654();
      func_0x000107c61174(param_7);
      ppbVar5 = &pbStack_a0;
      func_0x000107c601dc(ppbVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,ppbVar4,ppbVar4);
      ppbVar4 = ppbVar5 + 2;
      if (*ppbVar4 == (byte *)0x0) {
LAB_102db6c3c:
        func_0x000107c6142c();
LAB_102db6c40:
        pbVar11 = (byte *)0x0;
      }
      else {
        pbVar11 = ppbVar4[(long)*ppbVar4 * 2];
        pbVar2 = (ppbVar4 + (long)*ppbVar4 * 2)[1];
        func_0x000107c61434(pbVar2);
        func_0x000107c6142c(ppbVar5);
        pbVar8 = (byte *)((ulong)pbVar11 & 0xffffffffffff);
        pbVar10 = (byte *)((ulong)pbVar2 >> 0x38 & 0xf);
        pbVar17 = pbVar8;
        if (((ulong)pbVar2 & 0x2000000000000000) != 0) {
          pbVar17 = pbVar10;
        }
        if (pbVar17 == (byte *)0x0) goto LAB_102db6c3c;
        if (((ulong)pbVar2 >> 0x3c & 1) == 0) {
          if (((ulong)pbVar2 >> 0x3d & 1) == 0) {
            if (((ulong)pbVar11 >> 0x3c & 1) == 0) {
              pbVar8 = pbVar2;
              func_0x000107c60358();
            }
            else {
              pbVar11 = (byte *)(((ulong)pbVar2 & 0xfffffffffffffff) + 0x20);
            }
            if (*pbVar11 == 0x2b) {
              if ((long)pbVar8 < 1) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102db6e54);
                (*pcVar3)();
              }
              pbVar8 = pbVar8 + -1;
              if (pbVar8 == (byte *)0x0) goto LAB_102db6c0c;
              pbVar17 = (byte *)0x0;
              do {
                pbVar11 = pbVar11 + 1;
                if (((9 < *pbVar11 - 0x30) ||
                    (lVar13 = (long)pbVar17 * 10,
                    SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                   (uVar12 = (ulong)(byte)(*pbVar11 - 0x30), pbVar17 = (byte *)(lVar13 + uVar12),
                   SCARRY8(lVar13,uVar12))) goto LAB_102db6c0c;
                uVar18 = 0;
                pbVar8 = pbVar8 + -1;
              } while (pbVar8 != (byte *)0x0);
            }
            else if (*pbVar11 == 0x2d) {
              if ((long)pbVar8 < 1) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102db6e4c);
                (*pcVar3)();
              }
              pbVar8 = pbVar8 + -1;
              if (pbVar8 == (byte *)0x0) {
LAB_102db6c0c:
                pbVar17 = (byte *)0x0;
                uVar18 = 1;
              }
              else {
                pbVar17 = (byte *)0x0;
                do {
                  pbVar11 = pbVar11 + 1;
                  if (((9 < *pbVar11 - 0x30) ||
                      (lVar13 = (long)pbVar17 * 10,
                      SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                     (uVar12 = (ulong)(byte)(*pbVar11 - 0x30), pbVar17 = (byte *)(lVar13 - uVar12),
                     SBORROW8(lVar13,uVar12))) goto LAB_102db6c0c;
                  uVar18 = 0;
                  pbVar8 = pbVar8 + -1;
                } while (pbVar8 != (byte *)0x0);
              }
            }
            else {
              if (pbVar8 == (byte *)0x0) goto LAB_102db6c0c;
              if (pbVar11 == (byte *)0x0) {
                uVar18 = 0;
                pbVar17 = (byte *)0x0;
              }
              else {
                pbVar17 = (byte *)0x0;
                do {
                  if (((9 < *pbVar11 - 0x30) ||
                      (lVar13 = (long)pbVar17 * 10,
                      SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                     (uVar12 = (ulong)(byte)(*pbVar11 - 0x30), pbVar17 = (byte *)(lVar13 + uVar12),
                     SCARRY8(lVar13,uVar12))) goto LAB_102db6c0c;
                  uVar18 = 0;
                  pbVar8 = pbVar8 + -1;
                  pbVar11 = pbVar11 + 1;
                } while (pbVar8 != (byte *)0x0);
              }
            }
          }
          else {
            pbStack_90 = pbVar11;
            uStack_88 = (ulong)pbVar2 & 0xffffffffffffff;
            uVar18 = (uint)pbVar11 & 0xff;
            if (uVar18 == 0x2b) {
              if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102db6e58);
                (*pcVar3)();
              }
              pbVar10 = pbVar10 + -1;
              if (pbVar10 == (byte *)0x0) goto LAB_102db6c0c;
              pbVar17 = (byte *)0x0;
              pbVar11 = (byte *)((ulong)&pbStack_90 | 1);
              do {
                if (((9 < *pbVar11 - 0x30) ||
                    (lVar13 = (long)pbVar17 * 10,
                    SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                   (uVar12 = (ulong)(byte)(*pbVar11 - 0x30), pbVar17 = (byte *)(lVar13 + uVar12),
                   SCARRY8(lVar13,uVar12))) goto LAB_102db6c0c;
                uVar18 = 0;
                pbVar10 = pbVar10 + -1;
                pbVar11 = pbVar11 + 1;
              } while (pbVar10 != (byte *)0x0);
            }
            else if (uVar18 == 0x2d) {
              if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102db6e50);
                (*pcVar3)();
              }
              pbVar10 = pbVar10 + -1;
              if (pbVar10 == (byte *)0x0) goto LAB_102db6c0c;
              pbVar17 = (byte *)0x0;
              pbVar11 = (byte *)((ulong)&pbStack_90 | 1);
              do {
                if (((9 < *pbVar11 - 0x30) ||
                    (lVar13 = (long)pbVar17 * 10,
                    SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                   (uVar12 = (ulong)(byte)(*pbVar11 - 0x30), pbVar17 = (byte *)(lVar13 - uVar12),
                   SBORROW8(lVar13,uVar12))) goto LAB_102db6c0c;
                uVar18 = 0;
                pbVar10 = pbVar10 + -1;
                pbVar11 = pbVar11 + 1;
              } while (pbVar10 != (byte *)0x0);
            }
            else {
              if (pbVar10 == (byte *)0x0) goto LAB_102db6c0c;
              pbVar17 = (byte *)0x0;
              ppbVar4 = &pbStack_90;
              do {
                if (((9 < *(byte *)ppbVar4 - 0x30) ||
                    (lVar13 = (long)pbVar17 * 10,
                    SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                   (uVar12 = (ulong)(byte)(*(byte *)ppbVar4 - 0x30),
                   pbVar17 = (byte *)(lVar13 + uVar12), SCARRY8(lVar13,uVar12))) goto LAB_102db6c0c;
                uVar18 = 0;
                pbVar10 = pbVar10 + -1;
                ppbVar4 = (byte **)((long)ppbVar4 + 1);
              } while (pbVar10 != (byte *)0x0);
            }
          }
          func_0x000107c6142c(pbVar2);
          pbVar11 = pbVar17;
        }
        else {
          func_0x000107c61434(pbVar2);
          pbVar17 = pbVar2;
          FUN_102db9f04(pbVar11,pbVar2,10);
          uVar18 = (uint)pbVar17;
          func_0x000107c61430(pbVar2,2);
        }
        if ((uVar18 & 0xff) == 1) goto LAB_102db6c40;
      }
      lVar13 = -0x11ff9c909b8f9e92;
      if (*(long *)(param_1 + _DAT_112f17b08) == 0) {
LAB_102db6c8c:
        pbVar17 = (byte *)0x735f616c61706d69;
      }
      else {
        puVar1 = (undefined8 *)(*(long *)(param_1 + _DAT_112f17b08) + _DAT_112f17aa0);
        lVar14 = puVar1[1];
        if (lVar14 == 0) goto LAB_102db6c8c;
        pbVar17 = (byte *)*puVar1;
        func_0x000107c61434();
        lVar13 = lVar14;
      }
      pbStack_90 = pbVar17;
      uStack_88 = lVar13;
      func_0x000107c5fb78(0x5f70616e735f,0xe600000000000000);
      puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      pbStack_a0 = pbVar11;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar9);
      func_0x000107c5fb78(0x79616c7265766f5f,0xe800000000000000);
      uVar12 = uStack_88;
      pbVar11 = pbStack_90;
      lVar13 = _DAT_112f17b38;
      func_0x000107c61428(param_1 + _DAT_112f17b38,&pbStack_90,0x21,0);
      func_0x000107c61174(param_7);
      func_0x000107c61434(uVar12);
      uVar6 = *(undefined8 *)(param_1 + lVar13);
      func_0x000107c61558(uVar6);
      pbStack_a0 = *(byte **)(param_1 + lVar13);
      *(undefined8 *)(param_1 + lVar13) = 0x8000000000000000;
      func_0x000100fdaeac(param_7,pbVar11,uVar12,uVar6);
      func_0x000107c6142c(uVar12);
      *(byte **)(param_1 + lVar13) = pbStack_a0;
      func_0x000107c614a8(&pbStack_90);
      lVar13 = _DAT_112f17b40;
      func_0x000107c61428(param_1 + _DAT_112f17b40,&pbStack_90,0x21,0);
      func_0x000107c61434(param_5);
      uVar6 = *(undefined8 *)(param_1 + lVar13);
      func_0x000107c61558(uVar6);
      pbStack_a0 = *(byte **)(param_1 + lVar13);
      *(undefined8 *)(param_1 + lVar13) = 0x8000000000000000;
      func_0x00010018433c(pbVar11,uVar12,param_4,param_5,uVar6);
      func_0x000107c6142c(param_5);
      *(byte **)(param_1 + lVar13) = pbStack_a0;
      func_0x000107c614a8(&pbStack_90);
      func_0x000107c61170(param_7);
    }
    if (param_2 == (code *)0x0) goto LAB_102db6a28;
    uVar7 = 0;
    uVar6 = uStack_b0;
  }
  (*param_2)(uVar7,0,uVar6);
LAB_102db6a28:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102db7170; end: 102db717b; -[_TtC29SCImpalaSnapDocPlaybackPlugin30SCImpalaSnapDocOperaDataSource removeMediaForItem:] */

void FUN_102db7170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x102db6e58)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102db717c; end: 102db765f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db717c(undefined *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  undefined8 uVar7;
  long extraout_x12;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  code *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 uVar13;
  undefined *unaff_x26;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 auStack_140 [3];
  long alStack_128 [2];
  long alStack_118 [2];
  undefined1 auStack_108 [24];
  long alStack_f0 [12];
  long alStack_90 [2];
  undefined *puStack_80;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(uVar2 - 8);
  uVar3 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  uVar8 = (long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar8 - extraout_x12;
  lVar17 = *(long *)(param_1 + 0x10);
  if (lVar17 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    unaff_x24 = param_1 + ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff));
    alStack_90[1] = *(long *)(lVar15 + 0x48);
    unaff_x23 = *(code **)(lVar15 + 0x10);
    puStack_80 = puVar4;
    do {
      (*unaff_x23)(lVar11,unaff_x24,uVar2);
      (**(code **)(lVar15 + 0x20))(uVar8,lVar11,uVar2);
      param_1 = puStack_80;
      func_0x000107c415e0();
      func_0x000107c61180();
      unaff_x25 = param_1;
      func_0x000107c5ed90();
      puStack_70 = (undefined *)0x0;
      unaff_x26 = param_1;
      func_0x000107c4ff50();
      func_0x000107c61170(param_1);
      func_0x000107c61170(unaff_x25);
      puVar4 = puStack_70;
      if ((int)unaff_x26 == 0) {
        unaff_x25 = puStack_70;
        func_0x000107c61174();
        func_0x000107c5ed30();
        func_0x000107c61170(unaff_x25);
        func_0x000107c61654();
        func_0x000107c614ac(puVar4);
        param_1 = puVar4;
        unaff_x26 = puVar4;
      }
      else {
        func_0x000107c61174();
      }
      uVar3 = uVar8;
      param_2 = uVar2;
      (**(code **)(lVar15 + 8))();
      unaff_x24 = unaff_x24 + alStack_90[1];
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    *(undefined8 *)(lVar11 + -0x60) = 0;
    *(long *)(lVar11 + -0x58) = lVar15;
    *(undefined **)(lVar11 + -0x50) = unaff_x26;
    *(undefined **)(lVar11 + -0x48) = unaff_x25;
    *(undefined **)(lVar11 + -0x40) = unaff_x24;
    *(code **)(lVar11 + -0x38) = unaff_x23;
    *(long *)(lVar11 + -0x30) = lVar11;
    *(undefined **)(lVar11 + -0x28) = param_1;
    *(ulong *)(lVar11 + -0x20) = uVar8;
    *(ulong *)(lVar11 + -0x18) = uVar2;
    *(undefined1 **)(lVar11 + -0x10) = &stack0xfffffffffffffff0;
    *(undefined8 *)(lVar11 + -8) = 0x102db733c;
    if (uVar3 != 0) {
      uVar2 = uVar3;
      func_0x000107c615f0();
      func_0x000107c3b9ac();
      func_0x000107c61180();
      uVar5 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
      lVar17 = _DAT_112f17b10;
      func_0x000107c61428(uVar8 + _DAT_112f17b10,lVar11 + -0x78,0x20,0);
      lVar17 = *(long *)(uVar8 + lVar17);
      if (*(long *)(lVar17 + 0x10) != 0) {
        func_0x000107c61434(lVar17);
        uVar2 = param_2;
        FUN_102dba280(uVar5,param_2,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,&UNK_1000292e8);
        if ((uVar2 & 1) != 0) {
          puVar1 = (undefined8 *)(*(long *)(lVar17 + 0x38) + uVar5 * 0x10);
          uVar12 = *puVar1;
          uVar10 = puVar1[1];
          func_0x00010006c00c(uVar12,uVar10);
          func_0x000107c614a8(lVar11 + -0x78);
          func_0x000107c6142c(lVar17);
          func_0x000107c6142c(param_2);
          uVar2 = uVar3;
          FUN_102db7660();
          *(undefined8 *)(lVar11 + -0xa8) = uVar10;
          *(undefined8 *)(lVar11 + -0xa0) = uVar12;
          func_0x000107c5ee20(uVar12,uVar10);
          *(undefined8 *)(lVar11 + -0xb0) = uVar12;
          if (uVar2 == 0) {
            lVar15 = 0;
            FUN_102db0034();
            lVar17 = lVar15;
            func_0x000107c610f8();
            *(undefined8 *)(lVar17 + _DAT_112f179f8) = 0xffffffffffffffff;
            *(undefined8 *)(lVar17 + _DAT_112f17a00) = 0xffffffffffffffff;
            *(undefined8 *)(lVar17 + _DAT_112f17a08) = 0xffffffffffffffff;
            *(undefined8 *)(lVar17 + _DAT_112f17a10) = 0xffffffffffffffff;
            *(undefined8 *)(lVar17 + _DAT_112f17a18) = 0xffffffffffffffff;
            *(long *)(lVar11 + -0x88) = lVar17;
            *(long *)(lVar11 + -0x80) = lVar15;
            lVar17 = lVar11 + -0x88;
            func_0x000107c61154(lVar17,PTR_s_init_1125d9248);
            uVar2 = 0;
            uVar9 = 0;
            uVar13 = 0;
            uVar10 = 0;
            uVar14 = 0;
            uVar12 = 0;
            uVar16 = 0;
          }
          else {
            uVar12 = *(undefined8 *)(uVar2 + _DAT_112f17aa0);
            uVar16 = ((undefined8 *)(uVar2 + _DAT_112f17aa0))[1];
            lVar17 = *(long *)(uVar2 + _DAT_112f17aa8);
            uVar10 = *(undefined8 *)(uVar2 + _DAT_112f17ab0);
            uVar14 = ((undefined8 *)(uVar2 + _DAT_112f17ab0))[1];
            uVar9 = *(undefined8 *)(uVar2 + _DAT_112f17ab8);
            uVar13 = ((undefined8 *)(uVar2 + _DAT_112f17ab8))[1];
            func_0x000107c61434(uVar13);
            func_0x000107c61434(uVar16);
            func_0x000107c61174();
            func_0x000107c61434(uVar14);
          }
          lVar6 = 0;
          FUN_102db02e4();
          lVar15 = lVar6;
          func_0x000107c610f8();
          uVar7 = *(undefined8 *)(lVar11 + -0xb0);
          *(undefined8 *)(lVar15 + _DAT_112f17a20) = uVar7;
          puVar1 = (undefined8 *)(lVar15 + _DAT_112f17a28);
          *puVar1 = uVar12;
          puVar1[1] = uVar16;
          *(long *)(lVar15 + _DAT_112f17a30) = lVar17;
          puVar1 = (undefined8 *)(lVar15 + _DAT_112f17a38);
          *puVar1 = uVar10;
          puVar1[1] = uVar14;
          puVar1 = (undefined8 *)(lVar15 + _DAT_112f17a40);
          *puVar1 = uVar9;
          puVar1[1] = uVar13;
          puVar4 = PTR_s_init_1125d9248;
          *(long *)(lVar11 + -0x98) = lVar15;
          *(long *)(lVar11 + -0x90) = lVar6;
          func_0x000107c61174(uVar7);
          func_0x000107c61174(lVar17);
          func_0x000107c61154(lVar11 + -0x98,puVar4);
          func_0x00010006c090(*(undefined8 *)(lVar11 + -0xa0),*(undefined8 *)(lVar11 + -0xa8));
          func_0x000107c61170(uVar7);
          func_0x000107c61170(lVar17);
          func_0x000107c61170(uVar2);
          func_0x000107c615e8(uVar3);
          return;
        }
        func_0x000107c6142c(lVar17);
      }
      func_0x000107c6142c(param_2);
      func_0x000107c614a8(lVar11 + -0x78);
      func_0x000107c615e8(uVar3);
    }
    return;
  }
  return;
}



/* Entry: 102db7660; end: 102db789b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102db7660(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 *puVar9;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined *puStack_60;
  
  lVar4 = 0x112d483a8;
  puVar5 = &UNK_10d910f00;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  puVar9 = auStack_70 + lVar4;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  uVar8 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  lVar1 = 0;
  uStack_68 = uVar8;
  puStack_60 = puVar5;
  func_0x000107c5ef14();
  puVar2 = puVar9;
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar9,1,1,lVar1);
  func_0x000100e8b654();
  puVar3 = &UNK_10db4e308;
  *(undefined1 **)((long)auStack_80 + lVar4) = puVar2;
  *(undefined1 **)((long)auStack_80 + lVar4 + 8) = puVar2;
  uVar6 = 0;
  func_0x000107c60218(&UNK_10db4e308,4,0,0,1,puVar9,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
  FUN_102dbd694(puVar9,0x112d483a8,&UNK_10d910f00);
  if ((uVar6 & 0xff) != 1) {
    lVar4 = 0xf;
    puVar7 = puVar5;
    func_0x000107c5fbd8(0xf,puVar3,uVar8,puVar5);
    func_0x000107c6142c(puVar5);
    puVar5 = puVar3;
    func_0x000107c5fb2c(lVar4,puVar3,uVar8,puVar7);
    func_0x000107c6142c(puVar7);
    lVar1 = *(long *)(unaff_x20 + _DAT_112f17b28);
    func_0x000107c61428(lVar1 + 0x10,&uStack_68,0x20,0);
    lVar1 = *(long *)(lVar1 + 0x10);
    if (*(long *)(lVar1 + 0x10) != 0) {
      func_0x000107c61434(lVar1);
      puVar3 = puVar5;
      FUN_102dba280(lVar4,puVar5,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,&UNK_1000292e8);
      if (((ulong)puVar3 & 1) != 0) {
        uVar8 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + lVar4 * 8);
        func_0x000107c61174(uVar8);
        func_0x000107c614a8(&uStack_68);
        func_0x000107c6142c(puVar5);
        func_0x000107c6142c(lVar1);
        return uVar8;
      }
      func_0x000107c6142c(lVar1);
    }
    func_0x000107c614a8(&uStack_68);
  }
  func_0x000107c6142c(puVar5);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f17b08);
  func_0x000107c61174(uVar8);
  return uVar8;
}



/* Entry: 102db789c; end: 102db78a7; -[_TtC29SCImpalaSnapDocPlaybackPlugin30SCImpalaSnapDocOperaDataSource dataModelFor:] */

void FUN_102db789c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*(code *)0x102db733c)(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102db78a8; end: 102db79fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102db78a8(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f17b28);
    lVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c3b9ac();
    func_0x000107c61180();
    lVar1 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    func_0x000107c61428(lVar4 + 0x10,auStack_58,0x20,0);
    lVar3 = *(long *)(lVar4 + 0x10);
    if (*(long *)(lVar3 + 0x10) == 0) {
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(param_2);
      func_0x000107c615e8(param_1);
    }
    else {
      func_0x000107c61434(lVar3);
      uVar2 = param_2;
      FUN_102dba280(lVar1,param_2,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,&UNK_1000292e8);
      if ((uVar2 & 1) != 0) {
        lVar1 = *(long *)(*(long *)(lVar3 + 0x38) + lVar1 * 8);
        func_0x000107c61174(lVar1);
        func_0x000107c614a8(auStack_58);
        func_0x000107c6142c(param_2);
        func_0x000107c615e8(param_1);
        func_0x000107c6142c(lVar3);
        return lVar1;
      }
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(param_2);
      func_0x000107c615e8(param_1);
      func_0x000107c6142c(lVar3);
    }
    lVar3 = *(long *)(unaff_x20 + _DAT_112f17b08);
    if (lVar3 != 0) {
      func_0x000107c61174(lVar3);
    }
  }
  return lVar3;
}



/* Entry: 102db79fc; end: 102db7a07; -[_TtC29SCImpalaSnapDocPlaybackPlugin30SCImpalaSnapDocOperaDataSource dataModelForGroup:] */

void FUN_102db79fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102db78a8(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102db7a08; end: 102db7a67;  */

void FUN_102db7a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102db7a68; end: 102db7e3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db7a68(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar11 = *(long *)(unaff_x20 + _DAT_112f17b28);
  lVar7 = param_1;
  func_0x000107c444d0();
  func_0x000107c61180();
  lVar15 = lVar7;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = lVar15;
  func_0x000107c5faec();
  func_0x000107c61170(lVar15);
  func_0x000107c61428(lVar11 + 0x10,&uStack_78,0x20,0);
  uVar12 = *(ulong *)(lVar11 + 0x10);
  if (*(long *)(uVar12 + 0x10) == 0) {
    func_0x000107c614a8(&uStack_78);
  }
  else {
    func_0x000107c61434(uVar12);
    uVar16 = param_2;
    FUN_102dba280(lVar7,param_2,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,&UNK_1000292e8);
    if ((uVar16 & 1) != 0) {
      lVar15 = *(long *)(*(long *)(uVar12 + 0x38) + lVar7 * 8);
      lVar7 = lVar15;
      func_0x000107c61174();
      func_0x000107c614a8(&uStack_78);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar12);
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f17b08);
      *(long *)(unaff_x20 + _DAT_112f17b08) = lVar15;
      func_0x000107c61174();
      func_0x000107c61170(uVar13);
      uVar13 = *(undefined8 *)(*(long *)(lVar7 + _DAT_112f17a98) + 0x10);
      func_0x000107c61170(lVar7);
      *(undefined8 *)(unaff_x20 + _DAT_112f17b20) = uVar13;
      goto LAB_102db7bc8;
    }
    func_0x000107c614a8(&uStack_78);
    func_0x000107c6142c(param_2);
    param_2 = uVar12;
  }
  func_0x000107c6142c(param_2);
LAB_102db7bc8:
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(unaff_x20 + _DAT_112f17b08);
  if (lVar7 == 0) {
    func_0x000107c5d364(param_1);
  }
  else {
    lVar15 = *(long *)(lVar7 + _DAT_112f17a98);
    func_0x000107c61174();
    func_0x000107c61434(lVar15);
    FUN_102761580(0,0,0);
    uVar12 = *(ulong *)(lVar15 + 0x10);
    if (uVar12 != 0) {
      uVar16 = 0;
      puVar1 = (undefined8 *)(lVar7 + _DAT_112f17aa0);
      puVar14 = (undefined8 *)(lVar15 + 0x28);
      do {
        if (*(ulong *)(lVar15 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102db7e3c);
          (*pcVar6)();
        }
        uVar13 = puVar14[-1];
        uVar3 = *puVar14;
        lVar11 = puVar1[1];
        if (lVar11 == 0) {
          uStack_78 = 0;
          lStack_70 = 0xe000000000000000;
          func_0x00010006c00c(uVar13,uVar3);
          func_0x000107c602fc(0x12);
          func_0x000107c6142c(lStack_70);
          uStack_78 = 0xd000000000000014;
          lStack_70 = -0x7ffffffef0ef2620;
        }
        else {
          uStack_78 = *puVar1;
          lStack_70 = lVar11;
          func_0x00010006c00c(uVar13,uVar3);
          func_0x000107c61434(lVar11);
          func_0x000107c5fb78(0x5f6d6574695f,0xe600000000000000);
        }
        puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar10);
        lVar11 = lStack_70;
        uVar5 = uStack_78;
        uVar8 = 0;
        func_0x0001044443ac(0);
        func_0x000107c610f8();
        uVar9 = 0xd00000000000001e;
        func_0x00010444388c(0xd00000000000001e,0x800000010f10d920,uVar5,lVar11,0,uVar8);
        func_0x00010006c090(uVar13,uVar3);
        uVar2 = *(ulong *)(puVar4 + 0x10);
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
          FUN_102761580(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
        }
        uVar16 = uVar16 + 1;
        *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar4 + uVar2 * 8 + 0x20) = uVar9;
        puVar14 = puVar14 + 2;
      } while (uVar12 != uVar16);
    }
    func_0x000107c6142c(lVar15);
    uVar13 = 0;
    func_0x0001044443ac(0);
    puVar10 = puVar4;
    func_0x000107c5fc48(puVar4,uVar13);
    func_0x000107c61574(puVar4);
    func_0x000107c505d4(param_1);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar10);
  }
  return;
}



/* Entry: 102db7e3c; end: 102db7e47; -[_TtC29SCImpalaSnapDocPlaybackPlugin30SCImpalaSnapDocOperaDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_102db7e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102db7a68(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102db7e48; end: 102db7e9b;  */

void FUN_102db7e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102db7e9c; end: 102db8067;  */

/* WARNING: Possible PIC construction at 0x000102db7f18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db7f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db7f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db7ffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102db7f64) */
/* WARNING: Removing unreachable block (ram,0x000102db7f6c) */
/* WARNING: Removing unreachable block (ram,0x000102db7f7c) */
/* WARNING: Removing unreachable block (ram,0x000102db7f30) */
/* WARNING: Removing unreachable block (ram,0x000102db7f1c) */
/* WARNING: Removing unreachable block (ram,0x000102db8000) */
/* WARNING: Removing unreachable block (ram,0x000102db8020) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db7e9c(long param_1,code *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 != 0) {
    uVar1 = 0;
    FUN_102db0698(0);
    lVar2 = param_1;
    func_0x000107c61480(param_1,uVar1);
    if (lVar2 == 0) {
      FUN_102db02e4();
      lVar3 = param_1;
      func_0x000107c61480(param_1,lVar2);
      if (lVar3 == 0) goto LAB_102db8040;
      uVar4 = *(undefined8 *)(lVar3 + _DAT_112f17a20);
      func_0x000107c61174(param_1);
      uVar1 = uVar4;
      func_0x000107c61174(uVar4);
      func_0x000107c5ee30(uVar4);
    }
    else {
      uVar1 = 0;
      func_0x0001044410f4(0);
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000104440658(0xd000000000000019,0x800000010f10d9c0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
LAB_102db8040:
  (*param_2)(0);
  return;
}



/* Entry: 102db8068; end: 102db97cb;  */

/* WARNING: Removing unreachable block (ram,0x000102db81f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db8068(code *param_1,code **param_2,code *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  code **ppcVar5;
  undefined8 uVar6;
  code *pcVar7;
  code **ppcVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined **ppuVar12;
  code *pcVar13;
  code **ppcVar14;
  undefined1 *puVar15;
  undefined **ppuVar16;
  uint uVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar18;
  code *pcVar19;
  code *unaff_x20;
  long lVar20;
  long lVar21;
  undefined1 auStack_170 [8];
  long lStack_168;
  long lStack_160;
  long lStack_158;
  code **ppcStack_150;
  code *pcStack_148;
  code *pcStack_140;
  code *pcStack_138;
  code *pcStack_130;
  code **ppcStack_128;
  undefined1 *puStack_120;
  long lStack_118;
  code *pcStack_110;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  code *pcStack_c8;
  code **ppcStack_c0;
  code *pcStack_b0;
  code *pcStack_a8;
  code **ppcStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  code *pcStack_88;
  
  pcVar3 = unaff_x20;
  func_0x000107c614f0();
  lVar4 = 0;
  pcStack_110 = pcVar3;
  func_0x000107c5ede0();
  lVar21 = *(long *)(lVar4 + -8);
  lStack_118 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = (long)(auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar4 = 0;
  func_0x000107c5eec8();
  lVar20 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x00010006c00c(param_1,param_2);
  pcVar3 = param_1;
  func_0x0001010282b0(param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  lStack_160 = lVar21;
  lStack_158 = lVar18;
  pcStack_138 = (code *)(lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  pcStack_130 = (code *)lVar20;
  ppcStack_128 = (code **)lVar4;
  puStack_120 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61170(pcVar3);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x00010006c00c(param_1,param_2);
  pcVar19 = param_1;
  func_0x0001010282b0(param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  pcVar3 = pcVar19;
  ppcStack_150 = param_2;
  FUN_102dbd1b8();
  lVar4 = _DAT_112f17b18;
  ppcVar14 = &pcStack_a8;
  pcStack_140 = pcVar3;
  func_0x000107c61428(unaff_x20 + _DAT_112f17b18,ppcVar14,0x20,0);
  ppcVar8 = ppcStack_128;
  pcVar7 = pcStack_130;
  pcVar3 = pcStack_138;
  lStack_168 = lVar4;
  lVar4 = *(long *)(unaff_x20 + lVar4);
  pcStack_148 = pcVar19;
  if (*(long *)(lVar4 + 0x10) == 0) {
LAB_102db82ec:
    ppcVar5 = &pcStack_a8;
    func_0x000107c614a8(ppcVar5);
    pcStack_a8 = (code *)0x5f6e776f6e6b6e75;
    ppcStack_a0 = (code **)0xe800000000000000;
    func_0x000107c5eec4(pcVar3);
    func_0x000107c5eeac();
    (**(code **)((long)pcVar7 + 8))(pcVar3,ppcVar8);
    func_0x000107c5fb78(ppcVar5,ppcVar14);
    func_0x000107c6142c(ppcVar14);
    ppcVar8 = ppcStack_a0;
    pcVar3 = pcStack_a8;
  }
  else {
    func_0x000107c61434(lVar4);
    pcVar19 = param_1;
    ppcVar14 = ppcStack_150;
    FUN_102dba280(param_1,ppcStack_150,PTR___s10Foundation4DataV4hash4intoys6HasherVz_tF_110350a88,
                  FUN_102dba2f8);
    if (((ulong)ppcVar14 & 1) == 0) {
      func_0x000107c6142c(lVar4);
      goto LAB_102db82ec;
    }
    plVar1 = (long *)(*(long *)(lVar4 + 0x38) + (long)pcVar19 * 0x10);
    pcVar3 = (code *)*plVar1;
    ppcVar8 = (code **)plVar1[1];
    func_0x000107c61434(ppcVar8);
    func_0x000107c614a8(&pcStack_a8);
    func_0x000107c6142c(lVar4);
  }
  pcStack_a8 = (code *)0x0;
  ppcStack_a0 = (code **)0xe000000000000000;
  func_0x000107c602fc(0x11);
  func_0x000107c6142c(ppcStack_a0);
  pcStack_a8 = (code *)0x735f616c61706d69;
  ppcStack_a0 = (code **)0xef5f636f6470616e;
  ppcStack_128 = ppcVar8;
  func_0x000107c5fb78(pcVar3,ppcVar8);
  ppcVar8 = ppcStack_a0;
  pcVar7 = pcStack_a8;
  uVar6 = 0;
  func_0x0001044410f4(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000104440658(pcVar7,ppcVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c6142c(ppcVar8);
  func_0x000104440b54();
  func_0x000107c61170(pcVar7);
  pcStack_a8 = (code *)0x0;
  ppcVar14 = &pcStack_a8;
  func_0x000107c5f9e4(ppcVar8,ppcVar14,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                      PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(ppcVar8);
  pcVar7 = pcStack_a8;
  pcStack_130 = pcVar3;
  if (pcStack_a8 == (code *)0x0) {
    pcVar7 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100214a84();
  }
  ppuVar9 = &PTR____CFConstantStringClassReference_110f0be98;
  pcStack_88 = pcVar7;
  func_0x000107c5faec();
  pcVar3 = (code *)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  puVar10 = (undefined *)0x0;
  FUN_102dbd588(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  pcStack_c8 = pcVar3;
  pcStack_b0 = (code *)puVar10;
  if (puVar10 == (undefined *)0x0) {
    ppcVar8 = (code **)0x112d387f8;
    FUN_102dbd694(&pcStack_c8,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(&pcStack_a8,ppuVar9,ppcVar14);
    func_0x000107c6142c(ppcVar14);
    FUN_102dbd694(&pcStack_a8,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&pcStack_c8,&pcStack_a8);
    pcVar3 = pcVar7;
    func_0x000107c61558(pcVar7);
    pcStack_c8 = pcVar7;
    func_0x0001001029e8(&pcStack_a8,ppuVar9,ppcVar14,pcVar3);
    func_0x000107c6142c(ppcVar14);
    pcStack_88 = pcStack_c8;
    ppcVar8 = (code **)ppuVar9;
  }
  pcVar3 = pcStack_148;
  pcVar7 = pcStack_148;
  FUN_102dbd3a4();
  puVar15 = puStack_120;
  if ((int)pcStack_140 == 1) {
    if (ppcVar8 == (code **)0x0) goto LAB_102db8604;
    pcVar19 = *(code **)(unaff_x20 + _DAT_112f17b60);
    if (pcVar19 == (code *)0x0) goto LAB_102db85fc;
    ppuVar9 = &PTR____CFConstantStringClassReference_110f0c038;
    ppcVar14 = ppcVar8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c038);
    lVar4 = 0;
    FUN_102dafe04();
    pcStack_c8 = pcVar19;
    pcStack_b0 = (code *)lVar4;
    if (lVar4 == 0) {
      func_0x000107c61174(pcVar19);
      func_0x000107c61174();
      ppuVar12 = (undefined **)0x112d387f8;
      FUN_102dbd694(&pcStack_c8,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(&pcStack_a8,ppuVar9,ppcVar14);
      func_0x000107c6142c(ppcVar14);
      pcVar3 = pcStack_148;
      FUN_102dbd694(&pcStack_a8,0x112d387f8,&UNK_10d902650);
    }
    else {
      func_0x000100102924(&pcStack_c8,&pcStack_a8);
      func_0x000107c61174(pcVar19);
      func_0x000107c61174();
      pcVar13 = pcStack_88;
      pcVar11 = pcStack_88;
      func_0x000107c61558(pcStack_88);
      pcStack_c8 = pcVar13;
      func_0x0001001029e8(&pcStack_a8,ppuVar9,ppcVar14,pcVar11);
      func_0x000107c6142c(ppcVar14);
      pcStack_88 = pcStack_c8;
      ppuVar12 = ppuVar9;
    }
    pcVar13 = pcStack_88;
    ppuVar9 = &PTR____CFConstantStringClassReference_110f0c078;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c078);
    pcStack_b0 = (code *)PTR___sSSN_11034da80;
    pcStack_c8 = pcVar7;
    ppcStack_c0 = ppcVar8;
    func_0x000100102924(&pcStack_c8,&pcStack_a8);
    func_0x000107c61434(ppcVar8);
    pcVar7 = pcVar13;
    func_0x000107c61558(pcVar13);
    pcStack_c8 = pcVar13;
    func_0x0001001029e8(&pcStack_a8,ppuVar9,ppuVar12,pcVar7);
    func_0x000107c6142c(ppuVar12);
    pcVar7 = pcStack_c8;
    ppuVar12 = &PTR____CFConstantStringClassReference_110f0c058;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c058);
    pcStack_c8 = (code *)0x1;
    pcStack_b0 = (code *)PTR___sSuN_11034e220;
    func_0x000100102924(&pcStack_c8,&pcStack_a8);
    pcVar13 = pcVar7;
    func_0x000107c61558(pcVar7);
    pcStack_c8 = pcVar7;
    func_0x0001001029e8(&pcStack_a8,ppuVar12,ppuVar9,pcVar13);
    func_0x000107c6142c(ppuVar9);
    pcVar7 = pcStack_c8;
    ppuVar9 = &PTR____CFConstantStringClassReference_110f0e8d8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e8d8);
    pcStack_c8 = (code *)((ulong)pcStack_c8 & 0xffffffffffffff00);
    pcStack_b0 = (code *)PTR___sSbN_11034dd40;
    func_0x000100102924(&pcStack_c8,&pcStack_a8);
    pcVar13 = pcVar7;
    func_0x000107c61558(pcVar7);
    pcStack_c8 = pcVar7;
    func_0x0001001029e8(&pcStack_a8,ppuVar9,ppuVar12,pcVar13);
    func_0x000107c61170(pcVar19);
    func_0x000107c6142c(ppcVar8);
    func_0x000107c6142c(ppuVar12);
    pcStack_88 = pcStack_c8;
    pcVar7 = pcStack_c8;
  }
  else {
LAB_102db85fc:
    func_0x000107c6142c(ppcVar8);
LAB_102db8604:
    if ((unaff_x20[_DAT_112f17b70] == (code)0x1) &&
       (pcVar7 = param_1, ppcVar8 = ppcStack_150, func_0x000102db1e24(param_1,ppcStack_150),
       lVar4 = _DAT_112f17b30, ((ulong)pcVar7 & 1) != 0)) {
      ppcVar8 = &pcStack_a8;
      func_0x000107c61428(unaff_x20 + _DAT_112f17b30,ppcVar8,0x20,0);
      lVar4 = *(long *)(unaff_x20 + lVar4);
      if (*(long *)(lVar4 + 0x10) != 0) {
        func_0x000107c61434(lVar4);
        pcVar3 = pcStack_130;
        ppcVar8 = ppcStack_128;
        FUN_102dba280(pcStack_130,ppcStack_128,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,
                      &UNK_1000292e8);
        lVar20 = lStack_118;
        lVar18 = lStack_160;
        if (((ulong)ppcVar8 & 1) != 0) {
          pcStack_138 = *(code **)(lStack_160 + 0x10);
          (*pcStack_138)(puVar15,*(long *)(lVar4 + 0x38) +
                                 *(long *)(lStack_160 + 0x48) * (long)pcVar3,lStack_118);
          (**(code **)(lVar18 + 0x20))(lStack_158,puVar15,lVar20);
          func_0x000107c614a8(&pcStack_a8);
          func_0x000107c6142c(lVar4);
          ppuVar9 = &PTR____CFConstantStringClassReference_110f0bc38;
          func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc38);
          pcVar3 = (code *)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c46ed0();
          pcStack_c8 = pcVar3;
          if (puVar10 == (undefined *)0x0) {
            ppuVar12 = (undefined **)0x112d387f8;
            pcStack_b0 = (code *)puVar10;
            FUN_102dbd694(&pcStack_c8,0x112d387f8,&UNK_10d902650);
            func_0x000100216878(&pcStack_a8,ppuVar9,puVar15);
            func_0x000107c6142c(puVar15);
            FUN_102dbd694(&pcStack_a8,0x112d387f8,&UNK_10d902650);
          }
          else {
            pcStack_b0 = (code *)puVar10;
            func_0x000100102924(&pcStack_c8,&pcStack_a8);
            pcVar3 = pcStack_88;
            pcVar7 = pcStack_88;
            func_0x000107c61558(pcStack_88);
            pcStack_c8 = pcVar3;
            func_0x0001001029e8(&pcStack_a8,ppuVar9,puVar15,pcVar7);
            func_0x000107c6142c(puVar15);
            pcStack_88 = pcStack_c8;
            ppuVar12 = ppuVar9;
          }
          ppuVar9 = &PTR____CFConstantStringClassReference_110f0bc58;
          func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc58);
          pcVar3 = (code *)PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c46ed0();
          pcStack_c8 = pcVar3;
          if (puVar10 == (undefined *)0x0) {
            ppuVar16 = (undefined **)0x112d387f8;
            pcStack_b0 = (code *)puVar10;
            FUN_102dbd694(&pcStack_c8,0x112d387f8,&UNK_10d902650);
            func_0x000100216878(&pcStack_a8,ppuVar9,ppuVar12);
            func_0x000107c6142c(ppuVar12);
            FUN_102dbd694(&pcStack_a8,0x112d387f8,&UNK_10d902650);
          }
          else {
            pcStack_b0 = (code *)puVar10;
            func_0x000100102924(&pcStack_c8,&pcStack_a8);
            pcVar3 = pcStack_88;
            pcVar7 = pcStack_88;
            func_0x000107c61558(pcStack_88);
            pcStack_c8 = pcVar3;
            func_0x0001001029e8(&pcStack_a8,ppuVar9,ppuVar12,pcVar7);
            func_0x000107c6142c(ppuVar12);
            pcStack_88 = pcStack_c8;
            ppuVar16 = ppuVar9;
          }
          pcVar3 = pcStack_88;
          ppuVar9 = &PTR____CFConstantStringClassReference_110f0e8d8;
          func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e8d8);
          pcStack_c8 = (code *)((ulong)pcStack_c8 & 0xffffffffffffff00);
          pcStack_b0 = (code *)PTR___sSbN_11034dd40;
          func_0x000100102924(&pcStack_c8,&pcStack_a8);
          pcVar7 = pcVar3;
          func_0x000107c61558(pcVar3);
          pcStack_c8 = pcVar3;
          func_0x0001001029e8(&pcStack_a8,ppuVar9,ppuVar16,pcVar7);
          func_0x000107c6142c(ppuVar16);
          pcVar7 = pcStack_c8;
          pcStack_88 = pcStack_c8;
          ppuVar12 = &PTR____CFConstantStringClassReference_110e158b8;
          func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e158b8);
          lStack_90 = lStack_118;
          func_0x0001000a9d90(&pcStack_a8);
          (*pcStack_138)();
          pcVar3 = pcStack_148;
          ppuStack_e8 = ppcStack_a0;
          pcStack_f0 = pcStack_a8;
          lStack_d8 = lStack_90;
          uStack_e0 = uStack_98;
          if (lStack_90 == 0) {
            ppuVar16 = (undefined **)0x112d387f8;
            FUN_102dbd694(&pcStack_f0,0x112d387f8,&UNK_10d902650);
            func_0x000100216878(&pcStack_c8,ppuVar12,ppuVar9);
            func_0x000107c6142c(ppuVar9);
            pcVar3 = pcStack_148;
            FUN_102dbd694(&pcStack_c8,0x112d387f8,&UNK_10d902650);
          }
          else {
            func_0x000100102924(&pcStack_f0,&pcStack_c8);
            pcVar19 = pcVar7;
            func_0x000107c61558(pcVar7);
            pcStack_f0 = pcVar7;
            func_0x0001001029e8(&pcStack_c8,ppuVar12,ppuVar9,pcVar19);
            func_0x000107c6142c(ppuVar9);
            pcStack_88 = pcStack_f0;
            ppuVar16 = ppuVar12;
          }
          ppuVar9 = &PTR____CFConstantStringClassReference_110f0c038;
          func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c038);
          pcStack_b0 = pcStack_110;
          if (pcStack_110 == (code *)0x0) {
            pcStack_c8 = unaff_x20;
            func_0x000107c61174(unaff_x20);
            ppuVar12 = (undefined **)0x112d387f8;
            FUN_102dbd694(&pcStack_c8,0x112d387f8,&UNK_10d902650);
            func_0x000100216878(&pcStack_a8,ppuVar9,ppuVar16);
            func_0x000107c6142c(ppuVar16);
            pcVar3 = pcStack_148;
            FUN_102dbd694(&pcStack_a8,0x112d387f8,&UNK_10d902650);
          }
          else {
            func_0x000100102924(&pcStack_c8,&pcStack_a8);
            func_0x000107c61174(unaff_x20);
            pcVar7 = pcStack_88;
            pcVar19 = pcStack_88;
            func_0x000107c61558(pcStack_88);
            pcStack_c8 = pcVar7;
            func_0x0001001029e8(&pcStack_a8,ppuVar9,ppuVar16,pcVar19);
            func_0x000107c6142c(ppuVar16);
            pcStack_88 = pcStack_c8;
            ppuVar12 = ppuVar9;
          }
          pcVar7 = pcStack_88;
          ppuVar9 = &PTR____CFConstantStringClassReference_110f0c238;
          func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c238);
          pcStack_c8 = (code *)0x1;
          pcStack_b0 = (code *)PTR___sSuN_11034e220;
          func_0x000100102924(&pcStack_c8,&pcStack_a8);
          pcVar19 = pcVar7;
          func_0x000107c61558(pcVar7);
          pcStack_c8 = pcVar7;
          func_0x0001001029e8(&pcStack_a8,ppuVar9,ppuVar12,pcVar19);
          func_0x000107c6142c(ppuVar12);
          pcVar7 = pcStack_c8;
          pcStack_88 = pcStack_c8;
          (**(code **)(lStack_160 + 8))(lStack_158,lStack_118);
          goto LAB_102db8f7c;
        }
        func_0x000107c6142c(lVar4);
      }
      func_0x000107c614a8(&pcStack_a8);
      ppuVar9 = &PTR____CFConstantStringClassReference_110f0bc38;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc38);
      pcVar3 = (code *)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ed0();
      pcStack_c8 = pcVar3;
      if (puVar10 == (undefined *)0x0) {
        ppuVar12 = (undefined **)0x112d387f8;
        pcStack_b0 = (code *)puVar10;
        FUN_102dbd694(&pcStack_c8,0x112d387f8,&UNK_10d902650);
        func_0x000100216878(&pcStack_a8,ppuVar9,ppcVar8);
        func_0x000107c6142c(ppcVar8);
        FUN_102dbd694(&pcStack_a8,0x112d387f8,&UNK_10d902650);
      }
      else {
        pcStack_b0 = (code *)puVar10;
        func_0x000100102924(&pcStack_c8,&pcStack_a8);
        pcVar3 = pcStack_88;
        pcVar7 = pcStack_88;
        func_0x000107c61558(pcStack_88);
        pcStack_c8 = pcVar3;
        func_0x0001001029e8(&pcStack_a8,ppuVar9,ppcVar8,pcVar7);
        func_0x000107c6142c(ppcVar8);
        pcStack_88 = pcStack_c8;
        ppuVar12 = ppuVar9;
      }
      ppuVar9 = &PTR____CFConstantStringClassReference_110f0bc58;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc58);
      pcVar3 = (code *)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ed0();
      pcStack_c8 = pcVar3;
      if (puVar10 == (undefined *)0x0) {
        pcStack_b0 = (code *)puVar10;
        FUN_102dbd694(&pcStack_c8,0x112d387f8,&UNK_10d902650);
        func_0x000100216878(&pcStack_a8,ppuVar9,ppuVar12);
        func_0x000107c6142c(ppuVar12);
        FUN_102dbd694(&pcStack_a8,0x112d387f8,&UNK_10d902650);
        func_0x000107c6142c(ppcStack_128);
        pcVar7 = pcStack_88;
      }
      else {
        pcStack_b0 = (code *)puVar10;
        func_0x000100102924(&pcStack_c8,&pcStack_a8);
        pcVar3 = pcStack_88;
        pcVar7 = pcStack_88;
        func_0x000107c61558(pcStack_88);
        pcStack_c8 = pcVar3;
        func_0x0001001029e8(&pcStack_a8,ppuVar9,ppuVar12,pcVar7);
        func_0x000107c6142c(ppcStack_128);
        func_0x000107c6142c(ppuVar12);
        pcVar7 = pcStack_c8;
      }
      pcVar3 = pcStack_148;
      func_0x000104445474(0);
      func_0x000107c610f8();
      pcVar19 = pcVar7;
      func_0x000107c61434(pcVar7);
      func_0x000104445210();
      pcVar13 = pcVar19;
      func_0x000107c61174();
      (*param_3)(pcVar19);
      func_0x000107c6142c(pcVar7);
      func_0x000107c61170(pcVar13);
      func_0x000107c61170(pcVar13);
      goto LAB_102db9724;
    }
    ppuVar9 = &PTR____CFConstantStringClassReference_110f0e8d8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e8d8);
    pcStack_c8 = (code *)CONCAT71(pcStack_c8._1_7_,1);
    pcStack_b0 = (code *)PTR___sSbN_11034dd40;
    func_0x000100102924(&pcStack_c8,&pcStack_a8);
    pcVar7 = pcStack_88;
    pcVar19 = pcStack_88;
    func_0x000107c61558(pcStack_88);
    pcStack_c8 = pcVar7;
    func_0x0001001029e8(&pcStack_a8,ppuVar9,ppcVar8,pcVar19);
    func_0x000107c6142c(ppcVar8);
    pcStack_88 = pcStack_c8;
    pcVar7 = pcStack_c8;
  }
LAB_102db8f7c:
  lVar4 = *(long *)(unaff_x20 + _DAT_112f17b50);
  if (lVar4 != 0) {
    pcVar3 = (code *)&UNK_1105d0bf8;
    uVar6 = 0x18;
    func_0x000107c613fc(&UNK_1105d0bf8,0x18,7);
    *(long *)(pcVar3 + 0x10) = lVar4;
    ppuVar9 = &PTR____CFConstantStringClassReference_110f0c1d8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c1d8);
    ppcVar8 = (code **)&UNK_1105d0c20;
    func_0x000107c613fc(&UNK_1105d0c20,0x20,7);
    ppcVar8[2] = FUN_102dbd5c8;
    ppcVar8[3] = pcVar3;
    pcVar3 = (code *)0x112f17dd8;
    func_0x0001000285a8(0x112f17dd8,&UNK_10db4e320);
    pcStack_c8 = FUN_102dbd5e4;
    ppcStack_c0 = ppcVar8;
    pcStack_b0 = pcVar3;
    if (pcVar3 == (code *)0x0) {
      func_0x000107c61174(lVar4);
      FUN_102dbd694(&pcStack_c8,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(&pcStack_a8,ppuVar9,uVar6);
      func_0x000107c6142c(uVar6);
      FUN_102dbd694(&pcStack_a8,0x112d387f8,&UNK_10d902650);
      pcVar3 = pcStack_148;
    }
    else {
      func_0x000100102924(&pcStack_c8,&pcStack_a8);
      func_0x000107c61174(lVar4);
      pcVar3 = pcVar7;
      func_0x000107c61558(pcVar7);
      pcStack_c8 = pcVar7;
      func_0x0001001029e8(&pcStack_a8,ppuVar9,uVar6,pcVar3);
      func_0x000107c6142c(uVar6);
      pcStack_88 = pcStack_c8;
      pcVar3 = pcStack_148;
    }
  }
  lVar4 = _DAT_112f17b40;
  ppcVar8 = &pcStack_a8;
  func_0x000107c61428(unaff_x20 + _DAT_112f17b40,ppcVar8,0x20,0);
  ppcVar14 = ppcStack_128;
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (*(long *)(lVar4 + 0x10) == 0) {
LAB_102db92bc:
    func_0x000107c614a8(&pcStack_a8);
LAB_102db92e8:
    ppcVar5 = ppcStack_150;
    if (unaff_x20[_DAT_112f17b70] == (code)0x1) {
      ppcVar8 = ppcStack_150;
      func_0x000102db1e24(param_1,ppcStack_150);
    }
    func_0x000107c6142c(ppcVar14);
  }
  else {
    func_0x000107c61434(lVar4);
    pcVar7 = pcStack_130;
    ppcVar8 = ppcVar14;
    FUN_102dba280(pcStack_130,ppcVar14,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,&UNK_1000292e8);
    if (((ulong)ppcVar8 & 1) == 0) {
      func_0x000107c6142c(lVar4);
      goto LAB_102db92bc;
    }
    plVar1 = (long *)(*(long *)(lVar4 + 0x38) + (long)pcVar7 * 0x10);
    pcVar7 = (code *)*plVar1;
    ppcVar14 = (code **)plVar1[1];
    func_0x000107c61434(ppcVar14);
    func_0x000107c614a8(&pcStack_a8);
    func_0x000107c6142c(lVar4);
    lVar4 = _DAT_112f17b38;
    ppcVar8 = &pcStack_a8;
    func_0x000107c61428(unaff_x20 + _DAT_112f17b38,ppcVar8,0x20,0);
    lVar4 = *(long *)(unaff_x20 + lVar4);
    if (*(long *)(lVar4 + 0x10) == 0) {
LAB_102db92d0:
      func_0x000107c614a8(&pcStack_a8);
      func_0x000107c6142c(ppcVar14);
      ppcVar14 = ppcStack_128;
      goto LAB_102db92e8;
    }
    func_0x000107c61434(lVar4);
    pcVar19 = pcVar7;
    ppcVar8 = ppcVar14;
    FUN_102dba280(pcVar7,ppcVar14,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,&UNK_1000292e8);
    if (((ulong)ppcVar8 & 1) == 0) {
      func_0x000107c6142c(lVar4);
      goto LAB_102db92d0;
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + (long)pcVar19 * 8);
    func_0x000107c61174(uVar6);
    func_0x000107c614a8(&pcStack_a8);
    func_0x000107c61170(uVar6);
    func_0x000107c6142c(lVar4);
    ppuVar9 = &PTR____CFConstantStringClassReference_110f0c098;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c098);
    pcStack_b0 = (code *)PTR___sSSN_11034da80;
    pcStack_c8 = pcVar7;
    ppcStack_c0 = ppcVar14;
    func_0x000100102924(&pcStack_c8,&pcStack_a8);
    func_0x000107c61434(ppcVar14);
    pcVar7 = pcStack_88;
    pcVar19 = pcStack_88;
    func_0x000107c61558(pcStack_88);
    pcStack_c8 = pcVar7;
    func_0x0001001029e8(&pcStack_a8,ppuVar9,ppcVar8,pcVar19);
    func_0x000107c6142c(ppcVar8);
    pcVar7 = pcStack_c8;
    pcStack_88 = pcStack_c8;
    ppuVar12 = &PTR____CFConstantStringClassReference_110f0c038;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c038);
    pcStack_b0 = pcStack_110;
    if (pcStack_110 == (code *)0x0) {
      pcStack_c8 = unaff_x20;
      func_0x000107c61174(unaff_x20);
      ppcVar8 = (code **)0x112d387f8;
      FUN_102dbd694(&pcStack_c8,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(&pcStack_a8,ppuVar12,ppuVar9);
      func_0x000107c6142c(ppuVar9);
      pcVar3 = pcStack_148;
      FUN_102dbd694(&pcStack_a8,0x112d387f8,&UNK_10d902650);
      func_0x000107c6142c(ppcVar14);
      func_0x000107c6142c(ppcStack_128);
      ppcVar5 = ppcStack_150;
    }
    else {
      func_0x000100102924(&pcStack_c8,&pcStack_a8);
      func_0x000107c61174(unaff_x20);
      pcVar19 = pcVar7;
      func_0x000107c61558(pcVar7);
      pcStack_c8 = pcVar7;
      func_0x0001001029e8(&pcStack_a8,ppuVar12,ppuVar9,pcVar19);
      func_0x000107c6142c(ppcVar14);
      func_0x000107c6142c(ppcStack_128);
      func_0x000107c6142c(ppuVar9);
      pcStack_88 = pcStack_c8;
      ppcVar8 = (code **)ppuVar12;
      ppcVar5 = ppcStack_150;
    }
  }
  ppuVar9 = &PTR____CFConstantStringClassReference_110f0bc78;
  func_0x000107c5faec();
  pcStack_c8 = (code *)CONCAT71(pcStack_c8._1_7_,1);
  pcStack_b0 = (code *)PTR___sSbN_11034dd40;
  func_0x000100102924(&pcStack_c8,&pcStack_a8);
  pcVar7 = pcStack_88;
  pcVar19 = pcStack_88;
  func_0x000107c61558(pcStack_88);
  pcStack_c8 = pcVar7;
  func_0x0001001029e8(&pcStack_a8,ppuVar9,ppcVar8,pcVar19);
  func_0x000107c6142c(ppcVar8);
  pcVar7 = pcStack_c8;
  lVar4 = _DAT_112f17b20;
  if (*(long *)(unaff_x20 + _DAT_112f17b20) < 2) {
    ppuVar12 = &PTR____CFConstantStringClassReference_110f0c258;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c258);
    pcStack_c8 = (code *)0x1;
    pcStack_b0 = (code *)PTR___sSuN_11034e220;
    func_0x000100102924(&pcStack_c8,&pcStack_a8);
    pcVar19 = pcVar7;
    func_0x000107c61558(pcVar7);
    pcStack_c8 = pcVar7;
LAB_102db95a4:
    ppcVar14 = (code **)ppuVar12;
    ppuVar12 = ppuVar9;
    func_0x0001001029e8(&pcStack_a8,ppcVar14,ppuVar9,pcVar19);
    uVar17 = (uint)ppuVar12;
    func_0x000107c6142c(ppuVar9);
    pcStack_88 = pcStack_c8;
    pcVar7 = pcStack_c8;
  }
  else {
    ppuVar12 = &PTR____CFConstantStringClassReference_110f0bcb8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bcb8);
    pcStack_c8 = (code *)0x1;
    pcStack_b0 = (code *)PTR___sSiN_11034deb0;
    func_0x000100102924(&pcStack_c8,&pcStack_a8);
    pcVar19 = pcVar7;
    func_0x000107c61558(pcVar7);
    pcStack_c8 = pcVar7;
    func_0x0001001029e8(&pcStack_a8,ppuVar12,ppuVar9,pcVar19);
    func_0x000107c6142c(ppuVar9);
    pcVar7 = pcStack_c8;
    lVar18 = lStack_168;
    pcStack_88 = pcStack_c8;
    func_0x000107c61428(unaff_x20 + lStack_168,&pcStack_a8,0x20,0);
    lVar18 = *(long *)(unaff_x20 + lVar18);
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar17 = 0;
      uVar6 = 0xe000000000000000;
    }
    else {
      func_0x000107c61434(lVar18);
      FUN_102dba280(param_1,ppcVar5,PTR___s10Foundation4DataV4hash4intoys6HasherVz_tF_110350a88,
                    FUN_102dba2f8);
      if (((ulong)ppcVar5 & 1) == 0) {
        uVar17 = 0;
        uVar6 = 0xe000000000000000;
      }
      else {
        puVar2 = (undefined8 *)(*(long *)(lVar18 + 0x38) + (long)param_1 * 0x10);
        uVar17 = (uint)*puVar2;
        uVar6 = puVar2[1];
        func_0x000107c61434(uVar6);
      }
      func_0x000107c6142c(lVar18);
    }
    func_0x000107c614a8(&pcStack_a8);
    pcStack_a8 = (code *)0x5f6d6574695f;
    ppcStack_a0 = (code **)0xe600000000000000;
    if (SBORROW8(*(long *)(unaff_x20 + lVar4),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102db97cc);
      (*pcVar3)();
    }
    puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    pcStack_c8 = (code *)(*(long *)(unaff_x20 + lVar4) + -1);
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar10);
    ppcVar8 = ppcStack_a0;
    pcVar19 = pcStack_a8;
    ppcVar14 = ppcStack_a0;
    func_0x000107c5fbb8();
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(ppcVar8);
    if (((ulong)pcVar19 & 1) != 0) {
      ppuVar12 = &PTR____CFConstantStringClassReference_110f0be38;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0be38);
      pcStack_c8 = (code *)CONCAT71(pcStack_c8._1_7_,1);
      pcStack_b0 = (code *)PTR___sSbN_11034dd40;
      func_0x000100102924(&pcStack_c8,&pcStack_a8);
      pcVar19 = pcVar7;
      func_0x000107c61558(pcVar7);
      ppuVar9 = ppcVar14;
      pcStack_c8 = pcVar7;
      goto LAB_102db95a4;
    }
  }
  pcVar19 = pcVar3;
  FUN_102db1fdc(pcVar3);
  if ((uVar17 & 0xff) != 1) {
    ppuVar12 = &PTR____CFConstantStringClassReference_110f0d418;
    ppuVar9 = ppcVar14;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0d418);
    pcVar13 = (code *)PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x000107c61168();
    func_0x000107c5dc58(pcVar19,ppcVar14);
    func_0x000107c61180();
    puVar10 = (undefined *)0x0;
    FUN_102dbd588(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
    pcStack_c8 = pcVar13;
    pcStack_b0 = (code *)puVar10;
    if (puVar10 == (undefined *)0x0) {
      FUN_102dbd694(&pcStack_c8,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(&pcStack_a8,ppuVar12,ppuVar9);
      func_0x000107c6142c(ppuVar9);
      FUN_102dbd694(&pcStack_a8,0x112d387f8,&UNK_10d902650);
      pcVar7 = pcStack_88;
    }
    else {
      func_0x000100102924(&pcStack_c8,&pcStack_a8);
      pcVar19 = pcVar7;
      func_0x000107c61558(pcVar7);
      pcStack_c8 = pcVar7;
      func_0x0001001029e8(&pcStack_a8,ppuVar12,ppuVar9,pcVar19);
      func_0x000107c6142c(ppuVar9);
      pcStack_88 = pcStack_c8;
      pcVar7 = pcStack_c8;
    }
  }
  func_0x000104445474(0);
  func_0x000107c610f8();
  pcVar19 = pcVar7;
  func_0x000107c61434(pcVar7);
  func_0x000104445210();
  pcVar13 = pcVar19;
  func_0x000107c61174();
  (*param_3)(pcVar19);
  func_0x000107c6142c(pcVar7);
  func_0x000107c61170(pcVar13);
  func_0x000107c61170(pcVar13);
LAB_102db9724:
  func_0x000107c61170(pcVar3);
  return;
}



/* Entry: 102db97cc; end: 102db983b; -[_TtC29SCImpalaSnapDocPlaybackPlugin30SCImpalaSnapDocOperaDataSource pageDataForDataModel:completion:] */

void FUN_102db97cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = param_3;
  uStack_40 = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102db7e9c(param_3,FUN_102dbce90,auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102db983c; end: 102db9997; -[_TtC29SCImpalaSnapDocPlaybackPlugin30SCImpalaSnapDocOperaDataSource imageForKey:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db983c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long *plVar5;
  long lVar6;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  func_0x000107c5f854();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  plVar5 = (long *)((long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5faec(param_3);
  FUN_102dbd588(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c61174();
  lVar3 = param_1;
  func_0x000107c5ffdc();
  *plVar5 = lVar3;
  (**(code **)(lVar6 + 0x68))
            (plVar5,*(undefined4 *)
                     PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_11034f8c0
             ,lVar2);
  plVar4 = plVar5;
  func_0x000107c5f860();
  (**(code **)(lVar6 + 8))(plVar5,lVar2);
  lVar3 = _DAT_112f17b38;
  if (((ulong)plVar4 & 1) != 0) {
    func_0x000107c61428(param_1 + _DAT_112f17b38,auStack_68,0x20,0);
    FUN_102db0a34(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
    func_0x000107c614a8(auStack_68);
    (**(code **)(param_4 + 0x10))(param_4,param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102db9998);
  (*pcVar1)();
}



/* Entry: 102db9998; end: 102db9ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102db9998(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c3b9ac();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  lVar5 = _DAT_112f17b10;
  func_0x000107c61428(unaff_x20 + _DAT_112f17b10,auStack_48,0x20,0);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (*(long *)(lVar5 + 0x10) != 0) {
    func_0x000107c61434(lVar5);
    uVar4 = param_2;
    FUN_102dba280(lVar2,param_2,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,&UNK_1000292e8);
    if ((uVar4 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar2 * 0x10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      func_0x00010006c00c(uVar3,uVar4);
      func_0x000107c6142c(lVar5);
      func_0x000107c6142c(param_2);
      func_0x000107c614a8(auStack_48);
      if (uVar4 >> 0x3c < 0xf) {
        func_0x0001000b44c0(uVar3,uVar4);
        func_0x0001000b44c0(0,0xf000000000000000);
        return 1;
      }
      goto LAB_102db9a9c;
    }
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c6142c(param_2);
  func_0x000107c614a8(auStack_48);
  uVar3 = 0;
  uVar4 = 0xf000000000000000;
LAB_102db9a9c:
  func_0x0001000b44c0(uVar3,uVar4);
  return 0;
}



/* Entry: 102db9ab8; end: 102db9b13; -[_TtC29SCImpalaSnapDocPlaybackPlugin30SCImpalaSnapDocOperaDataSource canProvideMediaBundleForPlaylistItem:] */

uint FUN_102db9ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102db9998(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102db9b14; end: 102db9e7b;  */

/* WARNING: Removing unreachable block (ram,0x000102db9e28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102db9b14(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar12;
  long lVar13;
  ulong auStack_80 [6];
  
  uVar4 = 0;
  func_0x000107c5f854();
  lVar13 = *(long *)(uVar4 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar12 = (undefined8 *)((long)auStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar5 = 0;
  FUN_102dbd588(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  *puVar12 = uVar5;
  (**(code **)(lVar13 + 0x68))
            (puVar12,*(undefined4 *)
                      PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_11034f8c0
             ,uVar4);
  puVar6 = puVar12;
  func_0x000107c5f860();
  (**(code **)(lVar13 + 8))(puVar12);
  if (((ulong)puVar6 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102db9e7c);
    (*pcVar3)();
  }
  lVar13 = param_1;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  lVar7 = lVar13;
  func_0x000107c5faec();
  func_0x000107c61170(lVar13);
  lVar13 = _DAT_112f17b10;
  func_0x000107c61428(unaff_x20 + _DAT_112f17b10,auStack_80 + 3,0x20,0);
  lVar13 = *(long *)(unaff_x20 + lVar13);
  if (*(long *)(lVar13 + 0x10) != 0) {
    func_0x000107c61434(lVar13);
    uVar9 = uVar4;
    FUN_102dba280(lVar7,uVar4,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,&UNK_1000292e8);
    if ((uVar9 & 1) != 0) {
      puVar1 = (ulong *)(*(long *)(lVar13 + 0x38) + lVar7 * 0x10);
      uVar9 = *puVar1;
      uVar2 = puVar1[1];
      func_0x00010006c00c(uVar9,uVar2);
      func_0x000107c614a8(auStack_80 + 3);
      func_0x000107c6142c(lVar13);
      func_0x000107c6142c(uVar4);
      FUN_102db7660();
      if (param_1 != 0) {
        uVar4 = uVar9;
        uVar10 = uVar2;
        FUN_102dadf98(uVar9,uVar2,*(undefined8 *)(param_1 + _DAT_112f17a98));
        if (((uint)uVar10 & 0xff) == 1) {
          func_0x000107c61170(param_1);
        }
        else {
          auStack_80[4] = ((undefined8 *)(param_1 + _DAT_112f17aa0))[1];
          if (auStack_80[4] == 0) {
            auStack_80[3] = 0;
            auStack_80[4] = 0xe000000000000000;
            func_0x000107c602fc(0x11);
            func_0x000107c6142c(auStack_80[4]);
            auStack_80[3] = 0x735f616c61706d69;
            auStack_80[4] = -0x10a09c909b8f9e92;
          }
          else {
            auStack_80[3] = *(undefined8 *)(param_1 + _DAT_112f17aa0);
            func_0x000107c61434();
            func_0x000107c5fb78(0x5f70616e735f,0xe600000000000000);
          }
          puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          auStack_80[2] = uVar4;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar11);
          uVar10 = auStack_80[4];
          uVar4 = auStack_80[3];
          if ((*(char *)(unaff_x20 + _DAT_112f17b70) != '\x01') ||
             (uVar8 = uVar9, func_0x000102db1e24(uVar9,uVar2), (uVar8 & 1) == 0)) {
            func_0x0001000a8868(unaff_x20 + _DAT_112f17b58,
                                *(undefined8 *)(unaff_x20 + _DAT_112f17b58 + 0x18));
            uVar8 = uVar9;
            FUN_102db2128(uVar9,uVar2,uVar4,uVar10);
            func_0x000107c61170(param_1);
            func_0x000107c6142c(uVar10);
            func_0x00010006c090(uVar9,uVar2);
            return uVar8;
          }
          func_0x000107c61170(param_1);
          func_0x000107c6142c(uVar10);
        }
      }
      func_0x00010006c090(uVar9,uVar2);
      return 0;
    }
    func_0x000107c6142c(lVar13);
  }
  func_0x000107c6142c(uVar4);
  func_0x000107c614a8(auStack_80 + 3);
  return 0;
}



/* Entry: 102db9e7c; end: 102db9ed7; -[_TtC29SCImpalaSnapDocPlaybackPlugin30SCImpalaSnapDocOperaDataSource mediaBundleFromPlaylistItem:] */

void FUN_102db9e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102db9b14(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102db9ed8; end: 102db9f03; -[_TtC29SCImpalaSnapDocPlaybackPlugin30SCImpalaSnapDocOperaDataSource init] */

void FUN_102db9ed8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImpalaSnapDocPlaybackPlugin.SCImpalaSnapDocOperaDataSource",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102db9f04);
  (*pcVar1)();
}



/* Entry: 102db9f04; end: 102dba003;  */

/* WARNING: Removing unreachable block (ram,0x000102db9ff8) */

undefined1  [16] FUN_102db9f04(undefined8 ***param_1,ulong param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_40;
  ulong uStack_38;
  
  ppuStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c61434(param_2);
  pppuVar1 = &ppuStack_40;
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c5fbd4(pppuVar1,PTR___sSSN_11034da80,
                      PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    func_0x000100edbde8();
    func_0x000107c6142c(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      func_0x000107c60358();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    FUN_102dba004(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_38 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_40;
    ppuStack_40 = pppuVar1;
    FUN_102dba004(pppuVar2,puVar4,param_3);
  }
  func_0x000107c6142c(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 102dba004; end: 102dba27f;  */

undefined1  [16] FUN_102dba004(byte *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  iVar8 = (int)param_3;
  uVar7 = param_2;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102dba280);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) goto LAB_102dba270;
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_102dba270;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 + (ulong)(byte)(bVar3 + cVar12),
         SCARRY8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_102dba254;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  else {
    if (*param_1 != 0x2d) {
      if (param_2 != 0) {
        uVar1 = iVar8 + 0x30;
        uVar2 = 0x61;
        if (10 < param_3) {
          uVar2 = iVar8 + 0x57;
        }
        uVar5 = 0x41;
        if (10 < param_3) {
          uVar1 = 0x3a;
          uVar5 = iVar8 + 0x37;
        }
        if (param_1 == (byte *)0x0) {
          return ZEXT816(0);
        }
        uVar9 = 0;
        do {
          bVar3 = *param_1;
          if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
            uVar10 = (uint)bVar3;
            if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
              uVar7 = 1;
              if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_102dba270;
              cVar12 = -0x57;
            }
            else {
              cVar12 = -0x37;
            }
          }
          else {
            cVar12 = -0x30;
          }
          lVar11 = uVar9 * param_3;
          if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar11 >> 0x3f) ||
             (uVar9 = lVar11 + (ulong)(byte)(bVar3 + cVar12),
             SCARRY8(lVar11,(ulong)(byte)(bVar3 + cVar12)))) break;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          if (param_2 == 0) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar9;
            return auVar15;
          }
        } while( true );
      }
LAB_102dba254:
      return ZEXT816(1) << 0x40;
    }
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102dba27c);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) {
LAB_102dba270:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar7;
      return auVar4 << 0x40;
    }
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_102dba270;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 - (ulong)(byte)(bVar3 + cVar12),
         SBORROW8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_102dba254;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar9;
  return auVar14;
}



/* Entry: 102dba280; end: 102dba2f7;  */

void FUN_102dba280(undefined8 param_1,undefined8 param_2,code *param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_88 [72];
  
  func_0x000107c6068c(auStack_88,*(undefined8 *)(unaff_x20 + 0x28));
  puVar1 = auStack_88;
  (*param_3)(puVar1,param_1,param_2);
  func_0x000107c606a8();
                    /* WARNING: Could not recover jumptable at 0x000102dba2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,puVar1);
  return;
}



/* Entry: 102dba2f8; end: 102dba8c7;  */

ulong FUN_102dba2f8(long param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  long unaff_x20;
  uint uVar23;
  long lVar24;
  int iVar25;
  byte bStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  byte bStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar15 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    iVar25 = (int)param_1;
    iVar19 = (int)((ulong)param_1 >> 0x20);
    uVar16 = param_2 >> 0x30 & 0xff;
    lVar17 = (long)iVar25;
    lVar18 = (param_1 >> 0x20) - lVar17;
    do {
      plVar1 = (long *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      lVar2 = *plVar1;
      uVar3 = plVar1[1];
      uVar5 = (uint)(uVar3 >> 0x20);
      uVar14 = uVar5 >> 0x1e;
      uVar6 = (uint)(param_2 >> 0x20);
      uVar23 = uVar6 >> 0x1e;
      iVar9 = (int)lVar2;
      if (uVar3 >> 0x3e == 3) {
        if (((lVar2 == 0 && uVar3 == 0xc000000000000000) && 2 < param_2 >> 0x3e) &&
            (param_1 == 0 && param_2 == 0xc000000000000000)) break;
LAB_102dba464:
        uVar21 = 0;
joined_r0x000102dba448:
        if (uVar6 >> 0x1e < 2) goto LAB_102dba44c;
LAB_102dba470:
        if (uVar23 == 2) {
          uVar22 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
          if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x102dba88c);
            (*pcVar8)();
          }
          goto LAB_102dba484;
        }
        if (uVar21 == 0) break;
      }
      else {
        if (1 < uVar5 >> 0x1e) {
          if (uVar14 != 2) goto LAB_102dba464;
          uVar21 = *(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10);
          if (SBORROW8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x102dba894);
            (*pcVar8)();
          }
          goto joined_r0x000102dba448;
        }
        if (uVar14 == 0) {
          uVar21 = uVar3 >> 0x30 & 0xff;
          goto joined_r0x000102dba448;
        }
        iVar20 = (int)((ulong)lVar2 >> 0x20);
        if (SBORROW4(iVar20,iVar9)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x102dba890);
          (*pcVar8)();
        }
        uVar21 = (ulong)(iVar20 - iVar9);
        if (1 < uVar23) goto LAB_102dba470;
LAB_102dba44c:
        uVar22 = uVar16;
        if ((uVar23 != 0) && (uVar22 = (long)(iVar19 - iVar25), SBORROW4(iVar19,iVar25))) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x102dba888);
          (*pcVar8)();
        }
LAB_102dba484:
        if (uVar21 == uVar22) {
          if ((long)uVar21 < 1) break;
          if (uVar14 < 2) {
            if (uVar14 == 0) {
              bStack_88 = (byte)lVar2;
              uStack_87 = (undefined1)((ulong)lVar2 >> 8);
              uStack_86 = (undefined1)((ulong)lVar2 >> 0x10);
              uStack_85 = (undefined1)((ulong)lVar2 >> 0x18);
              uStack_84 = (undefined1)((ulong)lVar2 >> 0x20);
              uStack_83 = (undefined1)((ulong)lVar2 >> 0x28);
              uStack_82 = (undefined1)((ulong)lVar2 >> 0x30);
              uStack_81 = (undefined1)((ulong)lVar2 >> 0x38);
              uStack_80 = (undefined1)uVar3;
              uStack_7f = (undefined1)(uVar3 >> 8);
              uStack_7e = (undefined1)(uVar3 >> 0x10);
              uStack_7d = (undefined1)(uVar3 >> 0x18);
              uStack_7c = (undefined1)(uVar3 >> 0x20);
              uStack_7b = (undefined1)(uVar3 >> 0x28);
              if (uVar6 >> 0x1e == 0) {
                bStack_96 = (byte)param_1;
                uStack_95 = (undefined1)((ulong)param_1 >> 8);
                uStack_94 = (undefined1)((ulong)param_1 >> 0x10);
                uStack_93 = (undefined1)((ulong)param_1 >> 0x18);
                uStack_92 = (undefined1)((ulong)param_1 >> 0x20);
                uStack_91 = (undefined1)((ulong)param_1 >> 0x28);
                uStack_90 = (undefined1)((ulong)param_1 >> 0x30);
                uStack_8f = (undefined1)((ulong)param_1 >> 0x38);
                uStack_8e = (undefined1)param_2;
                uStack_8d = (undefined1)(param_2 >> 8);
                uStack_8c = (undefined1)(param_2 >> 0x10);
                uStack_8b = (undefined1)(param_2 >> 0x18);
                uStack_8a = (undefined1)(param_2 >> 0x20);
                uStack_89 = (undefined1)(param_2 >> 0x28);
                pbVar12 = &bStack_88;
                func_0x000107c610b0(pbVar12,&bStack_96,uVar16);
                iVar9 = (int)pbVar12;
              }
              else if (uVar6 >> 0x1e == 1) {
                if (param_1 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x102dba8a8);
                  (*pcVar8)();
                }
                lVar10 = lVar2;
                func_0x00010006c00c(lVar2,uVar3);
                func_0x000107c5ec30();
                if (lVar10 == 0) goto LAB_102dba8b8;
                lVar24 = lVar10;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar17,lVar24)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x102dba8b0);
                  (*pcVar8)();
                }
                lVar10 = (lVar17 - lVar24) + lVar10;
                func_0x000107c5ec38();
                if (lVar10 == 0) goto LAB_102dba8c0;
                if (lVar18 <= lVar24) {
                  lVar24 = lVar18;
                }
                pbVar12 = &bStack_88;
                func_0x000107c610b0(pbVar12,lVar10,lVar24);
                iVar9 = (int)pbVar12;
                func_0x00010006c090(lVar2,uVar3);
              }
              else {
                lVar11 = *(long *)(param_1 + 0x10);
                lVar13 = *(long *)(param_1 + 0x18);
                lVar10 = lVar2;
                func_0x00010006c00c(lVar2,uVar3);
                func_0x000107c5ec30();
                lVar24 = lVar10;
                if (lVar10 != 0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar11,lVar24)) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x102dba8b4);
                    (*pcVar8)();
                  }
                  lVar10 = (lVar11 - lVar24) + lVar10;
                }
                lVar4 = lVar13 - lVar11;
                if (SBORROW8(lVar13,lVar11)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x102dba8ac);
                  (*pcVar8)();
                }
                func_0x000107c5ec38();
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x102dba8c8);
                  (*pcVar8)();
                }
                if (lVar4 <= lVar24) {
                  lVar24 = lVar4;
                }
                pbVar12 = &bStack_88;
                func_0x000107c610b0(pbVar12,lVar10,lVar24);
                iVar9 = (int)pbVar12;
                func_0x00010006c090(lVar2,uVar3);
              }
              if (iVar9 != 0) goto LAB_102dba3c0;
              break;
            }
            lVar24 = (long)iVar9;
            lVar10 = (lVar2 >> 0x20) - lVar24;
            if (lVar2 >> 0x20 < lVar24) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x102dba898);
              (*pcVar8)();
            }
            lVar11 = lVar2;
            func_0x00010006c00c(lVar2,uVar3);
            func_0x000107c5ec30();
            if (lVar11 == 0) {
              func_0x000107c5ec38();
              lVar11 = 0;
LAB_102dba6c0:
              lVar13 = 0;
            }
            else {
              lVar13 = lVar11;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar24,lVar13)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x102dba8a4);
                (*pcVar8)();
              }
              lVar11 = (lVar24 - lVar13) + lVar11;
              func_0x000107c5ec38();
              if (lVar11 == 0) goto LAB_102dba6c0;
              if (lVar10 <= lVar13) {
                lVar13 = lVar10;
              }
              lVar13 = lVar13 + lVar11;
            }
            func_0x000100e25bdc(&bStack_88,lVar11,lVar13,param_1,param_2);
            func_0x00010006c090(lVar2,uVar3);
            bVar7 = bStack_88;
          }
          else {
            if (uVar14 == 2) {
              lVar11 = *(long *)(lVar2 + 0x10);
              lVar13 = *(long *)(lVar2 + 0x18);
              lVar10 = lVar2;
              func_0x00010006c00c(lVar2,uVar3);
              func_0x000107c5ec30();
              lVar24 = lVar10;
              if (lVar10 != 0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar11,lVar24)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x102dba8a0);
                  (*pcVar8)();
                }
                lVar10 = (lVar11 - lVar24) + lVar10;
              }
              lVar4 = lVar13 - lVar11;
              if (SBORROW8(lVar13,lVar11)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x102dba89c);
                (*pcVar8)();
              }
              func_0x000107c5ec38();
              if (lVar10 == 0) {
                lVar24 = 0;
              }
              else {
                if (lVar4 <= lVar24) {
                  lVar24 = lVar4;
                }
                lVar24 = lVar24 + lVar10;
              }
              func_0x000100e25bdc(&bStack_88,lVar10,lVar24,param_1,param_2);
              func_0x00010006c090(lVar2,uVar3);
              if ((bStack_88 & 1) == 0) goto LAB_102dba3c0;
              break;
            }
            uStack_80 = 0;
            uStack_7f = 0;
            uStack_7e = 0;
            uStack_7d = 0;
            uStack_7c = 0;
            uStack_7b = 0;
            bStack_88 = 0;
            uStack_87 = 0;
            uStack_86 = 0;
            uStack_85 = 0;
            uStack_84 = 0;
            uStack_83 = 0;
            uStack_82 = 0;
            uStack_81 = 0;
            func_0x00010006c00c(lVar2,uVar3);
            func_0x000100e25bdc(&bStack_96,&bStack_88,&bStack_88,param_1,param_2);
            func_0x00010006c090(lVar2,uVar3);
            bVar7 = bStack_96;
          }
          if ((bVar7 & 1) != 0) break;
        }
      }
LAB_102dba3c0:
      param_3 = param_3 + 1 & ~uVar15;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  func_0x000107c60e78();
LAB_102dba8b8:
  func_0x000107c5ec38();
LAB_102dba8c0:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x102dba8c4);
  (*pcVar8)();
}



/* Entry: 102dba8c8; end: 102dbaa83;  */

ulong FUN_102dba8c8(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102dba9ac);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102dba9b0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102dbd588(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102dbaa84);
  (*pcVar2)();
}



/* Entry: 102dbaa84; end: 102dbab03;  */

undefined * FUN_102dbaa84(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000100fe4224();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102dbab04; end: 102dbabc3;  */

undefined * FUN_102dbab04(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar3 = (undefined *)0x112d55580;
    func_0x0001000285a8(0x112d55580,&UNK_10d91c5e0);
    lVar4 = 0;
    func_0x000107c5ede0();
    lVar7 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
    uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
    uVar8 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar3,uVar8 + lVar7 * param_2,uVar6 | 7);
    puVar5 = puVar3;
    func_0x000107c610a4();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102dbabc0);
      (*pcVar2)();
    }
    lVar4 = (long)puVar5 - uVar8;
    if (lVar4 == -0x8000000000000000 && lVar7 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102dbabc4);
      (*pcVar2)();
    }
    lVar1 = 0;
    if (lVar7 != 0) {
      lVar1 = lVar4 / lVar7;
    }
    *(long *)(puVar3 + 0x10) = param_1;
    *(long *)(puVar3 + 0x18) = lVar1 << 1;
  }
  return puVar3;
}



/* Entry: 102dbabc4; end: 102dbb363;  */

undefined8 FUN_102dbabc4(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uStack_68;
  
  uVar7 = *unaff_x20;
  if ((uVar7 & 0xc000000000000001) == 0) {
    FUN_102dbd588(0,0x112d530c8,&PTR_PTR_1126affc8);
    uVar3 = *(ulong *)(uVar7 + 0x28);
    func_0x000107c60114();
    uVar6 = -1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
    uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
      do {
        uVar4 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
        func_0x000107c61174();
        uVar5 = uVar4;
        func_0x000107c60118();
        func_0x000107c61170(uVar4);
        if ((uVar5 & 1) != 0) {
          func_0x000107c61170(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
          func_0x000107c61174();
          return 0;
        }
        uVar3 = uVar3 + 1 & ~uVar6;
      } while ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
    }
    func_0x000107c61558(*unaff_x20);
    uStack_68 = *unaff_x20;
    func_0x000107c61174();
    func_0x000102dbb008();
    *unaff_x20 = uStack_68;
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar3 = uVar7;
    }
    func_0x000107c61174();
    func_0x000107c61434(uVar7);
    uVar6 = param_2;
    func_0x000107c602a0(param_2,uVar3);
    func_0x000107c61170(param_2);
    if (uVar6 != 0) {
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(param_2);
      uVar2 = 0;
      uStack_68 = uVar6;
      FUN_102dbd588(0,0x112d530c8,&PTR_PTR_1126affc8);
      func_0x000107c6147c(param_1,&uStack_68,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return 0;
    }
    uVar6 = uVar3;
    func_0x000107c6029c();
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102dbae0c);
      (*pcVar1)();
    }
    func_0x000102dbae0c(uVar3,uVar6 + 1);
    uVar6 = *(ulong *)(uVar3 + 0x10);
    uStack_68 = uVar3;
    if (uVar6 < *(ulong *)(uVar3 + 0x18)) {
      func_0x000107c61174(param_2);
    }
    else {
      func_0x000107c61174(param_2);
      FUN_102dbb4b4(uVar6 + 1);
      uVar3 = uStack_68;
    }
    FUN_102dbb6e0(param_2,uVar3);
    func_0x000107c6142c(uVar7);
    *unaff_x20 = uVar3;
  }
  *param_1 = param_2;
  return 1;
}



/* Entry: 102dbb364; end: 102dbb4b3;  */

void FUN_102dbb364(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001000285a8(0x112f17dc8,&UNK_10db4e300);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_102dbb440;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_102dbb440:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102dbb4b4);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_102dbb48c;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_102dbb48c:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102dbb4b4; end: 102dbb6df;  */

void FUN_102dbb4b4(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0x112f17dc8;
  func_0x0001000285a8(0x112f17dc8,&UNK_10db4e300);
  lVar4 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,1,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_102dbb6b0:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *puVar13;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102dbb6dc);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar15 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar13 = -1L << (uVar15 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar13,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_102dbb6b0;
        }
        uVar15 = puVar13[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60114();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102dbb6e0);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Entry: 102dbb6e0; end: 102dbb80b;  */

void FUN_102dbb6e0(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  func_0x000107c60114();
  lVar1 = param_2 + 0x38;
  uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  func_0x000107c60274(uVar2,lVar1,~uVar3);
  uVar3 = uVar2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = 1L << (uVar2 & 0x3f) | *(ulong *)(lVar1 + uVar3);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar2 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}



/* Entry: 102dbb80c; end: 102dbc147;  */

long FUN_102dbb80c(long *****param_1,undefined8 *param_2,long param_3,long *****param_4)

{
  long ****pppplVar1;
  long *****ppppplVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  code *pcVar5;
  long *****ppppplVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *****ppppplVar11;
  long lVar12;
  long lVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  ulong uVar16;
  long ****pppplStack_98;
  long ****pppplStack_90;
  long ****pppplStack_88;
  long ****pppplStack_80;
  long ***ppplStack_78;
  long ***ppplStack_70;
  long ***ppplStack_68;
  
  if (((ulong)param_4 & 0xc000000000000001) == 0) {
    uVar9 = -1L << ((ulong)*(byte *)(param_4 + 4) & 0x3f);
    uVar10 = -uVar9;
    uVar16 = 0xffffffffffffffff;
    if (uVar10 < 0x40) {
      uVar16 = ~(-1L << (uVar10 & 0x3f));
    }
    pppplVar14 = (long ****)0x0;
    ppppplVar2 = param_4 + 7;
    pppplVar3 = (long ****)~uVar9;
    pppplVar15 = (long ****)(uVar16 & (ulong)param_4[7]);
    ppppplVar6 = param_1;
  }
  else {
    ppppplVar6 = (long *****)((ulong)param_4 & 0xffffffffffffff8);
    if ((long *****)0x7fffffffffffffff < param_4) {
      ppppplVar6 = param_4;
    }
    func_0x000107c60288();
    uVar7 = 0;
    FUN_102dbd588(0,0x112d530c8,&PTR_PTR_1126affc8);
    uVar8 = uVar7;
    FUN_102dbce3c();
    func_0x000107c5fe30(&pppplStack_88,ppppplVar6,uVar7,uVar8);
    pppplVar14 = (long ****)ppplStack_70;
    ppppplVar2 = (long *****)pppplStack_80;
    pppplVar3 = (long ****)ppplStack_78;
    pppplVar15 = (long ****)ppplStack_68;
    param_4 = (long *****)pppplStack_88;
  }
  if (param_2 == (undefined8 *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_3;
    if (param_3 != 0) {
      if (param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102dbba30);
        (*pcVar5)();
      }
      lVar12 = 0;
      uVar16 = (ulong)(pppplVar3 + 8) >> 6;
      do {
        pppplVar4 = pppplVar14;
        lVar13 = lVar12;
        if ((long)param_4 < 0) {
          func_0x000107c602ac();
          if (ppppplVar6 == (long *****)0x0) break;
          uVar8 = 0;
          pppplStack_98 = (long ****)ppppplVar6;
          FUN_102dbd588(0,0x112d530c8,&PTR_PTR_1126affc8);
          ppppplVar6 = &pppplStack_90;
          func_0x000107c6147c(ppppplVar6,&pppplStack_98,PTR___syXlN_11034f1a0 + 8,uVar8,7);
          ppppplVar11 = (long *****)pppplStack_90;
        }
        else {
          while (pppplVar15 == (long ****)0x0) {
            pppplVar1 = (long ****)((long)pppplVar4 + 1);
            if (SCARRY8((long)pppplVar4,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102dbba2c);
              (*pcVar5)();
            }
            if ((long)uVar16 <= (long)pppplVar1) {
              pppplVar15 = (long ****)0x0;
              if ((long)uVar16 <= (long)pppplVar14 + 1) {
                uVar16 = (long)pppplVar14 + 1;
              }
              pppplVar14 = (long ****)(uVar16 - 1);
              goto LAB_102dbb9e4;
            }
            pppplVar4 = pppplVar1;
            pppplVar15 = ppppplVar2[(long)pppplVar1];
          }
          uVar9 = ((ulong)pppplVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                  ((ulong)pppplVar15 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          pppplVar15 = (long ****)((long)pppplVar15 - 1U & (ulong)pppplVar15);
          ppppplVar11 = (long *****)
                        param_4[6][LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + (long)pppplVar4 * 0x40];
          ppppplVar6 = ppppplVar11;
          func_0x000107c61174();
          pppplVar14 = pppplVar4;
        }
        if (ppppplVar11 == (long *****)0x0) break;
        lVar12 = lVar12 + 1;
        *param_2 = ppppplVar11;
        param_2 = param_2 + 1;
        lVar13 = param_3;
      } while (lVar12 != param_3);
    }
  }
LAB_102dbb9e4:
  *param_1 = (long ****)param_4;
  param_1[1] = (long ****)ppppplVar2;
  param_1[2] = pppplVar3;
  param_1[3] = pppplVar14;
  param_1[4] = pppplVar15;
  return lVar13;
}



/* Entry: 102dbc148; end: 102dbc18b;  */

long FUN_102dbc148(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102dbc18c; end: 102dbc1ab;  */

void FUN_102dbc18c(void)

{
  func_0x000107c61168(&PTR_PTR_1128a6718);
  return;
}



/* Entry: 102dbc1ac; end: 102dbc79b;  */

void FUN_102dbc1ac(undefined *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar13;
  long lVar14;
  undefined *puStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar7 = (undefined *)((long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = param_1;
  func_0x000107c44978();
  if (((ulong)puVar4 & 1) != 0) {
    return;
  }
  puVar4 = param_1;
  func_0x000107c44850();
  if ((int)puVar4 == 0) {
LAB_102dbc34c:
    puVar4 = param_1;
    func_0x000107c4484c();
    if ((int)puVar4 == 0) {
      return;
    }
    func_0x000107c427c8();
    func_0x000107c61180();
    if (param_1 == (undefined *)0x0) {
      return;
    }
    puVar4 = param_1;
    FUN_102db0ae0();
    if (puVar4 != (undefined *)0x0) {
      puVar7 = puVar4;
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102dbc69c);
        (*pcVar1)();
      }
      puVar8 = puVar7;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar7);
      uVar5 = 0;
      puVar13 = puVar8;
      func_0x000107c5ee24(0,puVar8,param_2);
      func_0x00010006c090(puVar8,param_2);
      puVar7 = puVar4;
      func_0x000107c4a804();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102dbc6a0);
        (*pcVar1)();
      }
      puVar9 = puVar7;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar7);
      uVar6 = 0;
      puVar8 = puVar9;
      func_0x000107c5ee24(0,puVar9,param_2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar4);
      func_0x00010006c090(puVar9,param_2);
      uVar5 = uVar5 & 0xffffffffffff;
      if (((ulong)puVar13 & 0x2000000000000000) != 0) {
        uVar5 = (ulong)puVar13 >> 0x38 & 0xf;
      }
      if (uVar5 == 0) {
        func_0x000107c6142c(puVar13);
        puVar4 = puVar8;
        goto LAB_102dbc65c;
      }
      uVar5 = uVar6 & 0xffffffffffff;
      if (((ulong)puVar8 & 0x2000000000000000) != 0) {
        uVar5 = (ulong)puVar8 >> 0x38 & 0xf;
      }
      goto joined_r0x000102dbc614;
    }
    puVar4 = param_1;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102dbc6a4);
      (*pcVar1)();
    }
    puVar8 = puVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar4);
    func_0x000107c5fb04(lVar3);
    puVar9 = puVar8;
    lVar12 = param_2;
    func_0x000107c5faf0(puVar8,param_2,lVar3);
    func_0x00010006c090(puVar8);
    if (lVar12 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puStack_70 = puVar9;
      lStack_68 = lVar12;
      func_0x000107c5eb88(puVar7);
      func_0x000100e8b654();
      puVar9 = puVar7;
      puVar13 = PTR___sSSN_11034da80;
      func_0x000107c601f0(puVar7,PTR___sSSN_11034da80,puVar8);
      param_2 = lVar2;
      (**(code **)(lVar14 + 8))(puVar7);
      func_0x000107c6142c(lVar12);
    }
    puVar4 = param_1;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102dbc6a8);
      (*pcVar1)();
    }
    puVar10 = puVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar4);
    func_0x000107c5fb04(lVar3);
    puVar4 = puVar10;
    lVar12 = param_2;
    func_0x000107c5faf0(puVar10,param_2,lVar3);
    func_0x00010006c090(puVar10,param_2);
    if (lVar12 == 0) {
      func_0x000107c61170(param_1);
      puVar4 = puVar13;
      if (puVar13 == (undefined *)0x0) {
        puVar4 = (undefined *)0x0;
      }
      goto LAB_102dbc65c;
    }
    puStack_70 = puVar4;
    lStack_68 = lVar12;
    func_0x000107c5eb88(puVar7);
    func_0x000100e8b654();
    puVar11 = puVar7;
    puVar8 = PTR___sSSN_11034da80;
    func_0x000107c601f0(puVar7,PTR___sSSN_11034da80,puVar10);
    func_0x000107c61170(param_1);
    (**(code **)(lVar14 + 8))(puVar7,lVar2);
    func_0x000107c6142c(lVar12);
    puVar4 = puVar8;
    if ((puVar13 == (undefined *)0x0) || (puVar4 = puVar13, puVar8 == (undefined *)0x0))
    goto LAB_102dbc65c;
    uVar5 = (ulong)puVar9 & 0xffffffffffff;
    if (((ulong)puVar13 & 0x2000000000000000) != 0) {
      uVar5 = (ulong)puVar13 >> 0x38 & 0xf;
    }
    if (uVar5 != 0) {
      uVar5 = (ulong)puVar11 & 0xffffffffffff;
      if (((ulong)puVar8 & 0x2000000000000000) != 0) {
        uVar5 = (ulong)puVar8 >> 0x38 & 0xf;
      }
      goto joined_r0x000102dbc614;
    }
  }
  else {
    puVar4 = param_1;
    func_0x000107c427cc();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) goto LAB_102dbc34c;
    puVar7 = puVar4;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102dbc694);
      (*pcVar1)();
    }
    puVar8 = puVar7;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar7);
    uVar5 = 0;
    puVar13 = puVar8;
    func_0x000107c5ee24(0,puVar8,param_2);
    func_0x00010006c090(puVar8,param_2);
    puVar7 = puVar4;
    func_0x000107c4a804();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102dbc698);
      (*pcVar1)();
    }
    puVar9 = puVar7;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar7);
    uVar6 = 0;
    puVar8 = puVar9;
    func_0x000107c5ee24(0,puVar9,param_2);
    func_0x000107c61170(puVar4);
    func_0x00010006c090(puVar9,param_2);
    uVar5 = uVar5 & 0xffffffffffff;
    if (((ulong)puVar13 & 0x2000000000000000) != 0) {
      uVar5 = (ulong)puVar13 >> 0x38 & 0xf;
    }
    if (uVar5 == 0) {
      func_0x000107c6142c(puVar13);
      puVar4 = puVar8;
      goto LAB_102dbc65c;
    }
    uVar5 = uVar6 & 0xffffffffffff;
    if (((ulong)puVar8 & 0x2000000000000000) != 0) {
      uVar5 = (ulong)puVar8 >> 0x38 & 0xf;
    }
joined_r0x000102dbc614:
    if (uVar5 != 0) {
      return;
    }
  }
  func_0x000107c6142c(puVar13);
  puVar4 = puVar8;
LAB_102dbc65c:
  func_0x000107c6142c(puVar4);
  return;
}



/* Entry: 102dbc79c; end: 102dbca4b;  */

undefined8 * FUN_102dbc79c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *unaff_x23;
  undefined8 *puStack_48;
  
  puVar2 = param_1;
  FUN_102db15ac();
  puVar3 = (undefined8 *)0x5;
  FUN_102db164c(5,puVar2);
  if (puVar3 == (undefined8 *)0x0) {
LAB_102dbc800:
    func_0x000107c4ca10();
    func_0x000107c61180();
    if (param_1 != (undefined8 *)0x0) {
      puStack_48 = (undefined8 *)0x0;
      uVar4 = 0;
      FUN_102dbd588(0,0x112d512f8,&PTR_PTR_1126b25d8);
      func_0x000107c5fc50(param_1,&puStack_48,uVar4);
      func_0x000107c61170(param_1);
      unaff_x23 = puStack_48;
      if (puStack_48 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)((ulong)puStack_48 & 0xffffffffffffff8);
        if ((ulong)puStack_48 >> 0x3e == 0) {
          puVar5 = (undefined8 *)puVar3[2];
        }
        else {
          puVar5 = puStack_48;
          if (-1 < (long)puStack_48) {
            puVar5 = puVar3;
          }
          func_0x000107c60480();
        }
        if (puVar5 != (undefined8 *)0x0) {
          if (((ulong)unaff_x23 & 0xc000000000000001) == 0) {
            if (puVar3[2] == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102dbca4c);
              (*pcVar1)();
            }
            lVar6 = unaff_x23[4];
            func_0x000107c61174();
          }
          else {
            lVar6 = 0;
            FUN_102dba8c8(0,unaff_x23,&PTR_PTR_1126b25d8,0x112d512f8);
          }
          func_0x000107c6142c(unaff_x23);
          lVar7 = lVar6;
          func_0x000107c4c9b4();
          func_0x000102db1778();
          if (lVar7 == 0) {
LAB_102dbc974:
            func_0x000107c6142c(puVar2);
            puVar2 = (undefined8 *)PTR_PTR_1126b25c8;
            func_0x000107c610f8(PTR_PTR_1126b25c8);
            func_0x000107c453e4();
            func_0x000107c4ca5c();
            func_0x000107c5a0f8(puVar2);
            func_0x000107c5293c(puVar2);
            puVar9 = PTR_PTR_1126bcf20;
            func_0x000107c610f8(PTR_PTR_1126bcf20);
            func_0x000107c453e4();
            func_0x000107c4c9b4(lVar6);
            func_0x000107c56438(puVar9);
            func_0x000107c56420(puVar2);
            func_0x000107c61170(lVar6);
            func_0x000107c61170(puVar9);
            return puVar2;
          }
          lVar8 = lVar7;
          func_0x000107c4c930();
          func_0x000107c61180();
          if (lVar8 == 0) {
            func_0x000107c61170(lVar7);
            goto LAB_102dbc974;
          }
          unaff_x23 = (undefined8 *)PTR_PTR_1126b25c8;
          func_0x000107c610f8(PTR_PTR_1126b25c8);
          func_0x000107c453e4();
          func_0x000107c4cd54();
          func_0x000107c5293c(unaff_x23);
          func_0x000107c4c9b4(lVar6);
          func_0x000102db18e0();
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar8);
          goto LAB_102dbc7f4;
        }
        func_0x000107c6142c(puVar2);
        puVar2 = unaff_x23;
      }
    }
    func_0x000107c6142c();
    FUN_102dbcde4();
    func_0x000107c613f8(&UNK_1105d1000,puVar2,0,0);
    puVar2[1] = 4;
    *puVar2 = 0;
    func_0x000107c61654();
  }
  else {
    unaff_x23 = puVar3;
    func_0x000107c4c930();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (unaff_x23 == (undefined8 *)0x0) goto LAB_102dbc800;
LAB_102dbc7f4:
    func_0x000107c6142c(puVar2);
  }
  return unaff_x23;
}



/* Entry: 102dbca4c; end: 102dbcb63;  */

/* WARNING: Removing unreachable block (ram,0x000102dbcb44) */

undefined8 FUN_102dbca4c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010443846c(0);
  func_0x000104434f4c(param_1);
  func_0x000104435044(1);
  func_0x000107c61170();
  func_0x000104435028(2);
  func_0x000107c61170();
  func_0x000104434ff4(1);
  func_0x000107c61170();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000104434f6c();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000104435060(1);
  func_0x000107c61170();
  func_0x000104435088(1);
  func_0x000107c61170();
  func_0x000104435008(0);
  func_0x000107c61170();
  func_0x000104435164(1);
  func_0x000107c61170();
  uVar3 = 1;
  func_0x000104434fe0(1);
  func_0x000107c61170();
  func_0x000104435b90();
  func_0x000107c61170(param_1);
  return uVar3;
}



/* Entry: 102dbcb64; end: 102dbcde3;  */

/* WARNING: Possible PIC construction at 0x000102dbcd74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dbcd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dbcdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dbcc74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dbcdc4) */
/* WARNING: Removing unreachable block (ram,0x000102dbcd18) */
/* WARNING: Removing unreachable block (ram,0x000102dbcd78) */
/* WARNING: Removing unreachable block (ram,0x000102dbcc78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dbcb64(undefined *param_1,long param_2,code *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 != (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
    FUN_102db0698();
    puVar3 = param_1;
    func_0x000107c61480();
    if (puVar3 != (undefined *)0x0) {
      if (param_2 == 0) {
        lVar8 = *(long *)(puVar3 + _DAT_112f17aa0);
        puVar2 = *(undefined **)((long)(puVar3 + _DAT_112f17aa0) + 8);
        func_0x000107c61434(puVar2);
      }
      else {
        func_0x000107c3b9ac(param_2);
        func_0x000107c61180();
        lVar8 = param_2;
        func_0x000107c5faec();
        func_0x000107c61170(param_2);
      }
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar7 = *(long *)(puVar3 + _DAT_112f17a98);
      if (*(long *)(lVar7 + 0x10) != 0) {
        uVar4 = *(undefined8 *)(lVar7 + 0x20);
        uVar1 = *(ulong *)(lVar7 + 0x28);
        puVar5 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          lVar8 = *(long *)(puVar3 + _DAT_112f17aa0);
          puVar2 = *(undefined **)((long)(puVar3 + _DAT_112f17aa0) + 8);
          func_0x000107c61434(puVar2);
          puVar5 = (undefined *)0x0;
        }
        func_0x00010006c00c(uVar4,uVar1);
        func_0x000107c61434(puVar5);
        FUN_102db32e8(uVar4,uVar1,lVar8,puVar2,param_3,param_4);
        uVar6 = (uint)(uVar1 >> 0x3e);
        if (uVar6 != 1) {
          if (uVar6 != 2) {
            return;
          }
          func_0x000107c61574(uVar4);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
        return;
      }
      if (param_3 != (code *)0x0) {
        puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
        func_0x000100dfa3f0(puVar5);
        (*param_3)(puVar2,puVar5);
      }
      goto code_r0x000107c6142c;
    }
    FUN_102db02e4();
    func_0x000107c61480(param_1,puVar3);
    if (param_1 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_112f17a20);
      func_0x000107c5ee30(uVar4);
      if (param_2 == 0) {
        lVar8 = 0;
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = puVar3;
        func_0x000107c3b9ac(param_2);
        func_0x000107c61180();
        lVar8 = param_2;
        func_0x000107c5faec();
        func_0x000107c61170(param_2);
      }
      FUN_102db32e8(uVar4,puVar3,lVar8,puVar2,param_3,param_4);
      goto code_r0x000107c6142c;
    }
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_3 == (code *)0x0) {
    return;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000100dfa3f0(puVar3);
  (*param_3)(puVar2,puVar3);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar2);
  return;
}



/* Entry: 102dbcde4; end: 102dbce23;  */

void FUN_102dbcde4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f17db8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4e370;
  func_0x000107c61520(&UNK_10db4e370,&UNK_1105d1000);
  puRam0000000112f17db8 = puVar1;
  return;
}



/* Entry: 102dbce24; end: 102dbce3b;  */

undefined8 * FUN_102dbce24(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102dbce3c; end: 102dbce8f;  */

void FUN_102dbce3c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f17dd0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_102dbd588(0xff,0x112d530c8,&PTR_PTR_1126affc8);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam0000000112f17dd0 = puVar2;
  return;
}



/* Entry: 102dbce90; end: 102dbce9f;  */

void FUN_102dbce90(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102dbce9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 102dbcea0; end: 102dbd117;  */

void FUN_102dbcea0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar10 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar13 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_102dbd588(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    lStack_a0 = lVar9;
    (**(code **)(lVar11 + 0x68))
              (lVar13,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
               lVar3);
    lVar9 = lVar13;
    func_0x000107c5fff0(lVar13);
    lStack_a8 = lVar2;
    (**(code **)(lVar11 + 8))(lVar13,lVar3);
    puVar4 = &UNK_1105d0c48;
    func_0x000107c613fc(&UNK_1105d0c48,0x18,7);
    *(long *)(puVar4 + 0x10) = param_1;
    pcStack_70 = FUN_102dbd60c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_1105d0c60;
    ppuVar5 = &puStack_90;
    puStack_68 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61434(param_1);
    func_0x000107c5f808(lVar12);
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar6 = 0x112d4af88;
    FUN_102dbd630(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar7 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar8 = uVar7;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar10,&puStack_98,uVar7,uVar8,lVar1,uVar6);
    func_0x000107c5ffe8(0,lVar12,puVar10,ppuVar5);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar9);
    (**(code **)(lStack_a0 + 8))(puVar10,lVar1);
    (**(code **)(lVar14 + 8))(lVar12,lStack_a8);
    func_0x000107c61574(puStack_68);
  }
  return;
}



/* Entry: 102dbd118; end: 102dbd1b7;  */

bool FUN_102dbd118(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lStack_48;
  undefined1 auStack_40 [24];
  long lStack_28;
  
  FUN_102dbd7a8(param_1,auStack_40,0x112d387f8,&UNK_10d902650);
  if (lStack_28 == 0) {
    FUN_102dbd694(auStack_40,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar1 = 0;
    FUN_102db0698(0);
    plVar2 = &lStack_48;
    func_0x000107c6147c(plVar2,auStack_40,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if ((int)plVar2 != 0) goto LAB_102dbd198;
  }
  lStack_48 = 0;
LAB_102dbd198:
  func_0x000107c61170();
  return lStack_48 != 0;
}



/* Entry: 102dbd1b8; end: 102dbd3a3;  */

void FUN_102dbd1b8(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_38;
  
  lVar3 = param_1;
  FUN_102db15ac();
  lVar4 = 5;
  FUN_102db164c(5,lVar3);
  func_0x000107c6142c(lVar3);
  if (lVar4 != 0) {
    lVar3 = lVar4;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5d0f0();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar4);
      return;
    }
    func_0x000107c61170(lVar4);
  }
  func_0x000107c4ca10();
  func_0x000107c61180();
  if (param_1 != 0) {
    uStack_38 = 0;
    uVar5 = 0;
    FUN_102dbd588(0,0x112d512f8,&PTR_PTR_1126b25d8);
    func_0x000107c5fc50(param_1,&uStack_38,uVar5);
    func_0x000107c61170(param_1);
    uVar1 = uStack_38;
    if (uStack_38 != 0) {
      uVar7 = uStack_38 & 0xffffffffffffff8;
      if (uStack_38 >> 0x3e == 0) {
        uVar6 = *(ulong *)(uVar7 + 0x10);
      }
      else {
        uVar6 = uStack_38;
        if (-1 < (long)uStack_38) {
          uVar6 = uVar7;
        }
        func_0x000107c60480();
      }
      if (uVar6 == 0) {
        func_0x000107c6142c(uVar1);
      }
      else {
        if ((uVar1 & 0xc000000000000001) == 0) {
          if (*(long *)(uVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102dbd3a4);
            (*pcVar2)();
          }
          uVar5 = *(undefined8 *)(uVar1 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = 0;
          FUN_102dba8c8(0,uVar1,&PTR_PTR_1126b25d8,0x112d512f8);
        }
        func_0x000107c6142c(uVar1);
        func_0x000107c4ca5c();
        func_0x000107c61170(uVar5);
      }
    }
  }
  return;
}



/* Entry: 102dbd3a4; end: 102dbd587;  */

void FUN_102dbd3a4(long param_1)

{
  undefined8 *****pppppuVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 ****ppppuStack_68;
  
  func_0x000107c4ca10();
  func_0x000107c61180();
  if (param_1 != 0) {
    ppppuStack_68 = (undefined8 *****)0x0;
    uVar5 = 0;
    FUN_102dbd588(0,0x112d512f8,&PTR_PTR_1126b25d8);
    pppppuVar9 = &ppppuStack_68;
    func_0x000107c5fc50(param_1,pppppuVar9,uVar5);
    func_0x000107c61170(param_1);
    ppppuVar3 = ppppuStack_68;
    if ((undefined8 *****)ppppuStack_68 != (undefined8 *****)0x0) {
      pppppuVar13 = (undefined8 *****)((ulong)ppppuStack_68 & 0xffffffffffffff8);
      if ((ulong)ppppuStack_68 >> 0x3e == 0) {
        pppppuVar11 = (undefined8 *****)pppppuVar13[2];
      }
      else {
        pppppuVar11 = (undefined8 *****)ppppuStack_68;
        if (-1 < (long)ppppuStack_68) {
          pppppuVar11 = pppppuVar13;
        }
        func_0x000107c60480();
      }
      if (pppppuVar11 != (undefined8 *****)0x0) {
        ppppuVar12 = (undefined8 ****)0x0;
        do {
          if (((ulong)ppppuVar3 & 0xc000000000000001) == 0) {
            if (pppppuVar13[2] <= ppppuVar12) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102dbd544);
              (*pcVar4)();
            }
            ppppuVar6 = (undefined8 ****)ppppuVar3[(long)ppppuVar12 + 4];
            func_0x000107c61174();
            pppppuVar10 = pppppuVar9;
          }
          else {
            ppppuVar6 = ppppuVar12;
            pppppuVar10 = (undefined8 *****)ppppuVar3;
            FUN_102dba8c8(ppppuVar12,ppppuVar3,&PTR_PTR_1126b25d8,0x112d512f8);
          }
          pppppuVar1 = (undefined8 *****)((long)ppppuVar12 + 1);
          if (SCARRY8((long)ppppuVar12,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102dbd540);
            (*pcVar4)();
          }
          ppppuVar7 = ppppuVar6;
          func_0x000107c4ca5c();
          pppppuVar9 = pppppuVar10;
          if ((int)ppppuVar7 == 2) {
            ppppuVar7 = ppppuVar6;
            func_0x000107c4b7ec();
            func_0x000107c61180();
            pppppuVar9 = pppppuVar10;
            if (ppppuVar7 == (undefined8 ****)0x0) goto LAB_102dbd448;
            ppppuVar8 = ppppuVar7;
            func_0x000107c5faec();
            pppppuVar9 = pppppuVar10;
            func_0x000107c61170(ppppuVar7);
            func_0x000107c61170(ppppuVar6);
            uVar2 = (ulong)ppppuVar8 & 0xffffffffffff;
            if (((ulong)pppppuVar10 & 0x2000000000000000) != 0) {
              uVar2 = (ulong)pppppuVar10 >> 0x38 & 0xf;
            }
            if (uVar2 != 0) {
              func_0x000107c6142c(ppppuVar3);
              return;
            }
            func_0x000107c6142c();
          }
          else {
LAB_102dbd448:
            func_0x000107c61170(ppppuVar6);
          }
          ppppuVar12 = (undefined8 ****)((long)ppppuVar12 + 1);
        } while (pppppuVar1 != pppppuVar11);
      }
      func_0x000107c6142c(ppppuVar3);
    }
  }
  return;
}



/* Entry: 102dbd588; end: 102dbd5c7;  */

void FUN_102dbd588(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102dbd5c8; end: 102dbd5e3;  */

void FUN_102dbd5c8(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102dbd5e4; end: 102dbd60b;  */

void FUN_102dbd5e4(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Entry: 102dbd60c; end: 102dbd62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dbd60c(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined8 uVar8;
  long extraout_x12;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  code *unaff_x23;
  undefined *unaff_x24;
  undefined8 uVar14;
  undefined *unaff_x25;
  undefined8 uVar15;
  undefined *unaff_x26;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 auStack_140 [3];
  long alStack_128 [2];
  long alStack_118 [2];
  undefined1 auStack_108 [24];
  long alStack_f0 [12];
  long alStack_90 [2];
  undefined *puStack_80;
  undefined *puStack_70;
  long lStack_68;
  
  puVar7 = *(undefined **)(unaff_x20 + 0x10);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(uVar2 - 8);
  uVar3 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  uVar9 = (long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = uVar9 - extraout_x12;
  lVar18 = *(long *)(puVar7 + 0x10);
  if (lVar18 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    unaff_x24 = puVar7 + ((ulong)*(byte *)(lVar16 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar16 + 0x50) ^ 0xffffffffffffffff));
    alStack_90[1] = *(long *)(lVar16 + 0x48);
    unaff_x23 = *(code **)(lVar16 + 0x10);
    puStack_80 = puVar4;
    do {
      (*unaff_x23)(lVar12,unaff_x24,uVar2);
      (**(code **)(lVar16 + 0x20))(uVar9,lVar12,uVar2);
      puVar7 = puStack_80;
      func_0x000107c415e0();
      func_0x000107c61180();
      unaff_x25 = puVar7;
      func_0x000107c5ed90();
      puStack_70 = (undefined *)0x0;
      unaff_x26 = puVar7;
      func_0x000107c4ff50();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(unaff_x25);
      puVar4 = puStack_70;
      if ((int)unaff_x26 == 0) {
        unaff_x25 = puStack_70;
        func_0x000107c61174();
        func_0x000107c5ed30();
        func_0x000107c61170(unaff_x25);
        func_0x000107c61654();
        func_0x000107c614ac(puVar4);
        puVar7 = puVar4;
        unaff_x26 = puVar4;
      }
      else {
        func_0x000107c61174();
      }
      uVar3 = uVar9;
      param_2 = uVar2;
      (**(code **)(lVar16 + 8))();
      unaff_x24 = unaff_x24 + alStack_90[1];
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    *(undefined8 *)(lVar12 + -0x60) = 0;
    *(long *)(lVar12 + -0x58) = lVar16;
    *(undefined **)(lVar12 + -0x50) = unaff_x26;
    *(undefined **)(lVar12 + -0x48) = unaff_x25;
    *(undefined **)(lVar12 + -0x40) = unaff_x24;
    *(code **)(lVar12 + -0x38) = unaff_x23;
    *(long *)(lVar12 + -0x30) = lVar12;
    *(undefined **)(lVar12 + -0x28) = puVar7;
    *(ulong *)(lVar12 + -0x20) = uVar9;
    *(ulong *)(lVar12 + -0x18) = uVar2;
    *(undefined1 **)(lVar12 + -0x10) = &stack0xfffffffffffffff0;
    *(undefined8 *)(lVar12 + -8) = 0x102db733c;
    if (uVar3 != 0) {
      uVar2 = uVar3;
      func_0x000107c615f0();
      func_0x000107c3b9ac();
      func_0x000107c61180();
      uVar5 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
      lVar18 = _DAT_112f17b10;
      func_0x000107c61428(uVar9 + _DAT_112f17b10,lVar12 + -0x78,0x20,0);
      lVar18 = *(long *)(uVar9 + lVar18);
      if (*(long *)(lVar18 + 0x10) != 0) {
        func_0x000107c61434(lVar18);
        uVar2 = param_2;
        FUN_102dba280(uVar5,param_2,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,&UNK_1000292e8);
        if ((uVar2 & 1) != 0) {
          puVar1 = (undefined8 *)(*(long *)(lVar18 + 0x38) + uVar5 * 0x10);
          uVar13 = *puVar1;
          uVar11 = puVar1[1];
          func_0x00010006c00c(uVar13,uVar11);
          func_0x000107c614a8(lVar12 + -0x78);
          func_0x000107c6142c(lVar18);
          func_0x000107c6142c(param_2);
          uVar2 = uVar3;
          FUN_102db7660();
          *(undefined8 *)(lVar12 + -0xa8) = uVar11;
          *(undefined8 *)(lVar12 + -0xa0) = uVar13;
          func_0x000107c5ee20(uVar13,uVar11);
          *(undefined8 *)(lVar12 + -0xb0) = uVar13;
          if (uVar2 == 0) {
            lVar16 = 0;
            FUN_102db0034();
            lVar18 = lVar16;
            func_0x000107c610f8();
            *(undefined8 *)(lVar18 + _DAT_112f179f8) = 0xffffffffffffffff;
            *(undefined8 *)(lVar18 + _DAT_112f17a00) = 0xffffffffffffffff;
            *(undefined8 *)(lVar18 + _DAT_112f17a08) = 0xffffffffffffffff;
            *(undefined8 *)(lVar18 + _DAT_112f17a10) = 0xffffffffffffffff;
            *(undefined8 *)(lVar18 + _DAT_112f17a18) = 0xffffffffffffffff;
            *(long *)(lVar12 + -0x88) = lVar18;
            *(long *)(lVar12 + -0x80) = lVar16;
            lVar18 = lVar12 + -0x88;
            func_0x000107c61154(lVar18,PTR_s_init_1125d9248);
            uVar2 = 0;
            uVar10 = 0;
            uVar14 = 0;
            uVar11 = 0;
            uVar15 = 0;
            uVar13 = 0;
            uVar17 = 0;
          }
          else {
            uVar13 = *(undefined8 *)(uVar2 + _DAT_112f17aa0);
            uVar17 = ((undefined8 *)(uVar2 + _DAT_112f17aa0))[1];
            lVar18 = *(long *)(uVar2 + _DAT_112f17aa8);
            uVar11 = *(undefined8 *)(uVar2 + _DAT_112f17ab0);
            uVar15 = ((undefined8 *)(uVar2 + _DAT_112f17ab0))[1];
            uVar10 = *(undefined8 *)(uVar2 + _DAT_112f17ab8);
            uVar14 = ((undefined8 *)(uVar2 + _DAT_112f17ab8))[1];
            func_0x000107c61434(uVar14);
            func_0x000107c61434(uVar17);
            func_0x000107c61174();
            func_0x000107c61434(uVar15);
          }
          lVar6 = 0;
          FUN_102db02e4();
          lVar16 = lVar6;
          func_0x000107c610f8();
          uVar8 = *(undefined8 *)(lVar12 + -0xb0);
          *(undefined8 *)(lVar16 + _DAT_112f17a20) = uVar8;
          puVar1 = (undefined8 *)(lVar16 + _DAT_112f17a28);
          *puVar1 = uVar13;
          puVar1[1] = uVar17;
          *(long *)(lVar16 + _DAT_112f17a30) = lVar18;
          puVar1 = (undefined8 *)(lVar16 + _DAT_112f17a38);
          *puVar1 = uVar11;
          puVar1[1] = uVar15;
          puVar1 = (undefined8 *)(lVar16 + _DAT_112f17a40);
          *puVar1 = uVar10;
          puVar1[1] = uVar14;
          puVar7 = PTR_s_init_1125d9248;
          *(long *)(lVar12 + -0x98) = lVar16;
          *(long *)(lVar12 + -0x90) = lVar6;
          func_0x000107c61174(uVar8);
          func_0x000107c61174(lVar18);
          func_0x000107c61154(lVar12 + -0x98,puVar7);
          func_0x00010006c090(*(undefined8 *)(lVar12 + -0xa0),*(undefined8 *)(lVar12 + -0xa8));
          func_0x000107c61170(uVar8);
          func_0x000107c61170(lVar18);
          func_0x000107c61170(uVar2);
          func_0x000107c615e8(uVar3);
          return;
        }
        func_0x000107c6142c(lVar18);
      }
      func_0x000107c6142c(param_2);
      func_0x000107c614a8(lVar12 + -0x78);
      func_0x000107c615e8(uVar3);
    }
    return;
  }
  return;
}



/* Entry: 102dbd630; end: 102dbd66f;  */

void FUN_102dbd630(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102dbd670; end: 102dbd693;  */

void FUN_102dbd670(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102dbd694; end: 102dbd6f3;  */

undefined8 FUN_102dbd694(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102dbd6f4; end: 102dbd767;  */

void FUN_102dbd6f4(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar2 + 0x38 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  FUN_102db664c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),unaff_x20 + uVar3,
                *(undefined8 *)(unaff_x20 + uVar2),*(undefined8 *)(unaff_x20 + uVar2 + 8),
                *(undefined8 *)(unaff_x20 + (uVar2 + 0x17 & 0xffffffffffffff8)));
  return;
}



/* Entry: 102dbd768; end: 102dbd7a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dbd768(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x20;
  undefined *puVar16;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar15 = *(long *)(unaff_x20 + 0x28);
  puVar16 = *(undefined **)(unaff_x20 + 0x30);
  uVar3 = *(ulong *)(unaff_x20 + 0x38);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    if (pcVar2 == (code *)0x0) {
      return;
    }
    func_0x000107c61428(lVar15 + 0x10,&puStack_d0,0,0);
    uVar14 = *(undefined8 *)(lVar15 + 0x10);
    uVar9 = uVar14;
    func_0x000107c61434(uVar14);
    func_0x00010018cc3c();
    func_0x000107c6142c(uVar14);
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    (*pcVar2)(uVar9,puVar16);
    func_0x000107c6142c(uVar9);
    func_0x000107c6142c(puVar16);
    return;
  }
  if (param_1 == 0) {
    lVar10 = *(long *)(lVar4 + _DAT_112f17af8);
    if (lVar10 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar10 != 0) {
        func_0x000107c61170(lVar4);
        func_0x000107c615e8(lVar10);
        return;
      }
    }
LAB_102db3c60:
    if (pcVar2 == (code *)0x0) goto LAB_102db3d18;
    func_0x000107c61428(lVar15 + 0x10,&puStack_d0,0,0);
    uVar14 = *(undefined8 *)(lVar15 + 0x10);
    uVar9 = uVar14;
    func_0x000107c61434(uVar14);
    func_0x00010018cc3c();
    func_0x000107c6142c(uVar14);
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    (*pcVar2)(uVar9,puVar16);
    func_0x000107c6142c(uVar9);
  }
  else {
    if (uVar3 == 0) goto LAB_102db3c60;
    uVar1 = (ulong)puVar16 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) goto LAB_102db3c60;
    uStack_a0 = 0x645c5f6d6574695f;
    uStack_98 = 0xea0000000000242b;
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    lVar10 = lVar4;
    puStack_d0 = puVar16;
    uStack_c8 = uVar3;
    func_0x000100e8b654();
    puVar5 = &uStack_a0;
    puVar13 = &uStack_88;
    func_0x000107c601fc(puVar5,puVar13,0x400,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                        PTR___sSSN_11034da80,lVar10,lVar10,lVar10);
    puVar6 = PTR_PTR_1126b25b8;
    func_0x000107c610f8();
    func_0x000107c5fadc(puVar5,puVar13);
    func_0x000107c6142c(puVar13);
    func_0x000107c46814();
    func_0x000107c61170(puVar5);
    func_0x000107c61428(lVar15 + 0x10,&uStack_a0,0,0);
    puVar16 = *(undefined **)(lVar15 + 0x10);
    lVar15 = *(long *)(lVar4 + _DAT_112f17af8);
    if (lVar15 == 0) {
      func_0x000107c61434(puVar16);
    }
    else {
      func_0x000107c61434(puVar16);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar15 != 0) {
        pcVar7 = "tryLocalFallback(snapDocKey:snapDoc:pageProperties:completion:)";
        func_0x0001000c10c0("tryLocalFallback(snapDocKey:snapDoc:pageProperties:completion:)");
        func_0x000107c61180();
        puVar11 = &UNK_1105d0ec8;
        func_0x000107c613fc(&UNK_1105d0ec8,0x48,7);
        *(long *)(puVar11 + 0x10) = lVar15;
        *(undefined **)(puVar11 + 0x18) = puVar6;
        *(undefined8 *)(puVar11 + 0x20) = uVar14;
        *(long *)(puVar11 + 0x28) = lVar4;
        *(code **)(puVar11 + 0x30) = pcVar2;
        *(undefined8 *)(puVar11 + 0x38) = uVar9;
        *(undefined **)(puVar11 + 0x40) = puVar16;
        uStack_b0 = 0x102dbd77c;
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0x42000000;
        puStack_c0 = &UNK_1000f6b44;
        puStack_b8 = &UNK_1105d0ee0;
        ppuVar8 = &puStack_d0;
        puStack_a8 = puVar11;
        func_0x000107c60bc4(ppuVar8);
        puVar11 = puStack_a8;
        func_0x000107c61434(puVar16);
        func_0x000107c615f0(lVar15);
        func_0x000107c61174(puVar6);
        func_0x000107c61174(uVar14);
        func_0x000107c61174(lVar4);
        func_0x000100d26378(pcVar2,uVar9);
        func_0x000107c61574(puVar11);
        func_0x000107c4e524(pcVar7);
        func_0x000107c61170(puVar6);
        func_0x000107c6142c(puVar16);
        func_0x000107c61170(lVar4);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c615e8(lVar15);
        func_0x000107c615e8(pcVar7);
        return;
      }
    }
    if (pcVar2 != (code *)0x0) {
      puVar11 = puVar16;
      func_0x00010018cc3c(puVar16);
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
      (*pcVar2)(puVar11,puVar12);
      func_0x000107c6142c(puVar11);
      func_0x000107c6142c(puVar12);
    }
    func_0x000107c61170(puVar6);
  }
  func_0x000107c6142c(puVar16);
LAB_102db3d18:
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 102dbd7a8; end: 102dbd7ef;  */

undefined8 FUN_102dbd7a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102dbd7f0; end: 102dbd807;  */

void FUN_102dbd7f0(long param_1)

{
  if (0xfffffffe < *(ulong *)(param_1 + 8)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



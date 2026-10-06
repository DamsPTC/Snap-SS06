/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103025560; end: 1030255eb;  */

void FUN_103025560(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_10302a234(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = 0x112e400c0;
  func_0x0001000285a8(0x112e400c0,&UNK_10da2e120);
  uVar3 = uVar2;
  func_0x000100120cb0();
  func_0x000107c5f9dc(param_1,uVar1,uVar2,uVar3);
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030255ec; end: 103025beb;  */

void FUN_1030255ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  byte **ppbVar17;
  undefined *puVar18;
  long lVar19;
  long extraout_x8;
  long lVar20;
  undefined *puVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 uStack_d0;
  undefined *puStack_98;
  byte *pbStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar11 = (undefined *)0x0;
  func_0x000107c5f804();
  lVar19 = *(long *)(puVar11 + -8);
  puVar14 = puVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar20 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar24 = *(ulong *)(param_1 + 0x10);
  if (uVar24 == 0) {
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_103025a68:
    func_0x000103024be8();
    uVar15 = 0;
    FUN_10302a234(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar12 = puStack_98;
    func_0x000107c5fc48(puStack_98,uVar15);
    func_0x000107c6142c(puStack_98);
    FUN_10302a234(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar19 + 0x68))
              (lVar20,*(undefined4 *)
                       PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,puVar11)
    ;
    lVar16 = lVar20;
    func_0x000107c5fff0(lVar20);
    (**(code **)(lVar19 + 8))(lVar20,puVar11);
    puVar11 = &UNK_1105ff318;
    func_0x000107c613fc(&UNK_1105ff318,0x28,7);
    *(long *)(puVar11 + 0x10) = param_1;
    *(undefined8 *)(puVar11 + 0x18) = param_2;
    *(undefined8 *)(puVar11 + 0x20) = param_3;
    pcStack_70 = FUN_10302a87c;
    pbStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x103025fcc;
    puStack_78 = &UNK_1105ff330;
    ppbVar17 = &pbStack_90;
    puStack_68 = puVar11;
    func_0x000107c60bc4(ppbVar17);
    puVar11 = puStack_68;
    func_0x000107c61434(param_1);
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar11);
    func_0x000107c5bfa0(puVar14);
    func_0x000107c60bd0(ppbVar17);
    func_0x000107c615e8(puVar14);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(lVar16);
    return;
  }
  uVar25 = 0;
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uStack_d0 = param_3;
LAB_10302568c:
  uVar3 = uVar25;
  if (uVar25 <= uVar24) {
    uVar3 = uVar24;
  }
  do {
    if (uVar25 == uVar3) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x103025bdc);
      (*pcVar10)();
    }
    puVar2 = (ulong *)(param_1 + 0x20 + uVar25 * 0x10);
    pbVar22 = (byte *)*puVar2;
    puVar13 = (undefined *)puVar2[1];
    uVar25 = uVar25 + 1;
    puVar18 = (undefined *)((ulong)pbVar22 & 0xffffffffffff);
    puVar21 = (undefined *)((ulong)puVar13 >> 0x38 & 0xf);
    puVar12 = puVar18;
    if (((ulong)puVar13 & 0x2000000000000000) != 0) {
      puVar12 = puVar21;
    }
    if (puVar12 != (undefined *)0x0) {
      if (((ulong)puVar13 >> 0x3c & 1) == 0) {
        if (((ulong)puVar13 >> 0x3d & 1) == 0) {
          if (((ulong)pbVar22 >> 0x3c & 1) == 0) {
            puVar18 = puVar13;
            func_0x000107c60358();
          }
          else {
            pbVar22 = (byte *)(((ulong)puVar13 & 0xfffffffffffffff) + 0x20);
          }
          if (*pbVar22 == 0x2b) {
            if ((long)puVar18 < 1) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x103025be8);
              (*pcVar10)();
            }
            puVar18 = puVar18 + -1;
            if (puVar18 == (undefined *)0x0) goto LAB_1030258ec;
            uVar27 = 0;
            do {
              pbVar22 = pbVar22 + 1;
              if (((9 < *pbVar22 - 0x30) ||
                  (auVar6._8_8_ = 0, auVar6._0_8_ = uVar27, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
                 (uVar23 = uVar27 * 10, uVar1 = (ulong)(byte)(*pbVar22 - 0x30),
                 uVar27 = uVar23 + uVar1, CARRY8(uVar23,uVar1))) goto LAB_1030258ec;
              uVar26 = 0;
              puVar18 = puVar18 + -1;
            } while (puVar18 != (undefined *)0x0);
          }
          else if (*pbVar22 == 0x2d) {
            if ((long)puVar18 < 1) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x103025bec);
              (*pcVar10)();
            }
            puVar18 = puVar18 + -1;
            if (puVar18 == (undefined *)0x0) {
LAB_1030258ec:
              uVar26 = 1;
            }
            else {
              uVar27 = 0;
              do {
                pbVar22 = pbVar22 + 1;
                if (((9 < *pbVar22 - 0x30) ||
                    (auVar4._8_8_ = 0, auVar4._0_8_ = uVar27, SUB168(auVar4 * ZEXT816(10),8) != 0))
                   || (uVar23 = uVar27 * 10, uVar1 = (ulong)(byte)(*pbVar22 - 0x30),
                      uVar27 = uVar23 - uVar1, uVar23 < uVar1)) goto LAB_1030258ec;
                uVar26 = 0;
                puVar18 = puVar18 + -1;
              } while (puVar18 != (undefined *)0x0);
            }
          }
          else {
            if (puVar18 == (undefined *)0x0) goto LAB_1030258ec;
            uVar27 = 0;
            if (pbVar22 == (byte *)0x0) {
              uVar26 = 0;
            }
            else {
              do {
                if (((9 < *pbVar22 - 0x30) ||
                    (auVar8._8_8_ = 0, auVar8._0_8_ = uVar27, SUB168(auVar8 * ZEXT816(10),8) != 0))
                   || (uVar23 = uVar27 * 10, uVar1 = (ulong)(byte)(*pbVar22 - 0x30),
                      uVar27 = uVar23 + uVar1, CARRY8(uVar23,uVar1))) goto LAB_1030258ec;
                uVar26 = 0;
                puVar18 = puVar18 + -1;
                pbVar22 = pbVar22 + 1;
              } while (puVar18 != (undefined *)0x0);
            }
          }
        }
        else {
          pbStack_90 = pbVar22;
          uStack_88 = (ulong)puVar13 & 0xffffffffffffff;
          uVar26 = (uint)pbVar22 & 0xff;
          if (uVar26 == 0x2b) {
            if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x103025be4);
              (*pcVar10)();
            }
            puVar21 = puVar21 + -1;
            if (puVar21 == (undefined *)0x0) goto LAB_1030258ec;
            uVar27 = 0;
            pbVar22 = (byte *)((ulong)&pbStack_90 | 1);
            do {
              if (((9 < *pbVar22 - 0x30) ||
                  (auVar7._8_8_ = 0, auVar7._0_8_ = uVar27, SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
                 (uVar23 = uVar27 * 10, uVar1 = (ulong)(byte)(*pbVar22 - 0x30),
                 uVar27 = uVar23 + uVar1, CARRY8(uVar23,uVar1))) goto LAB_1030258ec;
              uVar26 = 0;
              puVar21 = puVar21 + -1;
              pbVar22 = pbVar22 + 1;
            } while (puVar21 != (undefined *)0x0);
          }
          else if (uVar26 == 0x2d) {
            if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x103025be0);
              (*pcVar10)();
            }
            puVar21 = puVar21 + -1;
            if (puVar21 == (undefined *)0x0) goto LAB_1030258ec;
            uVar27 = 0;
            pbVar22 = (byte *)((ulong)&pbStack_90 | 1);
            do {
              if (((9 < *pbVar22 - 0x30) ||
                  (auVar5._8_8_ = 0, auVar5._0_8_ = uVar27, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
                 (uVar23 = uVar27 * 10, uVar1 = (ulong)(byte)(*pbVar22 - 0x30),
                 uVar27 = uVar23 - uVar1, uVar23 < uVar1)) goto LAB_1030258ec;
              uVar26 = 0;
              puVar21 = puVar21 + -1;
              pbVar22 = pbVar22 + 1;
            } while (puVar21 != (undefined *)0x0);
          }
          else {
            if (puVar21 == (undefined *)0x0) goto LAB_1030258ec;
            uVar27 = 0;
            ppbVar17 = &pbStack_90;
            do {
              if (((9 < *(byte *)ppbVar17 - 0x30) ||
                  (auVar9._8_8_ = 0, auVar9._0_8_ = uVar27, SUB168(auVar9 * ZEXT816(10),8) != 0)) ||
                 (uVar23 = uVar27 * 10, uVar1 = (ulong)(byte)(*(byte *)ppbVar17 - 0x30),
                 uVar27 = uVar23 + uVar1, CARRY8(uVar23,uVar1))) goto LAB_1030258ec;
              uVar26 = 0;
              puVar21 = puVar21 + -1;
              ppbVar17 = (byte **)((long)ppbVar17 + 1);
            } while (puVar21 != (undefined *)0x0);
          }
        }
        func_0x000107c61434(puVar13);
      }
      else {
        func_0x000107c61434(puVar13);
        puVar14 = puVar13;
        func_0x000100f5015c(pbVar22,puVar13,10);
        uVar26 = (uint)puVar14;
      }
      if ((uVar26 & 0xff) == 1) {
        func_0x000107c6142c(puVar13);
        puVar14 = puVar13;
      }
      else {
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c490d8();
        func_0x000107c6142c(puVar13);
        puVar14 = puVar13;
        if (puVar12 != (undefined *)0x0) break;
      }
    }
    param_3 = uStack_d0;
    if (uVar25 == uVar24) goto LAB_103025a68;
  } while( true );
  puVar14 = puStack_98;
  func_0x000107c61550();
  if ((((int)puVar14 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0)) {
    if ((ulong)puStack_98 >> 0x3e == 0) {
      puVar13 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar13 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puStack_98) {
        puVar13 = puStack_98;
      }
      func_0x000107c60480(puVar13);
    }
    puVar14 = (undefined *)0x0;
    FUN_1030294cc(0,puVar13 + 1,1,puStack_98,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,
                  0x112d4a820,&UNK_10d910f30);
    puStack_98 = puVar14;
  }
  uVar27 = (ulong)puStack_98 & 0xffffffffffffff8;
  uVar3 = *(ulong *)(uVar27 + 0x10);
  if (*(ulong *)(uVar27 + 0x18) >> 1 <= uVar3) {
    puVar14 = (undefined *)(ulong)(1 < *(ulong *)(uVar27 + 0x18));
    FUN_1030294cc(puVar14,uVar3 + 1,1,puStack_98,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,
                  0x112d4a820,&UNK_10d910f30);
    uVar27 = (ulong)puVar14 & 0xffffffffffffff8;
    puStack_98 = puVar14;
  }
  *(ulong *)(uVar27 + 0x10) = uVar3 + 1;
  *(undefined **)(uVar27 + uVar3 * 8 + 0x20) = puVar12;
  param_3 = uStack_d0;
  if (uVar25 == uVar24) goto LAB_103025a68;
  goto LAB_10302568c;
}



/* Entry: 103025bec; end: 103025eaf;  */

undefined8 *** FUN_103025bec(undefined8 ***param_1,undefined8 ****param_2)

{
  undefined8 ****ppppuVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 ****ppppuVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 **ppuVar13;
  long lVar14;
  long lVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  undefined8 **ppuVar18;
  undefined8 **ppuVar19;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 ***pppuStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar10 = -1L << ((ulong)*(byte *)(param_1 + 4) & 0x3f);
    uVar12 = ~uVar10;
    pppuVar16 = param_1 + 8;
    uVar10 = -uVar10;
    uVar11 = 0xffffffffffffffff;
    if (uVar10 < 0x40) {
      uVar11 = ~(-1L << (uVar10 & 0x3f));
    }
    ppuVar18 = (undefined8 **)(uVar11 & (ulong)*pppuVar16);
    pppuVar5 = param_1;
  }
  else {
    pppuVar5 = (undefined8 ***)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined8 ***)0x7fffffffffffffff < param_1) {
      pppuVar5 = param_1;
    }
    func_0x000107c60418();
    pppuVar16 = (undefined8 ***)0x0;
    uVar12 = 0;
    ppuVar18 = (undefined8 **)0x0;
    pppuVar5 = (undefined8 ***)((ulong)pppuVar5 | 0x8000000000000000);
  }
  func_0x000107c61434();
  lVar14 = 0;
  pppuVar17 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = lVar14;
  ppuVar7 = ppuVar18;
  if ((long)pppuVar5 < 0) goto LAB_103025d14;
  while( true ) {
    while (ppuVar18 != (undefined8 **)0x0) {
      uVar11 = ((ulong)ppuVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 |
               ((ulong)ppuVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      ppuVar18 = (undefined8 **)((long)ppuVar18 - 1U & (ulong)ppuVar18);
      uVar11 = lVar2 << 9 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 3;
      ppuVar19 = *(undefined8 ***)((long)pppuVar5[6] + uVar11);
      ppuVar13 = *(undefined8 ***)((long)pppuVar5[7] + uVar11);
      puStack_70 = ppuVar19;
      puStack_68 = ppuVar13;
      func_0x000107c61174(ppuVar19);
      func_0x000107c61174(ppuVar13);
      ppppuVar9 = param_2;
      ppuVar13 = (undefined8 **)puStack_68;
      lVar15 = lVar14;
      while( true ) {
        lVar14 = lVar2;
        puStack_68 = ppuVar13;
        if (ppuVar19 == (undefined8 **)0x0) goto LAB_103025e6c;
        ppuVar7 = ppuVar19;
        func_0x000107c5c1d4();
        func_0x000107c61180();
        ppuVar8 = ppuVar7;
        func_0x000107c5faec();
        param_2 = ppppuVar9;
        func_0x000107c61170(ppuVar19);
        func_0x000107c61170(ppuVar7);
        param_1 = pppuVar17;
        func_0x000107c61558();
        if (((ulong)param_1 & 1) == 0) {
          param_2 = (undefined8 ****)((long)pppuVar17[2] + 1);
          param_1 = (undefined8 ***)0x0;
          func_0x000103029388(0,param_2,1,pppuVar17);
          pppuVar17 = param_1;
        }
        ppuVar7 = pppuVar17[2];
        ppppuVar1 = (undefined8 ****)((long)ppuVar7 + 1);
        if ((undefined8 **)((ulong)pppuVar17[3] >> 1) <= ppuVar7) {
          param_1 = (undefined8 ***)(ulong)((undefined8 **)0x1 < pppuVar17[3]);
          param_2 = ppppuVar1;
          func_0x000103029388(param_1,ppppuVar1,1,pppuVar17);
          pppuVar17 = param_1;
        }
        pppuVar17[2] = ppppuVar1;
        pppuVar17[(long)ppuVar7 * 3 + 4] = ppuVar8;
        pppuVar17[(long)ppuVar7 * 3 + 5] = ppppuVar9;
        pppuVar17[(long)ppuVar7 * 3 + 6] = ppuVar13;
        lVar2 = lVar14;
        ppuVar7 = ppuVar18;
        if (-1 < (long)pppuVar5) break;
LAB_103025d14:
        func_0x000107c60444();
        if (param_1 == (undefined8 ***)0x0) goto LAB_103025e68;
        uVar6 = 0;
        pppuStack_58 = param_1;
        FUN_10302a234(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar3 = PTR___syXlN_11034f1a0;
        func_0x000107c6147c(&puStack_70,&pppuStack_58,PTR___syXlN_11034f1a0 + 8,uVar6,7);
        uVar6 = 0;
        pppuStack_58 = param_2;
        FUN_10302a234(0,0x112e0fd70,&PTR_PTR_1126c2098);
        ppppuVar9 = &pppuStack_58;
        func_0x000107c6147c(&puStack_68,ppppuVar9,puVar3 + 8,uVar6,7);
        ppuVar19 = (undefined8 **)puStack_70;
        ppuVar13 = (undefined8 **)puStack_68;
        lVar2 = lVar14;
        ppuVar7 = ppuVar18;
        lVar15 = lVar14;
      }
    }
    lVar15 = lVar2 + 1;
    if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103025eb0);
      (*pcVar4)();
    }
    if ((long)(uVar12 + 0x40 >> 6) <= lVar15) break;
    ppuVar18 = pppuVar16[lVar15];
    lVar2 = lVar15;
  }
  ppuVar18 = (undefined8 **)0x0;
LAB_103025e68:
  puStack_70 = (undefined8 **)0x0;
  puStack_68 = (undefined8 **)0x0;
  lVar15 = lVar14;
  ppuVar7 = ppuVar18;
LAB_103025e6c:
  func_0x000101f157ec(pppuVar5,pppuVar16,uVar12,lVar15,ppuVar7);
  return pppuVar17;
}



/* Entry: 103025eb0; end: 10302606f;  */

/* WARNING: Possible PIC construction at 0x000103025f7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103025f80) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000103025fac) */

void FUN_103025eb0(undefined *param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010302a4c8(PTR___swiftEmptyArrayStorage_11034f1c8,0x112f0e1f8,&UNK_10db417a0);
    (*param_3)();
  }
  else {
    FUN_103025bec();
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      uVar1 = 0x112f0e1f8;
      func_0x0001000285a8(0x112f0e1f8,&UNK_10db417a0);
      func_0x000107c60498(lVar2,uVar1);
    }
    func_0x000107c61434(param_1);
    FUN_103029748();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 103026070; end: 1030260ef; -[_TtC38ContentMixedStoriesDataServiceProvider44ContentMixedStoriesDataServiceImplementation addListenerWithListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103026070(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 &
                        **(ulong **)(param_1 + _DAT_112f35010)) + 0x80);
    func_0x000107c61174();
    lVar1 = param_3;
    func_0x000107c615f0(param_3);
    uVar2 = (uint)lVar1;
    (*pcVar3)();
    func_0x000107c615e8(param_3);
    func_0x000107c61170(param_1);
  }
  return uVar2 & 1;
}



/* Entry: 1030260f0; end: 10302615f; -[_TtC38ContentMixedStoriesDataServiceProvider44ContentMixedStoriesDataServiceImplementation removeListenerWithListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030260f0(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  
  if (param_3 != 0) {
    pcVar1 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 &
                        **(ulong **)(param_1 + _DAT_112f35010)) + 0x88);
    func_0x000107c61174();
    func_0x000107c615f0(param_3);
    (*pcVar1)();
    func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103026160; end: 10302625f;  */

void FUN_103026160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = param_1;
  func_0x000103024d18();
  puVar2 = &UNK_1105fec60;
  func_0x000107c613fc(&UNK_1105fec60,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1105fec88;
  func_0x000107c613fc(&UNK_1105fec88,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  pcStack_50 = FUN_1030268e8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1021acf24;
  puStack_58 = &UNK_1105feca0;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c4f8a8(uVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 103026260; end: 1030268e7;  */

void FUN_103026260(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long lVar16;
  undefined1 *puVar17;
  undefined1 auStack_140 [8];
  long lStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [24];
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  lVar3 = 0;
  uStack_e8 = param_4;
  lStack_d0 = param_3;
  func_0x000107c5f7fc();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar17 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  lStack_d8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  lVar15 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_e0 = lVar15;
  func_0x000107c5f804();
  lStack_f8 = *(long *)(lVar5 + -8);
  lStack_f0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f8 + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_c8,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      puVar10 = &UNK_1105ff200;
      puVar6 = puVar10;
      uStack_120 = param_5;
      puStack_118 = puVar17;
      lStack_110 = lVar4;
      lStack_108 = lVar3;
      lStack_100 = lVar16;
      func_0x000107c613fc(&UNK_1105ff200,0x18,7);
      puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      *(undefined **)(puVar6 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      func_0x000107c613fc(&UNK_1105ff200,0x18,7);
      *(undefined **)(puVar10 + 0x10) = puVar7;
      lVar16 = param_1;
      func_0x000107c61434();
      func_0x000107c60f34();
      func_0x000107c60f38();
      puVar7 = &UNK_1105ff228;
      func_0x000107c613fc(&UNK_1105ff228,0x20,7);
      *(long *)(puVar7 + 0x10) = lVar16;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      func_0x000107c61174();
      puStack_128 = puVar6;
      func_0x000107c6157c(puVar6);
      func_0x000103024c80();
      lVar3 = param_1;
      func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
      puVar8 = &UNK_1105ff250;
      func_0x000107c613fc(&UNK_1105ff250,0x20,7);
      *(code **)(puVar8 + 0x10) = FUN_10302a2fc;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      uStack_88 = 0x10302a304;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_103025018;
      puStack_90 = &UNK_1105ff268;
      ppuVar11 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar11);
      puVar8 = puStack_80;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar8);
      func_0x000107c430ac(puVar6);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61574(puVar7);
      func_0x000107c615e8(puVar6);
      func_0x000107c61170(lVar3);
      func_0x000107c60f38(lVar16);
      puVar7 = &UNK_1105ff2a0;
      func_0x000107c613fc(&UNK_1105ff2a0,0x20,7);
      *(long *)(puVar7 + 0x10) = lVar16;
      *(undefined **)(puVar7 + 0x18) = puVar10;
      func_0x000107c61174();
      lStack_138 = lVar16;
      func_0x000107c6157c(puVar10);
      lStack_130 = param_2;
      FUN_1030255ec(param_1,FUN_10302a378,puVar7);
      func_0x000107c61574(puVar7);
      lVar16 = lStack_d0;
      lVar3 = lStack_d0;
      if (lStack_d0 == 0) {
        FUN_10302a234(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        lVar5 = lStack_f0;
        lVar4 = lStack_f8;
        (**(code **)(lStack_f8 + 0x68))
                  (lVar15,*(undefined4 *)
                           PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
                   lStack_f0);
        lVar3 = lVar15;
        func_0x000107c5fff0(lVar15);
        lVar16 = lStack_d0;
        (**(code **)(lVar4 + 8))(lVar15,lVar5);
      }
      lVar4 = lStack_108;
      puVar17 = puStack_118;
      uVar13 = uStack_120;
      puVar7 = &UNK_1105ff2c8;
      func_0x000107c613fc(&UNK_1105ff2c8,0x38,7);
      puVar8 = puStack_128;
      *(undefined **)(puVar7 + 0x10) = puStack_128;
      *(undefined **)(puVar7 + 0x18) = puVar10;
      *(undefined8 *)(puVar7 + 0x20) = uStack_e8;
      *(undefined8 *)(puVar7 + 0x28) = uVar13;
      *(long *)(puVar7 + 0x30) = param_1;
      uStack_88 = 0x10302a380;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = (code *)&UNK_1000f6b44;
      puStack_90 = &UNK_1105ff2e0;
      ppuVar11 = &puStack_a8;
      puStack_80 = puVar7;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c6157c(puVar8);
      func_0x000107c6157c(puVar10);
      func_0x000107c61174(lVar16);
      func_0x000107c6157c(uVar13);
      lVar5 = lStack_e0;
      func_0x000107c5f808(lStack_e0);
      puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001c7eec();
      uVar12 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar14 = uVar12;
      func_0x0001001c7f30();
      func_0x000107c60264(puVar17,&puStack_b0,uVar12,uVar14,lVar4,uVar13);
      lVar16 = lStack_138;
      func_0x000107c5ffb8(lVar5,puVar17,lVar3,ppuVar11);
      func_0x000107c61170(lStack_130);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(lVar16);
      func_0x000107c61170(lVar3);
      (**(code **)(lStack_100 + 8))(puVar17,lVar4);
      (**(code **)(lStack_d8 + 8))(lVar5,lStack_110);
      puVar7 = puStack_80;
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar10);
      goto LAB_1030268c0;
    }
  }
  lVar5 = lStack_d0;
  lVar9 = lStack_d0;
  if (lStack_d0 == 0) {
    FUN_10302a234(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    lVar2 = lStack_f0;
    lVar1 = lStack_f8;
    lStack_100 = lVar16;
    (**(code **)(lStack_f8 + 0x68))
              (lVar15,*(undefined4 *)
                       PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
               lStack_f0);
    lVar9 = lVar15;
    func_0x000107c5fff0(lVar15);
    lVar16 = lStack_100;
    (**(code **)(lVar1 + 8))(lVar15,lVar2);
  }
  puVar10 = &UNK_1105ff1b0;
  func_0x000107c613fc(&UNK_1105ff1b0,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uStack_e8;
  *(undefined8 *)(puVar10 + 0x18) = param_5;
  uStack_88 = 0x10302a2d8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_1000b0c7c;
  puStack_90 = &UNK_1105ff1c8;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c61174(lVar5);
  func_0x000107c6157c(param_5);
  lVar5 = lStack_e0;
  func_0x000107c5f808(lStack_e0);
  puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar12 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar13 = uVar12;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar17,&puStack_b0,uVar12,uVar13,lVar3,param_5);
  func_0x000107c5ffe8(0,lVar5,puVar17,ppuVar11);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(lVar9);
  (**(code **)(lVar16 + 8))(puVar17,lVar3);
  (**(code **)(lStack_d8 + 8))(lVar5,lVar4);
  puVar7 = puStack_80;
LAB_1030268c0:
  func_0x000107c61574(puVar7);
  return;
}



/* Entry: 1030268e8; end: 1030268f3;  */

void FUN_1030268e8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long unaff_x20;
  long lVar16;
  undefined1 *puVar17;
  undefined1 auStack_140 [8];
  long lStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [24];
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lStack_d0 = *(long *)(unaff_x20 + 0x18);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = 0;
  func_0x000107c5f7fc();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar17 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  lStack_d8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  lVar15 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_e0 = lVar15;
  func_0x000107c5f804();
  lStack_f8 = *(long *)(lVar5 + -8);
  lStack_f0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f8 + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (param_1 != 0) {
    func_0x000107c61428(lVar6 + 0x10,auStack_c8,0,0);
    lVar6 = lVar6 + 0x10;
    func_0x000107c61618();
    if (lVar6 != 0) {
      puVar10 = &UNK_1105ff200;
      puVar7 = puVar10;
      uStack_120 = uVar12;
      puStack_118 = puVar17;
      lStack_110 = lVar4;
      lStack_108 = lVar3;
      lStack_100 = lVar16;
      func_0x000107c613fc(&UNK_1105ff200,0x18,7);
      puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      *(undefined **)(puVar7 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      func_0x000107c613fc(&UNK_1105ff200,0x18,7);
      *(undefined **)(puVar10 + 0x10) = puVar8;
      lVar16 = param_1;
      func_0x000107c61434();
      func_0x000107c60f34();
      func_0x000107c60f38();
      puVar8 = &UNK_1105ff228;
      func_0x000107c613fc(&UNK_1105ff228,0x20,7);
      *(long *)(puVar8 + 0x10) = lVar16;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      func_0x000107c61174();
      puStack_128 = puVar7;
      func_0x000107c6157c(puVar7);
      func_0x000103024c80();
      lVar3 = param_1;
      func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
      puVar9 = &UNK_1105ff250;
      func_0x000107c613fc(&UNK_1105ff250,0x20,7);
      *(code **)(puVar9 + 0x10) = FUN_10302a2fc;
      *(undefined **)(puVar9 + 0x18) = puVar8;
      uStack_88 = 0x10302a304;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_103025018;
      puStack_90 = &UNK_1105ff268;
      ppuVar11 = &puStack_a8;
      puStack_80 = puVar9;
      func_0x000107c60bc4(ppuVar11);
      puVar9 = puStack_80;
      func_0x000107c6157c(puVar8);
      func_0x000107c61574(puVar9);
      func_0x000107c430ac(puVar7);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61574(puVar8);
      func_0x000107c615e8(puVar7);
      func_0x000107c61170(lVar3);
      func_0x000107c60f38(lVar16);
      puVar8 = &UNK_1105ff2a0;
      func_0x000107c613fc(&UNK_1105ff2a0,0x20,7);
      *(long *)(puVar8 + 0x10) = lVar16;
      *(undefined **)(puVar8 + 0x18) = puVar10;
      func_0x000107c61174();
      lStack_138 = lVar16;
      func_0x000107c6157c(puVar10);
      lStack_130 = lVar6;
      FUN_1030255ec(param_1,FUN_10302a378,puVar8);
      func_0x000107c61574(puVar8);
      lVar6 = lStack_d0;
      lVar16 = lStack_d0;
      if (lStack_d0 == 0) {
        FUN_10302a234(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        lVar4 = lStack_f0;
        lVar3 = lStack_f8;
        (**(code **)(lStack_f8 + 0x68))
                  (lVar15,*(undefined4 *)
                           PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
                   lStack_f0);
        lVar16 = lVar15;
        func_0x000107c5fff0(lVar15);
        lVar6 = lStack_d0;
        (**(code **)(lVar3 + 8))(lVar15,lVar4);
      }
      lVar3 = lStack_108;
      puVar17 = puStack_118;
      uVar13 = uStack_120;
      puVar8 = &UNK_1105ff2c8;
      func_0x000107c613fc(&UNK_1105ff2c8,0x38,7);
      puVar9 = puStack_128;
      *(undefined **)(puVar8 + 0x10) = puStack_128;
      *(undefined **)(puVar8 + 0x18) = puVar10;
      *(undefined8 *)(puVar8 + 0x20) = uStack_e8;
      *(undefined8 *)(puVar8 + 0x28) = uVar13;
      *(long *)(puVar8 + 0x30) = param_1;
      uStack_88 = 0x10302a380;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = (code *)&UNK_1000f6b44;
      puStack_90 = &UNK_1105ff2e0;
      ppuVar11 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c6157c(puVar9);
      func_0x000107c6157c(puVar10);
      func_0x000107c61174(lVar6);
      func_0x000107c6157c(uVar13);
      lVar4 = lStack_e0;
      func_0x000107c5f808(lStack_e0);
      puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001c7eec();
      uVar12 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar14 = uVar12;
      func_0x0001001c7f30();
      func_0x000107c60264(puVar17,&puStack_b0,uVar12,uVar14,lVar3,uVar13);
      lVar6 = lStack_138;
      func_0x000107c5ffb8(lVar4,puVar17,lVar16,ppuVar11);
      func_0x000107c61170(lStack_130);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar16);
      (**(code **)(lStack_100 + 8))(puVar17,lVar3);
      (**(code **)(lStack_d8 + 8))(lVar4,lStack_110);
      puVar8 = puStack_80;
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar10);
      goto LAB_1030268c0;
    }
  }
  lVar6 = lStack_d0;
  lVar5 = lStack_d0;
  if (lStack_d0 == 0) {
    FUN_10302a234(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    lVar2 = lStack_f0;
    lVar1 = lStack_f8;
    lStack_100 = lVar16;
    (**(code **)(lStack_f8 + 0x68))
              (lVar15,*(undefined4 *)
                       PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
               lStack_f0);
    lVar5 = lVar15;
    func_0x000107c5fff0(lVar15);
    lVar16 = lStack_100;
    (**(code **)(lVar1 + 8))(lVar15,lVar2);
  }
  puVar10 = &UNK_1105ff1b0;
  func_0x000107c613fc(&UNK_1105ff1b0,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uStack_e8;
  *(undefined8 *)(puVar10 + 0x18) = uVar12;
  uStack_88 = 0x10302a2d8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_1000b0c7c;
  puStack_90 = &UNK_1105ff1c8;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c61174(lVar6);
  func_0x000107c6157c(uVar12);
  lVar6 = lStack_e0;
  func_0x000107c5f808(lStack_e0);
  puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar13 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar14 = uVar13;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar17,&puStack_b0,uVar13,uVar14,lVar3,uVar12);
  func_0x000107c5ffe8(0,lVar6,puVar17,ppuVar11);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(lVar5);
  (**(code **)(lVar16 + 8))(puVar17,lVar3);
  (**(code **)(lStack_d8 + 8))(lVar6,lVar4);
  puVar8 = puStack_80;
LAB_1030268c0:
  func_0x000107c61574(puVar8);
  return;
}



/* Entry: 1030268f4; end: 1030270f7;  */

void FUN_1030268f4(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uStack_80;
  undefined *apuStack_78 [3];
  
  puVar10 = (undefined *)0x112f35058;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010302a4c8(PTR___swiftEmptyArrayStorage_11034f1c8,0x112f35058,&UNK_10db7d530);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar16 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar16 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar16 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar16 != (undefined *)0x0) {
    uStack_80 = (ulong)param_1 & 0xffffffffffffff8;
    puVar9 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(undefined **)(uStack_80 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103026c38);
            (*pcVar4)();
          }
          puVar6 = *(undefined **)(param_1 + (long)puVar9 * 8 + 0x20);
          func_0x000107c61174();
          puVar12 = puVar10;
        }
        else {
          puVar6 = puVar9;
          puVar12 = param_1;
          FUN_103028e4c();
        }
        puVar1 = puVar9 + 1;
        if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103026c34);
          (*pcVar4)();
        }
        puVar7 = puVar6;
        func_0x000107c5bfec();
        func_0x000107c61180();
        puVar10 = puVar12;
        if (puVar7 != (undefined *)0x0) break;
LAB_103026968:
        func_0x000107c61170(puVar6);
        puVar9 = puVar9 + 1;
        if (puVar1 == puVar16) goto LAB_103026be4;
      }
      puVar15 = puVar7;
      func_0x000107c5faec();
      func_0x000107c61170(puVar7);
      puVar7 = PTR_PTR_1126c2138;
      func_0x000107c61168();
      func_0x000107c439f8();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61434(puVar5);
        puVar7 = puVar12;
        func_0x000100029284();
        puVar10 = puVar7;
        func_0x000107c6142c(puVar5);
        if (((ulong)puVar7 & 1) == 0) {
          func_0x000107c6142c(puVar12);
          goto LAB_103026968;
        }
        puVar10 = puVar5;
        func_0x000107c61558();
        apuStack_78[0] = puVar5;
        if ((int)puVar10 == 0) {
          FUN_103029b10(0x112f35058,&UNK_10db7d530);
        }
        puVar5 = apuStack_78[0];
        func_0x000107c6142c(*(undefined8 *)
                             (*(long *)(apuStack_78[0] + 0x30) + (long)puVar15 * 0x10 + 8));
        func_0x000107c61170(*(undefined8 *)(*(long *)(puVar5 + 0x38) + (long)puVar15 * 8));
        puVar10 = puVar5;
        func_0x000103029f04(puVar15);
        func_0x000107c6142c(puVar12);
        puVar15 = puVar6;
LAB_103026b48:
        func_0x000107c61170(puVar15);
      }
      else {
        puVar8 = puVar5;
        func_0x000107c61558();
        puVar9 = puVar15;
        puVar13 = puVar12;
        apuStack_78[0] = puVar5;
        func_0x000100029284();
        uVar14 = (ulong)~(uint)puVar13 & 1;
        lVar2 = *(long *)(puVar5 + 0x10) + uVar14;
        if (SCARRY8(*(long *)(puVar5 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103026c5c);
          (*pcVar4)();
        }
        if (*(long *)(puVar5 + 0x18) < lVar2) {
          func_0x000103029c70(lVar2,puVar8,0x112f35058,&UNK_10db7d530);
          puVar9 = puVar15;
          puVar10 = puVar12;
          func_0x000100029284();
          puVar5 = apuStack_78[0];
          if (((uint)puVar13 & 1) != ((uint)puVar10 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103026c70);
            (*pcVar4)();
          }
        }
        else {
          puVar10 = puVar13;
          puVar5 = apuStack_78[0];
          if (((ulong)puVar8 & 1) == 0) {
            puVar10 = &UNK_10db7d530;
            FUN_103029b10(0x112f35058);
            puVar5 = apuStack_78[0];
          }
        }
        apuStack_78[0] = puVar5;
        if (((ulong)puVar13 & 1) != 0) {
          puVar15 = *(undefined **)(*(long *)(puVar5 + 0x38) + (long)puVar9 * 8);
          *(undefined **)(*(long *)(puVar5 + 0x38) + (long)puVar9 * 8) = puVar7;
          func_0x000107c6142c(puVar12);
          func_0x000107c61170(puVar6);
          goto LAB_103026b48;
        }
        *(ulong *)(puVar5 + ((ulong)puVar9 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar5 + ((ulong)puVar9 >> 6) * 8 + 0x40) | 1L << ((ulong)puVar9 & 0x3f);
        puVar3 = (undefined8 *)(*(long *)(puVar5 + 0x30) + (long)puVar9 * 0x10);
        *puVar3 = puVar15;
        puVar3[1] = puVar12;
        *(undefined **)(*(long *)(puVar5 + 0x38) + (long)puVar9 * 8) = puVar7;
        func_0x000107c61170(puVar6);
        if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103026c60);
          (*pcVar4)();
        }
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      }
      puVar9 = puVar1;
    } while (puVar1 != puVar16);
  }
LAB_103026be4:
  func_0x000107c61428(param_3 + 0x10,apuStack_78,1,0);
  uVar11 = *(undefined8 *)(param_3 + 0x10);
  *(undefined **)(param_3 + 0x10) = puVar5;
  func_0x000107c6142c(uVar11);
  func_0x000107c60f3c(param_2);
  return;
}



/* Entry: 1030270f8; end: 103027113; -[_TtC38ContentMixedStoriesDataServiceProvider44ContentMixedStoriesDataServiceImplementation fetchMixedCarouselRankedStoriesWithCompletionQueue:completion:] */

void FUN_1030270f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1105fefa8;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1105fefa8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103026160(param_3,0x103028b9c,puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103027114; end: 103027173;  */

void FUN_103027114(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0;
    FUN_10302a234(0,0x112f35040,&PTR_PTR_1126c2138);
    func_0x000107c5fc48(param_1,uVar1);
  }
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103027174; end: 1030273e3;  */

void FUN_103027174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  ulong uVar8;
  long extraout_x12;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  lVar14 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)&puStack_90 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar10 - extraout_x12;
  func_0x000103024be8();
  lVar1 = lVar2;
  func_0x000107c51b54();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c43328();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c5ee94(lVar9,lVar2);
      func_0x000107c61170(lVar2);
      lVar2 = 0;
      func_0x000107c5eea4();
      uVar7 = 0;
      goto LAB_10302727c;
    }
  }
  lVar2 = 0;
  func_0x000107c5eea4();
  uVar7 = 1;
LAB_10302727c:
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar9,uVar7,1);
  func_0x0001009f0578(lVar9,lVar10);
  uVar8 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar12 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  uVar13 = lVar11 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar3 = &UNK_1105fecd8;
  func_0x000107c613fc(&UNK_1105fecd8,uVar13 + 0x10,uVar8 | 7);
  func_0x0001003a4c00(lVar10,puVar3 + uVar12);
  *(undefined8 *)(puVar3 + uVar13) = param_2;
  *(undefined8 *)((long)(puVar3 + uVar13) + 8) = param_3;
  func_0x000107c6157c(param_3);
  func_0x000103024d18();
  puVar4 = &UNK_1105fec60;
  func_0x000107c613fc(&UNK_1105fec60,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_1105fed00;
  func_0x000107c613fc(&UNK_1105fed00,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(code **)(puVar5 + 0x20) = FUN_103027934;
  *(undefined **)(puVar5 + 0x28) = puVar3;
  uStack_70 = 0x10302a908;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1021acf24;
  puStack_78 = &UNK_1105fed18;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar4 = puStack_68;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c4f8a8(param_3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c615e8(param_3);
  func_0x0001000d1dcc(lVar9);
  return;
}



/* Entry: 1030273e4; end: 103027933;  */

void FUN_1030273e4(ulong param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined *puVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined *puVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_120 [8];
  long lStack_118;
  long lStack_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  byte bStack_81;
  undefined *puStack_80;
  
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar15 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)puVar15 - extraout_x12;
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001009f0578(param_2,lVar14);
  lVar4 = lVar14;
  (**(code **)(lVar16 + 0x30))(lVar14,1,lVar5);
  if ((int)lVar4 == 1) {
    func_0x0001000d1dcc(lVar14);
  }
  else {
    (**(code **)(lVar16 + 0x20))(lVar17,lVar14,lVar5);
    if (param_1 == 0) {
      pcVar3 = *(code **)(lVar16 + 8);
    }
    else {
      uVar18 = param_1 & 0xffffffffffffff8;
      lStack_e8 = lVar17;
      if (param_1 >> 0x3e == 0) {
        uStack_d0 = *(ulong *)(uVar18 + 0x10);
        if (uStack_d0 != 0) {
LAB_103027514:
          puStack_108 = puVar15;
          lStack_118 = lVar16;
          lStack_110 = lVar5;
          uStack_100 = param_4;
          pcStack_f8 = param_3;
          puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (uStack_d0 != 0) {
            uStack_d8 = param_1 & 0xc000000000000001;
            uVar12 = 0;
            puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
            uStack_e0 = uVar18;
            do {
              while( true ) {
                puStack_f0 = puVar6;
                if (uStack_d8 == 0) {
                  if (*(ulong *)(uVar18 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1030278a8);
                    (*pcVar3)();
                  }
                  uVar18 = *(ulong *)(param_1 + uVar12 * 8 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  uVar18 = uVar12;
                  func_0x000103029010(uVar12,param_1,&PTR_PTR_1126c2138,0x112f35040);
                }
                uStack_c0 = uVar18;
                if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1030278a4);
                  (*pcVar3)();
                }
                bStack_81 = 0;
                puVar6 = &UNK_1105ff0c0;
                uStack_c8 = uVar12 + 1;
                func_0x000107c613fc(&UNK_1105ff0c0,0x18,7);
                *(byte **)(puVar6 + 0x10) = &bStack_81;
                puVar13 = &UNK_1105ff0e8;
                func_0x000107c613fc(&UNK_1105ff0e8,0x20,7);
                *(undefined8 *)(puVar13 + 0x10) = 0x10302a274;
                *(undefined **)(puVar13 + 0x18) = puVar6;
                puVar1 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_98 = 0x10302a90c;
                puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_b0 = 0x42000000;
                uStack_a8 = 0x10302a888;
                puStack_a0 = &UNK_1105ff100;
                ppuVar7 = &puStack_b8;
                puStack_90 = puVar13;
                func_0x000107c60bc4(ppuVar7);
                puVar8 = puStack_90;
                func_0x000107c6157c(puVar13);
                func_0x000107c61574(puVar8);
                puVar8 = &UNK_1105ff138;
                func_0x000107c613fc(&UNK_1105ff138,0x18,7);
                *(byte **)(puVar8 + 0x10) = &bStack_81;
                puVar9 = &UNK_1105ff160;
                func_0x000107c613fc(&UNK_1105ff160,0x20,7);
                *(undefined8 *)(puVar9 + 0x10) = 0x10302a2b0;
                *(undefined **)(puVar9 + 0x18) = puVar8;
                uStack_98 = 0x10302a910;
                puStack_b8 = puVar1;
                uStack_b0 = 0x42000000;
                uStack_a8 = 0x10302a88c;
                puStack_a0 = &UNK_1105ff178;
                ppuVar10 = &puStack_b8;
                puStack_90 = puVar9;
                func_0x000107c60bc4(ppuVar10);
                puVar1 = puStack_90;
                func_0x000107c6157c(puVar9);
                func_0x000107c61574(puVar1);
                uVar18 = uStack_c0;
                func_0x000107c4c630(uStack_c0);
                func_0x000107c60bd0(ppuVar10);
                func_0x000107c60bd0(ppuVar7);
                bVar2 = bStack_81;
                func_0x000107c61574(puVar6);
                puVar6 = puVar13;
                func_0x000107c61544(puVar13,"",0x9d,0x101,0x35,1);
                func_0x000107c61574(puVar8);
                func_0x000107c61574(puVar13);
                if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1030278ac);
                  (*pcVar3)();
                }
                puVar13 = puVar9;
                func_0x000107c61544(puVar9,"",0x9d,0x103,0x27,1);
                func_0x000107c61574(puVar9);
                puVar6 = puStack_f0;
                if (((ulong)puVar13 & 1) != 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1030278b0);
                  (*pcVar3)();
                }
                if ((bVar2 & 1) != 0) break;
                func_0x000107c61170(uVar18);
                uVar12 = uVar12 + 1;
                uVar18 = uStack_e0;
                puVar6 = puStack_f0;
                if (uStack_c8 == uStack_d0) goto joined_r0x000103027824;
              }
              puVar13 = puStack_f0;
              func_0x000107c61558();
              uVar18 = uStack_e0;
              puStack_80 = puVar6;
              if (((ulong)puVar13 & 1) == 0) {
                FUN_103028c4c(0,*(long *)(puVar6 + 0x10) + 1,1);
              }
              uVar12 = *(ulong *)(puStack_80 + 0x10);
              if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar12) {
                FUN_103028c4c(1 < *(ulong *)(puStack_80 + 0x18),uVar12 + 1,1);
              }
              *(ulong *)(puStack_80 + 0x10) = uVar12 + 1;
              *(ulong *)(puStack_80 + uVar12 * 8 + 0x20) = uStack_c0;
              uVar12 = uStack_c8;
              puVar6 = puStack_80;
            } while (uStack_c8 != uStack_d0);
          }
joined_r0x000103027824:
          if (((long)puVar6 < 0) || (((ulong)puVar6 >> 0x3e & 1) != 0)) {
            puVar13 = puVar6;
            func_0x000107c60480(puVar6);
          }
          else {
            puVar13 = *(undefined **)(puVar6 + 0x10);
          }
          lVar5 = lStack_e8;
          pcVar3 = pcStack_f8;
          puVar15 = puStack_108;
          lVar17 = lStack_110;
          lVar4 = lStack_118;
          func_0x000107c61574(puVar6);
          (**(code **)(lVar4 + 0x10))(puVar15,lVar5,lVar17);
          (**(code **)(lVar4 + 0x38))(puVar15,0,1,lVar17);
          (*pcVar3)(puVar13,puVar15);
          func_0x0001000d1dcc(puVar15);
          (**(code **)(lVar4 + 8))(lVar5,lVar17);
          return;
        }
      }
      else {
        uVar12 = param_1;
        if (-1 < (long)param_1) {
          uVar12 = uVar18;
        }
        uVar11 = uVar12;
        func_0x000107c60480();
        if (0 < (long)uVar11) {
          func_0x000107c60480();
          uStack_d0 = uVar12;
          goto LAB_103027514;
        }
      }
      pcVar3 = *(code **)(lVar16 + 8);
      lVar17 = lStack_e8;
    }
    (*pcVar3)(lVar17,lVar5);
  }
  (*param_3)(0,param_2);
  return;
}



/* Entry: 103027934; end: 103027993;  */

void FUN_103027934(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  byte bVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar16;
  ulong uVar17;
  long extraout_x12;
  undefined *puVar18;
  long lVar19;
  long unaff_x20;
  undefined1 *puVar20;
  long lVar21;
  long lVar22;
  undefined1 auStack_120 [8];
  long lStack_118;
  long lStack_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  byte bStack_81;
  undefined *puStack_80;
  
  lVar15 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar17 = (ulong)*(byte *)(*(long *)(lVar15 + -8) + 0x50);
  uVar17 = uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar15 + -8) + 0x40) + uVar17 + 7 & 0xfffffffffffffff8)
           );
  pcVar6 = (code *)*puVar1;
  uVar3 = puVar1[1];
  lVar2 = unaff_x20 + uVar17;
  lVar15 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  puVar20 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = (long)puVar20 - extraout_x12;
  lVar7 = 0;
  func_0x000107c5eea4();
  lVar21 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar22 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001009f0578(lVar2,lVar19);
  lVar15 = lVar19;
  (**(code **)(lVar21 + 0x30))(lVar19,1,lVar7);
  if ((int)lVar15 == 1) {
    func_0x0001000d1dcc(lVar19);
  }
  else {
    (**(code **)(lVar21 + 0x20))(lVar22,lVar19,lVar7);
    if (param_1 == 0) {
      pcVar16 = *(code **)(lVar21 + 8);
    }
    else {
      uVar17 = param_1 & 0xffffffffffffff8;
      lStack_e8 = lVar22;
      if (param_1 >> 0x3e == 0) {
        uStack_d0 = *(ulong *)(uVar17 + 0x10);
        if (uStack_d0 != 0) {
LAB_103027514:
          pcStack_f8 = pcVar6;
          uStack_100 = uVar3;
          puStack_108 = puVar20;
          lStack_118 = lVar21;
          lStack_110 = lVar7;
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (uStack_d0 != 0) {
            uStack_d8 = param_1 & 0xc000000000000001;
            uVar14 = 0;
            puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
            uStack_e0 = uVar17;
            do {
              while( true ) {
                puStack_f0 = puVar8;
                if (uStack_d8 == 0) {
                  if (*(ulong *)(uVar17 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x1030278a8);
                    (*pcVar6)();
                  }
                  uVar17 = *(ulong *)(param_1 + uVar14 * 8 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  uVar17 = uVar14;
                  func_0x000103029010(uVar14,param_1,&PTR_PTR_1126c2138,0x112f35040);
                }
                uStack_c0 = uVar17;
                if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1030278a4);
                  (*pcVar6)();
                }
                bStack_81 = 0;
                puVar8 = &UNK_1105ff0c0;
                uStack_c8 = uVar14 + 1;
                func_0x000107c613fc(&UNK_1105ff0c0,0x18,7);
                *(byte **)(puVar8 + 0x10) = &bStack_81;
                puVar18 = &UNK_1105ff0e8;
                func_0x000107c613fc(&UNK_1105ff0e8,0x20,7);
                *(undefined8 *)(puVar18 + 0x10) = 0x10302a274;
                *(undefined **)(puVar18 + 0x18) = puVar8;
                puVar4 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_98 = 0x10302a90c;
                puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_b0 = 0x42000000;
                uStack_a8 = 0x10302a888;
                puStack_a0 = &UNK_1105ff100;
                ppuVar9 = &puStack_b8;
                puStack_90 = puVar18;
                func_0x000107c60bc4(ppuVar9);
                puVar10 = puStack_90;
                func_0x000107c6157c(puVar18);
                func_0x000107c61574(puVar10);
                puVar10 = &UNK_1105ff138;
                func_0x000107c613fc(&UNK_1105ff138,0x18,7);
                *(byte **)(puVar10 + 0x10) = &bStack_81;
                puVar11 = &UNK_1105ff160;
                func_0x000107c613fc(&UNK_1105ff160,0x20,7);
                *(undefined8 *)(puVar11 + 0x10) = 0x10302a2b0;
                *(undefined **)(puVar11 + 0x18) = puVar10;
                uStack_98 = 0x10302a910;
                puStack_b8 = puVar4;
                uStack_b0 = 0x42000000;
                uStack_a8 = 0x10302a88c;
                puStack_a0 = &UNK_1105ff178;
                ppuVar12 = &puStack_b8;
                puStack_90 = puVar11;
                func_0x000107c60bc4(ppuVar12);
                puVar4 = puStack_90;
                func_0x000107c6157c(puVar11);
                func_0x000107c61574(puVar4);
                uVar17 = uStack_c0;
                func_0x000107c4c630(uStack_c0);
                func_0x000107c60bd0(ppuVar12);
                func_0x000107c60bd0(ppuVar9);
                bVar5 = bStack_81;
                func_0x000107c61574(puVar8);
                puVar8 = puVar18;
                func_0x000107c61544(puVar18,"",0x9d,0x101,0x35,1);
                func_0x000107c61574(puVar10);
                func_0x000107c61574(puVar18);
                if (((ulong)puVar8 & 1) != 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1030278ac);
                  (*pcVar6)();
                }
                puVar18 = puVar11;
                func_0x000107c61544(puVar11,"",0x9d,0x103,0x27,1);
                func_0x000107c61574(puVar11);
                puVar8 = puStack_f0;
                if (((ulong)puVar18 & 1) != 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1030278b0);
                  (*pcVar6)();
                }
                if ((bVar5 & 1) != 0) break;
                func_0x000107c61170(uVar17);
                uVar14 = uVar14 + 1;
                uVar17 = uStack_e0;
                puVar8 = puStack_f0;
                if (uStack_c8 == uStack_d0) goto joined_r0x000103027824;
              }
              puVar18 = puStack_f0;
              func_0x000107c61558();
              uVar17 = uStack_e0;
              puStack_80 = puVar8;
              if (((ulong)puVar18 & 1) == 0) {
                FUN_103028c4c(0,*(long *)(puVar8 + 0x10) + 1,1);
              }
              uVar14 = *(ulong *)(puStack_80 + 0x10);
              if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar14) {
                FUN_103028c4c(1 < *(ulong *)(puStack_80 + 0x18),uVar14 + 1,1);
              }
              *(ulong *)(puStack_80 + 0x10) = uVar14 + 1;
              *(ulong *)(puStack_80 + uVar14 * 8 + 0x20) = uStack_c0;
              uVar14 = uStack_c8;
              puVar8 = puStack_80;
            } while (uStack_c8 != uStack_d0);
          }
joined_r0x000103027824:
          if (((long)puVar8 < 0) || (((ulong)puVar8 >> 0x3e & 1) != 0)) {
            puVar18 = puVar8;
            func_0x000107c60480(puVar8);
          }
          else {
            puVar18 = *(undefined **)(puVar8 + 0x10);
          }
          lVar22 = lStack_e8;
          pcVar6 = pcStack_f8;
          puVar20 = puStack_108;
          lVar2 = lStack_110;
          lVar15 = lStack_118;
          func_0x000107c61574(puVar8);
          (**(code **)(lVar15 + 0x10))(puVar20,lVar22,lVar2);
          (**(code **)(lVar15 + 0x38))(puVar20,0,1,lVar2);
          (*pcVar6)(puVar18,puVar20);
          func_0x0001000d1dcc(puVar20);
          (**(code **)(lVar15 + 8))(lVar22,lVar2);
          return;
        }
      }
      else {
        uVar14 = param_1;
        if (-1 < (long)param_1) {
          uVar14 = uVar17;
        }
        uVar13 = uVar14;
        func_0x000107c60480();
        if (0 < (long)uVar13) {
          func_0x000107c60480();
          uStack_d0 = uVar14;
          goto LAB_103027514;
        }
      }
      pcVar16 = *(code **)(lVar21 + 8);
      lVar22 = lStack_e8;
    }
    (*pcVar16)(lVar22,lVar7);
  }
  (*pcVar6)(0,lVar2);
  return;
}



/* Entry: 103027994; end: 1030279c7;  */

void FUN_103027994(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1030279c8; end: 1030279e3; -[_TtC38ContentMixedStoriesDataServiceProvider44ContentMixedStoriesDataServiceImplementation fetchMixedCarouselStoriesToShowAndLastFetchedDateWithCompletionQueue:completion:] */

void FUN_1030279c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1105fef80;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1105fef80,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103027174(param_3,FUN_103028b94,puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1030279e4; end: 103027ac7;  */

void FUN_1030279e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x0001009f0578(param_2,puVar3);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  puVar4 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
    puVar4 = puVar2;
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,puVar4);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 103027ac8; end: 1030280c3;  */

void FUN_103027ac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long extraout_x8;
  undefined1 *puVar15;
  long lVar16;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long lVar18;
  undefined1 auStack_120 [8];
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar15 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f804();
  lStack_118 = *(long *)(lVar4 + -8);
  puStack_110 = (undefined *)lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_118 + 0x40));
  lVar18 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60f34();
  puVar7 = &UNK_1105fed50;
  puVar5 = puVar7;
  func_0x000107c613fc(&UNK_1105fed50,0x18,7);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(puVar5 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = puVar7;
  func_0x000107c613fc(&UNK_1105fed50,0x18,7);
  *(undefined **)(puVar6 + 0x10) = puVar8;
  func_0x000107c613fc(&UNK_1105fed50,0x18,7);
  *(undefined **)(puVar7 + 0x10) = puVar8;
  func_0x000107c60f38(lVar4);
  puVar8 = &UNK_1105fed78;
  func_0x000107c613fc(&UNK_1105fed78,0x28,7);
  *(long *)(puVar8 + 0x10) = lVar4;
  *(undefined **)(puVar8 + 0x18) = puVar6;
  *(undefined **)(puVar8 + 0x20) = puVar5;
  func_0x000107c61174();
  puStack_100 = puVar6;
  func_0x000107c6157c(puVar6);
  puStack_108 = puVar5;
  func_0x000107c6157c(puVar5);
  func_0x000103024c80();
  puVar6 = &UNK_1105feda0;
  func_0x000107c613fc(&UNK_1105feda0,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_103028410;
  *(undefined **)(puVar6 + 0x18) = puVar8;
  uStack_88 = 0x10302a914;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_103025018;
  puStack_90 = &UNK_1105fedb8;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar6;
  func_0x000107c60bc4(ppuVar9);
  puVar6 = puStack_80;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar6);
  func_0x000107c43274(puVar5);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puVar8);
  func_0x000107c615e8(puVar5);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  lVar10 = 0x112d38c88;
  FUN_103028bd4(0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d4a820,&UNK_10d910f30);
  func_0x000107c613fc();
  *(undefined8 *)(lVar10 + 0x18) = 3;
  *(undefined8 *)(lVar10 + 0x10) = 1;
  *(undefined **)(lVar10 + 0x20) = puVar8;
  if (param_1 == 0) {
    FUN_10302a234(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    puVar6 = puStack_110;
    lVar1 = lStack_118;
    (**(code **)(lStack_118 + 0x68))
              (lVar18,*(undefined4 *)
                       PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
               puStack_110);
    func_0x000107c61174(puVar8);
    lVar11 = lVar18;
    func_0x000107c5fff0(lVar18);
    (**(code **)(lVar1 + 8))(lVar18,puVar6);
  }
  else {
    func_0x000107c61174(puVar8);
    lVar11 = param_1;
  }
  func_0x000107c61174(param_1);
  func_0x000107c60f38(lVar4);
  puVar6 = &UNK_1105fedf0;
  func_0x000107c613fc(&UNK_1105fedf0,0x28,7);
  *(long *)(puVar6 + 0x10) = lVar4;
  *(undefined **)(puVar6 + 0x18) = puVar7;
  *(undefined **)(puVar6 + 0x20) = puVar8;
  func_0x000107c61174();
  lStack_118 = lVar4;
  func_0x000107c61174();
  puVar5 = puVar7;
  puStack_110 = puVar8;
  func_0x000107c6157c(puVar7);
  func_0x000103024be8();
  uVar12 = 0;
  FUN_10302a234(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  lVar4 = lVar10;
  func_0x000107c5fc48(lVar10,uVar12);
  puVar8 = &UNK_1105fee18;
  func_0x000107c613fc(&UNK_1105fee18,0x28,7);
  *(long *)(puVar8 + 0x10) = lVar10;
  *(code **)(puVar8 + 0x18) = FUN_103028b0c;
  *(undefined **)(puVar8 + 0x20) = puVar6;
  uStack_88 = 0x10302a91c;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_10302532c;
  puStack_90 = &UNK_1105fee30;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar8 = puStack_80;
  func_0x000107c6157c(lVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c3dba4(puVar5);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(lVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c615e8(puVar5);
  func_0x000107c61170(lVar4);
  puVar8 = &UNK_1105fee68;
  func_0x000107c613fc(&UNK_1105fee68,0x38,7);
  puVar5 = puStack_100;
  puVar6 = puStack_108;
  *(undefined8 *)(puVar8 + 0x10) = param_2;
  *(undefined8 *)(puVar8 + 0x18) = param_3;
  *(undefined **)(puVar8 + 0x20) = puStack_108;
  *(undefined **)(puVar8 + 0x28) = puVar7;
  *(undefined **)(puVar8 + 0x30) = puStack_100;
  uStack_88 = 0x103028b18;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_1000f6b44;
  puStack_90 = &UNK_1105fee80;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(param_3);
  func_0x000107c5f808(lVar17);
  puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar12 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar13 = uVar12;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar15,&puStack_b0,uVar12,uVar13,lVar2,param_3);
  lVar10 = lStack_118;
  func_0x000107c5ffb8(lVar17,puVar15,lVar11,ppuVar9);
  func_0x000107c61170(lVar11);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(puStack_110);
  (**(code **)(lVar14 + 8))(puVar15,lVar2);
  (**(code **)(lVar16 + 8))(lVar17,lVar3);
  puVar8 = puStack_80;
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar8);
  return;
}



/* Entry: 1030280c4; end: 10302840f;  */

void FUN_1030280c4(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_78 [24];
  
  if (param_1 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar8 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar8 != 0) {
    uVar10 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1030283c8);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar10;
        FUN_103028e4c(uVar10,param_1);
      }
      uVar1 = uVar10 + 1;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1030283c4);
        (*pcVar2)();
      }
      puVar4 = PTR_PTR_1126c2138;
      func_0x000107c61168();
      func_0x000107c439f8();
      func_0x000107c61180();
      uVar6 = uVar3;
      func_0x000107c4a53c();
      if ((int)uVar6 == 0) {
        func_0x000107c61428(param_4 + 0x10,auStack_78,0x21,0);
        uVar11 = *(ulong *)(param_4 + 0x10);
        puVar7 = puVar4;
        func_0x000107c61174();
        uVar6 = uVar11;
        func_0x000107c61550();
        *(ulong *)(param_4 + 0x10) = uVar11;
        if ((((int)uVar6 == 0) || ((long)uVar11 < 0)) || (uVar6 = uVar11, (uVar11 >> 0x3e & 1) != 0)
           ) {
          if (uVar11 >> 0x3e == 0) {
            uVar5 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar5 = uVar11 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar11) {
              uVar5 = uVar11;
            }
            func_0x000107c60480(uVar5);
          }
          uVar6 = 0;
          FUN_1030294cc(0,uVar5 + 1,1,uVar11,0x112f35040,&PTR_PTR_1126c2138,0x112f35050,
                        &UNK_10db7d528);
          *(ulong *)(param_4 + 0x10) = uVar6;
        }
        uVar9 = uVar6 & 0xffffffffffffff8;
        uVar11 = *(ulong *)(uVar9 + 0x10);
        uVar5 = uVar6;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar11) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_1030294cc(uVar5,uVar11 + 1,1,uVar6,0x112f35040,&PTR_PTR_1126c2138,0x112f35050,
                        &UNK_10db7d528);
          uVar9 = uVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar11 + 1;
        *(undefined **)(uVar9 + uVar11 * 8 + 0x20) = puVar7;
        *(ulong *)(param_4 + 0x10) = uVar5;
      }
      else {
        func_0x000107c61428(param_3 + 0x10,auStack_78,0x21,0);
        uVar11 = *(ulong *)(param_3 + 0x10);
        puVar7 = puVar4;
        func_0x000107c61174();
        uVar6 = uVar11;
        func_0x000107c61550();
        *(ulong *)(param_3 + 0x10) = uVar11;
        if ((((int)uVar6 == 0) || ((long)uVar11 < 0)) || (uVar6 = uVar11, (uVar11 >> 0x3e & 1) != 0)
           ) {
          if (uVar11 >> 0x3e == 0) {
            uVar5 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar5 = uVar11 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar11) {
              uVar5 = uVar11;
            }
            func_0x000107c60480(uVar5);
          }
          uVar6 = 0;
          FUN_1030294cc(0,uVar5 + 1,1,uVar11,0x112f35040,&PTR_PTR_1126c2138,0x112f35050,
                        &UNK_10db7d528);
          *(ulong *)(param_3 + 0x10) = uVar6;
        }
        uVar9 = uVar6 & 0xffffffffffffff8;
        uVar11 = *(ulong *)(uVar9 + 0x10);
        uVar5 = uVar6;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar11) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_1030294cc(uVar5,uVar11 + 1,1,uVar6,0x112f35040,&PTR_PTR_1126c2138,0x112f35050,
                        &UNK_10db7d528);
          uVar9 = uVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar11 + 1;
        *(undefined **)(uVar9 + uVar11 * 8 + 0x20) = puVar7;
        *(ulong *)(param_3 + 0x10) = uVar5;
      }
      func_0x000107c614a8(auStack_78);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar3);
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar8);
  }
  func_0x000107c60f3c(param_2);
  return;
}



/* Entry: 103028410; end: 10302841b;  */

void FUN_103028410(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_78 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar11 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar11 != 0) {
    uVar13 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1030283c8);
          (*pcVar4)();
        }
        uVar5 = *(ulong *)(param_1 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar13;
        FUN_103028e4c(uVar13,param_1);
      }
      uVar1 = uVar13 + 1;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1030283c4);
        (*pcVar4)();
      }
      puVar6 = PTR_PTR_1126c2138;
      func_0x000107c61168();
      func_0x000107c439f8();
      func_0x000107c61180();
      uVar8 = uVar5;
      func_0x000107c4a53c();
      if ((int)uVar8 == 0) {
        func_0x000107c61428(lVar10 + 0x10,auStack_78,0x21,0);
        uVar14 = *(ulong *)(lVar10 + 0x10);
        puVar9 = puVar6;
        func_0x000107c61174();
        uVar8 = uVar14;
        func_0x000107c61550();
        *(ulong *)(lVar10 + 0x10) = uVar14;
        if ((((int)uVar8 == 0) || ((long)uVar14 < 0)) || (uVar8 = uVar14, (uVar14 >> 0x3e & 1) != 0)
           ) {
          if (uVar14 >> 0x3e == 0) {
            uVar7 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar7 = uVar14 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar14) {
              uVar7 = uVar14;
            }
            func_0x000107c60480(uVar7);
          }
          uVar8 = 0;
          FUN_1030294cc(0,uVar7 + 1,1,uVar14,0x112f35040,&PTR_PTR_1126c2138,0x112f35050,
                        &UNK_10db7d528);
          *(ulong *)(lVar10 + 0x10) = uVar8;
        }
        uVar12 = uVar8 & 0xffffffffffffff8;
        uVar14 = *(ulong *)(uVar12 + 0x10);
        uVar7 = uVar8;
        if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar14) {
          uVar7 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
          FUN_1030294cc(uVar7,uVar14 + 1,1,uVar8,0x112f35040,&PTR_PTR_1126c2138,0x112f35050,
                        &UNK_10db7d528);
          uVar12 = uVar7 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar12 + 0x10) = uVar14 + 1;
        *(undefined **)(uVar12 + uVar14 * 8 + 0x20) = puVar9;
        *(ulong *)(lVar10 + 0x10) = uVar7;
      }
      else {
        func_0x000107c61428(lVar3 + 0x10,auStack_78,0x21,0);
        uVar14 = *(ulong *)(lVar3 + 0x10);
        puVar9 = puVar6;
        func_0x000107c61174();
        uVar8 = uVar14;
        func_0x000107c61550();
        *(ulong *)(lVar3 + 0x10) = uVar14;
        if ((((int)uVar8 == 0) || ((long)uVar14 < 0)) || (uVar8 = uVar14, (uVar14 >> 0x3e & 1) != 0)
           ) {
          if (uVar14 >> 0x3e == 0) {
            uVar7 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar7 = uVar14 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar14) {
              uVar7 = uVar14;
            }
            func_0x000107c60480(uVar7);
          }
          uVar8 = 0;
          FUN_1030294cc(0,uVar7 + 1,1,uVar14,0x112f35040,&PTR_PTR_1126c2138,0x112f35050,
                        &UNK_10db7d528);
          *(ulong *)(lVar3 + 0x10) = uVar8;
        }
        uVar12 = uVar8 & 0xffffffffffffff8;
        uVar14 = *(ulong *)(uVar12 + 0x10);
        uVar7 = uVar8;
        if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar14) {
          uVar7 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
          FUN_1030294cc(uVar7,uVar14 + 1,1,uVar8,0x112f35040,&PTR_PTR_1126c2138,0x112f35050,
                        &UNK_10db7d528);
          uVar12 = uVar7 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar12 + 0x10) = uVar14 + 1;
        *(undefined **)(uVar12 + uVar14 * 8 + 0x20) = puVar9;
        *(ulong *)(lVar3 + 0x10) = uVar7;
      }
      func_0x000107c614a8(auStack_78);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar5);
      uVar13 = uVar13 + 1;
    } while (uVar1 != uVar11);
  }
  func_0x000107c60f3c(uVar2);
  return;
}



/* Entry: 10302841c; end: 10302868b;  */

void FUN_10302841c(ulong param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_78 [24];
  
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar12 = param_2;
    func_0x000107c61434();
    func_0x000100121450();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar9 = param_1;
    if ((uVar12 & 1) != 0) {
      uVar9 = *(ulong *)(*(long *)(param_1 + 0x38) + param_4 * 8);
      func_0x000107c61434(uVar9);
      func_0x000107c6142c(param_1);
      uVar12 = uVar9 & 0xffffffffffffff8;
      if (uVar9 >> 0x3e == 0) {
        uVar10 = *(ulong *)(uVar12 + 0x10);
      }
      else {
        uVar10 = uVar12;
        if (0x7fffffffffffffff < uVar9) {
          uVar10 = uVar9;
        }
        func_0x000107c60480();
      }
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar11 = 0;
      while (uVar10 != uVar11) {
        if ((uVar9 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar12 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103028678);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(uVar9 + uVar11 * 8 + 0x20);
          func_0x000107c61174(uVar3);
        }
        else {
          uVar3 = uVar11;
          func_0x000103029010(uVar11,uVar9,&PTR_PTR_1126c2098,0x112e0fd70);
        }
        uVar1 = uVar11 + 1;
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103028674);
          (*pcVar2)();
        }
        puVar4 = PTR_PTR_1126c2138;
        func_0x000107c61168();
        func_0x000107c41fac();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        uVar11 = uVar11 + 1;
        if (puVar4 != (undefined *)0x0) {
          puVar6 = puVar7;
          func_0x000107c61550();
          if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
             (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar7 >> 0x3e == 0) {
              puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar7) {
                puVar5 = puVar7;
              }
              func_0x000107c60480(puVar5);
            }
            puVar6 = (undefined *)0x0;
            FUN_1030294cc(0,puVar5 + 1,1,puVar7,0x112f35040,&PTR_PTR_1126c2138,0x112f35050,
                          &UNK_10db7d528);
          }
          uVar3 = (ulong)puVar6 & 0xffffffffffffff8;
          uVar11 = *(ulong *)(uVar3 + 0x10);
          puVar7 = puVar6;
          if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar11) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
            FUN_1030294cc(puVar7,uVar11 + 1,1,puVar6,0x112f35040,&PTR_PTR_1126c2138,0x112f35050,
                          &UNK_10db7d528);
            uVar3 = (ulong)puVar7 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar3 + 0x10) = uVar11 + 1;
          *(undefined **)(uVar3 + uVar11 * 8 + 0x20) = puVar4;
          uVar11 = uVar1;
        }
      }
    }
    func_0x000107c6142c(uVar9);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_78,1,0);
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  *(undefined **)(param_3 + 0x10) = puVar7;
  func_0x000107c6142c(uVar8);
  func_0x000107c60f3c(param_2);
  return;
}



/* Entry: 10302868c; end: 103028757;  */

void FUN_10302868c(code *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  func_0x000107c61428(param_4 + 0x10,auStack_70,0,0);
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  uStack_78 = uVar1;
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  FUN_1030291cc();
  func_0x000107c61428(param_5 + 0x10,auStack_90,0,0);
  func_0x000107c61434(*(undefined8 *)(param_5 + 0x10));
  FUN_1030291cc();
  uVar1 = uStack_78;
  (*param_1)(uStack_78);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 103028758; end: 103028773; -[_TtC38ContentMixedStoriesDataServiceProvider44ContentMixedStoriesDataServiceImplementation fetchAppendedCarouselRankedStoriesWithCompletionQueue:completion:] */

void FUN_103028758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1105fef58;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1105fef58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103027ac8(param_3,0x103028b6c,puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103028774; end: 103028813;  */

void FUN_103028774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *param_7)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4();
  func_0x000107c613fc(param_5,0x18,7);
  *(undefined8 *)(param_5 + 0x10) = param_4;
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*param_7)(param_3,param_6,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 103028814; end: 103028867;  */

void FUN_103028814(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10302a234(0,param_3,param_4);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103028868; end: 1030289b7;  */

void FUN_103028868(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  if (param_1 != 0) {
    puVar2 = &UNK_1105feeb8;
    func_0x000107c613fc(&UNK_1105feeb8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
    *(long *)(puVar2 + 0x18) = param_1;
    puVar3 = &UNK_1105feee0;
    func_0x000107c613fc(&UNK_1105feee0,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x103028b24;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_103028b2c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_103028a30;
    puStack_68 = &UNK_1105feef8;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    pcStack_60 = FUN_103028a54;
    puStack_58 = (undefined *)0x0;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    pcStack_70 = (code *)&UNK_10006eb60;
    puStack_68 = &UNK_1105fef20;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c4c6e4(param_1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1030289b8; end: 103028a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030289b8(long param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  
  if (param_1 == 2) {
    puVar1 = *(ulong **)(param_2 + _DAT_112f35010);
    func_0x000103f17470(0);
    func_0x000103f17290(param_3);
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0x90))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 103028a30; end: 103028a53;  */

void FUN_103028a30(long param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x20))(param_2);
  return;
}



/* Entry: 103028a54; end: 103028a57;  */

void FUN_103028a54(void)

{
  return;
}



/* Entry: 103028a58; end: 103028aab; -[_TtC38ContentMixedStoriesDataServiceProvider44ContentMixedStoriesDataServiceImplementation didUpdateSummaryInfo:] */

/* WARNING: Possible PIC construction at 0x000103028a94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103028a98) */

void FUN_103028a58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103028868(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103028aac; end: 103028b0b; -[_TtC38ContentMixedStoriesDataServiceProvider44ContentMixedStoriesDataServiceImplementation prependStoryToMixedCarouselWithStoryId:] */

/* WARNING: Possible PIC construction at 0x000103028af4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103028af8) */

void FUN_103028aac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000103024d18();
  func_0x000107c4ee38();
  func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103028b0c; end: 103028b2b;  */

void FUN_103028b0c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_78 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar11 = *(long *)(unaff_x20 + 0x20);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar15 = uVar2;
    func_0x000107c61434();
    func_0x000100121450();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar12 = param_1;
    if ((uVar15 & 1) != 0) {
      uVar12 = *(ulong *)(*(long *)(param_1 + 0x38) + lVar11 * 8);
      func_0x000107c61434(uVar12);
      func_0x000107c6142c(param_1);
      uVar15 = uVar12 & 0xffffffffffffff8;
      if (uVar12 >> 0x3e == 0) {
        uVar13 = *(ulong *)(uVar15 + 0x10);
      }
      else {
        uVar13 = uVar15;
        if (0x7fffffffffffffff < uVar12) {
          uVar13 = uVar12;
        }
        func_0x000107c60480();
      }
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar14 = 0;
      while (uVar13 != uVar14) {
        if ((uVar12 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar15 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103028678);
            (*pcVar4)();
          }
          uVar5 = *(ulong *)(uVar12 + uVar14 * 8 + 0x20);
          func_0x000107c61174(uVar5);
        }
        else {
          uVar5 = uVar14;
          func_0x000103029010(uVar14,uVar12,&PTR_PTR_1126c2098,0x112e0fd70);
        }
        uVar1 = uVar14 + 1;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103028674);
          (*pcVar4)();
        }
        puVar6 = PTR_PTR_1126c2138;
        func_0x000107c61168();
        func_0x000107c41fac();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        uVar14 = uVar14 + 1;
        if (puVar6 != (undefined *)0x0) {
          puVar8 = puVar9;
          func_0x000107c61550();
          if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
             (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar9 >> 0x3e == 0) {
              puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar9) {
                puVar7 = puVar9;
              }
              func_0x000107c60480(puVar7);
            }
            puVar8 = (undefined *)0x0;
            FUN_1030294cc(0,puVar7 + 1,1,puVar9,0x112f35040,&PTR_PTR_1126c2138,0x112f35050,
                          &UNK_10db7d528);
          }
          uVar5 = (ulong)puVar8 & 0xffffffffffffff8;
          uVar14 = *(ulong *)(uVar5 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar14) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_1030294cc(puVar9,uVar14 + 1,1,puVar8,0x112f35040,&PTR_PTR_1126c2138,0x112f35050,
                          &UNK_10db7d528);
            uVar5 = (ulong)puVar9 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar5 + 0x10) = uVar14 + 1;
          *(undefined **)(uVar5 + uVar14 * 8 + 0x20) = puVar6;
          uVar14 = uVar1;
        }
      }
    }
    func_0x000107c6142c(uVar12);
  }
  func_0x000107c61428(lVar3 + 0x10,auStack_78,1,0);
  uVar10 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined **)(lVar3 + 0x10) = puVar9;
  func_0x000107c6142c(uVar10);
  func_0x000107c60f3c(uVar2);
  return;
}



/* Entry: 103028b2c; end: 103028b4b;  */

void FUN_103028b2c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103028b4c; end: 103028b93;  */

void FUN_103028b4c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b0a60);
  return;
}



/* Entry: 103028b94; end: 103028bab;  */

void FUN_103028b94(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x0001009f0578(param_2,puVar4);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar1);
  puVar5 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar6 + 8))(puVar4,lVar1);
    puVar5 = puVar2;
  }
  (**(code **)(lVar3 + 0x10))(lVar3,param_1,puVar5);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 103028bac; end: 103028bd3;  */

void FUN_103028bac(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103028814(param_1,*(undefined8 *)(unaff_x20 + 0x10),0x112f35048,&PTR_PTR_1126cee88);
  return;
}



/* Entry: 103028bd4; end: 103028c4b;  */

void FUN_103028bd4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10302a234(0,param_1,param_2);
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



/* Entry: 103028c4c; end: 103028c67;  */

void FUN_103028c4c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103028c68();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103028c68; end: 103028dbb;  */

undefined * FUN_103028c68(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103028dbc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112f35040;
    FUN_103028bd4(0x112f35040,&PTR_PTR_1126c2138,0x112f35050,&UNK_10db7d528);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_10302a234(0,0x112f35040,&PTR_PTR_1126c2138);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103028dbc; end: 103028e4b;  */

undefined *
FUN_103028dbc(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_103028bd4(param_3,param_4,param_5,param_6);
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



/* Entry: 103028e4c; end: 1030291cb;  */

ulong FUN_103028e4c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103028f30);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103028f34);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126cee88;
    func_0x000107c61168(PTR_PTR_1126cee88);
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
    puVar4 = PTR_PTR_1126cee88;
    func_0x000107c61168(PTR_PTR_1126cee88);
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
  FUN_10302a234(0,0x112f35048,&PTR_PTR_1126cee88);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103029010);
  (*pcVar2)();
}



/* Entry: 1030291cc; end: 1030294cb;  */

void FUN_1030291cc(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x0001030292b8(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_10302a0b4(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030292b4);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030292b8);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030292b0);
  (*pcVar1)();
}



/* Entry: 1030294cc; end: 10302962b;  */

ulong FUN_1030294cc(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10302962c);
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
  FUN_103028dbc(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103029628);
      (*pcVar1)();
    }
    FUN_10302962c(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 10302962c; end: 103029747;  */

long FUN_10302962c(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103029744);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103029748);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10302a234(0,param_5,param_6);
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
      FUN_10302a234(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103029740);
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



/* Entry: 103029748; end: 103029b0f;  */

void FUN_103029748(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 != 0) {
    uVar13 = *(ulong *)(param_1 + 0x20);
    uVar12 = *(ulong *)(param_1 + 0x28);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    lVar10 = *param_3;
    func_0x000107c61434(uVar12);
    func_0x000107c61174();
    uVar14 = uVar13;
    uVar5 = uVar12;
    func_0x000100029284();
    lVar7 = *(long *)(lVar10 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar1 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) {
LAB_103029a58:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103029a5c);
      (*pcVar3)();
    }
    if (*(long *)(lVar10 + 0x18) < lVar1) {
      FUN_103029c70(lVar1,param_2 & 1,0x112f0e1f8,&UNK_10db417a0);
      uVar14 = uVar13;
      uVar8 = uVar12;
      func_0x000100029284();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_103029810:
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103029820);
        (*pcVar3)();
      }
    }
    else if ((param_2 & 1) == 0) {
      FUN_103029b10(0x112f0e1f8,&UNK_10db417a0);
    }
    if ((uVar5 & 1) != 0) {
LAB_103029828:
      puVar4 = PTR___ss11_MergeErrorON_11034e460;
      func_0x000107c613f8(PTR___ss11_MergeErrorON_11034e460,PTR___ss11_MergeErrorOs0B0sWP_11034e468,
                          0,0);
      func_0x000107c61654();
      func_0x000107c614b0(puVar4);
      uVar6 = 0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c6147c();
      if ((uVar6 & 1) == 0) {
        func_0x000107c6142c(param_1);
        func_0x000107c6142c(uVar12);
        func_0x000107c61170(uVar11);
        func_0x000107c614ac(puVar4);
        return;
      }
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x1e);
      func_0x000107c5fb78(0xd00000000000001b,0x800000010efbd6e0);
      uStack_80 = uVar13;
      uStack_78 = uVar12;
      func_0x000107c603d0(&uStack_80,&uStack_70,PTR___sSSN_11034da80,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x27,0xe100000000000000);
      func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,
                          "Swift/arm64e-apple-ios.swiftinterface",0x25,2,0x3c44,0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103029b10);
      (*pcVar3)();
    }
    lVar7 = *param_3;
    lVar1 = lVar7 + (uVar14 >> 6) * 8;
    *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar14 & 0x3f);
    puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar14 * 0x10);
    *puVar2 = uVar13;
    puVar2[1] = uVar12;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar14 * 8) = uVar11;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_103029a5c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103029a60);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    if (uVar6 != 1) {
      puVar15 = (undefined8 *)(param_1 + 0x48);
      uVar14 = 1;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103029a64);
          (*pcVar3)();
        }
        uVar13 = puVar15[-2];
        uVar12 = puVar15[-1];
        uVar11 = *puVar15;
        lVar10 = *param_3;
        func_0x000107c61434(uVar12);
        func_0x000107c61174();
        uVar5 = uVar13;
        uVar8 = uVar12;
        func_0x000100029284();
        lVar7 = *(long *)(lVar10 + 0x10);
        uVar9 = (ulong)~(uint)uVar8 & 1;
        lVar1 = lVar7 + uVar9;
        if (SCARRY8(lVar7,uVar9)) goto LAB_103029a58;
        if (*(long *)(lVar10 + 0x18) < lVar1) {
          FUN_103029c70(lVar1,1,0x112f0e1f8,&UNK_10db417a0);
          uVar5 = uVar13;
          uVar9 = uVar12;
          func_0x000100029284();
          if (((uint)uVar8 & 1) != ((uint)uVar9 & 1)) goto LAB_103029810;
        }
        if ((uVar8 & 1) != 0) goto LAB_103029828;
        lVar7 = *param_3;
        lVar1 = lVar7 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar5 * 0x10);
        *puVar2 = uVar13;
        puVar2[1] = uVar12;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar5 * 8) = uVar11;
        if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_103029a5c;
        uVar14 = uVar14 + 1;
        *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
        puVar15 = puVar15 + 3;
      } while (uVar6 != uVar14);
    }
  }
  func_0x000107c6142c(param_1);
  return;
}



/* Entry: 103029b10; end: 103029c6f;  */

void FUN_103029b10(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_103029bdc;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_103029bdc:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103029c70);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_103029c48;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_103029c48:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 103029c70; end: 10302a0b3;  */

void FUN_103029c70(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_103029ed0:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103029f00);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_103029ed0;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103029f04);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10302a0b4; end: 10302a233;  */

ulong FUN_10302a0b4(undefined8 *param_1,long param_2,ulong param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10302a234);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10302a228);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_10302a234(0,0x112f35040,&PTR_PTR_1126c2138);
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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10302a22c);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10302a230);
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
          func_0x000103029010(uVar7,param_3,&PTR_PTR_1126c2138,0x112f35040);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 10302a234; end: 10302a2fb;  */

void FUN_10302a234(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10302a2fc; end: 10302a307;  */

void FUN_10302a2fc(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long unaff_x20;
  undefined *puVar17;
  undefined *puVar18;
  ulong uStack_80;
  undefined *apuStack_78 [3];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  puVar12 = (undefined *)0x112f35058;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010302a4c8(PTR___swiftEmptyArrayStorage_11034f1c8,0x112f35058,&UNK_10db7d530);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar18 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar18 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar18 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar18 != (undefined *)0x0) {
    uStack_80 = (ulong)param_1 & 0xffffffffffffff8;
    puVar11 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(undefined **)(uStack_80 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103026c38);
            (*pcVar6)();
          }
          puVar8 = *(undefined **)(param_1 + (long)puVar11 * 8 + 0x20);
          func_0x000107c61174();
          puVar14 = puVar12;
        }
        else {
          puVar8 = puVar11;
          puVar14 = param_1;
          FUN_103028e4c();
        }
        puVar1 = puVar11 + 1;
        if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103026c34);
          (*pcVar6)();
        }
        puVar9 = puVar8;
        func_0x000107c5bfec();
        func_0x000107c61180();
        puVar12 = puVar14;
        if (puVar9 != (undefined *)0x0) break;
LAB_103026968:
        func_0x000107c61170(puVar8);
        puVar11 = puVar11 + 1;
        if (puVar1 == puVar18) goto LAB_103026be4;
      }
      puVar17 = puVar9;
      func_0x000107c5faec();
      func_0x000107c61170(puVar9);
      puVar9 = PTR_PTR_1126c2138;
      func_0x000107c61168();
      func_0x000107c439f8();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
        func_0x000107c61434(puVar7);
        puVar9 = puVar14;
        func_0x000100029284();
        puVar12 = puVar9;
        func_0x000107c6142c(puVar7);
        if (((ulong)puVar9 & 1) == 0) {
          func_0x000107c6142c(puVar14);
          goto LAB_103026968;
        }
        puVar12 = puVar7;
        func_0x000107c61558();
        apuStack_78[0] = puVar7;
        if ((int)puVar12 == 0) {
          FUN_103029b10(0x112f35058,&UNK_10db7d530);
        }
        puVar7 = apuStack_78[0];
        func_0x000107c6142c(*(undefined8 *)
                             (*(long *)(apuStack_78[0] + 0x30) + (long)puVar17 * 0x10 + 8));
        func_0x000107c61170(*(undefined8 *)(*(long *)(puVar7 + 0x38) + (long)puVar17 * 8));
        puVar12 = puVar7;
        func_0x000103029f04(puVar17);
        func_0x000107c6142c(puVar14);
        puVar17 = puVar8;
LAB_103026b48:
        func_0x000107c61170(puVar17);
      }
      else {
        puVar10 = puVar7;
        func_0x000107c61558();
        puVar11 = puVar17;
        puVar15 = puVar14;
        apuStack_78[0] = puVar7;
        func_0x000100029284();
        uVar16 = (ulong)~(uint)puVar15 & 1;
        lVar2 = *(long *)(puVar7 + 0x10) + uVar16;
        if (SCARRY8(*(long *)(puVar7 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103026c5c);
          (*pcVar6)();
        }
        if (*(long *)(puVar7 + 0x18) < lVar2) {
          func_0x000103029c70(lVar2,puVar10,0x112f35058,&UNK_10db7d530);
          puVar11 = puVar17;
          puVar12 = puVar14;
          func_0x000100029284();
          puVar7 = apuStack_78[0];
          if (((uint)puVar15 & 1) != ((uint)puVar12 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103026c70);
            (*pcVar6)();
          }
        }
        else {
          puVar12 = puVar15;
          puVar7 = apuStack_78[0];
          if (((ulong)puVar10 & 1) == 0) {
            puVar12 = &UNK_10db7d530;
            FUN_103029b10(0x112f35058);
            puVar7 = apuStack_78[0];
          }
        }
        apuStack_78[0] = puVar7;
        if (((ulong)puVar15 & 1) != 0) {
          puVar17 = *(undefined **)(*(long *)(puVar7 + 0x38) + (long)puVar11 * 8);
          *(undefined **)(*(long *)(puVar7 + 0x38) + (long)puVar11 * 8) = puVar9;
          func_0x000107c6142c(puVar14);
          func_0x000107c61170(puVar8);
          goto LAB_103026b48;
        }
        *(ulong *)(puVar7 + ((ulong)puVar11 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar7 + ((ulong)puVar11 >> 6) * 8 + 0x40) | 1L << ((ulong)puVar11 & 0x3f);
        puVar3 = (undefined8 *)(*(long *)(puVar7 + 0x30) + (long)puVar11 * 0x10);
        *puVar3 = puVar17;
        puVar3[1] = puVar14;
        *(undefined **)(*(long *)(puVar7 + 0x38) + (long)puVar11 * 8) = puVar9;
        func_0x000107c61170(puVar8);
        if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103026c60);
          (*pcVar6)();
        }
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      }
      puVar11 = puVar1;
    } while (puVar1 != puVar18);
  }
LAB_103026be4:
  func_0x000107c61428(lVar5 + 0x10,apuStack_78,1,0);
  uVar13 = *(undefined8 *)(lVar5 + 0x10);
  *(undefined **)(lVar5 + 0x10) = puVar7;
  func_0x000107c6142c(uVar13);
  func_0x000107c60f3c(uVar4);
  return;
}



/* Entry: 10302a308; end: 10302a34b;  */

void FUN_10302a308(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  func_0x000107c61434();
  (*pcVar2)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar1);
  return;
}



/* Entry: 10302a34c; end: 10302a377;  */

void FUN_10302a34c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10302a378; end: 10302a39f;  */

void FUN_10302a378(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_78 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112f35058,&UNK_10db7d530);
  lVar6 = param_1;
  func_0x000107c6048c();
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434(param_1);
  lVar15 = 0;
  if (uVar13 == 0) goto LAB_103026d28;
  do {
    uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar13 = uVar13 - 1 & uVar13;
    while( true ) {
      uVar9 = LZCOUNT(uVar9);
      uVar12 = uVar9 | lVar15 << 6;
      lVar14 = uVar12 * 0x10;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar14);
      uVar8 = *puVar1;
      uVar3 = puVar1[1];
      puVar7 = PTR_PTR_1126c2138;
      func_0x000107c61168();
      func_0x000107c61434(uVar3);
      func_0x000107c41fac();
      func_0x000107c61180();
      uVar10 = (uVar9 & 0xffffffffffffffc0 | lVar15 << 6) >> 3;
      *(ulong *)(lVar6 + 0x40 + uVar10) = *(ulong *)(lVar6 + 0x40 + uVar10) | 1L << (uVar9 & 0x3f);
      puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar14);
      *puVar1 = uVar8;
      puVar1[1] = uVar3;
      *(undefined **)(*(long *)(lVar6 + 0x38) + uVar12 * 8) = puVar7;
      if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103026e44);
        (*pcVar5)();
      }
      *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
      if (uVar13 != 0) break;
LAB_103026d28:
      do {
        lVar14 = lVar15 + 1;
        if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103026e40);
          (*pcVar5)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar14) {
          func_0x000107c6142c(param_1);
          func_0x000107c61428(lVar4 + 0x10,auStack_78,1,0);
          uVar8 = *(undefined8 *)(lVar4 + 0x10);
          *(long *)(lVar4 + 0x10) = lVar6;
          func_0x000107c6142c(uVar8);
          func_0x000107c60f3c(uVar2);
          return;
        }
        uVar13 = ((ulong *)(param_1 + 0x40))[lVar14];
        lVar15 = lVar15 + 1;
      } while (uVar13 == 0);
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar15 = lVar14;
    }
  } while( true );
}



/* Entry: 10302a3a0; end: 10302a3d3;  */

void FUN_10302a3a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  func_0x000107c61434(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 10302a3d4; end: 10302a5bf;  */

undefined * FUN_10302a3d4(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x112f35070);
    puVar3 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar4 = puVar9[-1];
      uVar1 = *puVar9;
      func_0x000107c61174();
      func_0x000107c61434(uVar1);
      uVar5 = uVar4;
      func_0x000100121450();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10302a4c4);
        (*pcVar2)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar5 * 8) = uVar4;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar5 * 8) = uVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10302a4c8);
        (*pcVar2)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 10302a5c0; end: 10302a84f;  */

void FUN_10302a5c0(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar16 = 0;
  while( true ) {
    while (uVar17 != 0) {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar16 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      uStack_78 = *puVar1;
      uVar6 = puVar1[1];
      uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar9 * 8);
      uStack_70 = uVar6;
      uStack_68 = uVar15;
      func_0x000107c61434(uVar6);
      func_0x000107c61174(uVar15);
      (*param_2)(&uStack_90,&uStack_78);
      func_0x000107c61170(uVar15);
      func_0x000107c6142c(uVar6);
      uVar6 = uStack_80;
      uVar3 = uStack_88;
      uVar9 = uStack_90;
      lVar13 = *param_5;
      uVar7 = uStack_90;
      uVar8 = uStack_88;
      func_0x000100029284();
      lVar10 = *(long *)(lVar13 + 0x10);
      uVar12 = (ulong)~(uint)uVar8 & 1;
      lVar14 = lVar10 + uVar12;
      if (SCARRY8(lVar10,uVar12)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10302a83c);
        (*pcVar4)();
      }
      if (*(long *)(lVar13 + 0x18) < lVar14) {
        FUN_103029c70(lVar14,param_4 & 1,0x112f35058,&UNK_10db7d530);
        uVar7 = uVar9;
        uVar12 = uVar3;
        func_0x000100029284();
        if (((uint)uVar8 & 1) != ((uint)uVar12 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10302a850);
          (*pcVar4)();
        }
      }
      else if ((param_4 & 1) == 0) {
        FUN_103029b10(0x112f35058,&UNK_10db7d530);
      }
      uVar17 = uVar17 - 1 & uVar17;
      lVar14 = *param_5;
      if ((uVar8 & 1) == 0) {
        lVar10 = lVar14 + (uVar7 >> 6) * 8;
        *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar14 + 0x30) + uVar7 * 0x10);
        *puVar2 = uVar9;
        puVar2[1] = uVar3;
        *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = uVar6;
        if (SCARRY8(*(long *)(lVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10302a840);
          (*pcVar4)();
        }
        *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + 1;
      }
      else {
        uVar15 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8);
        func_0x000107c61174();
        func_0x000107c61170(uVar6);
        func_0x000107c6142c(uVar3);
        uVar6 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = uVar15;
        func_0x000107c61170(uVar6);
      }
      param_4 = 1;
    }
    bVar5 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10302a838);
      (*pcVar4)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar16) break;
    uVar17 = ((ulong *)(param_1 + 0x40))[lVar16];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 10302a850; end: 10302a87b;  */

void FUN_10302a850(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10302a87c; end: 10302a923;  */

/* WARNING: Possible PIC construction at 0x000103025f7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103025f80) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000103025fac) */

void FUN_10302a87c(undefined *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010302a4c8(PTR___swiftEmptyArrayStorage_11034f1c8,0x112f0e1f8,&UNK_10db417a0,
                        *(undefined8 *)(unaff_x20 + 0x20));
    (*pcVar1)();
  }
  else {
    FUN_103025bec(param_1,*(undefined8 *)(unaff_x20 + 0x10));
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != 0) {
      uVar2 = 0x112f0e1f8;
      func_0x0001000285a8(0x112f0e1f8,&UNK_10db417a0);
      func_0x000107c60498(lVar3,uVar2);
    }
    func_0x000107c61434(param_1);
    FUN_103029748();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 10302a924; end: 10302a983; -[_TtC38SCContentClearCacheServiceProviderImpl28ContentClearCacheServiceImpl init] */

void FUN_10302a924(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContentClearCacheServiceProviderImpl.ContentClearCacheServiceImpl",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10302a950);
  (*pcVar1)();
}



/* Entry: 10302a984; end: 10302a9db; -[_TtC38SCContentClearCacheServiceProviderImpl28ContentClearCacheServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010302a9b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010302a9b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302a984(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f35088));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f35078));
  return;
}



/* Entry: 10302a9dc; end: 10302ad43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302a9dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  uStack_b0 = param_1;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar10 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lStack_b8 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60f34();
  lVar4 = *(long *)(unaff_x20 + _DAT_112f35078);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar4 != 0) {
    func_0x000107c60f38(lVar3);
    puVar5 = &UNK_1105ff4b0;
    func_0x000107c613fc(&UNK_1105ff4b0,0x18,7);
    *(long *)(puVar5 + 0x10) = lVar3;
    uStack_70 = 0x10302b344;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_1105ff4c8;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_68;
    func_0x000107c61174(lVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c3fb14(lVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar4);
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112f35080);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c60f38(lVar3);
    puVar5 = &UNK_1105ff460;
    func_0x000107c613fc(&UNK_1105ff460,0x18,7);
    *(long *)(puVar5 + 0x10) = lVar3;
    uStack_70 = 0x10302b33c;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1105ff478;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_68;
    func_0x000107c61174(lVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c3fa2c(lVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar4);
  }
  uVar7 = 0;
  func_0x0001000295c4(0);
  func_0x000107c5ffdc();
  puVar5 = &UNK_1105ff410;
  func_0x000107c613fc(&UNK_1105ff410,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uStack_b0;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  uStack_70 = 0x10302b360;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105ff428;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c6157c(param_2);
  func_0x000107c5f808(lVar11);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar8 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar9 = uVar8;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar10,&puStack_98,uVar8,uVar9,lVar2,param_2);
  func_0x000107c5ffb8(lVar11,puVar10,uVar7,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar7);
  (**(code **)(lStack_a0 + 8))(puVar10,lVar2);
  (**(code **)(lStack_b8 + 8))(lVar11,lStack_a8);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 10302ad44; end: 10302ad5f;  */

void FUN_10302ad44(long param_1,long param_2)

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



/* Entry: 10302ad60; end: 10302ad7b; -[_TtC38SCContentClearCacheServiceProviderImpl28ContentClearCacheServiceImpl clearDiscoverCacheWithCompletion:] */

void FUN_10302ad60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105ff6e0;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1105ff6e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_10302a9dc(0x10302b370,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10302ad7c; end: 10302ae8b; -[_TtC38SCContentClearCacheServiceProviderImpl28ContentClearCacheServiceImpl clearStoriesCacheWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302ad7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c60bc4();
  puVar1 = &UNK_1105ff668;
  func_0x000107c613fc(&UNK_1105ff668,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f35088);
  puVar2 = &UNK_1105ff690;
  func_0x000107c613fc(&UNK_1105ff690,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x10302b368;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uStack_50 = 0x10302b36c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_1105ff6a8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c4fe84(uVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10302ae8c; end: 10302b22b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302ae8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  uStack_d0 = param_2;
  uStack_c8 = param_1;
  func_0x000107c5f7fc();
  lStack_b0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar11 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lStack_c0 = *(long *)(lVar3 + -8);
  lStack_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar12 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60f34();
  func_0x000107c60f38();
  puVar4 = &UNK_1105ff500;
  func_0x000107c613fc(&UNK_1105ff500,0x18,7);
  *(long *)(puVar4 + 0x10) = lVar3;
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f35088);
  puVar5 = &UNK_1105ff528;
  func_0x000107c613fc(&UNK_1105ff528,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x10302b34c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x10302b364;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000b0c7c;
  puStack_88 = &UNK_1105ff540;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar5 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c4fe84(uVar13);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c60f38(lVar3);
  puVar4 = &UNK_1105ff578;
  func_0x000107c613fc(&UNK_1105ff578,0x18,7);
  *(long *)(puVar4 + 0x10) = lVar3;
  func_0x000107c61174();
  FUN_10302a9dc(0x10302b354,puVar4);
  func_0x000107c61574(puVar4);
  lVar7 = *(long *)(unaff_x20 + _DAT_112f35090);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar7 != 0) {
    func_0x000107c60f38(lVar3);
    puVar4 = &UNK_1105ff5f0;
    func_0x000107c613fc(&UNK_1105ff5f0,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar3;
    pcStack_80 = FUN_10302b24c;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000b0c7c;
    puStack_88 = &UNK_1105ff608;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_78;
    func_0x000107c61174(lVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c416a8(lVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar7);
  }
  uVar8 = 0;
  func_0x0001000295c4(0);
  func_0x000107c5ffdc();
  puVar4 = &UNK_1105ff5a0;
  func_0x000107c613fc(&UNK_1105ff5a0,0x20,7);
  uVar9 = uStack_d0;
  *(undefined8 *)(puVar4 + 0x10) = uStack_c8;
  *(undefined8 *)(puVar4 + 0x18) = uStack_d0;
  pcStack_80 = FUN_10302b22c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1105ff5b8;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c6157c(uVar9);
  func_0x000107c5f808(lVar12);
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar13 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar10 = uVar13;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar11,&puStack_a8,uVar13,uVar10,lVar2,uVar9);
  func_0x000107c5ffb8(lVar12,lVar11,uVar8,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar8);
  (**(code **)(lStack_b0 + 8))(lVar11,lVar2);
  (**(code **)(lStack_c0 + 8))(lVar12,lStack_b8);
  func_0x000107c61574(puStack_78);
  return;
}



/* Entry: 10302b22c; end: 10302b24b;  */

void FUN_10302b22c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10302b24c; end: 10302b253;  */

void FUN_10302b24c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10302b254; end: 10302b273;  */

void FUN_10302b254(void)

{
  func_0x000107c61168(&PTR_PTR_1128b0b60);
  return;
}



/* Entry: 10302b274; end: 10302b28f; -[_TtC38SCContentClearCacheServiceProviderImpl28ContentClearCacheServiceImpl clearPublicContentCacheWithCompletion:] */

void FUN_10302b274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105ff640;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1105ff640,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_10302ae8c(FUN_10302b314,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10302b290; end: 10302b313;  */

void FUN_10302b290(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,code *param_6)

{
  func_0x000107c60bc4();
  func_0x000107c613fc(param_4,0x18,7);
  *(undefined8 *)(param_4 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  (*param_6)(param_5,param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4);
  return;
}



/* Entry: 10302b314; end: 10302b373;  */

void FUN_10302b314(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010302b31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10302b374; end: 10302b4d7;  */

void FUN_10302b374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 10302b4d8; end: 10302b53b;  */

long FUN_10302b4d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_10302b544();
    func_0x000107c61574(param_1);
  }
  return lVar1;
}



/* Entry: 10302b53c; end: 10302b543;  */

long FUN_10302b53c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_10302b544();
    func_0x000107c61574(lVar1);
  }
  return lVar2;
}



/* Entry: 10302b544; end: 10302b633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302b544(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lStack_50;
  long lStack_48;
  
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar2 = lVar7;
  func_0x000107c5bf98();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10302b630);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4ac40();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112ff5de0);
  func_0x000107c61174();
  func_0x000107c5bf64();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar5 = 0;
    FUN_10302b254();
    lVar6 = lVar5;
    func_0x000107c610f8();
    *(long *)(lVar6 + _DAT_112f35088) = lVar2;
    *(undefined8 *)(lVar6 + _DAT_112f35078) = uVar3;
    *(undefined8 *)(lVar6 + _DAT_112f35080) = uVar4;
    *(long *)(lVar6 + _DAT_112f35090) = lVar7;
    lStack_50 = lVar6;
    lStack_48 = lVar5;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10302b634);
  (*pcVar1)();
}



/* Entry: 10302b634; end: 10302b66b;  */

void FUN_10302b634(long param_1)

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



/* Entry: 10302b66c; end: 10302b687;  */

void FUN_10302b66c(long param_1,long param_2)

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



/* Entry: 10302b688; end: 10302b6ab;  */

/* WARNING: Possible PIC construction at 0x00010302b694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010302b698) */

void FUN_10302b688(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10302b6ac; end: 10302b6ff;  */

void FUN_10302b6ac(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10302b700; end: 10302b77f;  */

void FUN_10302b700(undefined8 param_1)

{
  if (lRam0000000112f350e8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e740e40);
  return;
}



/* Entry: 10302b780; end: 10302b867;  */

void FUN_10302b780(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1105ff708;
  func_0x000107c613fc(&UNK_1105ff708,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x10302b870;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_10302b634;
  puStack_48 = &UNK_1105ff748;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x00010033f7dc(0);
  func_0x000107c610f8();
  func_0x00010395b588();
  *param_1 = puVar1;
  return;
}



/* Entry: 10302b868; end: 10302b873;  */

void FUN_10302b868(long param_1,long param_2)

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



/* Entry: 10302b874; end: 10302b937;  */

void FUN_10302b874(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f351e0;
  func_0x0001000285a8(0x112f351e0,&UNK_10db7d600);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10302b938; end: 10302b93b;  */

void FUN_10302b938(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f35230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7d610;
  func_0x000107c61520(&UNK_10db7d610,&UNK_1105ff888);
  puRam0000000112f35230 = puVar1;
  return;
}



/* Entry: 10302b93c; end: 10302b9a7;  */

void FUN_10302b93c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f35230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7d610;
  func_0x000107c61520(&UNK_10db7d610,&UNK_1105ff888);
  puRam0000000112f35230 = puVar1;
  return;
}



/* Entry: 10302b9a8; end: 10302b9ab;  */

void FUN_10302b9a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f35248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7d6b8;
  func_0x000107c61520(&UNK_10db7d6b8,&UNK_1105ff918);
  puRam0000000112f35248 = puVar1;
  return;
}



/* Entry: 10302b9ac; end: 10302ba17;  */

void FUN_10302b9ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f35248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7d6b8;
  func_0x000107c61520(&UNK_10db7d6b8,&UNK_1105ff918);
  puRam0000000112f35248 = puVar1;
  return;
}



/* Entry: 10302ba18; end: 10302ba9b;  */

void FUN_10302ba18(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 10302ba9c; end: 10302ba9f;  */

void FUN_10302ba9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f35260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7d728;
  func_0x000107c61520(&UNK_10db7d728,&UNK_1105ff918);
  puRam0000000112f35260 = puVar1;
  return;
}



/* Entry: 10302baa0; end: 10302badf;  */

void FUN_10302baa0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f35260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7d728;
  func_0x000107c61520(&UNK_10db7d728,&UNK_1105ff918);
  puRam0000000112f35260 = puVar1;
  return;
}



/* Entry: 10302bae0; end: 10302bae3;  */

void FUN_10302bae0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f35268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7d6e0;
  func_0x000107c61520(&UNK_10db7d6e0,&UNK_1105ff918);
  puRam0000000112f35268 = puVar1;
  return;
}



/* Entry: 10302bae4; end: 10302bb23;  */

void FUN_10302bae4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f35268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7d6e0;
  func_0x000107c61520(&UNK_10db7d6e0,&UNK_1105ff918);
  puRam0000000112f35268 = puVar1;
  return;
}



/* Entry: 10302bb24; end: 10302bcbb;  */

void FUN_10302bb24(void)

{
  return;
}



/* Entry: 10302bcbc; end: 10302bd27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302bcbc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037b054();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f352a0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10302bd28; end: 10302bd2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302bd28(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037b054();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f352a0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10302bd30; end: 10302bd7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10302bd30(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f352a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10302bd7c; end: 10302bef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10302bd7c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uStack_59;
  long lStack_58;
  
  if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
    puVar3 = *(undefined **)
              (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar3 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c60480();
  }
  if ((long)puVar3 < 0x13) {
    puVar3 = (undefined *)0x12;
  }
  uVar4 = 0;
  FUN_10302bfd8(0,puVar3,0,PTR___swiftEmptyArrayStorage_11034f1c8);
  lVar8 = 0;
  do {
    uStack_59 = *(undefined1 *)(lVar8 + 0x112f351c8);
    func_0x00010008a7c8(&lStack_58,&uStack_59);
    lVar1 = lStack_58;
    if (lStack_58 != 0) {
      func_0x000100083b20(&lStack_58);
      lVar2 = lStack_58;
      if (lStack_58 != 0) {
        func_0x000107c615f0(lStack_58);
        uVar6 = uVar4;
        if (uVar4 >> 0x3e != 0) {
          uVar5 = uVar4 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar4) {
            uVar5 = uVar4;
          }
          func_0x000107c60480(uVar5);
          uVar6 = 0;
          FUN_10302bfd8(0,uVar5 + 1,1,uVar4);
        }
        uVar7 = uVar6 & 0xffffffffffffff8;
        uVar5 = *(ulong *)(uVar7 + 0x10);
        uVar4 = uVar6;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar5) {
          uVar4 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
          FUN_10302bfd8(uVar4,uVar5 + 1,1,uVar6);
          uVar7 = uVar4 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
        *(long *)(uVar7 + uVar5 * 8 + 0x20) = lVar2;
        func_0x000107c615e8(lVar2);
      }
      func_0x000107c61574(lVar1);
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x12);
  return uVar4;
}



/* Entry: 10302bef4; end: 10302bf53; -[_TtC33SCDiscoverFeedActionHandlingScope46SCDiscoverFeedActionHandlingPluginSaberService buildSaberPlugins] */

void FUN_10302bef4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10302bd7c();
  func_0x000107c61170(param_1);
  uVar2 = 0x112f352d0;
  func_0x0001000285a8(0x112f352d0,&UNK_10db7d860);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10302bf54; end: 10302bfb3; -[_TtC33SCDiscoverFeedActionHandlingScope46SCDiscoverFeedActionHandlingPluginSaberService init] */

void FUN_10302bf54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCDiscoverFeedActionHandlingScope.SCDiscoverFeedActionHandlingPluginSaberService"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10302bf80);
  (*pcVar1)();
}


